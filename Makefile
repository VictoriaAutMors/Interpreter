all:
	mkdir bin -p
	g++ source/main.cpp source/lexem.cpp \-I headers/ -o bin/main -Wall -Werror -std=c++11

clean:
	rm /bin/*
	rmdir bin

