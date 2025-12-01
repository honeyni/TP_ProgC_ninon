CC ?= gcc

CFLAGS=-Wall -Wextra -g

COBJS ?= client.o
SOBJS ?= serveur.o 

.SUFFIXES: .c .o

SERVER = serveur
CLIENT = client

all: $(SERVER) $(CLIENT)

$(SERVER): $(SOBJS)
	$(CC) -o $(SERVER) $(SOBJS)

$(CLIENT): $(COBJS)
	$(CC) -o $(CLIENT) $(COBJS)

client.o: client.c client.h
	$(CC) $(CFLAGS) -c client.c

serveur.o: serveur.c serveur.h
	$(CC) $(CFLAGS) -c serveur.c

clean:
	rm -f *.o $(SERVER) $(CLIENT)

.c.o: 
	$(CC) -c $*.c

