CC = gcc
CFLAGS = -Wall -g

# Diretórios
SRC_DIR = .
STRING_DIR = string


# Busca todos os .c dentro das pastas
SRCS =  $(wildcard $(SRC_DIR)/*.c) \
	    $(wildcard $(STRING_DIR)/*.c)

# Gera lista de objetos automaticamente
OBJS = $(SRCS:.c=.o)

# Nome do executável
TARGET = programa

# Regra principal
all: $(TARGET)

# Como gerar o executável
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Como compilar cada .c em .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza manual
clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean
