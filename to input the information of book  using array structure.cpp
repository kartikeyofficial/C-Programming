#include<stdio.h>
   
    struct book
   {
    int Book_No, No_of_pages;
    char Book_Name, Writter_Name, Publisher_Name;
    float price;
   };
   int main()
   {
    book x;
    printf("Input Book Information");
    scanf("%d%d%c%c%c%f",&x.Book_No,&x.No_of_pages,&x.Book_Name,&x.Writter_Name,&x.Publisher_Name,&x.price);
    printf("Output Information");
    printf("%d%d%c%c%c%f",x.Book_No,x.No_of_pages,x.Book_Name,x.Writter_Name,x.Publisher_Name,x.price);
    return 0;


   }
