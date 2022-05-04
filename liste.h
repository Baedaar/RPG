/* Création de la liste chaînée : strucutre contenant un entier et un pointeur puis un pointeur sur le type élément*/
typedef struct element element;
struct element
{
    Enemy_t val;
    struct element *next;
};

typedef element* list;

list ajouterEnTete(list liste, Enemy_t valeur)
{
    /* On crée un nouvel élément */
    element* nouvelElement = malloc(sizeof(element));

    /* On assigne la valeur au nouvel élément */
    nouvelElement->val = valeur;
 
    /* On assigne l'adresse de l'élément suivant au nouvel élément */
    nouvelElement->next = liste;
 
    /* On retourne la nouvelle liste, i.e. le pointeur sur le premier élément */
    return nouvelElement;
}

void afficherListe(list liste)
{
    element *tmp = liste;
    /* Tant que l'on n'est pas au bout de la liste */
    while(tmp != NULL)
    {
        /* On affiche */
        printf("%d ", tmp->val);
        /* On avance d'une case */
        tmp = tmp->next;
    }
}

/*Tableau de structure 
Enemy_t enemyArray[10]; */


void initArray(void)
{
   Enemy_t *enemyArray;

   list enemyList;

   for(int i=0; i<10; i++)
   {
       
       enemyList->val.name = Enemy_name[i]; 

       enemyList.name = Enemy_name[i];


    
     /* enemyArray[i].hp = Enemy_hp[i];
       enemyArray[i].mp = Enemy_mp[i];
       enemyArray[i].str = Enemy_str[i];
       enemyArray[i].inte = Enemy_inte[i];
       enemyArray[i].def = Enemy_def[i];
       enemyArray[i].res = Enemy_res[i];
       enemyArray[i].spd = Enemy_spd[i];
       enemyArray[i].luck= Enemy_luck[i];*/
   }

    enemyList= ajouterEnTete(enemyList,enemyArray[0]);
    afficherListe(enemyList);

}