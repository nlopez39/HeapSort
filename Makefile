CC = g++

all:
	$(CC) -std=c++11 -o a.exe lab04.cpp

clean:
	rm -f a.exe

