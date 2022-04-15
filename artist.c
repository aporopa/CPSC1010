#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "artist.h" //include the header file for artist so you can call the functions and structs

//Initializing artist function using the artist struct, creating defaults
Artist InitArtist(){
    Artist artist;
    artist.birthYear = 0;
    artist.deathYear = 0;

    strcpy(artist.name, "None");

    return artist; //return the variable defined by the struct that now holds the defaulted members 
}

//function defined by the artist struct with the purpose of filling the user defined members of each artist
Artist SetArtist(char* name, int birthYear, int deathYear){
    Artist artist;
    artist.birthYear = birthYear;
    artist.deathYear = deathYear;

    strcpy(artist.name, name);

    return artist; //return variable defined by the struct that now holds the user defined members
}

//unit test funtion for getting the artist name
void GetName(char* name, Artist artist){
    strcpy(name, artist.name);
}

//Function that gets and returns the birth year of the artist, stored in the artist struct
int GetBirthYear(Artist artist){
    return artist.birthYear;
}

//Function that gets and returns the death year of the artist, stored in the artist struct
int GetDeathYear(Artist artist){
    return artist.deathYear;
}

//void function that is called for printing the artist name, does not directly correlate with main, must be used in the artwork.c file
void PrintArtist(Artist artist){
    if(artist.deathYear > 0) 
        printf("Artist: %s (%d-%d)\n", artist.name, artist.birthYear, artist.deathYear); //condition if the artist is dead
    
    else{
        printf("Artist: %s, born %d\n", artist.name, artist.birthYear); //condition is the artist is still alive
    }
}