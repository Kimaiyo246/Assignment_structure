//A program of structure (book)
#include<stdio.h>
struct book{
char title[30];
char author[30];
int publication_year;
char ISBN[13];
float price;
}book;
//Main function
int main() {
strcpy(book.title ,"introduction to C Programming");
strcpy(book.author,"John smith");
book.publication_year ="2022";
strcpy(book.ISBN ,"9780131103627");
book.price=49.99;

//output
printf("title :%s\n" ,book.title);
printf("Author :%s\n" ,book.author);
printf("publication year :%d\n" ,book.publication_year);
printf("ISBN :%s\n" ,book.ISBN);
printf("price :%.2f\n" ,book.price);

return 0;
}