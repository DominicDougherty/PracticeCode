#include <cstring>
#include <cstdio>


void printBook(struct Books book);
void printBook2(struct Books *book);

struct Books {
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};



int main(){

    //Defining a structure
    struct Books Book1;
    struct Books Book2;
    strcpy( Book1.title, "Learn c++ programming");
    strcpy(Book1.author,"Chand Miyan");
    strcpy(Book1.subject , "C++ Programming");
    Book1.book_id = 6495407;

    strcpy( Book2.title, "Foo title");
    strcpy(Book2.author,"Foo author");
    strcpy(Book2.subject , "Foo subject");
    Book2.book_id = 61991;

    //Passing structure to function
    printBook(Book1);

    //Pointers to structures
    struct Books *sp;
    sp = &Book2;
    printBook2(sp);

    return 0;
}


void printBook(struct Books book){
    printf("This book's title is: %s", book.title);
    printf("\n");
}

void printBook2(struct Books *book){
    printf("This book's title is: %s", book->title);
}