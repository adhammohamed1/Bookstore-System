#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "func.h"
#include "data.h"

void first_main_menu();

int main()
{
    initiate_system_schematics();
    while(1)first_main_menu();
    return 0;
}

void first_main_menu()
{
    system("cls");
    printf("\n\t\t\t\t\t\x1b[32m   \xB2\xB2\xB2 Adham's Bookstore System \xB2\xB2\xB2\x1b[0m\n\n\n");
    printf("\n\t\t\t\t      \x1b[32m%c\x1b[0m Welcome to Adham's Bookstore System! \x1b[32m%c\x1b[0m\n\n",254,254);
    printf("\n\t\t\t\t\x1b[32m%c\x1b[0m You are a:",215);
    printf("\n\t\t\t\t\x1b[32m%c  1-\x1b[0m Customer",186);
    printf("\n\t\t\t\t\x1b[32m%c  2-\x1b[0m System User",215);
    printf("\n\t\t\t\t\t\t< >\b\b");
    while(1)
    {
        switch(getch())
        {
        case '1':
            customer_login_menu();
            break;
        case '2':
            admin_login_menu();
            admin_main_menu();
            break;
        default:
            continue;
        }
        break;
    }
}
