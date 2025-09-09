#include <stdio.h>
#include <string.h>
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

    FILE *fp = fopen("monsters.csv", "r");
    if (fp == NULL) {
        printf("Error: Could not open monsters.csv\n");
        return 1;
    }

    char line[MAX_STRING];
    while (fgets(line, MAX_STRING, fp) != NULL) {
        line[strcspn(line, "\n")] = '\0';
        parse_monster(line, name, type, HP, AC, STR, DEX, CON, num_monsters);
        num_monsters++;
    }
    fclose(fp);

    char search_term[MAX_STRING];
    printf("Enter search term: ");
    fgets(search_term, MAX_STRING, stdin);
    search_term[strcspn(search_term, "\n")] = '\0';

    search_monsters(name, type, HP, AC, STR, DEX, CON, num_monsters, search_term);

    return 0;
}
