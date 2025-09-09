#include <stdio.h>
#include <string.h>
#include "monster_utils.h"

int read_monster(char name [][MAX_STRING],
                 char type [][MAX_STRING],
                 int hp[],
                 int ac[],
                 int str[],
                 int dex[],
                 int con[],
                 int num_monsters) {

if (num_monsters >= MAX_MONSTERS) {
    printf("Monster limit reached.\n");
    return num_monsters;
}

printf("Enter a name: ");
fgets(name[num_monsters], MAX_STRING, stdin);
name[num_monsters][strcspn(name[num_monsters], "\n")]= '\0';

printf("Enter a type: ");
fgets(type[num_monsters], MAX_STRING, stdin);
type[num_monsters][strcspn(type[num_monsters], "\n")] = '\0';

printf("Enter HP: ");
scanf("%d", &hp[num_monsters]);

printf("Enter AC: ");
scanf("%d", &ac[num_monsters]);

printf("Enter STR: ");
scanf("%d", &str[num_monsters]);

printf("Enter DEX: ");
scanf("%d", &dex[num_monsters]);

printf("Enter CON: ");
scanf("%d", &con[num_monsters]);

while(getchar() != '\n');

return num_monsters + 1;
}