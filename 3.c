#include <stdio.h>
#include <conio.h>
main()
{
        int A[10],i,n;
        printf("\n Podaj ilosc elementow tablicy A:\n n = ");
        scanf("%d",&n);
        if(n>0&&n<=10)
        {
                printf("\n Wczytaj elementy tablicy A:\n");
                for(i=0;i<n;i++)
                {
                        printf(" A%d = ",i);
                        scanf("%d",&A[i]);
                }
                printf("\n Wczytales nastepujace elementy tablicy A:");
                for(i=0;i<n;i++)
                        printf("\n A%d = %d",i,A[i]);
        }
        else
                printf("\n Nie wczytales elementow tablicy A!");
        getch();
        return 0;
}