#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

  char user_input[101], modified_str[101];
  
  //getting a string from a user
  printf ("Please Enter a string with a length up to 100 characters: \n");
  fgets (user_input, sizeof (user_input), stdin );
  
  //printing the length of the string and copy it to modified_str variable in order to change it
  printf("The string you entered is %d characters long\n", (int)strlen(user_input)-1);
  strcpy(modified_str, user_input); 
  
  //iterate over all elements of the string and make them lowercase in case they are not
  for (int i = 0; i < strlen(modified_str)-1; i++){
    
    if (isupper(modified_str[i])){
      modified_str[i] = tolower(modified_str[i]);
      
    }
  }
  
  //compare original string with the modified one and output the lowercase string or the message for the user
  if (strcmp(user_input, modified_str) == 0){
    printf("Your string is all lowercase originally \n");
  }
  else{
    printf("All lowercase string: %s \n", modified_str);
  }
  
  return 0;
}


