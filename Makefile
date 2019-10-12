UTILS = utils/get_line.c \
	utils/numbers.c \
	utils/string.c \
	utils/string_more.c \
	utils/ft_strsplit.c

CHAMPION_CHECK = utils/champion_files/champion_checks.c

COREWAR = parse_args_corewar.c \
			error_handling.c

TSRC = test_src/parse_args_corewar.c \
	test_src/main.c

SRC = $(UTILS) \
	$(CHAMPION_CHECK) \
	$(COREWAR) \
	corewar.c

TEST_SRC = $(UTILS) \
	$(CHAMPION_CHECK) \
	$(COREWAR) \
	$(TSRC)

OBJ = $(SRC:.c=.o)
OBJT = $(TEST_SRC:.c=.o)

SRCDIR = ./src
TESTDIR = ./src
OBJDIR = ./obj
OBJDIRT = ./objt

SRCS = $(addprefix $(SRCDIR)/, $(SRC))
TESTS = $(addprefix $(TESTDIR)/, $(TEST_SRC))
OBJS = $(addprefix $(OBJDIR)/, $(OBJ))
OBJST = $(addprefix $(OBJDIRT)/, $(OBJT))

INCLUDES = -I ./includes

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

NAME = corewar
TEST = test

all: $(NAME) $(TEST)

$(OBJDIR):
	@mkdir -p $(OBJDIR)/utils/champion_files

$(OBJDIRT):
	@mkdir -p $(OBJDIRT)/utils/champion_files
	@mkdir -p $(OBJDIRT)/test_src

$(OBJDIR)/%.o:$(SRCDIR)/%.c
	@$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

$(OBJDIRT)/%.o:$(TESTDIR)/%.c
	@$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

$(NAME): $(OBJDIR) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(TEST): $(OBJDIRT) $(OBJST)
	@$(CC) $(CFLAGS) $(OBJST) -o $(TEST)

clean:
	@/bin/rm -rf $(OBJDIR) $(OBJDIRT)

fclean: clean
	@/bin/rm -rf $(NAME) $(TEST)

re: fclean all