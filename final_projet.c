#include <stdio.h>
#define nsize 15
#define esize 20
#define produc 100
#define email_size 30

#define RST   "\033[0m"
#define BWHT "\e[1;37m"
#define RED   "\033[31m"
#define GRN   "\033[32m"
#define YEL   "\033[33m"
#define BLU   "\033[34m"
#define MAG   "\033[35m"
#define CYN   "\033[36m"
#define WHT   "\033[37m"
#define BYEL "\e[1;33m"
#define UCYN "\e[4;36m"
#define BGRN "\e[1;32m"
#define BMAG "\e[1;35m"
#define BBLU "\e[1;34m"
#define BCYN "\e[1;36m"
#define BRED "\e[1;31m"





typedef struct 
{
    int idClient;
    char name[nsize];
    char lastName[nsize];
    char email[email_size];
    int solde;    
}Client;

typedef struct
{
    int idProduct;
    char nameOP[nsize];
    char category[nsize];
    float prix;
    int stock;
    char description[100];
}Product;


int my_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
    
}
char *my_strcat(char *s1, char *s2)
{
    int i = my_strlen(s1);
    int x = 0;
    while (s2[x])
    {
        s1[i] = s2[x];
        i++;
        x++;
    }
    s1[i] = '\0';
    return(s1);
}
char *my_strcpy(char *s1, char *s2)
{
    char *save = s1;
    while(*s1++ = *s2++);
    *s1 = '\0';
    return (save);
}
int my_strcmp(char s1[],char s2[])
{
    int i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }
    return((unsigned char)s1[i] - (unsigned char )s2[i]);
}
int find_product(Product pp[], char iname[],int counter)
{
    for (int x = 0;x<counter;x++){
        if (my_strcmp(pp[x].nameOP,iname) == 0){
            return(x);
        }
    }
    return(-1);
}

void sort_by_price(Product p[], int nb)
{
    for (int i = 0; i < nb - 1; ++i)
        for (int j = 0; j < nb - i - 1; ++j)
            if (p[j].prix > p[j + 1].prix) {
                Product tmp = p[j];
                p[j]      = p[j + 1];
                p[j + 1]  = tmp;
            }
}
int main()
{
    Client c1;
    c1.idClient = 1;
    my_strcpy(c1.name, "yassine");
    my_strcpy(c1.lastName, "karam");
    my_strcpy(c1.email,c1.name);
    my_strcat(c1.email,".");
    my_strcat(c1.email,c1.lastName);
    my_strcat(c1.email,"@gmail.com");
    c1.solde = 0;

    Product p[produc];
    p[0].idProduct = 8;
    my_strcpy(p[0].nameOP,"Phone");
    p[0].prix = 250.50;
    my_strcpy(p[0].category, "Electronic");
    p[0].stock = 20;
    my_strcpy(p[0].description, "High performance");

    p[1].idProduct = 10;
    my_strcpy(p[1].nameOP, "Laptop");
    p[1].prix = 899.99;
    my_strcpy(p[1].category, "Electronic");
    p[1].stock = 15;
    my_strcpy(p[1].description, "Lightweight and powerful");

    p[2].idProduct = 6;
    my_strcpy(p[2].nameOP, "Desk_Chair");
    p[2].prix = 120.00;
    my_strcpy(p[2].category, "Furniture");
    p[2].stock = 10;
    my_strcpy(p[2].description, "Ergonomic and comfortable");

    p[3].idProduct = 2;
    my_strcpy(p[3].nameOP, "Notebook");
    p[3].prix = 2.50;
    my_strcpy(p[3].category, "Stationery");
    p[3].stock = 200;
    my_strcpy(p[3].description, "100 pages notebook");

    p[4].idProduct = 1;
    my_strcpy(p[4].nameOP, "Pen");
    p[4].prix = 1.20;
    my_strcpy(p[4].category, "Stationery");
    p[4].stock = 300;
    my_strcpy(p[4].description, "Blue ink ballpoint pen");

    p[5].idProduct = 5;
    my_strcpy(p[5].nameOP, "Headphones");
    p[5].prix = 75.00;
    my_strcpy(p[5].category, "Electronic");
    p[5].stock = 25;
    my_strcpy(p[5].description, "Noise cancelling");

    p[6].idProduct = 4;
    my_strcpy(p[6].nameOP, "Backpack");
    p[6].prix = 45.00;
    my_strcpy(p[6].category, "Accessories");
    p[6].stock = 50;
    my_strcpy(p[6].description, "Waterproof and spacious");

    p[7].idProduct = 3;
    my_strcpy(p[7].nameOP, "Water Bottle");
    p[7].prix = 15.00;
    my_strcpy(p[7].category, "Accessories");
    p[7].stock = 80;
    my_strcpy(p[7].description, "Keeps drinks cold for 24h");

    p[8].idProduct = 7;
    my_strcpy(p[8].nameOP, "Smart Watch");
    p[8].prix = 199.99;
    my_strcpy(p[8].category, "Electronic");
    p[8].stock = 12;
    my_strcpy(p[8].description, "Tracks fitness and notifications");

    p[9].idProduct = 9;
    my_strcpy(p[9].nameOP, "Tablet");
    p[9].prix = 320.00;
    my_strcpy(p[9].category, "Electronic");
    p[9].stock = 18;
    my_strcpy(p[9].description, "10-inch display, fast performance");


    int choice;
    int profile;
    int balance = 0;
    int balan;
    int prod;
    char prosear[nsize];
    int proind;
    int sizepro = 10;
    int chosenpro = 0;
    int idbuy;
    float totalearned = 0;
    int totalsells = 0;
    c1.solde = 0;
    int totpro = 0;
    int so;


    do
    {
        printf(UCYN "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" RST);
        printf(BYEL "============= Menu ================\n" RST);
        printf(UCYN "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" RST);
        printf(CYN " * 1.~ -- Customer profile management\n" RST);
        printf(CYN " * 2.~ -- Virtual balance management\n" RST);
        printf(CYN " * 3.~ -- Product consultation\n" RST);
        printf(CYN " * 4.~ -- Make a purchase\n" RST);
        printf(CYN " * 5.~ --  The statistics\n" RST);
        printf(RED " * 0.~ -- Exit application\n\n" RST);
        printf(CYN "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" RST);
        printf(BLU " === Enter a choice ===> : " RST);
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            do
            {
                printf(BCYN "----- Customer profile management -----\n\n" RST);
                printf(MAG "=> 1-  Show information of client\n" RST);
                printf(MAG "=> 2-  Editing profile\n" RST);
                printf(MAG "=> 0-  Menu principale\n" RST);
                printf(CYN "\n---> enter a choice : " RST);
                scanf("%d",&profile);
                switch (profile)
                {
                case 1:
                    printf(UCYN "\n\t=== Client Profile ===\n" RST);
                    printf(BCYN"| ID    |   name   | lastname |          email         |\n"RST);
                    printf (BWHT "\n|ID : %d | %s | | %s |  | %s | \n" RST,c1.idClient,c1.name,c1.lastName,c1.email);
                    break;
                case 2:
                    printf(BBLU "\t#### Editing the profile ####\n" RST);
                    printf(CYN "\n *---* Enter the ID of the client : " RST);
                    scanf("%d",&c1.idClient);
                    printf(CYN " *---* Enter the name of the client : "RST);
                    scanf("%s",c1.name);
                    printf(CYN " *---* Enter the last name of the client : "RST);
                    scanf("%s",c1.lastName);
                    my_strcpy(c1.email,c1.name);
                    my_strcat(c1.email,".");
                    my_strcat(c1.email,c1.lastName);
                    my_strcat(c1.email,"@gmail.com");
                    break;
                
                
                default:
                    printf (RED "\n ! Please enter a valid choice !\n" RST);
                break;
                }

            } while (profile != 0);
            
            
            
            break;
        case 2:
            do
            {
                printf(BGRN "  ----- Virtual balance management -----\n\n" RST);
                printf(BMAG "=> 1-  Show the balance\n" RST);
                printf(BMAG "=> 2-  Add money to the balance\n"RST);
                printf(BMAG "=> 0-  Menu principale\n"RST);
                printf(CYN "\n ---- Enter a choice --> : " RST);
                scanf("%d",&balan);
                switch (balan)
                {
                case 1:
                    printf(BMAG "-====- Your balance : %dMAD\n" RST,c1.solde);
                    break;
                case 2:
                    printf(CYN "\n>>>> Add balance to the client account --> : " RST);
                    scanf("%d",&balance);
                    c1.solde += balance;
                    printf(GRN "\n  <<< Your balance added succesfully >>>\n" RST);
                    printf(CYN "\n  $$$$  Your balance now is --> : %dMAD  $$$$\n" RST,c1.solde);
                    break;
                default:
                    printf (RED "\n ! Please enter a valid choice !\n" RST);
                    break;
                }

            } while (balan != 0);
            break;
            
        case 3:
            do
            {
                printf(BYEL "\n*---- Product consultation ----*\n\n" RST);
                printf(CYN "=-= 1. - Catalog display\n" RST);   
                printf(CYN "=-= 2. - Product search\n" RST);
                printf(CYN "=-= 3. - Product sorting by price\n" RST);
                printf(CYN "=-= 4. - Show all product details\n" RST);
                printf(CYN "=-= 0. - Menu principale\n" RST);
                printf(BLU "\n===> Enter a choice - : " RST);
                scanf("%d",&prod);
                switch (prod)
                {
                case 0:
                    {break;}
                case 1:
                    printf(BMAG "   ======= The catalog of product =======\n\n" RST);
                    printf(BYEL "\n| name   |    |  prix  |  |  stock  |\n" RST);
                    for(int i = 0;i<10;i++){
                        printf(CYN "| %s  |    | %.2f | | %d | \n" RST,p[i].nameOP,p[i].prix,p[i].stock);
                    }
                    break;
                case 2:
                    printf(BYEL "   ===== Search for a product =====\n" RST);
                    printf(CYN "\n---> Enter the name of the product to search for : " RST);
                    scanf("%s",prosear);
                    int found = find_product(p,prosear,10);
                    printf(GRN "\n | ID |    | Name |    | Price |\n" RST);
                    printf(BWHT " | %d | | %s | | %f | \n" RST,p[found].idProduct,p[found].nameOP,p[found].prix);
                    break;
                case 3:

                    printf (MAG "\n 1- > Ascending order \n" RST);
                    printf(MAG " 2- > Descending order \n\n" RST);
                    printf(BLU "----> Enter your choice : " RST);
                    scanf("%d",&so);
                    if(so == 1){
                        printf(BMAG "  **** Sorting products by the price ****\n" RST);
                        sort_by_price(p,sizepro);
                        printf(YEL "\n | ID |\t | Name |\t | Price |\t | Stock |\n" RST);
                        for(int i = 0;i<sizepro;i++){
                            printf(BWHT " | %d | | %s | | %f | | %d | \n" RST,p[i].idProduct,p[i].nameOP,p[i].prix,p[i].stock);
                        }
                        break;
                    }
                    else if (so == 2){
                        printf(BMAG "  **** Sorting products by the price ****\n" RST);
                        sort_by_price(p,sizepro);
                        printf(YEL "\n | ID |\t | Name | | Price | | Stock |\n" RST);
                        for(int i = 0;i<sizepro;i++){
                            printf(BWHT " | %d | | %s | | %f | | %d | \n" RST,p[i].idProduct,p[i].nameOP,p[i].prix,p[i].stock);
                        }
                        printf(BGRN "\n^^^^^^ Read from bottom to top ^^^^^^ \n" RST);
                        break;
                    }
                    else{
                        break;
                    }
                case 4:
                    printf(BMAG "  ====== Product by ID ========\n\n" RST);
                    printf(CYN " | ID |    | Name |    | Price |\n" RST);
                    for(int i = 0;i<sizepro;i++){
                        printf(BWHT " |"CYN" ID "RST": %d | |"CYN"name "RST": %s | |"CYN"prix "RST": %f |\n" RST,p[i].idProduct,p[i].nameOP,p[i].prix);
                    }
                    printf(UCYN "\n--->> Enter the product ID you want to see all details --> : " RST);
                    scanf("%d",&chosenpro);
                    chosenpro -= 1;
                    printf(YEL " | ID | |   Name   | |   Price   | |   Stock   | |   Category   | |   Description   |\n\n" RST);
                    printf(BWHT " |"CYN" ID "RST": %d | |"CYN"name "RST": %s | |"CYN"prix "RST": %f | | "RST"stock : %d | |"CYN" category "RST": %s | | "CYN" Description "RST": %s | \n" RST,p[chosenpro].idProduct,p[chosenpro].nameOP,p[chosenpro].prix,p[chosenpro].stock,p[chosenpro].category,p[chosenpro].description);
                    break;
                default:
                    printf (RED "\n ! Please enter a valid choice !\n" RST);
                    break;
                }
                }while (prod != 0);
                break;

        case 4:
            printf(MAG "*=========*  Make a purchase *=========*\n\n" RST);
            printf(YEL "\n | ID | |   Name   | |   Price   | |   Stock   |\n" RST);
            for(int i = 0;i<sizepro;i++){
                
                printf(BWHT " [ %d ] | %s | | %f | | %d | \n"RST,p[i].idProduct,p[i].nameOP,p[i].prix,p[i].stock);
            }
            printf(CYN "\n>>>> Buy the product by ID --> : "RST);
            scanf("%d",&idbuy);
            if (p[idbuy].stock == 0){
                printf(MAG "**** This product is out of stock !\n" RST);
                break;
            }
            if (c1.solde < p[idbuy].prix){
                printf(RED ">>>>> You don't have enough money to buy this product ! <<<<<\n" RST);\
                break;
            }
            else{
                p[idbuy].stock--;
                c1.solde -= (int)p[idbuy].prix;
                totalearned += p[idbuy].prix;
                totalsells++;
                printf(GRN "  <<<< The purchase was succesfully for that product >>>>\n\n" RST);
                printf(CYN "-=--=- The stock of the product now is => :  %d \n" RST,p[idbuy].stock);
                printf(CYN "-=--=- And your current solde is --> : %d \n" RST,c1.solde);
                break;
            }
            break;
        case 5:
            printf(YEL "   ======= The statistics ========\n" RST);
            printf(GRN "\n^^^^^ Total earned is ---> : %fMAD\n"RST,totalearned);
            printf(GRN "^^^^^ Total sells is ---> : %d\n" RST,totalsells);
    
            for(int i = 0;i<sizepro;i++){
                totpro += p[i].stock;
            }
            printf(GRN "^^^^^ The disponible stock ---> : %d\n" RST,totpro);
            break;
        default:
            break;
        }
        
    } while (choice != 0);
    printf (BRED "\n  >>>>>>>> EXIT <<<<<<<<<\n\n" RST);
}