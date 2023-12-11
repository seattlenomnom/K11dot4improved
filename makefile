# makefile for K11dot4improved
#
#
CC=gcc
CFLAgS=-Wall -g

all: k11dot4improved

k11dot4improved: k11dot4.c
	$(CC) $(CFLAGS) -o ./Build/DEBUG/k11dot4improved
