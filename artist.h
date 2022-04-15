#include <stdio.h>
#include <stdlib.h>
#ifndef ARTIST_H_ 
#define ARTIST_H_

//Artist struct to fill individual characteristics 
typedef struct Artist{
    char name[20];
    int birthYear;
    int deathYear;
}Artist;

//artist struct defined functions
Artist InitArtist();
Artist SetArtist(char* name, int birthYear, int deathYear);

//function calls
void GetName(char* name, Artist artist);
int GetBirthYear(Artist artist);
int GetDeathYear(Artist artist);
void PrintArtist(Artist artist);

#endif