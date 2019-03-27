CPPFLAGS = -std=c++17 -g -Wall
LDFLAGS = #-L./lib -ltesting

all: lib

lib: testlib.o
	ar crf lib/libtestlib.a testlib.o

testlib.o: testlib.h testlib.cpp
	g++ $(CPPFLAGS) -c testlib.cpp

clean:
	rm -f core *.o
