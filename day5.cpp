#include <stdio.h>  
#include <string.h>  
  
char reverse(char *string) { //a function of reversing the string was stored as a void
	int i, len, temp; //three variables (i) means the index, (len) is the length of the string, (temp) is a temporary storage for the string
    len = strlen(string); //this built-in function is used to measure the length of the string
    for (i = 0; i < len/2; i++) {
        temp = string[i];  
        string[i] = string[len - i - 1];  
        string[len - i - 1] = temp;  
    }  //this sequence of orders is used to make sure that all letters are reversed in sequence
}  
      
int main() {
    char string[100];
    printf (" Enter the string: ");
    gets(string);
    reverse(string); //this is used to call the function of reversing the string
    printf ("Reverse of entered string: %s", string);
	return 0;  
}  
