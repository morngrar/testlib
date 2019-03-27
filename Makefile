OBJS = main.o testlib.o
CPPFLAGS = -std=c++17 -g -Wall
LDFLAGS = #-L./lib -ltesting

test: $(OBJS)
	g++  -o test $(OBJS) $(LDFLAGS)
lib: testlib.o
	ar crf lib/libtestlib.a testlib.o
main.o: main.cpp
	g++ $(CPPFLAGS) -c main.cpp
testlib.o: testlib.h testlib.cpp
	g++ $(CPPFLAGS) -c testlib.cpp
clean:
	rm -f core test $(OBJS)
