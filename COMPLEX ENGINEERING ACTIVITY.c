#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct library
{
char bk_name[30];
char author[30];
int pages;
float price;
};

int main()
{
	printf("##################################################################################\n");
	printf("##################\t\t\t\t\t\t##################\n");
	printf("##################         Welcome To Digital Library           ##################\n");
	printf("##################\t\t\t\t\t\t##################\n");
	printf("##################################################################################\n");
	printf("\n\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t     =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t     =                 WELCOME                   =");
    printf("\n\t\t     =                   TO                      =");
    printf("\n\t\t     =                 DIGITAL                   =");
    printf("\n\t\t     =                 LIBRARY                   =");
    printf("\n\t\t     =              OF UET MARDAN                =");
    printf("\n\t\t     =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n\n");
    printf("\t\t\t\tProgrammer Name:Muhammad Saad\n\t\t\t\t    Reg.No.:20MDELE163\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    
    
struct library l[100];
char ar_nm[30],bk_nm[30];
int i,j, keepcount;
i=j=keepcount = 0;

while(j!=7)
{
printf("\n\n1. Add book information in Shelve 1\n2. Display book information\n");
printf("3. List all books of given author\n");
printf("4. List the title of specified book\n");
printf("5. List the count of books in the library\n");
printf("6. Search of books in the library\n");
printf("7. Exit\n");
printf("**********************************************************");

printf ("\n\nEnter one of the above : ");
scanf("%d",&j);

switch (j)
{
/* Add book */
case 1:  

printf ("Enter book name = ");
scanf ("%s",l[i].bk_name);

printf ("Enter author name = ");
scanf ("%s",l[i].author);

printf ("Enter pages = ");
scanf ("%d",&l[i].pages);

printf ("Enter price = ");
scanf ("%f",&l[i].price);
keepcount++;

break;
case 2:
printf("you have entered the following information\n");
for(i=0; i<keepcount; i++)
{
printf ("book name = %s",l[i].bk_name);

printf ("\t author name = %s",l[i].author);

printf ("\t  pages = %d",l[i].pages);

printf ("\t  price = %f\n",l[i].price);
}
break;

case 3:
printf ("Enter author name : ");
scanf ("%s",ar_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(ar_nm, l[i].author) == 0)
printf("BOOK NAME\t   AUTHOR NAME\t\t  NO. OF PAGES\t     PRICE\n");
printf ("%s\t\t    %s\t\t\t    %d\t\t     %f\n",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
}
break;

case 4:
printf ("Enter book name : ");
scanf ("%s",bk_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(bk_nm, l[i].bk_name) == 0)
printf ("%s \t %s \t %d \t %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
}
break;

case 5:
printf("\n No of books in library : %d", keepcount);
break;

case 6:
printf("\nSearch book : ");	
scanf ("%s",ar_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(ar_nm, l[i].author) == 0)
printf("BOOK NAME\t   AUTHOR NAME\t\t  NO. OF PAGES\t     PRICE\n");
printf ("%s\t\t    %s\t\t\t    %d\t\t     %f\n",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
}
break;

case 7:
exit (0); 
}
}
return 0;

}
