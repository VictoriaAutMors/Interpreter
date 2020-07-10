all: shell.c
	mkdir bin -p
	g++ source/main.cpp source/lexem.cpp \-I headers/ -o bin/main -Wall -Werror

clean:
	rm /bin/*
	rmdir bin

