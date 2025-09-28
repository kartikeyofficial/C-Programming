#include<stdio.h>
struct node
{
    int data;
    struct node*next;
};
int main()
{
    node ob1;
    ob1.next= NULL;
    ob1.data = 10;
    
   
    node ob2;
    ob2.next = NULL;
    ob2.data = 20;
    
    ob1.next = &ob2;
    printf("%d",ob2);
    
    return 0;
}