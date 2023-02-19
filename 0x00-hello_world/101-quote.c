#include<stdio.h>

int main(void)
{
int ch[]; 
ch = {'a'};
while (ch != '\n' && ch != '\0')
{
putchar(ch);
ch++;
}
return (0);	
}	
