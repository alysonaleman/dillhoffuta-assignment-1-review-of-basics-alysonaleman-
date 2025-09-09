#ifndef MONSTER_UTILS_H
#define MONSTER_UTILS_H

#define MAX_MONSTERS 32
#define MAX_STRING 64

int read_monster (char name [][MAX_STRING],
                  char type [][MAX_STRING], 
                  int hp[], 
                  int ac[], 
                  int str[], 
                  int dex[], 
                  int con[], 
                  int num_monsters);

#endif