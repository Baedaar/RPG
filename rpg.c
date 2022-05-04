#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "Boss.h"
#include "Players.h"
#include "Enemy.h"
#include "rpg.h"

#include <unistd.h>

char *my_readline(void);
void print_str(char *str);
void login(void);

/*void print_int(int nb)
{
    write(1, &nb, 1);
}*/

//Enemy_t enemyArray[10];

void enemyPrinter(Enemy_t *array);

int main()
{
  login();
  initArray();

}

