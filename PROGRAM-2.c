#include <stdio.h>

unsigned int swapBits(unsigned int x)
{
//Declaration of two variables.
unsigned int even_bits = x & 0xAAAAAAAA;
unsigned int odd_bits = x & 0x55555555;
even_bits >>= 1;//Right shift all even bits.  
odd_bits <<= 1;//Left shift all odd bits.
return (even_bits | odd_bits);
}
int main()
{
    //assign the input number to variable x
    unsigned int x = 64;
    printf("%u ", swapBits(x));
        return 0;
}

