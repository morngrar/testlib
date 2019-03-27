CPPFLAGS = -g --std=c++17 -Wall -I../
LDFLAGS = -L../lib -ltestlib

all: example lambda-example
example: example.o
	g++ -o example example.o $(LDFLAGS)
example.o: example.cpp
	g++ $(CPPFLAGS) -c example.cpp
lambda-example: lambda-example.o
	g++ -o lambda-example lambda-example.o $(LDFLAGS)
lambda-example.o: lambda-example.cpp
	g++ $(CPPFLAGS) -c lambda-example.cpp
clean:
	rm -f core test example.o
