#ifndef ENEMYS_H_
#define ENEMYS_H_
#include "rpg.h"
#include <stdio.h>


char *Enemy_name[] = {
    "VM",
    "Bash",
    "Typescript",
    "MYSQL",
    "PHP",
    "Laravel",
    "Docker",
    "Python",
    "C",
    "Flemme"
};

int Enemy_hp[] = {
    10,
    20,
    30,
    40,
    50,
    60,
    70,
    80,
    90,
    100
};

int Enemy_mp[] = {
    10,
    20,
    30,
    40,
    50,
    60,
    70,
    80,
    90,
    100
};

int Enemy_str[] = {
    10,
    20,
    30,
    40,
    50,
    60,
    70,
    80,
    90,
    100
};

int Enemy_inte[] = {
    10,
    20,
    30,
    40,
    50,
    60,
    70,
    80,
    90,
    100
};

int Enemy_def[] = {
    10,
    20,
    30,
    40,
    50,
    60,
    70,
    80,
    90,
    100
};

int Enemy_res[] = {
    10,
    20,
    30,
    40,
    50,
    60,
    70,
    80,
    90,
    100
};

int Enemy_spd[] = {
    10,
    20,
    30,
    40,
    50,
    60,
    70,
    80,
    90,
    100
};

int Enemy_luck[] = {
    10, 
    20,
    30,
    40,
    50,
    60,
    70,
    80,
    90,
    100
};



/*Tableau de structure 
Enemy_t enemyArray[10]; */


void my_putchar(char c)
{
  write(1, &c, 1);
}

void print_int(int i)
{
    write(1, &i, sizeof(int));
    
	
}

/*void getchar(int nb)
{
        int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        char *p = "0123456789";
     
        for(int i=0; p[i]; i++)
        {
            for(int j=0; tab[j]; j++)
            { 
                     if(nb == tab[i])
                        {       
                                my_putchar([i]);
                        }              
            }
        }
}*/


void test(int nb)
{       
    int reste;
        while(nb!=0)
        {
                reste = nb%10;
                nb = nb - (nb%10);
                nb = nb/10;

                if(reste == 1)
                {
                        my_putchar(1);
                }
                if(reste == 2)
                {
                        my_putchar(2);
                }
                if(reste == 3)
                {
                        my_putchar(3);
                }
		        if(reste == 4)
                {
                        my_putchar(4);
                }
                if(reste == 5)
                {
                        my_putchar(5);
                }       
                if(reste == 6)
                {
                        my_putchar(6);
                }
                if(reste == 7)
                {
                        my_putchar(7);
                }
		        if(reste == 8)
                {
                        my_putchar(8);
                }
                if(reste == 9)
                {
                        my_putchar(9);
                }
        }       

}


void initArray(void)
{
   Enemy_t enemyArray[10];

   for(int i=0; i<10; i++)
   {
       enemyArray[i].name = Enemy_name[i];
       enemyArray[i].hp = Enemy_hp[i];
       enemyArray[i].mp = Enemy_mp[i];
       enemyArray[i].str = Enemy_str[i];
       enemyArray[i].inte = Enemy_inte[i];
       enemyArray[i].def = Enemy_def[i];
       enemyArray[i].res = Enemy_res[i];
       enemyArray[i].spd = Enemy_spd[i];
       enemyArray[i].luck= Enemy_luck[i];
   }
    my_putchar('\n');

    char *buf;
   for(int i=0; i<10; i++)
   {
        printf("Nom : ");
        printf("%s",enemyArray[i].name);
        printf("\n");
        printf("Point de vie : "); 
       // getchar(enemyArray[i].hp);
        print_int(enemyArray[i].hp);
        test(enemyArray[i].hp);
       /* printf("\n");
        printf("STR : ");       
        printf("%d",enemyArray[i].str);
        printf("\n"); 
        printf("Intelligence : ");  
        printf("%d",enemyArray[i].inte);
        printf("\n");  
        printf("def : "); 
        printf("%d",enemyArray[i].def);
        printf("\n");  
        printf("res : ");   
        printf("%d",enemyArray[i].res);
        printf("\n");  
        printf("spd : ");   
        printf("%d",enemyArray[i].spd);
        printf("\n");  
        printf("chance : ");   
        printf("%d",enemyArray[i].luck);
        printf("\n"); */
   }
   
}

#endif /* !ENEMYS_H_ */
