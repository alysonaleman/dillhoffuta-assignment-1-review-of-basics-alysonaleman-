#include <stdio.h>
#include <string.h>
#include "monster_utils.h"

int main() {
    char name [MAX_MONSTERS][MAX_STRING];
    char type[MAX_MONSTERS][MAX_STRING];
    int HP[MAX_MONSTERS];
    int AC[MAX_MONSTERS];
    int STR[MAX_MONSTERS];
    int DEX[MAX_MONSTERS];
    int CON[MAX_MONSTERS];
    int num_monsters = 0;

    num_monsters = read_monster(name, type, HP, AC, STR, DEX, CON, num_monsters);

    char filename[MAX_STRING];
    printf("Enter a file name to save monsters: ");
    fgets(filename, MAX_STRING, stdin);
    filename[strcspn(filename, "\n")]= '0';

    int result = write_monsters (name, type, HP, AC, STR, DEX,CON, num_monsters, filename);

    if (result == 1) {
        printf("Error: Could not open fule %s for writing.\n", filename);
    }   else {
            printf("Monsters written to %s\n", filename);
    }

    return 0;

}