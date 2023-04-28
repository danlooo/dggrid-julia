for p in $(ls src/DGGRID/src/lib/dglib/include/dglib) do
    git checkout test_header_files
    git checkout -b "test_header_files_$p"
    sed -i s/HEADER/$p/g src/DGGRID.wit.toml 

    earthly +build-2-cpp-wrapper -a +build-2-cpp-wrapper  2>&1 | tee log
	# need to be executed locally
	julia src/build_tarballs.jl --deploy="local"  2>&1 | tee -a log

    git add -f log products
    git commit -m "Run"
done

# for p in $(ls src/DGGRID/src/lib/dglib/include/dglib)
# do
#     git branch -D "test_header_files_$p"
# done