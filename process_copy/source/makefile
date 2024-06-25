
.PHONY:process_copy
CC = gcc
INCLUDE_PATH=../include
LIBRARY_PATH=../library
INSTALL_PATH=/usr/bin/
CFLAGS=-I$(INCLUDE_PATH) -g -Wall -c
CPPFLAGS=

SRCFILE=$(wildcard *.c)
DESTFILE=$(patsubst %.c,%.o,$(SRCFILE))

TARGET=process_copy

$(TARGET):$(DESTFILE)
	$(CC) $^ -o $@

%.o:%.c
	$(CC) $(CFLAGS) $<
clean:
	rm $(DESTFILE) -rf
	rm ../$(TARGET)
