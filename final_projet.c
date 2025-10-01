#include <stdio.h>
#define nsize 10
#define esize 20
#define produc 100

#define RST   "\033[0m"
#define BOLD  "\033[1m"
#define RED   "\033[31m"
#define GRN   "\033[32m"
#define YEL   "\033[33m"
#define BLU   "\033[34m"
#define MAG   "\033[35m"
#define CYN   "\033[36m"
#define WHT   "\033[37m"

typedef struct 
{
    int idClient;
    char name[nsize];
    char lastName[nsize];
    char email[esize];
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
    p[0].idProduct = 1;
    my_strcpy(p[0].nameOP,"Phone");
    p[0].prix = 250.50;
    my_strcpy(p[0].category, "Electronic");
    p[0].stock = 20;
    my_strcpy(p[0].description, "High performance");

    p[1].idProduct = 2;
    my_strcpy(p[1].nameOP, "Laptop");
    p[1].prix = 899.99;
    my_strcpy(p[1].category, "Electronic");
    p[1].stock = 15;
    my_strcpy(p[1].description, "Lightweight and powerful");

    p[2].idProduct = 3;
    my_strcpy(p[2].nameOP, "Desk Chair");
    p[2].prix = 120.00;
    my_strcpy(p[2].category, "Furniture");
    p[2].stock = 10;
    my_strcpy(p[2].description, "Ergonomic and comfortable");

    p[3].idProduct = 4;
    my_strcpy(p[3].nameOP, "Notebook");
    p[3].prix = 2.50;
    my_strcpy(p[3].category, "Stationery");
    p[3].stock = 200;
    my_strcpy(p[3].description, "100 pages notebook");

    p[4].idProduct = 5;
    my_strcpy(p[4].nameOP, "Pen");
    p[4].prix = 1.20;
    my_strcpy(p[4].category, "Stationery");
    p[4].stock = 300;
    my_strcpy(p[4].description, "Blue ink ballpoint pen");

    p[5].idProduct = 6;
    my_strcpy(p[5].nameOP, "Headphones");
    p[5].prix = 75.00;
    my_strcpy(p[5].category, "Electronic");
    p[5].stock = 25;
    my_strcpy(p[5].description, "Noise cancelling");

    p[6].idProduct = 7;
    my_strcpy(p[6].nameOP, "Backpack");
    p[6].prix = 45.00;
    my_strcpy(p[6].category, "Accessories");
    p[6].stock = 50;
    my_strcpy(p[6].description, "Waterproof and spacious");

    p[7].idProduct = 8;
    my_strcpy(p[7].nameOP, "Water Bottle");
    p[7].prix = 15.00;
    my_strcpy(p[7].category, "Accessories");
    p[7].stock = 80;
    my_strcpy(p[7].description, "Keeps drinks cold for 24h");

    p[8].idProduct = 9;
    my_strcpy(p[8].nameOP, "Smart Watch");
    p[8].prix = 199.99;
    my_strcpy(p[8].category, "Electronic");
    p[8].stock = 12;
    my_strcpy(p[8].description, "Tracks fitness and notifications");

    p[9].idProduct = 10;
    my_strcpy(p[9].nameOP, "Tablet");
    p[9].prix = 320.00;
    my_strcpy(p[9].category, "Electronic");
    p[9].stock = 18;
    my_strcpy(p[9].description, "10-inch display, fast performance");


    int choice;
    int profile;
    int balance;
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


    do
    {
        printf(CYN "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" RST);
        printf(YEL "============= Menu ================\n" RST);
        printf(CYN "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" RST);
        printf(GRN " * 1.~ -- Customer profile management\n" RST);
        printf(GRN " * 2.~ -- Virtual balance management\n" RST);
        printf(GRN " * 3.~ -- Product consultation\n" RST);
        printf(GRN " * 4.~ -- Make a purchase\n" RST);
        printf(GRN " * 5.~ --  The statistics\n" RST);
        printf(RED " * 0.~ -- Quitter l'application\n\n" RST);
        printf(CYN "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" RST);
        printf(BLU " === Enter a choice ===> : " RST);
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("----- Customer profile management -----\n\n");
            printf("=> 1-  Show information of client\n");
            printf("=> 2-  Editing profile\n");
            printf("=> 3-  Add solde for this client\n\n");

            printf("---> enter a choice : ");
            scanf("%d",&profile);
            if (profile == 1){
                printf("\t=== Client Profile ===\n");
                printf ("|ID : %d | %s | | %s |  | %s |  | %d | ",c1.idClient,c1.name,c1.lastName,c1.email,c1.solde);
                break;
            }
            else if (profile == 2){
                printf("\t#### Editing the profile ###\n");
                printf(" *---* Enter the ID of the client : ");
                scanf("%d",&c1.idClient);
                printf(" *---* Enter the name of the client : ");
                scanf("%s",c1.name);
                printf(" *---* Enter the last name of the client : ");
                scanf("%s",c1.lastName);
                my_strcpy(c1.email,c1.name);
                my_strcat(c1.email,".");
                my_strcat(c1.email,c1.lastName);
                my_strcat(c1.email,"@gmail.com");
            }
            else{
                printf (" ! Please enter a valid choice !\n");
                break;
            }
            
            break;
        case 2:
            printf("  ----- Virtual balance management -----\n");
            printf("=> 1-  Show the balance\n");
            printf("=> 2-  Add money to the balance\n");
            printf(" ---- Enter a choice --> : ");
            scanf("%d",&balan);
            if(balan == 1){
                printf("==== Balance of the clinet is : %dMAD\n",c1.solde);
            }
            else if(balan == 2){
                printf(">>>> Add balance to the client account --> : ");
                scanf("%d",&balance);
                c1.solde += balance;
                printf("  <<< Your balance added succesfully >>>\n");
                printf("  $$$$  Your balance now is --> : %dMAD  $$$$\n",c1.solde);
            }
            break;
        case 3:
            printf("*---- Product consultation ----*\n");
            printf("=-= 1. - Catalog display\n");   
            printf("=-= 2. - Product search\n");
            printf("=-= 3. - Product sorting by price\n");
            printf("=-= 4. - Show all product details\n");
            printf("===> Enter a choice - : ");
            scanf("%d",&prod);
            switch (prod)
            {
            case 1:
                printf("==== The catalog of product ====\n\n");
                for(int i = 0;i<10;i++){
                    printf("|name : %s | |prix : %f | |stock : %d | \n",p[i].nameOP,p[i].prix,p[i].stock);
                }
                break;
            case 2:
                printf("   ===== Search for a product =====\n");
                printf("---> Enter the name of the product to search for : ");
                scanf("%s",prosear);
                int found = find_product(p,prosear,10);
                printf(" | ID | | Name | | Price |\n");
                printf(" | %d | | %s | | %f | \n",p[found].idProduct,p[found].nameOP,p[found].prix);
                break;
            case 3:
                printf("  **** Sorting products by the price ****\n");
                sort_by_price(p,sizepro);
                printf(" | ID | | Name | | Price | | Stock |\n");
                for(int i = 0;i<sizepro;i++){
                    printf(" | %d | | %s | | %f | | %d | \n",p[i].idProduct,p[i].nameOP,p[i].prix,p[i].stock);
                }
                break;
            case 4:
                printf("  ====== Product by ID ========\n");
                printf(" | ID | | Name | | Price | | Stock |\n");
                for(int i = 0;i<sizepro;i++){
                    printf(" | %d | |name : %s | |prix : %f | |stock : %d | \n",p[i].idProduct,p[i].nameOP,p[i].prix,p[i].stock);
                }
                printf("--->> Enter the product ID you want --> : ");
                scanf("%d",&chosenpro);
                chosenpro -= 1;
                printf(" | ID | | Name | | Price | | Stock | | Category | | Description |\n");
                printf(" [ %d ] | %s | | %f | | %d | ",p[chosenpro].idProduct,p[chosenpro].nameOP,p[chosenpro].prix,p[chosenpro].stock);
                printf("| %s | | %s | \n",p[chosenpro].category,p[chosenpro].description);

                break;

            default:
                break;
            }
            break;
        case 4:
            printf("*=========*  Make a purchase *=========*\n");
            for(int i = 0;i<sizepro;i++){
                    printf(" | ID | | Name | | Price | | Stock | | Category | | Description |\n");
                    printf(" [ %d ] | %s | | %f | | %d | ",p[i].idProduct,p[i].nameOP,p[i].prix,p[i].stock);
                }
                printf(">>>> Buy the product of ID --> : ");
                scanf("%d",&idbuy);
                if (p[idbuy].stock == 0){
                    printf("**** This product is out of stock !\n");
                    break;
                }
                if (c1.solde < p[idbuy].prix){
                    printf(">>>>> You don't have enough money to buy this product ! <<<<<\n");\
                    break;
                }
                else{
                    p[idbuy].stock--;
                    c1.solde -= (int)p[idbuy].prix;
                    totalearned += p[idbuy].prix;
                    totalsells++;
                    printf("  <<<< The purchase was succesfully for that product >>>>\n\n");
                    printf("-=--=- The stock of the product now is => :  %d \n",p[idbuy].stock);
                    printf("-=--=- And your current solde is --> : %d \n",c1.solde);
                    break;
                }
                break;
            case 5:
                printf("   ======= The statistics ========\n");
                printf("^^^^^ Total earned is ---> : %fMAD\n",totalearned);
                printf("^^^^^ Total sells is ---> : %d\n",totalsells);
                break;
            default:
            break;
        }
    } while (choice != 0);
    printf (RED "\n  >>>>>>>> EXITING THE APPLICATION <<<<<<<<<\n\n" RST);
}