# makefile for K11dot4improved
#
#
CC=gcc
CFLAGS=-Wall -g

all: k11dot4improved

k11dot4improved: k11dot4improved.c
	$(CC) $(CFLAGS) k11dot4improved.c -o ./Build/DEBUG/k11dot4improved
