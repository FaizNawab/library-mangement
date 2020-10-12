#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "date.h"
#include "library.h"


// user functions
void user_accept(user_t *u)
{
	printf("id: ");
	scanf("%d", &u->id);
	printf("name: ");
	scanf("%s", u->name);
	printf("email: ");
	scanf("%s", u->email);
	printf("phone: ");
	scanf("%s", u->phone);
	printf("password: ");
	scanf("%s", u->password);
	strcpy(u->role, ROLE_MEMBER);
}

void user_display(user_t *u)
{
    printf("\n***************USER DETAILS***********************************\n");
	printf("Id  :   %d", u->id);
    printf("Name  :   %s", u->name);
    printf("Email  :   %s", u->email);
    printf("Phone number  :   %s", u->phone);
    printf("Role  :   %s", u->role);
    printf("\n*************************************************************\n");
}

// book functions
void book_accept(book_t *b) 
{
	printf("id: ");
	scanf("%d", &b->id);
	printf("name: ");
	scanf("%s", b->name);
	printf("author: ");
	scanf("%s", b->author);
	printf("subject: ");
	scanf("%s", b->subject);
	printf("price: ");
	scanf("%lf", &b->price);
	printf("isbn: ");
	scanf("%s", b->isbn);
}

void book_display(book_t *b) 
{
	
    printf("\n***************BOOK DETAILS***********************************\n");
	printf("Id  :   %d", b->id);
    printf("Name  :   %s", b->name);
    printf("Email  :   %s", b->author);
    printf("Phone number  :   %s", b->subject);
    printf("Role  :   %lf", b->price);
    printf("ISBN  :   %s", b->isbn);
    printf("\n*************************************************************\n");
}


void user_add(user_t *u) 
{
	// open the file for appending the data
	FILE *fp;
	fp = fopen(USER_DB, "ab");
	if(fp == NULL) {
		perror("failed to open users file");
		return;
	}

	// write user data into the file
	fwrite(u, sizeof(user_t), 1, fp);
	printf("user added into file.\n");
	
	// close the file
	fclose(fp);
}


void edit_profile(user_t *u)
{
    int choice;
    char edit[30];

    do
    {
        printf("\n0.Sign_out");
        printf("\n1.Edit name");
        printf("\n1.Edit contact_number");
        printf("\n1.Edit email");

        switch( choice )
        {
            case 0:
                    printf("Sign out SucessFullly\n");
                    main();
                   // break;
            
            case 1:
					printf("New Name	:	");
					scanf("%s",edit);
					strcpy(u->name,edit);
					printf("Name Updated SuccessFully\n");
					break;
		
			case 2:
					printf("New conatct number	:	");
					scanf("%s",edit);
					strcpy(u->phone,edit);
					printf("Contact Number Updated SuccessFully\n");
					break;
                    
			case 3:
					printf("New email	:	");
					scanf("%s",edit);
					strcpy(u->email,edit);
					printf("Email Updated SuccessFully\n");
					break;

        }
    } while ( choice!=0 );
    
}

void change_password(user_t *u)
{
	char edit[30];
	printf("New Password	:	");
	scanf("%s",edit);
	strcpy(u->password,edit);
	printf("Password Updated Successfully\n");
}



