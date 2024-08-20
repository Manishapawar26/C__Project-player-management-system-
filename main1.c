#include<stdio.h>
#include "definition.c"
#include "raw1.c"
void main()
{
	int choice;
	Player* p;
	p=(Player*)malloc(sizeof(Player)*size);
	rawData(p);
	do{
		printf("\n************************** PLAYER MANAGEMENT SYSTEM **************************\n");
		
		printf("\n1.Display All Players");
		printf("\n2.Remove Player");
		printf("\n3.Search Player");
		printf("\n4.Update Player Data");
		printf("\n5.Display Sorted Players");
		printf("\n6.Add Plyers");
		printf("\n7.EXIT\n");
		printf("\n-----------------------------------------------------------\n");
		printf("\nEnter Any Choice : ");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1:
				displayPlayer(p);
				break;
			case 2:
				removePlayer(p);
				break;
			case 3:
				searchPlayer(p);
				break;
			case 4:
				update(p);
				break;
			case 5:
				sortPlayer(p);
				break;
			case 6:
				addPlayersinfo(p);
				break;
			case 7:
				exit(0);
				break;
			default:
				printf("\nINVALID CHOICE !\n");
		}
		
	}while(choice>0&&choice<8);
}
