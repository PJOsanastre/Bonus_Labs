#include <iostream>
#include <stdio.h>
#include<stdbool.h>
int main()
{  

int count = 9;
for (int i = 0; i <= count; i++) // numbers vertically
{
    for (int x = i; x <= count; x++) //numbers horizontally
    {
        printf("%d ", x);        
    }
    printf("\n"); 
}

}