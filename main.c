#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"


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
                    signin();
                    break;

            case 2:
                    break;
            
        }
    }while ( choice!=0 );
    
    return 0;
}