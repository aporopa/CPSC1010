#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "artwork.h" //must include the artwork header file to use structs and function calls

//function defined by artwork struct, default 
Artwork InitArtwork(){
    Artwork artwork;
    strcpy(artwork.title, "None");
    artwork.yearCreated = 0;
    artwork.artist = InitArtist(); 

    return artwork;
}

//function defined by artwork struct, defined by user input 
Artwork SetArtwork(char* title, int yearCreated, Artist artist){
    Artwork artwork;
    strcpy(artwork.title, title); //copies the title given into the artwork struct
    artwork.yearCreated = yearCreated;
    artwork.artist = artist;

    return artwork;
}

//unit test title function
void GetTitle(char* title, Artwork artwork){
    strcpy(title, artwork.title); 
}

//get the year of the artwork from the user and put it into the artwork struct
int GetYearCreated(Artwork artwork){
    return artwork.yearCreated;
}

//artIST struct/funtion with artwork variables, relates the artwork with the artist
Artist GetArtist(Artwork artwork){
    return artwork.artist;
}

//funtion to print both the artist and artwork information
void PrintArtwork (Artwork artwork){
    PrintArtist(artwork.artist); //calls the artist function to print
    printf("Title: %s, %d\n", artwork.title, artwork.yearCreated);
}

