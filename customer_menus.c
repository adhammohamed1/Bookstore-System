#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "data.h"
#include "func.h"


void customer_login_menu()
{
    printf("\x1b[0;0f\x1b[47m\x1b[30m < \x1b[0m BACKSPACE\x1b[9;0f");
    printf("\n\n\t\t\t\t%c \x1b[32mHave an account?\x1b[0m",179);
    printf("\n\t\t\t\t%c \x1b[42m 1 \x1b[0m Sign in!\x1b[0K",179);
    printf("\n\n\t\t\t\t%c \x1b[32mDon't?\x1b[0m",179);
    printf("\n\t\t\t\t%c \x1b[42m 2 \x1b[0m Register now!",179);
    printf("\n\t\t\t\t%c \x1b[32m\t  or\x1b[0m",179);
    printf("\n\t\t\t\t%c \x1b[42m 3 \x1b[0m Log in as a guest.",179);
    printf("\x1b[150;150f");
    while(1)
    {
        switch(getch())
        {
        case BKSP:
            return;
        case '1':
            system("cls");
            printf("\x1b[47m\x1b[30m < \x1b[0m BACKSPACE");
            printf("\n\t\t\t\t\t\x1b[32m   \xB2\xB2\xB2 Adham's Bookstore System \xB2\xB2\xB2\x1b[0m\n\n\n");
            printf("\n\t\tYou are about to access the login screen. Press ENTER to continue or BACKSPACE to go back...");
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
            customer_signin_menu();
            break;
        case '2':
            system("cls");
            printf("\x1b[47m\x1b[30m < \x1b[0m BACKSPACE");
            printf("\n\t\t\t\t\t\x1b[32m   \xB2\xB2\xB2 Adham's Bookstore System \xB2\xB2\xB2\x1b[0m\n\n\n");
            printf("\n\t\tYou are about to access the registration screen. Press ENTER to continue or BACKSPACE to go back...");
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
            break;

        case '3':

            break;
        }
    }
}



void customer_signin_menu()
{
    int inv=0;
    while(1)
    {
        char username_attempt[25],password_attempt[25];
        system("cls");
        printf("\n\t\t\t\t\t\x1b[32m   \xB2\xB2\xB2 Adham's Bookstore System \xB2\xB2\xB2\x1b[0m\n\n\n");
        printf("\n\t\t\t\tLog in");
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
        /*if(check_admin_credentials(username_attempt,password_attempt))
        {
            inv=0;
            printf("\n\n\n\x1b[0J\t\t\t\t\t\t\t\t\t\x1b[32m  Access Granted! \x1b[0m\n\n\t\t\t\t");
            system("pause");
            break;
        }
        else inv=1;*/
        printf("\x1b[2B\r\x1b[0K");
        for(int i=1; i<=7; i++) printf("\x1b[1A\r\x1b[0K");
        printf("\x1b[1A\r");
        break;
    }
}



void customer_main_menu()
{



}
