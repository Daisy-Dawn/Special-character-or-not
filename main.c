#include <stdio.h>
#include <stdlib.h>

//write a program that tells a user whether his input is a special character/capital letter/ small letter

int main(void) 
{
  char i;

  printf("Please input your data:\t");
  scanf("%c", &i);

  if(i >= 'a' && i <= 'z')
    printf("You just inputed a small letter");

  else if (i >= 'A' && i <= 'Z')
    printf("You just inputed a capital letter\n");

  else
    printf("You just inputted a special character");

  printf("\n\nEnd of program\n");
  sleep(5);
    system("clear");
  printf("Welcome User\n");
  
  return 0;
}