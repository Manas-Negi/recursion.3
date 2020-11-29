#include<stdio.h>

int find_lcm(int, int);   // function  declaration

int main()
{
   
    int a, b, lcm;
    printf("Enter 2 integers to find LCM of:\n");
    scanf("%d%d", &a, &b);
    lcm = find_lcm(a,b);    // function call
    printf("\n LCM of %d and %d is: %d\n", a, b, lcm);
   
    return 0;
}

int find_lcm(int a, int b)  // function definition
{
   
    static int c = 1;    
    if(c%a == 0 && c%b == 0)
    {
        return c;
    }
    else
    {
        c++;
        find_lcm(a,b);
        return c;
    }
}
