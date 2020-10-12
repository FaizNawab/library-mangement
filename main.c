#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"
#include "date.h"


void date_tester()
{
    date_t d1 = {1,1,2000},d2={31,12,2000};
    date_t d = {1,1,2000};
    date_t r = date_add(d,366);
    date_print(&r);

    int diff = date_cmp(d1,d2);
    printf("Date Difference : %d\n",diff);

}

void test()
{
    user_t u;
    book_t b;
    user_accept(&u);
    user_display(&u);
    book_accept(&b);
    book_display(&b);

}
int main()
{
    //common functionality area
int choice;

    do
    {
        switch ( choice )
        {
            
            case 0:
                    exit(0);
            
            case 1:
                    signup();
                    break;

            case 2: 
                    signin();
                    break;
            
        }
    }while ( choice!=0 );
    
    return 0;
}