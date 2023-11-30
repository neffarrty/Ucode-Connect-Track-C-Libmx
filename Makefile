CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
ARFLAGS = rcs
INCLUDES = -I$(INC_DIR)

TARGET = libmx.a

INC_DIR = inc
OBJ_DIR = obj
SRC_DIR = src

all: $(TARGET)
	
$(TARGET):	
	mkdir obj/
	$(CC) $(CFLAGS) $(INCLUDES) -c $(SRC_DIR)/*.c
	mv *.o $(OBJ_DIR)
	ar $(ARFLAGS) $(TARGET) $(OBJ_DIR)/*.o

clean:
	rm -rf $(OBJ_DIR)

uninstall:
	rm -f $(TARGET)

reinstall: 
	make clean 
	make uninstall
	make all

