//Write a C program to add two numbers using **pass by reference**
#include<stdio.h>
int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main()
{
  input();
}
int input()
{
  int a,b;
  printf("Enter the numbers: ");
  scanf("%d%d",&a,&b);
  add(a,b);
}
int add(int a, int b)
{
  int *sum = 0;
  sum = a + b;
  output(a,b,sum);
}
void output(int a, int b, int sum)
{
  printf("The sum of %d and %d is %d", a, b, sum);
}