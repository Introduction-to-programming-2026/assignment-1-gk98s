CC=gcc
CFLAGS=-std=c11 -Wall -Wextra -O2
SRC=src
BIN=bin

all: folders datatypes operators conditionals loops cmd magic

folders:
	mkdir -p $(BIN)

datatypes:
	$(CC) $(CFLAGS) $(SRC)/01_datatypes.c -o $(BIN)/datatypes

operators:
	$(CC) $(CFLAGS) $(SRC)/02_operators.c -o $(BIN)/operators

conditionals:
	$(CC) $(CFLAGS) $(SRC)/03_conditionals.c -o $(BIN)/conditionals

loops:
	$(CC) $(CFLAGS) $(SRC)/04_loops.c -o $(BIN)/loops

cmd:
	$(CC) $(CFLAGS) $(SRC)/05_command_line.c -o $(BIN)/cmd

magic:
	$(CC) $(CFLAGS) $(SRC)/06_magic_numbers.c -o $(BIN)/magic

clean:
	rm -rf $(BIN)
