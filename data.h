
#define ENTER 13
#define BKSP 8
#define TAB 9



int cred_strlen(char*);
int is_special(char);

enum TXTCLR
{
    BLACK_TXT=30,
    RED_TXT=31,
    GREEN_TXT=32,
    YELLOW_TXT=33,
    BLUE_TXT=34,
    PURPLE_TXT=35,
    CYAN_TXT=36,
    WHITE_TXT=37
};

enum BCKGRND
{
    BLACK_BCK=40,
    RED_BCK=41,
    GREEN_BCK=42,
    YELLOW_BCK=43,
    BLUE_BCK=44,
    PURPLE_BCK=45,
    CYAN_BCK=46,
    WHITE_BCK=47
};


char admin_username[25],admin_password[25];
char active_username[25],active_password[25];
FILE *f;
unsigned short int available_books;
unsigned short int search_results_count;
unsigned short int books_sold;
unsigned int total_quantity;

typedef struct
{
    unsigned short int day;
    unsigned short int month;
    unsigned short int year;
} Date;

typedef struct
{
    char name[40];
    char name_series[40];
    char author[40];
    char isbn13[20];
    char isbn10[20];
    char type[20];
    float price;
    unsigned int pages;
    unsigned short int quantity;
    unsigned short int part;
    Date releasedate;
} Book;

typedef struct
{
    char first_name[25];
    char last_name[25];
    Date dob;
    Book wishlist[25];
    float wallet;
    Book cart[25];
} Customer;

Book books[10000];
Book search_results[10000];
Book incart[25];
void initiate_system_schematics();
