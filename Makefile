NAME = libmx.a

DIROBJ = obj

SRC = src/mx_printchar.c \
src/mx_print_unicode.c \
src/main.c 

INC = inc/libmx.h 

OUT = mx_printchar.o \
mx_print_unicode.o \
main.o

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic 

all: install uninstall
install:
	@mkdir $(DIROBJ)
	@clang $(FLAGS) -c $(SRC) -I $(INC)
	@ar rc $ $(NAME) $(OUT)
	@mv $(OUT) $(DIROBJ)

uninstall:  
	@rm -rf $(DIROBJ)
clean: 
	@rm -rf $(NAME)
reinstall: clean all

