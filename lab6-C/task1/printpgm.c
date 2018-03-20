#include "printpgm.h"
#include <stdio.h>
//Binary file
//Pros: the size of the binary file is smaller than of a text file
//Pros: faster to work with as it does not have to be converted to other format
//Cons: calculation errors are harder to spot

//Text file
//Pros: readability, easy to spot output errors and work with for a developer
//Cons: size is bigger, the process of converting
//numeric values to text in order to write them is not space efficient


void image(char *name, int height, int width, int array [][width]){
	FILE * fp_input ;
	//open the file for write
	fp_input = fopen (name, "w");
	
	
	//write to the file the first line with the marker, width, heigh and max value which represents a white colour
	fprintf ( fp_input , "P2 %d %d 255 \n", width, height);
	
	//iterating over rows
	for (int i=0; i < height ; i++){
     //iterating over elements in each row and writing them to the file
     for (int j=0; j<width; j++){
		fprintf ( fp_input , "%d ", array[i][j]);
     }
   //write a newline character to the file after writing each row
   fprintf ( fp_input , "\n");

  }
  //close the file we wrote to
  fclose ( fp_input );
}

void imageBinary(char *name, int height, int width, int array [][width]){
	FILE * fp_input ;
	char cArray[height][width];
	
	for (int i=0; i < height ; i++){
     //iterating over positions in the row and using rand to assign values to positions
		for (int j=0; j<width; j++){
			cArray[i][j] = (char) array[i][j];
     }
   }
	//open the file for write
	fp_input = fopen (name, "wb");
	
	
	//write to the file the first line with the marker, width, heigh and max value which represents a white colour
	fprintf ( fp_input , "P5 %d %d 255 \n", width, height);
	
	
	for (int i=0; i < height ; i++){
		fwrite(cArray[i], 1 , width , fp_input );
	}

  //close the file we wrote to
  fclose ( fp_input );
}
