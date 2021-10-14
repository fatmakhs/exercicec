#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int m;
    int j;
      printf("entrer les valeur de a et m et j ");
      scanf("%i %i %i", &a, &m, &j);

    if(a>=1 && m<=12 && j >=1)
    {
        // le teste pour les jours
        if((j>=1 && j<=31) &&  (m==1 || m==3 ||m==5 ||m==7 ||m==8 || m==10|| m==12))
        {
            printf("le cas des mois de 30 jours");

        }
        if(( j>=1 && j<=30)&&(m==4|| m==6 || m==9|| m==11))
        {
            printf("le cas des mois de 31 jours");

        }
        if((j>=1 && j<=29) && m==2 &&( (a%400==0)||(a%4==0 && a%100!=0 ) ))
        {
            
            printf("le cas d'anné bissetxile");

        }
        if((j>=1 && j<=28) && m==2 && !( (a%400==0)||(a%4==0 && a%100!=0 ) ) )
        {
            printf("le cas d'anné  non bissetxile");
        }



        
    }
    else
    {
    printf(" c'est pas valide ");
    }
}
