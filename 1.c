#include <stdio.h>
#include <stdlib.h>
int main ()
{
   int a, b, x;
   char c;
       printf("Wpisz pierwsza liczbe : \n");             // podaj pierwsza liczbe przypisana do a
            scanf("%d", &a);
       printf("Wpisz druga liczbe: \n");                // podaj pierwsza liczbe przypisana do b 
            scanf("%d", &b);
            getchar();
       printf("Jaka operacje chcesz wykonac (podaj znak): \n");
            scanf("%c", &c);

switch (c)   /// dzia�anie 
{
          case   '+': x=a+b;                                // operacja dodawania   
                   printf("Wynik to::  %d\n", x);
                   break;
          case   '-': x=a-b;                                // operacja odejmowania
                   printf("Wynik to::  %d\n", x);
                   break;
          case   '*': x=a*b;
                   printf("Wynik to::  %d\n", x);             // operacja mno�enia
                   break;
          case   '/': x=a/b;
                   printf("Wynik to::  %d\n", x); 

        if (b==0)  
        {
                 printf ("Nie mozna dzielic przez zero ");
                 }
        else
        {

                 '/'; x=a/b;
                   printf("Wynik to: %d\n", x); 

                 }

        break;

} 
return 0;
}