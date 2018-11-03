# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: viwade <viwade@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/01 22:12:50 by viwade            #+#    #+#              #
#    Updated: 2018/11/02 05:42:18 by viwade           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

####	CONTROL PANEL	########################################################

NAME = libft.a
SRCDIR = 
HDRDIR = 
OBJDIR =
LIBDIR = 
CFILES = $(notdir $(wildcard *.c))
HFILES = $(notdir $(wildcard *.h))
CFLAGS := -Wall -Werror -Wextra
CFLAGS += -I$(HDRDIR)
CC := gcc $(CFLAGS)
AR = ar rcs
LIB = $(addprefix $(LIBDIR), libar.a)
SOURCES = $(addprefix $(SRCDIR), $(CFILES))
OBJECTS = $(addprefix $(OBJDIR), $(CFILES:.c=.o))
HEADERS = $(addprefix $(HDRDIR), $(HFILES))

####	FONT FORMAT	########################################################

FM_NONE = \033[0m
FM_BOLD = \033[1m
FM_RED = \033[31m
FM_MAG = \033[35m

####	UNDER THE HOOD	########################################################

.PHONY: all re clean fclean

all: $(NAME)

$(NAME): $(LIB)
	@$(CC) -g -o $@ -L$(LIBDIR) -lar

$(LIB): $(OBJECTS)
	@$(AR) $@ $(OBJECTS

$(OBJDIR)%.o: $(SRCDIR)%.c
	@echo "compiling $< into $@"
	@$(CC) -c $< -o $@

#build:
#@mkdir -p $(OBJDIR)
#@mkdir $(LIBDIR)

clean:
	@rm -rf $(OBJECTS)

fclean: clean
	@rm -rf $(LIB)

re: fclean all
