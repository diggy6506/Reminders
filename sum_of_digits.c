#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n, digits[4], sum = 0;
    scanf("%d", &n);
    
    for (int i = 0; i <= 4; i++)
    {
        digits[i] = n % 10; 
        n /= 10;            
    }
    
    for (int i = 0; i <= 4; i++)
    {
        sum += digits[i];
    }
    
    printf("%d", sum);

    return 0;
}
