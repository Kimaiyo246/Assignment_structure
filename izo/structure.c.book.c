//A C program to define a structure (book)
#include<stdio.h>
struct book{
char title[30];
char author[30];
int publication_year;
char ISBN[13];
float price;
}book;

int main() {
//Declaration of the structure 
printf("Enter book title :");
scanf("%s" ,&book.title);

printf("Enter the Author :");
scanf("%s" ,&book.author);

printf("Enter publication year :");
scanf("%d" ,&book.publication_year);

printf("Enter the ISBN :");
scanf("%s" ,&book.ISBN);

printf("Enter the price :");
scanf("%f" ,&book.price);
//Output
printf("    title :%s\n" ,book.title);
printf("    Author :%s\n" ,book.author);
printf("    publication year :%d\n" ,book.publication_year);
printf("    ISBN :%s\n" ,book.ISBN);
printf("    price :%.2f\n" ,book.price);

return 0;
}