SRC = 
OBJ = ${SRC:.c= .o}
CC = cc 
CCFLAGS = -Werror -Wextra -Wall
NAME = libftprintf.a
RM = rm -rf

all : $(NAME)

%.o : %.c
		$(CC) $(CCFLAGS) -c $< -0 $@

$(NAME): $(OBJ)
		ar rcs $@ $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all