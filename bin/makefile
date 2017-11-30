PROG = PSO
CC = g++
SRC_DIR = ../src/
INC_DIR= ../include
CPPFLAGS= -Wall -g -std=c++11 -I$(INC_DIR) 
LDFLAGS=
OBJS = settings.o main.o

&(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS) $(LDFLAGS)

main.o :
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)main.cpp

particle.o :
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)particle.cpp

settings.o :
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)settings.cpp

clean : 
	rm -f core $(PROG) *.o