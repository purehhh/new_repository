.PHONY:copy

CC=gcc
INCLUDE_PATH=../include
LIBRARY_PATH=../library
INSTALL_PATH=/usr/bin/
CFLAGS=-I$(INCLUDE_PATH) -g -Wall -c
CPPFLAGS=
TARGET=copy
SRCFILE=$(wildcard *.c)
DESTFILE=$(patsubst %.c,%.o,$(SRCFILE))

$(TARGET):$(DESTFILE)
	$(CC) $^ -o $@

%.o:%.c
	$(CC) $(CFLAGS) $<

clean:
	rm -rf $(DESTFILE)
	rm -rf $(TARGET)

