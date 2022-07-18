#include <stdio.h>
int main()
{
  //Declare the two variables.
  int num1,num2;
  printf("enter the values");
  fflush(stdout);
  //Ask inputs from the user.
  scanf("%d%d",&num1,&num2);
  //check the if condition for clearing the bit.
  if((28 & num1) == 28)
  {
      //if condition is true excecute the below statements.
      num2=num2&0xF0;
      printf("%d",num2);
  }
  //if condition is false excecute else part.
  else
  printf(" not equal nothing");

}
