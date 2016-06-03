all: clean core pylib

noclean: core pylib

clean:
	cd cpp/gcc; make clean

core: 
	cd cpp/gcc; make -j8 lib

pylib:
	cd cpp/py; make python

.PHONY: all core pylib fftw clean noclean
