#include <stdio.h>
#include <stdlib.h>

/*
Snow Howler is the librarian at the central library of the city of HuskyLand.
He must handle requests which come in the following forms:

1 x y : Insert a book with y pages at the end of the xth shelf.

2 x y : Print the number of pages in the yth book on the xth shelf.

3 x : Print the number of books on the xth shelf.

Snow Howler has got an assistant, Oshie, 
provided by the Department of Education.
Although inexperienced, Oshie can handle all of the queries of types 2 and 3.

Help Snow Howler deal with all the queries of type 1.* 

*/

void insert_at(int** book, int* shelf, int x, int y);

int main() {

    int number_of_queries, number_of_shelves;

    printf("Enter number of queries and shelves: ");

    scanf("%d %d", &number_of_queries, &number_of_shelves);
    
    //allocate memory for shelf array
    int* shelf = (int *)malloc(sizeof(int) * number_of_shelves);
    for (int i = 0; i<number_of_shelves; i++){
        shelf[i] = 0;
    }

    //allocate memory for the 2D array
    int** book = (int **)malloc(sizeof(int)*number_of_shelves);
    for(int i=0; i<number_of_shelves; i++){
        book[i] = (int *)malloc(sizeof(int)*1100); // Each shelf can hold up to 1100 books
    }
    //handle queries
    while(number_of_queries--){

        int query;
        printf("Enter query: ");
        scanf("%d", &query);

        if (query == 1){
            int p, q;
            scanf("%d %d", &p, &q);
            insert_at(book,shelf, p, q); //Insert y-paged book at the xth shelf
        }
        else if (query == 2){
            int p, q;
            scanf("%d %d", &p, &q);
            printf("%d\n", book[p][q]);
        }
    }

    // Free memory

    free(shelf);
    for (int i = 0; i < number_of_shelves; i++) {
        free(book[i]);
    }
    free(book);
    

    return 0;
}

void insert_at(int** book, int* shelf, int x, int y) {
    book[x][shelf[x]] = y;
    shelf[x]++;
    printf("Inserted %d-page book at shelf %d, position %d\n", y, x, shelf[x] - 1);
}