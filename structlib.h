//Stucture Which holds Player info and another for Items

#ifndef STRUCTLIB_H
#define STRUCTLIB_H "structlib.h"

//Defining Variables
#define pnsize 10
#define insize 15

//Creating Structures
struct playee
{
	char name[pnsize];
	int lvl;
	int hp;
	int str;
	int spe;
	int def;
	int intel;
	int luck;
	int xp;
};

struct itm
{
	char name[insize];
	int type;
	int power;
};


#endif
