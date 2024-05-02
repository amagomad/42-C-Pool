CC = cc
CFLAGS = -Wall -Wextra -Werror
EXEC = rush-02
SRC = main.c ft_atoi.c ft_dict.c
OBJ = $(SRC:.c=.o)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY : clean fclean

clean:
	rm -f *.o

fclean: clean
	rm -f $(EXEC)
