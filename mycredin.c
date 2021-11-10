#ifndef MYCREDIN_H_INCLUDED
#define MYCREDIN_H_INCLUDED

#define ENTER 13
#define BKSP 8
#define TAB 9

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "func.h"

char specialchars[]="!@#$%^&*()_+-=\\| \t\n][/?.>,<`~";

/// This function generates a field in which the user can enter their input
/// stdlib.h & conio.h must be included before this header in order for this function to work
/// system("cls"); must be used at any point before this function in order for it to work properly
void fieldspc(int __FIELDSIZE, char *__FIELDNAME, int __BCKGRND)
{
    printf("\x1b[0m");
    printf("%s : ",__FIELDNAME);
    printf("\x1b[%dm",__BCKGRND);
    for(int i=0; i<=__FIELDSIZE; i++)
        printf(" ");
    printf("\x1b[%dD",__FIELDSIZE);
    printf("\x1b[0m");
}



/// This functions takes passwords from the user and hides the input in real time. (1st variation)
/// stdlib.h & conio.h must be included before this header in order for this function to work
/// system("cls"); must be used at any point before this function in order for it to work properly
char *get_pass1(int __PSWDSIZE, int __TXTCLR, int __BCKGRND)
{
    printf("\x1b[%dm\x1b[%dm", __BCKGRND, __TXTCLR);
    char *pswd = malloc(__PSWDSIZE), ch;
    int i=0;
    while(1)
    {
        ch = getch();
        if(ch == ENTER || ch == TAB)
        {
            pswd[i]=0;
            break;
        }
        else if(ch == BKSP)
        {
            if(i>0)
            {
                i--;
                printf("\b \b");
            }
        }
        else if(i<__PSWDSIZE-1)
        {
            pswd[i] = ch;
            if(i>0)printf("\b*");
            printf("%c",ch);
            i++;
        }
    }
    printf("\x1b[0m");
    return pswd;
}



/// This functions takes passwords from the user and hides the input in real time. (2nd variation)
/// stdlib.h & conio.h must be included before this header in order for this function to work
/// system("cls"); must be used at any point before this function in order for it to work properly
char *get_pass2(int __PSWDSIZE, int __TXTCLR, int __BCKGRND)
{
    printf("\x1b[%dm\x1b[%dm", __BCKGRND, __TXTCLR);
    char *pswd = malloc(__PSWDSIZE), ch;
    int i=0;
    while(1)
    {
        ch = getch();
        if(ch == ENTER || ch == TAB)
        {
            pswd[i]=0;
            break;
        }
        else if(ch == BKSP)
        {
            if(i>0)
            {
                i--;
                printf("\b \b");
            }
        }
        else if(i<__PSWDSIZE-1)
        {
            pswd[i] = ch;
            printf("* \b");
            i++;
        }
    }
    printf("\x1b[0m");
    return pswd;
}



/// This functions takes a non-password input from the user.
/// stdlib.h & conio.h must be included before this header in order for this function to work
/// system("cls"); must be used at any point before this function in order for it to work properly
char *get_field(int __FIELDSIZE, int __TXTCLR, int __BCKGRND)
{
    printf("\x1b[%dm\x1b[%dm", __BCKGRND, __TXTCLR);
    char *field=malloc(__FIELDSIZE),ch;
    int i=0;
    while(1)
    {
        ch = getch();
        if(ch == ENTER || ch == TAB)
        {
            field[i]=0;
            break;
        }
        else if(ch == BKSP)
        {
            if(i>0)
            {
                i--;
                printf("\b \b");
            }
        }
        else if(i<__FIELDSIZE-1)
        {
            field[i] = ch;
            printf("%c",ch);
            i++;
        }
    }
    printf("\x1b[0m");
    return field;
}



/// This boolean function validates a given email format.
/// *!* Validates format ONLY *!*
int valid_email_format(char *__ADDRESS)
{
    if(is_special(__ADDRESS[0])) return 0;
    int k=0, len=cred_strlen(__ADDRESS), dots=0;
    for(int i=1 ; ( i<len && !k ) ; i++)
    {
        if(__ADDRESS[i]=='@')
        {
            k=1;
            if( is_special(__ADDRESS[i-1]) || is_special(__ADDRESS[(i++)+1]) ) return 0;
            for(; i<len; i++)
            {
                if(__ADDRESS[i]=='.') dots++;
                if(dots!=1) return 0;
                else if(is_special(__ADDRESS[i])) return 0;
            }
        }
    }
    if(!k) return 0;
    if(!(__ADDRESS[len-4]=='.' && __ADDRESS[len-3]=='c' && __ADDRESS[len-2]=='o' && __ADDRESS[len-1]=='m')) return 0;
    return 1;
}



void encdec1(char c,char* __stR)
{
    int swtch=0;
    if(c=='e')
    {
        for(int i=0; i<cred_strlen(__stR); i++)
        {
            if(!(i%3))
            {
                *(__stR+i)+=14;
                swtch=1;
            }
            else if(swtch)
            {
                *(__stR+i)+=13;
                swtch=0;
            }
            else *(__stR+i)+=16;
        }
    }
    else if(c=='d')
    {
        for(int i=0; i<cred_strlen(__stR); i++)
        {
            if(!(i%3))
            {
                *(__stR+i)-=14;
                swtch=1;
            }
            else if(swtch)
            {
                *(__stR+i)-=13;
                swtch=0;
            }
            else *(__stR+i)-=16;
        }
    }
}






#endif // MYCREDIN_H_INCLUDED

//This function is similar to string.h's strlen();
int cred_strlen(char* __stR)
{
    int i;
    for(i=0; __stR[i]!=0; i++);
    return i;
}


//This function indicates whether the given character is a special symbol or not
int is_special(char __CHARACTER)
{
    int len = cred_strlen(specialchars);
    for(int i=0; i<len; i++)
        if(__CHARACTER==specialchars[i]) return 1;
    return 0;
}


//This function indicates whether the given string contains a special symbol or not
int contain_special(char *s)
{
    int len1 = cred_strlen(specialchars);
    int len2 = cred_strlen(s);
    for(int i=0; i<len2; i++)
        for(int j=0; j<len1; j++)
            if(s[i]==specialchars[j]) return 1;
    return 0;
}


//This function indicates whether the given string contains a special symbol or not
int contain_char1(char *s)
{
    int len1 = cred_strlen(specialchars);
    int len2 = cred_strlen(s);
    for(int i=0; i<len2; i++)
        for(int j=0; j<len1; j++)
            if((s[i]==specialchars[j]) || isalpha(s[i])) return 1;
    return 0;
}



//This function indicates whether the given string contains a special symbol or not (disregarding dots)
int contain_char2(char *s)
{
    int len1 = cred_strlen(specialchars);
    int len2 = cred_strlen(s);
    for(int i=0; i<len2; i++)
        for(int j=0; j<len1; j++)
            if((s[i]==specialchars[j] && s[i]!='.') || isalpha(s[i])) return 1;
    return 0;
}


