//
//  main.c
//  x
//
//  Created by Ümmü Altın on 19.03.2023.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() //sayı tahmin etme oyunu benim kodum
{
    int i,sayi,random,hak=5;
    
    printf("Oyunda sayilar 0 ile 100 arasindadir.\n");
    
    srand(time(NULL));
    random = rand() % 100;
//    printf("%d\n",random);
    
    for(i=0; i<5; i++)
    {
        printf("Kalan tahmin hakkiniz: %d\n",hak);
        printf("Bir tahminde bulununuz:");
        scanf("%d",&sayi);
        
        if(sayi != random)
        {
            if(sayi < random && i<4)
            {
                printf("yukarı çık\n");
            }
            if(sayi > random && i<4)
            {
                printf("aşağı in\n");
            }
        }
        else
        {
            printf("\nTebrikler buldunuz.\n");
            break;
        }
        hak--;
    }
    if(hak==0)
    {
        printf("\nKaybettiniz\nBulunacak sayi %d olmasi lazimdi.\n",random);
    }
    return 0;
}
