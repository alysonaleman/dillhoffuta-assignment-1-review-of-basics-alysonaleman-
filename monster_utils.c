#include <stdio.h>
#include <string.h>
#include "monster_utils.h"

int read_monster(char name [MAX_MONSTERS][MAX_STRING],
                 char type [MAX_MONSTERS][MAX_STRING],
                 int hp[MAX_MONSTERS],
                 int ac[MAX_MONSTERS],
                 int str[MAX_MONSTERS],
                 int dex[MAX_MONSTERS],
                 int con[MAX_MONSTERS],
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

int write_monsters(char name[MAX_MONSTERS][MAX_STRING],
                    char type[MAX_MONSTERS][MAX_STRING],
                    int HP[MAX_MONSTERS],
                    int AC[MAX_MONSTERS],
                    int STR[MAX_MONSTERS],
                    int DEX[MAX_MONSTERS],
                    int CON[MAX_MONSTERS],
                    int num_monsters,
                    char filename[MAX_STRING]) {
    FILE * fp = fopen(filename, "w");
    if (fp == NULL) {
        return 1;
    }

    for (int i=0; i< num_monsters; i++) {
        fprint (fp, "%s, %s, %d, %d, %d, %d, %d\n",
                name[i], type[i],HP[i], AC[i], STR[i],DEX[i],CON[i]);
    }
    fclose(fp);
    return 0;
}