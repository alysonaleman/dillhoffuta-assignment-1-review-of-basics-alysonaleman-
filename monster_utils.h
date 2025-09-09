#ifndef MONSTER_UTILS_H
#define MONSTER_UTILS_H

#define MAX_MONSTERS 32
#define MAX_STRING 64

int read_monster (char name [MAX_MONSTERS][MAX_STRING],
                  char type [MAX_MONSTERS][MAX_STRING], 
                  int hp[MAX_MONSTERS], 
                  int ac[MAX_MONSTERS], 
                  int str[MAX_MONSTERS], 
                  int dex[MAX_MONSTERS], 
                  int con[MAX_MONSTERS], 
                  int num_monsters);

int write_monsters(char name [MAX_MONSTERS][MAX_STRING],
                   char type [MAX_MONSTERS][MAX_STRING],
                   int HP[MAX_MONSTERS],
                   int AC[MAX_MONSTERS],
                   int STR[MAX_MONSTERS],
                   int DEX[MAX_MONSTERS],
                   int CON[MAX_MONSTERS],
                   int num_monsters,
                   char filename[MAX_STRING]);

int parse_monster (char line [MAX_STRING],
                   char name [MAX_MONSTERS][MAX_STRING],
                   char type [ MAX_MONSTERS][MAX_STRING],
                   int HP[MAX_MONSTERS],
                   int AC [MAX_MONSTERS],
                   int STR [MAX_MONSTERS],
                   int DEX [ MAX_MONSTERS],
                   int CON [ MAX_MONSTERS],
                   int num_monsters );

#endif