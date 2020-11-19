# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imedgar <imedgar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/03 23:24:43 by imedgar           #+#    #+#              #
#    Updated: 2020/11/19 20:43:51 by imedgar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a

SRC_LIB			=	ft_atoi.c			\
					ft_bzero.c			\
					ft_calloc.c			\
					ft_isalnum.c		\
					ft_isalpha.c		\
					ft_isascii.c		\
					ft_isdigit.c		\
					ft_isprint.c		\
					ft_isspace.c		\
					ft_itoa.c			\
					ft_itoa_base.c		\
					ft_memccpy.c		\
					ft_memchr.c			\
					ft_memcmp.c			\
					ft_memcpy.c			\
					ft_memmove.c		\
					ft_memset.c			\
					ft_putchar_fd.c		\
					ft_putendl_fd.c		\
					ft_putnbr_fd.c		\
					ft_putstr_fd.c		\
					ft_split.c			\
					ft_strchr.c			\
					ft_strdup.c			\
					ft_strjoin.c		\
					ft_strlcat.c		\
					ft_strlcpy.c		\
					ft_strlen.c			\
					ft_strmapi.c		\
					ft_strncmp.c		\
					ft_strnstr.c		\
					ft_strrchr.c		\
					ft_strtrim.c		\
					ft_substr.c			\
					ft_tolower.c		\
					ft_toupper.c		\
					ft_strcmp.c

SRC_PRINTF		=	ft_printf.c			\
					ft_putchars.c		\
					ft_formchar.c		\
					ft_formstr.c		\
					ft_formadr.c		\
					ft_formnbr.c		\
					ft_sub_func.c

SRC_GNL			=	get_next_line.c		\
					get_next_line_utils.c

DIR_SRC			=	./srcs/
DIR_LIB_SRC		=	$(addprefix $(DIR_SRC), libft/)
DIR_PRINTF_SRC	=	$(addprefix $(DIR_SRC), printf/)
DIR_GNL_SRC		=	$(addprefix $(DIR_SRC), get_next_line/)

DIR_OBJ			=	./obj/
DIR_INC			=	./includes/

OBJ				=	$(addprefix $(DIR_OBJ),$(SRC_LIB:c=o))		\
					$(addprefix $(DIR_OBJ),$(SRC_PRINTF:c=o))	\
					$(addprefix $(DIR_OBJ),$(SRC_GNL:c=o))	

DEP 	    	=	$(OBJ:.o=.d)

CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra -c -MMD
RM				=	rm -f
AR				=	ar rcs

ifeq ($(DEBUG), YES)
CFLAGS			+= -g
endif

all: $(NAME)

-include $(DEP)

$(NAME): $(DIR_OBJ) $(OBJ)
	$(AR) $@ $(OBJ)

$(DIR_OBJ)%.o: $(DIR_LIB_SRC)%.c
	$(CC) -I $(DIR_INC) $(CFLAGS) -o $@ $<

$(DIR_OBJ)%.o: $(DIR_PRINTF_SRC)%.c
	$(CC) -I $(DIR_INC) $(CFLAGS) -o $@ $<

$(DIR_OBJ)%.o: $(DIR_GNL_SRC)%.c
	$(CC) -I $(DIR_INC) $(CFLAGS) -o $@ $<

$(DIR_OBJ):
	mkdir -p $(DIR_OBJ)

debug:
	$(MAKE) DEBUG=YES re --no-print-directory

clean:
	$(RM)r $(DIR_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all