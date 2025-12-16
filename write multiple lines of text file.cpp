#include <stdio.h>

int main() 
{
    
    FILE *file;

    
    file = fopen("example.txt", "w");

    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; 
    }

    
    fprintf(file, "This is the first line.\n");
    fprintf(file, "This is the second line.\n");
    fprintf(file, "This is the third line.\n");

    
    fclose(file);

    printf("Lines written to file successfully.\n");
    return 0;

    
}
