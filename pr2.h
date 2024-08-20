#include<stdlib.h>
#include<stdio.h>
#ifndef PLAYER
#define PLAYER
int totalPlayers=0;
int size=20;
typedef struct Player

 {
    
    char name[20];
    int jerseyNumber; 
    int Runs;
    int Wickets;
    int matchesPlay;
}Player;
    void displayPlayer(Player*);
	void rawData(Player*);
	Player* resizeStruct(Player*);
	void removePlayer(Player*);
	void searchPlayer(Player*);
	void update(Player*);
	void sortPlayer(Player*);
	void addPlayersinfo(Player*);



#endif
