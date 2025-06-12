VERSION = pre-1

CC = cc
CFLAGS = -MMD
LDFLAGS =
LIBS =

EXEC =

.PHONY: all clean
.SUFFIXES: .c .o

OBJS = src/main.o src/util.o src/arch.o
OBJS += src/arch/pdp11.o src/arch/s360.o

all: bcc$(EXEC)

bcc$(EXEC): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LIBS)

.c.o:
	$(CC) $(CFLAGS) -DBCC_VERSION='"$(VERSION)"' -c -o $@ $<

-include src/*.d
-include src/*/*.d

clean:
	rm -f bcc bcc.exe src/*.o src/*/*.o src/*.d src/*/*.d
