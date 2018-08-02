CC=gcc
SUR_PATH=common
OBJ_PATH=obj
EXE_PATH=bin
vpath %.c $(SUR_PATH)
vpath %.h $(SUR_PATH)
vpath %.o $(OBJ_PATH)
#$(EXE_PATH)/quick_sort_test:$(OBJ_PATH)/quick_sort_test.o $(OBJ_PATH)/sort.o
#	$(CC) $(OBJ_PATH)/quick_sort_test.o $(OBJ_PATH)/sort.o -o $(EXE_PATH)/quick_sort_test
$(EXE_PATH)/quick_sort_test:$(OBJ_PATH)/quick_sort_test.o $(OBJ_PATH)/sort.o
	$(CC) $^ -o $(EXE_PATH)/quick_sort_test
$(OBJ_PATH)/quick_sort_test.o:quick_sort_test.c $(SUR_PATH)/sort.h
	$(CC) -c quick_sort_test.c -o $(OBJ_PATH)/quick_sort_test.o
$(OBJ_PATH)/sort.o:$(SUR_PATH)/sort.c $(SUR_PATH)/sort.h
	$(CC) -c $< -o $(OBJ_PATH)/sort.o
.PHONY:clean
clean:
	rm -rf $(OBJ_PATH)/*.o
	rm -rf $(EXE_PATH)/quick_sort_test
