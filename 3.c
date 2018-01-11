#include <stdio.h>
#include <conio.h>
main()
{
        int A[10],i,n;
        printf("\n Podaj ilosc elementow tablicy 1:\n n = ");
        scanf("%d",&n);
        if(n>0&&n<=10)
        {
                printf("\n Wczytaj elementy tablicy 1:\n");
                for(i=0;i<n;i++)
                {
                        printf(" 1%d = ",i);
                        scanf("%d",&A[i]);
                }
                printf("\n Wczytales nastepujace elementy tablicy 1:");
                for(i=0;i<n;i++)
                        printf("\n 1%d = %d",i,A[i]);
        }
        else
                printf("\n Nie wczytales elementow tablicy 1!");
        getch();
        return 0;
}