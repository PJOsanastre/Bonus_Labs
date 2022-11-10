#include <stdio.h>

int tri(int count){

        for (int i = 0; i <= count; i++) // numbers vertically
        {
            for (int x = i; x <= count; x++) //numbers horizontally
            {
                printf("%d ", x);        
            }
            printf("\n"); 
        }
}

int main()
{

tri(9);// call the function

}