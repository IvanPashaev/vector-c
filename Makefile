CC = clang
CFLAGS = -O2 -Wall -Werror
main:
	$(CC) $(CFLAGS) src/lib.c
