#include<stdio.h>
int main()
{
    int a=0x18; //Declare the hex variable.                    
    a=(a>>4&0x0f)|((a&0x0f)<<4);//logic to convert little endian to big endian.   
    printf("%x \n",a);   //print updated value of a.         

    for(int i=8;i>=0;i--)//check the binary value of hex value to convert little endian to big endian.
    {
        int k=a>>i;//upadated value of a is right shifted with i.            
    if(k&1)//if condition is true replace 0 with 1.
    printf("1");
    else
    printf("0");//if condition is false replace 1 with 0.

    }
}
