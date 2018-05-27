OBJS = main.o testing.o
CPPFLAGS = -g -Wall -std=c++1z
LDFLAGS = #-L./lib -ltesting

test: $(OBJS)
	g++  -o test $(OBJS) $(LDFLAGS)
lib: testing.o
	ar crf lib/libtesting.a testing.o
main.o: main.cpp
	g++ -c main.cpp
testing.o: testing.h testing.cpp
	g++ $(CPPFLAGS) -c testing.cpp
clean:
	rm -f core test $(OBJS) 
