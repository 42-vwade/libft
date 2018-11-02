# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: viwade <viwade@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/01 22:12:50 by viwade            #+#    #+#              #
#    Updated: 2018/11/02 03:51:24 by viwade           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

####	CONTROL PANEL	########################################################

NAME =libft.a
SRCDIR = ./
HDRDIR = ./
OBJDIR = objects/
LIBDIR = lib/
CFILES = $(notdir $(wildcard *.c))
HFILES = $(notdir $(wildcard *.h))
CFLAGS := -Wall -Werror -Wextra
CFLAGS += -I$(HDRDIR)
CC := gcc $(CFLAGS)
AR = ar rcs
LIB = $(addprefix $(LIBDIR), libft.a)
SOURCES = $(addprefix $(SRCDIR), $(CFILES))
OBJECTS = $(addprefix $(OBJDIR), $(CFILES:.c=.o))
HEADERS = $(addprefix $(HDRDIR), $(HFILES))

####	FONT FORMAT	########################################################

FM_NONE = \033[0m
FM_BOLD = \033[1m
FM_RED = \033[31m
FM_MAG = \033[35m

####	UNDER THE HOOD	########################################################

.PHONY: all re clean fclean test

all: $(NAME)
	@echo "Executable $(FM_BOLD)$(FM_MAG)$(NAME)$(FM_NONE) created."

$(NAME): $(LIB)
	@$(CC) -g -o $@ -L$(LIBDIR) -lft

$(LIB): $(OBJECTS)
	@$(AR) $@ $(OBJECTS)

$(OBJDIR)%.o: $(SRCDIR)%.c | build
	@echo "compiling $< into $@"
	@$(CC) -c $< -o $@

build:
	@mkdir $(OBJDIR)
	@mkdir $(LIBDIR)

test: 
	@$(CC) -g $(SOURCES) -I$(HDRDIR) -o $(NAME)-test
	@lldb $(NAME)-test
	@rm -rf $(NAME)-test*

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -rf $(LIBDIR) $(NAME)

re: fclean all
