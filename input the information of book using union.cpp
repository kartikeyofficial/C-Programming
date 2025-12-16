#include <stdio.h>
union BookInfo 
{
    char book_name[20], writter_name[20], publisher_name[20];
    int book_no, no_of_pages;
    float price;
};

int main() 
{
    union BookInfo book;
    printf("Input the information of Book:\n");
    printf("Enter book Name: ");
    scanf("%[^\n]s",book.book_name);
    printf("Writter Name: ");
    scanf("%[^\n]s",book.writter_name);
    printf("Enter the Publisher Name: ");
    scanf("%[^\n]s", book.publisher_name);
    printf("Enter the Book No.: ");
    scanf("%d", &book.book_no);
    printf("Enter the No. of Pages: ");
    scanf("%d", &book.no_of_pages);
    printf("Enter book price: ");
    scanf("%f", &book.price);

    
    printf("\nBook Information:\n");
    printf("Book Name: %s\n", book.book_name);
    printf("Writter Name: %s\n", book.writter_name);
    printf("Publisher Name: %s\n", book.publisher_name);
    printf("Book No: %d\n", book.book_no);
    printf("No. of Pages: %d\n", book.no_of_pages);
    printf("Price: %f\n", book.price);
    
}
