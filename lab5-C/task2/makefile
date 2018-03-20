#CC represents compiler 
CC=gcc
# compiler flags: -std=gnu99 used  for for loop with index defined inside the loop, -g is to enable debugging
# -lm is to include the maths library
CCFLAGS=-std=gnu99 -g -lm



#file to create - draw, files needed to make it - draw.o libturtle.a
#builded a copy of the program called “polygon” and a copy called “square”
draw: draw.o libturtle.a
	$(CC) $(CCFLAGS) libturtle.a $^ -o $@  

polygon: draw.o libturtle.a
	$(CC) $(CCFLAGS) libturtle.a $^ -o $@  
 
square: draw.o libturtle.a
	$(CC) $(CCFLAGS) libturtle.a $^ -o $@  

#target: draw.o, file needed to make it - draw.c
draw.o : draw.c
	$(CC) $(CCFLAGS) -c $^

#this target removes .o files when user types make clean
.PHONY: clean

clean:
	rm -f *.o 
