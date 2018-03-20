#CC represents compiler 
CC=gcc
# compiler flags: -std=gnu99 used  for for loop with index defined inside the loop, enable debugging
CCFLAGS=-std=gnu99 -g 


#file to create - mycode, files needed to make it - printpgm.o ex1.o
mycode: printpgm.o ex1.o
	$(CC) $(CCFLAGS) -o $@ $^ 

#any file ending in ‘.o’ depends upon a similarly-named ‘.c’ file
#create these .o files
%.o : %.c
	$(CC) $(CCFLAGS) -c $^

#this target removes .o files when user types make clean
.PHONY: clean

clean:
	rm -f *.o mycode
