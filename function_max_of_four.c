#include <stdio.h>

int max_of_four(int a, int b, int c, int d) 
{
    int largest_number = 0;
    
  if (a > b && a > c && a > d)
  {
    largest_number = a;
  }  
  else if (b > a && b > c && b > d)
  {
     largest_number = b;
  }
  else if (c > a && c > b && c > d)
  {
    largest_number = c;
  }
  else if (d > a && d > b && d > c)
  {
    largest_number = d;
  }
    return largest_number;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
