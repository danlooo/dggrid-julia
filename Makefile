.PHONY: main
main:
	earthly +build-2-cpp-wrapper -a +build-2-cpp-wrapper
	earthly +build-3-jll-wrapper
	earthly +test

.PHONY: build
build:
	earthly +build-2-cpp-wrapper -a +build-2-cpp-wrapper
	earthly +build-3-jll-wrapper