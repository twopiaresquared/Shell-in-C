CC = gcc

OBJ = shell.o

all: shell

shell: $(OBJ)
	$(CC) -o shell $(OBJ) 

%.o: %.c
	$(CC) -c $<