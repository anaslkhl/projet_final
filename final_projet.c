#include <stdio.h>
#define nsize 10
#define esize 20
#define produc 100
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
    return(s1);
}
char *my_strcpy(char *s1, char *s2)
{
    char *save = s1;
    while(*s1++ = *s2++);
    *s1 = '\0';
    return (save);
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

    do
    {
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("============= Menu ================\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
        printf(" * 1.~ -- Gestion du profil client\n");
        printf(" * 2.~ -- Gestion du solde virtuel\n");
        printf(" * 3.~ -- Consultation des produits\n");
        printf(" * 4.~ -- Effectuer un achat\n");
        printf(" * 5.~ --  Mes statistiques\n");
        printf(" * 0.~ -- Quitter l'application\n\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
        printf(" === Enter a choice ===> : ");
        scanf("%d",&choice);
    } while (choice != 0);
    
}