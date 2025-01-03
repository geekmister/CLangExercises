# 指定编译器
CC = gcc

# 指定编译选项
CFLAGS = -Wall -g

# 指定目标文件
TARGET = CLangExercises

# 指定源文件目录
SRC_DIR = src

# 指定源文件
# SRC = $(wildcard $(SRC_DIR)/*.c)
SRC = $(SRC_DIR)/main.c

# 默认目标
all: $(TARGET)

# 目标规则
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# 清理生成的文件
clean:
	rm -f $(TARGET)