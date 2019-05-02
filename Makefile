
########################################################	MAIN MAKEFILE	####
####	CONTROL PANEL	########################################################

NAME		=	libft.a
ASSETS		=	assets/
SRCDIR		=
HDRDIR		=
OBJDIR		=
LIBDIR		=
TMPDIR		=	.tmp/
#CFILES		=	$(filter-out ._*, $(notdir $(wildcard *.c)))
CFILES		+=	$(shell find $(ASSETS) ! -name ".*" -name '*.c')
#CFILES		:=	$(notdir $(CFILES))
HFILES		=	libft.h
CFLAGS		:=	-c -Wall -Werror -Wextra
CC			:=	gcc
AR			=	ar rc
LIB			=	$(addprefix $(LIBDIR), libft.a)
SOURCES		=	$(addprefix $(SRCDIR), $(CFILES))
OBJECTS		=	$(addprefix $(OBJDIR), $(notdir $(CFILES:%.c=%.o)))
#AOBJECTS	=	$(addprefix $(OBJDIR), $(notdir $(ACFILES:%.c=%.o)))
HEADERS		= 	$(addprefix $(HDRDIR), $(HFILES))
DEBUG		=	0;

####	FONT FORMAT		########################################################

FM0 = \033[0m#		NO FORMAT
FMB = \033[1m#		BOLD FONT
FMR = \033[31m#		RED COLOR
FMM = \e[35m#		MAGENTA COLOR

####	UNDER THE HOOD	########################################################

all: $(NAME)

$(NAME): $(OBJECTS) | $(TMPDIR)
	@ar rc $@ $^
	@ranlib $@
#	@mv $^ $(TMPDIR)

$(OBJECTS): $(CFILES)
	@make -C $(ASSETS)

$(TMPDIR):
	@mkdir -p $@

clean:
	@make clean -C $(ASSETS)
	@rm -rf $(TMPDIR)
	@rm -rf *.o

fclean: clean
	@make fclean -C $(ASSETS)
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
