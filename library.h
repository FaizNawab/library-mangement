#ifndef _LIBRARY_H
#define _LIBRARY_H

#define ROLE_OWNER      "owner"
#define ROLE_LIBRARIAN  "librarian"
#define ROLE_MEMBER     "member"


#define STATUS_AVAIL "available"
#define STATUS_ISSUED "issued"

#define FINE_PER_DAY           5
#define BOOK_RETURN_DAYS       7
#define MEMBERSHIP_MONTH_DAYS 30

#define USER_DB "user.db"

#include "date.h"

typedef struct user{

    int id;
    char name[30];
    char password[10];
    char email[20];
    char phone[12];
    char role[15];

}user_t;

typedef struct book
{
    int id;
    char name[50];
    char author[50];
    char subject[50];
    double price;
    char isbn[16]; //unique book code[10/13 character code]
}book_t;

typedef struct book_copy
{
    int id;
    int bookid;
    int rack;
    char status[16];
}book_copy_t;

typedef struct issuecard
{
    int id;
    int copyid;//copy id for every book
    int member_id;
    date_t issue_date;
    date_t return_duedate;  //fine for late submission of book
    date_t return_date;
    double fine_amount;
}issuecard_t;

typedef struct payment
{

    int id;     //payment id 
    int memberid;
    double amount;
    char typr[10];
    date_t tx_time; //transaction time
    date_t next_pay_duedate;

}payment_t;

//user owner function
void user_accept(user_t *u);
void user_display(user_t *u);

//book function
void book_accept(book_t *b);
void book_display(book_t *b);


//librarian function

//member function

//common function
void signin();
void signup();
void edit_profile(user_t *u);
void change_password(user_t *u);


#endif