#include <stdio.h>
#include "monster_utils.h"

int main() {
    char name[MAX_MONSTERS][MAX_STRING];
    char type[MAX_MONSTERS][MAX_STRING];
    int HP[MAX_MONSTERS];
    int AC[MAX_MONSTERS];
    int STR[MAX_MONSTERS];
    int DEX[MAX_MONSTERS];
    int CON[MAX_MONSTERS];
    int num_monsters = 0;

    num_monsters = read_monsters(name, type, HP, AC, STR, DEX, CON, num_monsters);

    printf("%s (%s), %d HP, %d AC, %d STR, %d DEX, %d CON\n",
    name[0], type[0], HP [0], AC[0], STR[0], DEX[0], CON[0]);

    return 0;
}