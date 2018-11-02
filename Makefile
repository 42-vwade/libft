# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: viwade <viwade@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/01 22:12:50 by viwade            #+#    #+#              #
#    Updated: 2018/11/02 04:45:12 by viwade           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

####	CONTROL PANEL	########################################################

NAME =libft.a
SRCDIR = ./
HDRDIR = ./
OBJDIR = objects/
LIBDIR = ./
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

.PHONY: all re clean fclean

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(AR) $@ $(OBJECTS)

$(OBJDIR)%.o: $(SRCDIR)%.c | build
	@echo "compiling $< into $@"
	@$(CC) -c $< -o $@

build:
ifeq (,$(OBJDIR))
	@mkdir $(OBJDIR)
endif
#@mkdir $(LIBDIR)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -rf $(LIB)

re: fclean all
