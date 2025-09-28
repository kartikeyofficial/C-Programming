#include<stdio.h>
int main()
{
    int reversed_no = 0, n, remainder,original_num;
    printf("Enter the Number:");
    scanf("%d",&n);
    original_num = n;
    for(; n!= 0; n /= 10)
    {
        remainder = n % 10;
        reversed_no = reversed_no * 10 + remainder;

    }
    if(original_num == reversed_no)
        printf("%d Is a palindrome Number\n",original_num);
    
    else
        printf("%d Is Not a Palindrome Number\n",original_num);
}