#include<stdio.h>
#include<stdlib.h>


#ifndef CHARACTERS_H
#define CHARACTERS_H

struct Character
{
    char* name;
    // size_t STR,INT,WIS,END,LUK;
    // int class;
    int room;   //location of player
    int stage;  //where player is at in "stages" of the current room
    int hp;     //player health
};
typedef struct Character Character;
Character* makeCharacter();

Character* makeCharacter() 
{
    Character* out = malloc(sizeof(Character));
    out -> name = "0";
    out -> room = 1;
    out -> stage = 1;
    out -> hp = 10;
    return out;
}
#endif


// void player()
// {
// };

// //contains all enemies/allies etc.?
// void mobs()
// {
// };
