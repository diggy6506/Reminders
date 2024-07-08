#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) 
{
    int a_val = *a;
    int b_val = *b;
    
    *a = a_val + b_val;
    *b = abs(a_val - b_val);
}
int main(void) 
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}
