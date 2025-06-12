VERSION = pre-1

CC = cc
CFLAGS =
LDFLAGS =
LIBS =

EXEC =

.PHONY: all clean
.SUFFIXES: .c .o

OBJS = src/main.o src/util.o

all: bcc$(EXEC)

bcc$(EXEC): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LIBS)

.c.o:
	$(CC) $(CFLAGS) -DBCC_VERSION='"$(VERSION)"' -c -o $@ $<

clean:
	rm -f bcc bcc.exe src/*.o
