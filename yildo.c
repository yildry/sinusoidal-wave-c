#include <stdio.h>
#include <math.h>
#include <conio.h> 

int main(void)
{       
    char isim[20] = "yildiray";
    int    satir,
           satirsayi;
    double sinsayi,
           ilk,
           anlik,
           sinadim = 0.05,
           radyan;

    int i;
    ilk=30;
    satir = 20;

    anlik = ilk * 3.14 / 180;
    
    for (i = 0; isim[i] != '\0'; ++i)
        for (satirsayi = 0; satirsayi < satir; satirsayi++)
        {
         radyan = sin(anlik);
         
         for (sinsayi = -1; sinsayi <= 1; sinsayi += sinadim)
         {
             
          if (radyan >= sinsayi && radyan < (sinsayi + sinadim))
          {
        printf("%c\n", isim[i]);
           break;
          }
          else
           printf(" ");
         }
         anlik += ilk * 3.14 / 180;
        } 

        
    return 0;   
}
