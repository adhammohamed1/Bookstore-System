#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "func.h"
#include "data.h"
#include "func.h"


//This function displays the admin login menu
void admin_login_menu()
{
    int inv=0;
    while(1)
    {
        char username_attempt[25],password_attempt[25];
        printf("\n\t\t\t\tAdmin Login");
        printf("\n\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203);
        printf("\n\t\t\t\t|                                                        |");
        printf("\n\t\t\t\t|\tUsername: \x1b[47m                          \x1b[40m\t\t |");
        printf("\n\t\t\t\t|                                                        |");
        printf("\n\t\t\t\t|\tPassword: \x1b[47m                          \x1b[40m\t\t |");
        printf("\n\t\t\t\t|                                                        |");
        printf("\n\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202);
        if(inv) printf("\n\t\t\t\t\t\t\t\t\x1b[31mWrong username or password\r\x1b[5A\x1b[51C");
        else printf("\r\x1b[4A\x1b[51C");
        strcpy(username_attempt,get_field(25,BLACK_TXT,WHITE_BCK));
        printf("\n\n\x1b[51C");
        strcpy(password_attempt,get_pass2(25,BLACK_TXT,WHITE_BCK));
        encdec1('e',username_attempt);
        encdec1('e',password_attempt);
        if(check_admin_credentials(username_attempt,password_attempt))
        {
            inv=0;
            printf("\n\n\n\x1b[0J\t\t\t\t\t\t\t\t\t\x1b[32m  Access Granted! \x1b[0m\n\n\t\t\t\t");
            system("pause");
            break;
        }
        else inv=1;
        printf("\x1b[2B\r\x1b[0K");
        for(int i=1; i<=7; i++) printf("\x1b[1A\r\x1b[0K");
        printf("\x1b[1A\r");
    }
}



void admin_main_menu()
{
    int flag=1;
    while(flag)
    {
        system("cls");
        printf("\n\t\t\t\t\t      \x1b[32m\xB2\xB2\xB2 Adham's Bookstore System \xB2\xB2\xB2\x1b[0m\n\n");
        printf("\n\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203);
        printf("\n\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
        printf("\n\t\t\t\t %c 1.\x1b[32m          %c\x1b[0m       Check Inventory      \x1b[32m%c\x1b[0m           %c",186,254,254,186);
        printf("\n\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
        printf("\n\t\t\t\t %c 2.\x1b[32m          %c\x1b[0m          Add books         \x1b[32m%c\x1b[0m           %c",186,254,254,186);
        printf("\n\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
        printf("\n\t\t\t\t %c 3.\x1b[32m          %c\x1b[0m        Manage Prices       \x1b[32m%c\x1b[0m           %c",186,254,254,186);
        printf("\n\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
        printf("\n\t\t\t\t %c 4.\x1b[32m          %c\x1b[0m     Transaction History    \x1b[32m%c\x1b[0m           %c",186,254,254,186);
        printf("\n\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
        printf("\n\t\t\t\t %c 5.\x1b[32m          %c\x1b[0m  Modify Admin Credentials  \x1b[32m%c\x1b[0m           %c",186,254,254,186);
        printf("\n\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
        printf("\n\t\t\t\t %c 6.\x1b[32m          %c\x1b[0m          Add Offers        \x1b[32m%c\x1b[0m           %c",186,254,254,186);
        printf("\n\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
        printf("\n\t\t\t\t %c 7.\x1b[32m          %c\x1b[0m             Exit           \x1b[32m%c\x1b[0m           %c",186,254,254,186);
        printf("\n\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
        printf("\n\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202);
        while(1)
        {
            printf("\x1b[150;150f");
            switch(getch())
            {
            case '1':
                check_inventory_menu();
                break;
            case '2':
                add_books_menu();
                break;
            case '3':
                manage_prices_menu();
                break;
            case '4':
                transaction_history_menu();
                break;
            case '5':
                modify_admin_credentials();
                break;
            case '6':
                add_offers_menu();
                break;
            case '7':
                printf("\x1b[23;0f\t\t\x1b[32m %c \x1b[0mAre you sure you wish to exit?\n\t\t   \x1b[32m1-\x1b[0m Yes\n\t\t   \x1b[32m2-\x1b[0m No\x1b[150;150f",254);
                while(1)
                {
                    switch(getch())
                    {
                    case '1':
                        printf("\x1b[26;0f\n\t\tBye now! \x1b[32m:)\n\x1b[0m");
                        exit(0);
                    case '2':
                        break;
                    default:
                        continue;
                    }
                    break;
                }
                break;
            default:
                continue;
            }
            break;
        }
    }
}



void check_inventory_menu()
{
    system("cls");
    book_sort();
    printf("\n\t\t\t\t\t      \x1b[32m\xB2\xB2\xB2 Adham's Bookstore System \xB2\xB2\xB2\x1b[0m\n\n");
    printf("\n\n\n\t\t\t\t\t\tLOADING INVENTORY\n\n\t\t\t\t\t  ");
    calc_total_quantity();
    loading(19999990);
    system("cls");
    printf("\n\t\t\t\t\t      \x1b[32m\xB2\xB2\xB2 Adham's Bookstore System \xB2\xB2\xB2\x1b[0m\n\n");
    printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,203);
    printf("\n\t%c          \x1b[32mAuthor\x1b[0m           %c                  \x1b[32mBook\x1b[0m                   %c           \x1b[32mISBN\x1b[0m           %c \x1b[32mQuantity\x1b[0m %c",186,186,186,186,186);                                                                                                                                    ///ES7A  1                                                                                                                                                              ///ES7A 2                                                                                                   ///ES7A 3
    for(int i=0; i<available_books; i++)
    {
        if(!i || strcasecmp(books[i].author,books[i-1].author))
        {
            printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,205,205,205,185);
            printf("\n\t%c\t%s\r\t\x1b[29C\b%c",186, books[i].author,186);
        }
        else
        {
            printf("\n\t%c\r\t\x1b[29C\b%c\r\t\x1b[70C%c\r\t\x1b[97C%c\r\t\x1b[108C%c",186,186,186,186,186);
            printf("\n\t%c\r\t\x1b[29C\b%c",186,186);
        }
        printf("\t%s\r\t\x1b[70C%c ISBN-13: %s\r\t\x1b[97C%c    %02d\r\t\x1b[108C%c", books[i].name,186, books[i].isbn13,186, books[i].quantity,186);
        printf("\n\t%c                           %c\t",186,186);
        if(strcasecmp(books[i].name_series,"N/A"))printf("\x1b[34m%s\x1b[0m\r\t\x1b[70C%c",books[i].name_series,186);
        else printf("\r\t\x1b[70C%c",186);
        printf(" ISBN-10: %s\r\t\x1b[97C%c          %c",books[i].isbn10,186,186);                                                                                                                                                                                      ///ES7A  1                                                                                                                                                             ///ES7A 2                                                                                                    ///ES7A 3                                                                                                                                                                                            ///ES7A  1                                                                                                                                                  ///ES7A 2                                                                                                  ///ES7A 3
    }
    printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,205,205,205,185);
    printf("\n\r\t\x1b[97C%c   %04d\r\t\x1b[108C%c",186,total_quantity,186);
    printf("\n\r\t\x1b[97C%c%c%c%c%c%c%c%c%c%c%c%c",202,205,205,205,205,205,205,205,205,205,205,202);
    printf("\x1b[0;0f\x1b[47m\x1b[30m < \x1b[0m BACKSPACE\x1b[150;150f");
    while(1)if(getch()==BKSP)break;
}



void add_books_menu()
{
    int isbnflag=0;
    char temp[40];
    system("cls");
    printf("\n\t\t\t\t\t      \x1b[32m\xB2\xB2\xB2 Adham's Bookstore System \xB2\xB2\xB2\x1b[0m\n\n");
    printf("\n\n\n\t\t\t\t\t\t\tLOADING\n\n\t\t\t\t\t    ");
    loading(9009990);
    system("cls");
    printf("\n\t\t\t\t\t      \x1b[32m\xB2\xB2\xB2 Adham's Bookstore System \xB2\xB2\xB2\x1b[0m\n\n");
    printf("\n\t\t\x1b[32m%c\x1b[0m Add Book \x1b[32m%c\x1b[0m",254,254);
    printf("\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203);
    printf("\n\t\t%c\x1b[79C%c",186,186);
    printf("\n\t\t%c ",186);
    fieldspc(40,"Book Name(Series Name) ",WHITE_BCK);
    printf("\r\t\t\x1b[80C%c",186);
    printf("\n\t\t%c\x1b[79C%c",186,186);
    printf("\n\t\t%c ",186);
    fieldspc(7,"Part Number(Optional)  ",WHITE_BCK);
    printf("\r\t\t\x1b[80C%c",186);
    printf("\n\t\t%c\t\t\t    \x1b[32m*\x1b[0mLeave empty if book is not part of a series\r\t\t\x1b[80C%c",186,186);
    printf("\n\t\t%c\x1b[79C%c",186,186);
    printf("\n\t\t%c ",186);
    fieldspc(40,"Part Name              ",WHITE_BCK);
    printf("\r\t\t\x1b[80C%c",186);
    printf("\n\t\t%c\x1b[79C%c",186,186);
    printf("\n\t\t%c ",186);
    fieldspc(40,"Book Author            ",WHITE_BCK);
    printf("\r\t\t\x1b[80C%c",186);
    printf("\n\t\t%c\x1b[79C%c",186,186);
    printf("\n\t\t%c ",186);
    fieldspc(40,"Book Type(Genre)       ",WHITE_BCK);
    printf("\r\t\t\x1b[80C%c",186);
    printf("\n\t\t%c\x1b[79C%c",186,186);
    printf("\n\t\t%c ",186);
    fieldspc(8,"Price($)               ",WHITE_BCK);
    printf("\r\t\t\x1b[80C%c",186);
    printf("\n\t\t%c\x1b[79C%c",186,186);
    printf("\n\t\t%c Release Date            : \x1b[47m    \x1b[40m / \x1b[47m    \x1b[40m / \x1b[47m      \x1b[40m\r\t\t\x1b[80C%c",186,186);
    printf("\n\t\t%c\x1b[79C%c",186,186);
    printf("\n\t\t%c ISBN-13                 : \x1b[47m     \x1b[40m - \x1b[47m           \x1b[40m - \x1b[47m   \x1b[40m\r\t\t\x1b[80C%c",186,186);
    printf("\n\t\t%c\x1b[79C%c",186,186);
    printf("\n\t\t%c ISBN-10                 : \x1b[47m           \x1b[40m - \x1b[47m   \x1b[40m\r\t\t\x1b[80C%c",186,186);
    printf("\r\t\t\x1b[80C%c",186);
    printf("\n\t\t%c\x1b[79C%c",186,186);
    printf("\n\t\t%c ",186);
    fieldspc(7,"Page Count             ",WHITE_BCK);
    printf("\r\t\t\x1b[80C%c",186);
    printf("\n\t\t%c\x1b[79C%c",186,186);
    printf("\n\t\t%c\x1b[79C%c",186,186);
    printf("\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202);
    printf("\x1b[0;0f");
    printf("\x1b[47m\x1b[30m < \x1b[0m BACKSPACE\n\n\n\t\tPress ENTER to continue...");
    while(1)
    {
        char choice=getch();
        if(choice==BKSP) goto add_books_back;
        else if(choice==ENTER) break;
    }
    printf("\x1b[0;0f\x1b[0K\n\n\n\r\x1b[0K\x1b[4B\x1b[45C");

    ///TODO: get each field with validations + release date
    while(1)
    {
        if(*strcpy(temp,get_field(40,BLACK_TXT,WHITE_BCK))!=0)
        {
            strcpy(books[available_books].name,temp);
            break;
        }
    }
    printf("\x1b[2B");
add_books_getpart:
    printf("\r\x1b[45C\x1b[47m      \x1b[0m\r\x1b[45C");
    if(*strcpy(temp,get_field(40,BLACK_TXT,WHITE_BCK))==0)
    {
        books[available_books].part=1;
        strcpy(books[available_books].name_series,"N/A");
        printf("\x1b[40m\x1b[32m\b        \x1b[7D%d\x1b[3B\r\x1b[44C                                          \x1b[41DN/A\x1b[0m",books[available_books].part);
    }
    else if(!contain_char1(temp))
    {
        books[available_books].part=atoi(temp);
        printf("\x1b[3B\r\x1b[45C");
        strcpy(books[available_books].name_series,get_field(40,BLACK_TXT,WHITE_BCK));
    }
    else goto add_books_getpart;
    printf("\x1b[2B\r\x1b[45C");
    while(1)
    {
        if(getch()=='\\') goto add_books_back;
        if(*strcpy(temp,get_field(40,BLACK_TXT,WHITE_BCK))!=0)
        {
            strcpy(books[available_books].author,temp);
            break;
        }
    }
    printf("\x1b[2B\r\x1b[45C");
    while(1)
    {
        if(*strcpy(temp,get_field(40,BLACK_TXT,WHITE_BCK))!=0)
        {
            strcpy(books[available_books].type,temp);
            break;
        }
    }
    printf("\x1b[2B\r\x1b[45C");
    while(1)
    {
        printf("\r\x1b[45C\x1b[47m      \x1b[0m\r\x1b[45C");
        if(!contain_char2(strcpy(temp,get_field(7,BLACK_TXT,WHITE_BCK))) && *temp!=0)
        {
            books[available_books].price=atof(temp);
            break;
        }
    }
    printf("\r\x1b[45C\x1b[47m\x1b[30m$%.2f ",books[available_books].price);
    printf("\x1b[2B\r\x1b[45C");
    while(1)
    {
        printf("\r\x1b[45C\x1b[47m   \x1b[0m\r\x1b[45C");
        if(!contain_char1(strcpy(temp,get_field(3,BLACK_TXT,WHITE_BCK))) && *temp!=0 && atoi(temp)>0 && atoi(temp)<32)
        {
            books[available_books].releasedate.day=atoi(temp);
            if(cred_strlen(temp)<2)printf("\b\x1b[30m\x1b[47m%02d",books[available_books].releasedate.day);
            break;
        }
    }
    while(1)
    {
        printf("\r\x1b[52C\x1b[47m   \x1b[0m\r\x1b[52C");
        if(!contain_char1(strcpy(temp,get_field(3,BLACK_TXT,WHITE_BCK))) && *temp!=0 && atoi(temp)>0 && atoi(temp)<13)
        {
            books[available_books].releasedate.month=atoi(temp);
            if(cred_strlen(temp)<2)printf("\b\x1b[30m\x1b[47m%02d",books[available_books].releasedate.month);
            break;
        }
    }
    while(1)
    {
        printf("\r\x1b[59C\x1b[47m   \x1b[0m\r\x1b[59C");
        if(!contain_char1(strcpy(temp,get_field(5,BLACK_TXT,WHITE_BCK))) && *temp!=0 && atoi(temp)<2021)
        {
            books[available_books].releasedate.year=atoi(temp);
            break;
        }
    }

    if(books[available_books].releasedate.year>=2007)
    {
        isbnflag=1;
        printf("\x1b[4B\x1b[40m\x1b[32m\r\x1b[44C                                          \x1b[41DN/A\x1b[0m\r\x1b[4A");
        strcpy(books[available_books].isbn10,"N/A");
    }
    printf("\x1b[2B");
    while(1)
    {
        printf("\r\x1b[45C\x1b[47m    \x1b[0m\r\x1b[45C");
        if(!contain_char1(strcpy(temp,get_field(4,BLACK_TXT,WHITE_BCK))) && *temp!=0 && cred_strlen(temp)==3)
        {
            strcpy(books[available_books].isbn13,temp);
            strcat(books[available_books].isbn13,"-");
            break;
        }
    }
    printf("\x1b[5C");
    while(1)
    {
        printf("\r\x1b[53C\x1b[47m         \x1b[0m\r\x1b[53C");
        if(!contain_char1(strcpy(temp,get_field(10,BLACK_TXT,WHITE_BCK))) && *temp!=0 && cred_strlen(temp)==9)
        {
            strcat(books[available_books].isbn13,temp);
            strcat(books[available_books].isbn13,"-");
            break;
        }
    }
    printf("\x1b[5C");
    while(1)
    {
        printf("\r\x1b[67C\x1b[47m \x1b[0m\b");
        if(!contain_char1(strcpy(temp,get_field(2,BLACK_TXT,WHITE_BCK))) && *temp!=0)
        {
            strcat(books[available_books].isbn13,temp);
            break;
        }
    }
    printf("\x1b[2B\r\x1b[45C");
    if(!isbnflag)
    {
        while(1)
        {
            printf("\r\x1b[45C\x1b[47m         \x1b[0m\r\x1b[45C");
            if(!contain_char1(strcpy(temp,get_field(10,BLACK_TXT,WHITE_BCK))) && *temp!=0 && cred_strlen(temp)==9)
            {
                strcat(books[available_books].isbn10,temp);
                strcat(books[available_books].isbn10,"-");
                break;
            }
        }
        printf("\x1b[5C");
        while(1)
        {
            printf("\r\x1b[59C\x1b[47m \x1b[0m\b");
            if(!contain_char1(strcpy(temp,get_field(2,BLACK_TXT,WHITE_BCK))) && *temp!=0)
            {
                strcat(books[available_books].isbn10,temp);
                break;
            }
        }
    }
    printf("\x1b[2B");
    while(1)
    {
        printf("\r\x1b[45C\x1b[47m     \x1b[0m\x1b[5D");
        if(!contain_char1(strcpy(temp,get_field(6,BLACK_TXT,WHITE_BCK))) && *temp!=0)
        {
            books[available_books].pages=atoi(temp);
            break;
        }
    }
    printf("\x1b[2B\r\t\t\x1b[1C\x1b[32m %c\x1b[0m Add Quantity: ",175);
    while(1)
    {
        printf("\r\t\t\x1b[20C    \x1b[4D");
        if(!contain_char1(strcpy(temp,get_field(4,GREEN_TXT,BLACK_BCK))) && *temp!=0)
        {
            books[available_books].quantity=atoi(temp);
            break;
        }
    }
    available_books++;
    save_to_inventory();
    printf("\n\n\r\t\t\x1b[32m %c \x1b[0m Book added successfully.",254);
    printf("\x1b[0;0f\x1b[47m\x1b[30m < \x1b[0m ANY KEY\x1b[150;150f");
    getch();
add_books_back:
    return;
}



void manage_prices_menu()
{
    char temp[40],isbn_input[20],name_input[57];
    int ind;
    system("cls");
    printf("\x1b[47m\x1b[30m < \x1b[0m BACKSPACE");
    printf("\n\t\t\t\t\t      \x1b[32m\xB2\xB2\xB2 Adham's Bookstore System \xB2\xB2\xB2\x1b[0m\n\n");
    printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
    printf("\n\t|\t\x1b[42m 1 \x1b[0m Search\r\x1b[96C|\n\t%c< >\t---\r\x1b[96C%c\n\t|\t\x1b[42m 2 \x1b[0m Show all books\r\x1b[96C|",186,186);
    printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
    printf("\x1b[2A\r\t\x1b[2C");
manage_prices_menu_default:
    switch(getch())
    {
    case BKSP:
        break;
    case '1':
        printf("\n\r\x1b[0K\t%c\r\x1b[96C%c\r\x1b[0K\t|\r\x1b[96C|\x1b[2A\r\t\t\t\x1b[2C by \x1b[43m\x1b[30m 1 \x1b[0m Book Name\n\t\t\t      ---\n\t\t\t      \x1b[43m\x1b[30m 2 \x1b[0m ISBN-13\x1b[150;150f",186,186);
        switch(getch())
        {
        case BKSP:
            break;
        case '1': /// by name
            printf("\x1b[6;1f\r\x1b[0K\t|\r\x1b[96C|\n\r\x1b[0K\t%c\x1b[32m   %c ",186,254);
            printf("\x1b[0m Search by ");
            fieldspc(57,"book name",WHITE_BCK);
            printf("\r\x1b[96C%c\n\r\x1b[0K\t|\r\x1b[96C|\x1b[1A",186);
            while(1)
            {
                printf("\r\x1b[38C");
                if(*strcpy(temp,get_field(57,BLACK_TXT,WHITE_BCK))!=0)
                {
                    strcpy(name_input,temp);
                    break;
                }
            }
            printf("\n\n\n\t\t\t\t\t");
            loading(9999999);
            printf("\r\x1b[0K\n");
            searchby_name(name_input);
            if(!print_search_results()) while(1)if(getch()==BKSP)return;
            printf("\n\t\x1b[32mWhat would you like to do?\n\t   1- \x1b[0mModify book price\n\t\x1b[32m   2- \x1b[0mAdd discount (coming soon)");
            while(1)
            {
                switch(getch())
                {
                case '1':
                    printf("\n\n\x1b[32m %c \x1b[0mEnter the number of the book (Displayed in the green box) : ",254);
                    while(1)
                    {
                        printf("    \b\b\b\b");
                        ind=atoi(get_field(5,GREEN_TXT,BLACK_BCK));
                        if(ind>0 && ind<=search_results_count)
                            break;
                        printf("\r\x1b[63C");
                    }
                    price_modifier(ind-1,'s');
                    break;

                ///case '2': ///Add discount (coming soon)

                case BKSP:
                    return;
                default:
                    continue;
                }
                break;
            }
            break;
        case '2': /// by ISBN-13
            printf("\x1b[6;1f\r\x1b[0K\t|\r\x1b[96C|\n\r\x1b[0K\t%c\x1b[32m   %c ",186,254);
            printf("\x1b[0m Search by ISBN-13 : \x1b[47m     \x1b[0m - \x1b[47m           \x1b[0m - \x1b[47m   \x1b[0m");
            printf("\r\x1b[96C%c\n\r\x1b[0K\t|\r\x1b[96C|\x1b[1A",186);
            while(1)
            {
                printf("\r\x1b[35C\x1b[47m    \x1b[0m\x1b[3D");
                if(!contain_char1(strcpy(temp,get_field(4,BLACK_TXT,WHITE_BCK))) && *temp!=0 && cred_strlen(temp)==3)
                {
                    strcpy(isbn_input,temp);
                    strcat(isbn_input,"-");
                    break;
                }
            }
            printf("\x1b[5C");
            while(1)
            {
                printf("\r\x1b[43C\x1b[47m          \x1b[0m\x1b[9D");
                if(!contain_char1(strcpy(temp,get_field(10,BLACK_TXT,WHITE_BCK))) && *temp!=0 && cred_strlen(temp)==9)
                {
                    strcat(isbn_input,temp);
                    strcat(isbn_input,"-");
                    break;
                }
            }
            printf("\x1b[5C");
            while(1)
            {
                printf("\r\x1b[58C\x1b[47m \x1b[0m\b");
                if(!contain_char1(strcpy(temp,get_field(2,BLACK_TXT,WHITE_BCK))) && *temp!=0)
                {
                    strcat(isbn_input,temp);
                    break;
                }
            }
            reset_search_results();
            searchby_ISBN(isbn_input);
            printf("\n\n\n\t\t\t\t\t");
            loading(9999999);
            printf("\r\x1b[0K\n");
            if(!print_search_results()) while(1)if(getch()==BKSP)return;
            printf("\n\t\x1b[32mWhat would you like to do?\n\t   1- \x1b[0mModify book price\n\t\x1b[32m   2- \x1b[0mAdd discount (coming soon)");
            while(1)
            {
                switch(getch())
                {
                case '1':
                    price_modifier(0,'s');
                    break;

                ///case '2': ///Add discount (coming soon)

                case BKSP:
                    return;
                default:
                    continue;
                }
                break;
            }
        }
        break;
    case '2':
        printf("\n\n\n\t\t\t\t\t");
        loading(19999000);
        printf("\r\x1b[0K");
        if(!print_all_books())while(1)if(getch()==BKSP)return;
        printf("\n\t\x1b[32mWhat would you like to do?\n\t   1- \x1b[0mModify book price\n\t\x1b[32m   2- \x1b[0mAdd discount (coming soon)");
        while(1)
        {
            switch(getch())
            {
            case '1':
                printf("\n\n\x1b[32m %c \x1b[0mEnter the number of the book (Displayed in the green box) : ",254);
                while(1)
                {
                    printf("    \b\b\b\b");
                    ind=atoi(get_field(5,GREEN_TXT,BLACK_BCK));
                    if(ind>0 && ind<=available_books)
                        break;
                    printf("\r\x1b[63C");
                }
                price_modifier(ind-1,'p');
                break;

            ///case '2': ///Add discount (coming soon)

            case BKSP:
                return;
            default:
                continue;
            }
            break;
        }
        break;
    default:
        goto manage_prices_menu_default;
    }
}



void modify_admin_credentials()
{
    char temp[25],temp2[25];
    system("cls");
    printf("\n\t\t\t\t\t      \x1b[32m\xB2\xB2\xB2 Adham's Bookstore System \xB2\xB2\xB2\x1b[0m\n\n");
    printf("\n\t\t\x1b[32m%c\x1b[0m For an extra layer of protection, please confirm it is you by signing in again.\n",254);
    admin_login_menu();
start_modify_admin_credentials:
    system("cls");
    printf("\x1b[47m\x1b[30m < \x1b[0m BACKSPACE");
    printf("\n\t\t\t\t\t      \x1b[32m\xB2\xB2\xB2 Adham's Bookstore System \xB2\xB2\xB2\x1b[0m\n\n");
    printf("\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,203);
    printf("\n\t\t%c\x1b[32m Admin credentials \x1b[0m%c\r\x1b[47C%c",186,186,186);
    printf("\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\r\x1b[47C%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188,186);
    encdec1('d',admin_username);
    encdec1('d',admin_password);
    printf("\n\t\t%c \x1b[32m%c\x1b[0m Username : %s\r\x1b[47C%c",186,254,admin_username,186);
    printf("\n\t\t%c \x1b[32m%c\x1b[0m Password : ",186,254);
    for(int i=1; i<cred_strlen(admin_password); i++)
    {
        if(i==1)printf("%c%c",admin_password[0],admin_password[1]);
        else printf("*");
    }
    printf("\r\x1b[47C%c",186);
    encdec1('e',admin_username);
    encdec1('e',admin_password);
    printf("\n\t\t%c\r\x1b[47C%c",186,186);
    printf("\n\t\t%c\x1b[32m What would you like to do?\x1b[0m\r\x1b[47C%c",186,186);
    printf("\n\t\t%c\x1b[32m   1-\x1b[0m Change username\r\x1b[47C%c",186,186);
    printf("\n\t\t%c\x1b[32m   2-\x1b[0m Change password\r\x1b[47C%c",186,186);
    printf("\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202);

    while(1)
    {
        switch(getch())
        {
        case '1':
            printf("\x1b[9A");
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\x1b[48C%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202);
            printf("\x1b[7A\r\x1b[49C\x1b[32m%c\x1b[0m ",175);
            fieldspc(15,"New username",WHITE_BCK);
            while(1)
                if(*strcpy(temp,get_field(15,BLACK_TXT,WHITE_BCK))!=0)
                    break;
            printf("\n\n\n\n\r\x1b[52CSave changes? \x1b[30m\x1b[43m 1 \x1b[0m Yes \x1b[32m|\x1b[0m \x1b[30m\x1b[43m 2 \x1b[0m No\x1b[150;150f");
            while(1)
            {
                switch(getch())
                {
                case '1':
                    strcpy(admin_username,temp);
                    encdec1('e',admin_username);
                    save_to_schematics();
                    printf("\x1b[15;0f\r\x1b[43C");
                    loading(19999900);
                    printf("\x1b[8;0f\x1b[31C                \x1b[16D%s",temp);
                    printf("\x1b[3B\r\x1b[52C\x1b[33m               Saved!                \x1b[0m\x1b[150;150f");
                    break;
                case '2':
                    printf("\x1b[11;0f\r\x1b[52C\x1b[33m               Canceled.                \x1b[0m\x1b[150;150f");
                    break;
                default:
                    continue;
                }
                break;
            }
            break;
        case '2':
            printf("\x1b[9A");
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\r\x1b[97C%c",186);
            printf("\n\x1b[48C%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202);
            printf("\x1b[7A\r\x1b[49C\x1b[32m%c\x1b[0m ",175);
            fieldspc(15,"New password        ",WHITE_BCK);
            printf("\x1b[2B\r\x1b[49C\x1b[32m%c\x1b[0m ",175);
            fieldspc(15,"Confirm new password",WHITE_BCK);
            printf("\x1b[2A");
            while(1)
                if(*strcpy(temp,get_pass1(15,BLACK_TXT,WHITE_BCK))!=0)
                    break;
            printf("\x1b[2B");
            while(1)
            {
                printf("\r\x1b[74C\x1b[47m               \x1b[0m\x1b[14D");
                if(*strcpy(temp2,get_pass1(15,BLACK_TXT,WHITE_BCK))!=0 && !strcmp(temp,temp2))
                    break;
                printf("\r\x1b[91C\x1b[31m%c\x1b[0m\x1b[16D",254);
            }
            printf("\r\x1b[91C\x1b[32m%c\x1b[0m\n\n\n\r\x1b[52CSave changes? \x1b[30m\x1b[43m 1 \x1b[0m Yes \x1b[32m|\x1b[0m \x1b[30m\x1b[43m 2 \x1b[0m No\x1b[150;150f",251);
            while(1)
            {
                switch(getch())
                {
                case '1':
                    strcpy(admin_password,temp);
                    encdec1('e',admin_password);
                    save_to_schematics();
                    printf("\x1b[15;0f\r\x1b[43C");
                    loading(19999900);
                    printf("\x1b[9;31f                \x1b[15D");
                    for(int i=1; i<cred_strlen(temp); i++)
                    {
                        if(i==1)printf("%c%c",temp[0],temp[1]);
                        else printf("*");
                    }
                    printf("\x1b[12;52f\x1b[33m               Saved!                \x1b[0m\x1b[150;150f");
                    break;
                case '2':
                    printf("\x1b[12;52f\x1b[33m               Canceled.                \x1b[0m\x1b[150;150f");
                    break;
                default:
                    continue;
                }
                break;
            }
            break;
        case BKSP:
            return;
        default:
            break;
        }
        fordelay(190099999);
        goto start_modify_admin_credentials;
    }
}



void loading(long int t)
{
    int n = available_books/10 > 0 ? available_books/20 : 1;
    for(int i=0; i<n; i++)
    {
        int j;
        printf("\x1b[32m");
        for(j=0; j<8; j++)
        {
            fordelay(t);
            if(j)printf("   ");
            printf("%c",175);
        }
        printf("\x1b[33m");
        for(j=7; j>0; j--)
        {
            fordelay(t);
            if(j==7)printf("\b\b\b%c",174);
            else printf("\b\b\b\b\b%c",174);
        }
        printf("\x1b[32m\b\b\b");
        for(j=0; j<8; j++)
        {
            fordelay(t);
            if(j)printf("\x1b[3C");
            printf(" ");
        }
        printf("\x1b[0m\b\b\b");
        for(j=7; j>0; j--)
        {
            fordelay(t);
            if(j==7)printf(" ");
            else printf("\b\b\b\b\b ");
        }
        printf("\x1b[32m\b\b\b");
    }
    printf("\x1b[0m");
}



void price_modifier(int ind,char __MEANS)
{
    int pos,flag;
    char ch,new_price[15];
    float new_price_float;
start_price_modifier:
    pos=0;
    flag=0;
    strcpy(new_price,"000000000.000");
    system("cls");
    printf("\x1b[47m\x1b[30m < \x1b[0m BACKSPACE");
    printf("\n\t\t\t\t\t      \x1b[32m\xB2\xB2\xB2 Adham's Bookstore System \xB2\xB2\xB2\x1b[0m\n\n");
    if(__MEANS!='s')
    {
        printf("\t\t\t\t\x1b[32m%c \x1b[0m%s",175,books[ind].name);
        if(strcmp(books[ind].name_series,"N/A")) printf(": %s",books[ind].name_series);
    }
    else
    {
        printf("\t\t\t\t\x1b[32m%c \x1b[0m%s",175,search_results[ind].name);
        if(strcmp(search_results[ind].name_series,"N/A")) printf(": %s",search_results[ind].name_series);
    }
    printf(" \x1b[32m%c\x1b[0m",174);
    printf("\n\t\t\t\tPress ENTER to continue...");
    printf("\n\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203);
    printf("\n\t\t\t\t%c\x1b[32m %c\x1b[0m New Price:\r\x1b[93C%c",186,254,186);
    printf("\n\t\t\t\t%c\r\x1b[93C%c\r\x1b[53C$000,000,000 . 00",186,186);
    printf("\n\t\t\t\t%c\r\x1b[93C%c",186,186);
    printf("\n\t\t\t\t%c\r\x1b[93C%c",186,186);
    printf("\n\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202);
    printf("\x1b[150;150f");
    while(1)
    {
        switch(getch())
        {
        case ENTER:
            break;
        case BKSP:
            return;
        default:
            continue;
        }
        break;
    }
    printf("\x1b[0;0f\x1b[0K\x1b[5;0f\x1b[0K");
    printf("\x1b[12;51f\x1b[43m\x1b[30m ? \x1b[0m Use TAB to navigate & BACKSPACE to reset");
    printf("\x1b[8;55f");
    while(1)
    {
        if(pos==3 || pos==7)
        {
            printf(",");
            pos++;
        }
        if(pos==12)
        {
            printf(".");
            pos++;
        }
        if(pos==11 || pos==13)
        {
            printf("\x1b[1C");
            pos++;
            continue;
        }
        printf("\x1b[9;55f                   \x1b[9;%df\x1b[32m%c\x1b[0m\x1b[8;%df",55+pos,215,55+pos);
        ch=getch();
        if(ch==ENTER)
        {
            new_price[14]=0;
            flag=1;
            break;
        }
        else if(ch==BKSP) goto start_price_modifier;
        else if(ch==TAB)
            while(1)
            {
                if(pos==15)
                {
                    printf("\x1b[8;55f");
                    pos=0;
                    break;
                }
                else if(pos<3 || (pos>3 && pos<7) || (pos>7 && pos<11) || (pos>13 && pos<15))
                {
                    pos++;
                    printf("\x1b[1C");
                    break;
                }
            }
        else if(isalnum(ch) && !isalpha(ch))
            while(1)
            {
                if(pos==15)
                {
                    new_price[pos-4]=ch;
                    printf("%c\x1b[8;55f",ch);
                    pos=0;
                    break;
                }
                else if(pos<3 || (pos>3 && pos<7) || (pos>7 && pos<11) || (pos>13 && pos<15))
                {
                    if(pos>7 && pos<11)new_price[pos-2]=ch;
                    else if(pos>3 && pos<7) new_price[pos-1]=ch;
                    else if(pos>13 && pos<15) new_price[pos-4]=ch; //000000000.00
                    else new_price[pos]=ch;                        //012345678901
                    pos++;
                    printf("%c\x1b[1C\b",ch);

                    break;
                }
            }
        if(flag)break;
    }
    float old;
    if(__MEANS=='s') old=search_results[ind].price;
    else old=books[ind].price;
    new_price_float=atof(new_price);
    printf("\x1b[0;0f\x1b[0K");
    printf("\x1b[9;55f                   \x1b[12;0f\x1b[0K");
    printf("\n\t\t\t\t\x1b[32m%c\x1b[0mOld price: \x1b[31m$%.2f\x1b[0m",179,old);
    printf("\n\t\t\t\t\x1b[32m%c\x1b[0mNew price: \x1b[33m$%.2f\x1b[0m",179,new_price_float);
    printf("\n\t\t\t\t\x1b[32m%c\x1b[0m",179);
    printf("\n\t\t\t\t\x1b[32m%c %c \x1b[0mConfirm changes?\n\t\t\t\t     \x1b[32m1-\x1b[0m Yes\n\t\t\t\t\x1b[32m     2-\x1b[0m No \x1b[150;150f",179,254);
    while(1)
    {
        switch(getch())
        {
        case '1':
            if(__MEANS=='s')
            {
                for(int i=0; i<available_books; i++)
                {

                    if(!strcasecmp(search_results[ind].name,books[i].name) && !strcasecmp(search_results[ind].name_series,books[i].name_series))
                    {
                        books[i].price = new_price_float;
                        break;
                    }
                }
            }
            else books[ind].price = new_price_float;
            save_to_inventory();
            printf("\x1b[19;0f\t\t\t\t\x1b[32m %c Saved!\x1b[0m",251);
            printf("\x1b[0;0f\x1b[47m\x1b[30m < \x1b[0m BACKSPACE\x1b[150;150f");
            break;
        case '2':
            printf("\x1b[19;0f\t\t\t\t\x1b[33m Canceled.\x1b[0m");
            printf("\x1b[0;0f\x1b[47m\x1b[30m < \x1b[0m BACKSPACE\x1b[150;150f");
            break;
        default:
            continue;
        }
        break;
    }
}



void transaction_history_menu()
{
    system("cls");
    printf("\x1b[0;0f\x1b[47m\x1b[30m < \x1b[0m BACKSPACE");
    printf("\n\t\t\t\t\t      \x1b[32m\xB2\xB2\xB2 Adham's Bookstore System \xB2\xB2\xB2\x1b[0m\n\n");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tCOMING SOON! :)\x1b[150;150f");
    while(1)if(getch()==BKSP)return;
}



void add_offers_menu()
{
    system("cls");
    printf("\x1b[0;0f\x1b[47m\x1b[30m < \x1b[0m BACKSPACE");
    printf("\n\t\t\t\t\t      \x1b[32m\xB2\xB2\xB2 Adham's Bookstore System \xB2\xB2\xB2\x1b[0m\n\n");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tCOMING SOON! :)\x1b[150;150f");
    while(1)if(getch()==BKSP)return;
}
