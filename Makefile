CC      = gcc
CFLAGS  = -std=c17 -Wall -Wextra -Wpedantic -g -fsanitize=address -Iinclude
BUILD   = build
SRC     = src/game.c src/play.c
TARGET  = $(BUILD)/play

all: $(TARGET)

$(TARGET): $(SRC) include/game.h | $(BUILD)
	$(CC) $(CFLAGS) $(SRC) -o $@

$(BUILD):
	mkdir -p $(BUILD)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(BUILD)/*

.PHONY: all run clean
