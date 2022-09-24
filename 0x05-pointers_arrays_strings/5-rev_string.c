#include <stdio.h>
#include "main.h"

/**
* rev_string - Reverses a string
* @s: string to be reversed
*
* Return: nothing
*/

void rev_string(char string)
{
 	char temp;
  	int i,length;
   	length=strlen(string)-1;
   	
	for(i=0;i<strlen(string)/2;i++){
     		temp=string[i];
      		string[i]=string[length];
      		string[length--]=temp;
   	}
 	
}

