#include <stdio.h>
#include <stdlib.h>
#include "artist.h" //include the artist header so you can use those structs 
#ifndef ARTWORK_H_ 
#define ARTWORK_H_

//struct for Artwork
typedef struct Artwork{
    char title[20];
    int yearCreated;
    Artist artist;
}Artwork;

//artwork struct defined functions
Artwork InitArtwork();
Artwork SetArtwork(char* title, int yearCreated, Artist artist);

//functions for artwork
void GetTitle(char* title, Artwork artwork);
int GetYearCreated(Artwork artwork);
Artist GetArtist(Artwork artwork); //uses the artist struct to connect artwork and artist
void PrintArtwork(Artwork artwork);

#endif