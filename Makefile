.PHONY: main
main:
	earthly +build-3-jll-wrapper
	earthly +test