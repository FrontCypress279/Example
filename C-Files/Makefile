TARGET = 27DEC21_Danyiel

$(TARGET).out: $ $(TARGET).c
	clang $(TARGET).c -o $(TARGET).out

run: $(TARGET).out
	./$(TARGET).out

clear:
	rm -f *.out
	clear && ls
