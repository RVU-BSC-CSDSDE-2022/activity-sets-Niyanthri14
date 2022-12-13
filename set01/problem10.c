//Write a C program to compare two strings, character by character.
#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
  char string1[20] , string2[20];
  input_two_strings(&string1, &string2);
}

void input_two_strings(char *string1, char *string2)
{ 
  printf("Enter the first string \n");
  scanf("%s", string1);
  printf("Enter the second string\n");
  scanf("%s", string2);
  stringcompare(string1,string2);  
}

int stringcompare(char *string1, char *string2)
{
  int var=0,i=0;
  while (string1[i] != '\0' && string2[i] != '\0')
    {
      
      if(string1[i] > string2[i])
      {
        var=1;
        break;
      }