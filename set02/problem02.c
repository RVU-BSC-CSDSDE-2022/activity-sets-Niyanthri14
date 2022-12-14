//Write a program to find if a triangle is scalene.
#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
  int a,b,c, isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
}

int input_side()
{
  int n;
  printf("Enter number of sides");
  scanf("%d",&n);
  return n;
}

int check_scalene(int a, int b, int c)
{
  int isscalene;
  if (a != b && b != c && c != a)
    return isscalene;
  else if (a==b && b==c)
return isscalene;
}

