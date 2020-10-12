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

void sign_in()
{
    //check with data base details & compare..
}

void sign_up()
{
    //input user detials..
   
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
        printf("\0.Exit");
        printf("\1.Sign in");
        printf("\2.Sign up");

        switch ( choice )
        {
            
            case 0:
                    exit(0);
            
            case 1:
                    signin();
                    break;

            case 2: 
                    signup();
                    break;
            
        }
    }while ( choice!=0 );
    
    return 0;
}