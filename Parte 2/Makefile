#
#
#


CC=gcc
SRC1=hora.c
CFLAGS=-std=c99 -g



BIN1=hora

#

#
OBJ1=$(SRC1:.c=.o)

all:  $(BIN1) $(BIN2) #clean

$(BIN1): $(OBJ1)
	@$(CC) $(LIBS) $(OBJ1) -o $(@)
	
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(BIN1) $(BIN2)
	@rm -f $(OBJ1) $(OBJ2)
	@rm -f *~

#docs:
#	@doxygen
	

