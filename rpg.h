#ifndef RPG_H_
#define RPG_H_
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct Player {
    const char *name;
    int hp;
    int mp;
    int str;
    int inte;
    int def;
    int res;
    int spd;
    int luck;
} Player_t;


typedef struct Enemy_s
{
    char *name;
    int hp;
    int mp;
    int str;
    int inte;
    int def;
    int res;
    int spd;
    int luck;
}Enemy_t;

typedef struct Boss_s
{
    char *name;
    int hp;
    int mp;
    int str;
    int inte;
    int def;
    int res;
    int spd;
    int luck;
}Boss_t;


/* Fonctions auxiliaires */

char *my_readline(void)
{
  char    *buff;
  ssize_t size;

  buff = malloc(sizeof(*buff) * (50 + 1));
  if (buff == NULL)
    return NULL;
  size = read(0, buff, 50);
  if (size > 1) {
    buff[size - 1] = '\0';
    return buff;
  }
  free(buff);
  return NULL;
}

void print_str(char *str)
{
    for(int i=0; str[i]; i++)
    {
        write(1, &str[i], 1);
    }
}

void login(void)
{
    char *welcome = "Bienvenue nouveau joueur ! Indiquez votre prénom : ";
    print_str(welcome);
    char *name = my_readline();
    char *answer = "Vous êtes maintenant connecté en tant que : ";
    print_str(answer);
    print_str(name);
   
}

#endif /* !RPG_H_ */
