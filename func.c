#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "data.h"
#include "func.h"





void fordelay(int j)
{
    int i,k;
    for(i=0; i<j; i++)
        k=i;
    k++;
}



void delay(long int t)
{
    long int i,j,temp;
    t*=10000000;
    for(i=0; i<t; i++)
        for(j=0; j<t; j++)
        {
            temp=j;
            j=i;
            j=temp;
        }
}



void load_inventory()
{
    available_books=0;
    f=fopen("bookstore_inventory.txt","r");
    while(!feof(f))
    {
        fscanf(f," %[^,], ",books[available_books].name);
        fscanf(f," %[^,], ",books[available_books].name_series);
        fscanf(f," %hu, ",&books[available_books].part);
        fscanf(f," %[^,], ",books[available_books].author);
        fscanf(f," %[^,], ",books[available_books].type);
        fscanf(f," %d, ",&books[available_books].pages);
        fscanf(f," %f, ",&books[available_books].price);
        fscanf(f," %hu, ",&books[available_books].quantity);
        fscanf(f," %hu%hu%hu, ",&books[available_books].releasedate.day,&books[available_books].releasedate.month,&books[available_books].releasedate.year);
        fscanf(f," %[^,], ",books[available_books].isbn13);
        fscanf(f," %s\n",books[available_books].isbn10);
        if(books[available_books].pages)
        {
            available_books++;
        }
    }
    fclose(f);
    book_sort();
}



void save_to_inventory()
{
    f=fopen("bookstore_inventory.txt","w");
    for(int i=0; i<available_books; i++)
    {
        fprintf(f,"%s, ",books[i].name);
        fprintf(f,"%s, ",books[i].name_series);
        fprintf(f,"%hu, ",books[i].part);
        fprintf(f,"%s, ",books[i].author);
        fprintf(f,"%s, ",books[i].type);
        fprintf(f,"%d, ",books[i].pages);
        fprintf(f,"%.2f, ",books[i].price);
        fprintf(f,"%hu, ",books[i].quantity);
        fprintf(f,"%u %u %u, ",books[i].releasedate.day,books[i].releasedate.month,books[i].releasedate.year);
        fprintf(f,"%s, ",books[i].isbn13);
        fprintf(f,"%s\n",books[i].isbn10);
    }
    fclose(f);
}



void initiate_system_schematics()
{
    if(!(f=fopen("system_sc.txt","r")))
    {
        f=fopen("system_sc.txt","w");
        fprintf(f,"%s, %s\n%d","oq}w{","oq}w{",0); // "oq}w{" = "admin"
        strcpy(admin_username,"oq}w{"); // "oq}w{" = "admin"
        strcpy(admin_password,"oq}w{"); // "oq}w{" = "admin"
        books_sold=0;
    }
    else
    {
        fscanf(f," %[^,], ",admin_username);
        fscanf(f," %s\n",admin_password);
        fscanf(f," %hu, ",&books_sold);
    }
    fclose(f);
    if(!(f=fopen("bookstore_inventory.txt","r"))) f=fopen("bookstore_inventory.txt","w");
    load_inventory();
    fclose(f);
    if(!(f=fopen("member_info_sc.txt","r")))
    {
        f=fopen("system_info_sc.txt","w");
        books_sold=0;
    }
    else
    {
        fscanf(f," %[^,], ",admin_username);
        fscanf(f," %s\n",admin_password);
        fscanf(f," %hu, ",&books_sold);
    }
    fclose(f);
}



void save_to_schematics()
{
    f=fopen("system_sc.txt","w");
    fprintf(f,"%s, %s\n%hu",admin_username,admin_password,books_sold);
    fclose(f);
}



int check_admin_credentials(char* __USERNAME,char* __PASSWORD)
{
    int u=strcasecmp(__USERNAME,admin_username);
    int p=strcmp(__PASSWORD,admin_password);
    if(!u && !p)return 1;
    else return 0;
}



void book_sort()
{
    int temp=9999;
    for(int i=0; i<available_books-1; i++)
    {
        for(int j=0; j<available_books-1; j++)
        {
            if(strcasecmp(books[j].author,books[j+1].author)>0)
            {
                books[temp]=books[j];
                books[j]=books[j+1];
                books[j+1]=books[temp];
            }
        }
    }
    for(int i=0; i<available_books-1; i++)
    {
        for(int j=0; j<available_books-1; j++)
        {
            if(strcasecmp(books[j].name,books[j+1].name)>0 && !(strcasecmp(books[j].author,books[j+1].author)))
            {
                books[temp]=books[j];
                books[j]=books[j+1];
                books[j+1]=books[temp];
            }
        }
    }
    for(int i=0; i<available_books-1; i++)
    {
        for(int j=0; j<available_books-1; j++)
        {
            if(books[j].part>books[j+1].part && !(strcasecmp(books[j].name,books[j+1].name)) && !(strcasecmp(books[j].author,books[j+1].author)))
            {
                books[temp]=books[j];
                books[j]=books[j+1];
                books[j+1]=books[temp];
            }
        }
    }
}



void calc_total_quantity()
{
    total_quantity=0;
    for(int i=0; i<available_books; i++)
        total_quantity+=books[i].quantity;
}



void searchby_ISBN(char *__ISBN)
{
    int j=0;
    for(int i=0; i<available_books; i++)
    {
        if(!strcmp(books[i].isbn13,__ISBN))
        {
            search_results[j++]=books[i];
        }
    }
}



int print_search_results()
{
    int i=0;
    if(!search_results[0].releasedate.day)
    {
        printf("\n\t\x1b[42m %c \x1b[0m",254);
        printf("   No results were found :(\x1b[150;150f");
        return 0;
    }
    while(search_results[i].releasedate.day!=0)
    {
        if(i)printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
        printf("\n\t\x1b[42m %d \x1b[0m",i+1);
        printf("\n\t\tBook Name  : %s",search_results[i].name);
        if(strcmp(search_results[i].name_series,"N/A")) printf(": %s",search_results[i].name_series);
        printf("\n\t\tAuthor     : %s",search_results[i].author);
        printf("\n\t\tISBN-13    : %s",search_results[i].isbn13);
        if(strcmp(search_results[i].isbn10,"N/A")) printf("\n\t\tISBN-10    : %s",search_results[i].isbn10);
        printf("\n\t\tBook Price : \x1b[33m$%.2f\x1b[0m\n",search_results[i].price);
        i++;
    }
    return 1;
}



void reset_search_results()
{
    int i=0;
    while(search_results[i].releasedate.day!=0)
    {
        search_results[i].releasedate.day=0;
        i++;
    }
}



int print_all_books()
{
    int i=0;
    if(!books[0].releasedate.day)
    {
        printf("\n\t\x1b[42m %c \x1b[0m",254);
        printf("   No results were found :(\x1b[0;0f\x1b[47m\x1b[30m < \x1b[0m ANY KEY\x1b[150;150f");
        return 0;
    }
    while(books[i].releasedate.day!=0)
    {
        if(i)printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
        printf("\n\t\x1b[42m %d \x1b[0m",i+1);
        printf("\n\t\tBook Name  : %s",books[i].name);
        if(strcmp(books[i].name_series,"N/A")) printf(": %s",books[i].name_series);
        printf("\n\t\tAuthor     : %s",books[i].author);
        printf("\n\t\tISBN-13    : %s",books[i].isbn13);
        if(strcmp(books[i].isbn10,"N/A")) printf("\n\t\tISBN-10    : %s",books[i].isbn10);
        printf("\n\t\tBook Price : \x1b[33m$%.2f\x1b[0m\n",books[i].price);
        i++;
    }
    return 1;
}


void searchby_name(char __NAME[])
{
    char temp[41],temp2[41];
    reset_search_results();
    int j=0, i=0;
    for(; i<available_books; i++)
    {
        if(!strcasecmp(__NAME,books[i].name))
        {
            search_results[j++]=books[i];
        }
        if(!strcasecmp(__NAME,books[i].name_series))
        {
            search_results[j++]=books[i];
        }
        strcpy(temp,books[i].name);
        strcpy(temp2,books[i].name_series);
        strcpy(temp,strcat(strcat(temp," "),temp2));
        if(!strcasecmp(__NAME,temp))
        {
            search_results[j++]=books[i];
        }
    }
    search_results_count=j;
}



void results_sortby_name(char *__PARTNAME)
{
    int temp=9999;
    for(int i=0; search_results[i].releasedate.day!=0; i++)
    {
        for(int j=0; search_results[j].releasedate.day!=0; j++)
        {
            if(!strcasecmp(books[j].name_series,__PARTNAME) && j)
            {
                books[temp]=books[j];
                books[j]=books[j-1];
                books[j-1]=books[temp];
            }
        }
    }
}




