#include <stdio.h>
#include <string.h>
using namespace std;
typedef struct {
    char no[20];
    char name[20];
    float price;
}Book;


typedef struct 
{
    Book *elem;
    int length;
    /* data */
}Booklist;



int main()
{
    
    Book elem[2];
    strncpy_s(elem[1].name,"one",20);
    Booklist L;
    L.elem=elem;

    printf("\n结果\n");
    printf("%c",L.elem[1].name);
   
    return 0;
    
}
