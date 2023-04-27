.PHONY: main
main:
	earthly +build-2-cpp-wrapper -a +build-2-cpp-wrapper
	earthly +build-3-jll-wrapper
	earthly +test

.PHONY: build
build:
	earthly +build-2-cpp-wrapper -a +build-2-cpp-wrapper

	# # remove duplicate definitions
	# sed -i -r ':a; s%(.*)/\*.*\*/%\1%; ta; /\/\*/ !b; N; ba' src/jlDGGRID.cxx # remove multi line comments
	# sort --unique src/jlDGGRID.cxx -o src/jlDGGRID.cxx 
	
	# need to be executed locally
	julia src/build_tarballs.jl --deploy="local"
