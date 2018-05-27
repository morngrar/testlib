CPPFLAGS = -g -Wall -I/home/sk/Documents/devel/c++/include
LDFLAGS = -L/home/sk/Documents/devel/c++/lib -ltesting

test: main.o
	g++ -o test main.o $(LDFLAGS)
main.o: main.cpp
	g++ $(CPPFLAGS) -c main.cpp
clean:
	rm -f core test main.o
