///admin menus
void admin_login_menu();
void admin_main_menu();
void check_inventory_menu();
void add_books_menu();
void manage_prices_menu();
void price_modifier(int,char);
void modify_admin_credentials();
void transaction_history_menu();
void add_offers_menu();

///customer menus
void customer_login_menu();
void customer_main_menu();
void customer_signin_menu();


int check_admin_credentials(char*,char*);
void load_inventory();
void save_to_inventory();
void book_sort();
void calc_total_quantity();
void searchby_ISBN(char*);
int print_search_results();
void reset_search_results();
int print_all_books();
void searchby_name(char*);
void results_sortby_name(char*);
void save_to_schematics();

void delay(long int);
void fordelay(int);
void loading(long int);






void fieldspc(int,char*,int);
char *get_pass1(int, int, int);
char *get_pass2(int,int,int);
char *get_field(int,int,int);
int valid_email_format(char*);
void encdec1(char,char*);
int cred_strlen(char*);
int is_special(char);
int contain_special(char*);
int contain_char1(char*);
int contain_char2(char*);
