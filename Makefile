
SOURCE = main.cpp CSTL_VECTOR.cpp
GXX = g++
COMPILER_OPTIONS = -std=c++11 -pthread
LINKER_OPTIONS = -o test

automatic:
	$(GXX) $(COMPILER_OPTIONS) $(LINKER_OPTIONS) $(SOURCE)

clean:
	rm -rf *.o test
