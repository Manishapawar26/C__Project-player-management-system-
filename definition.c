#include<stdio.h>
#include<string.h>
#include "pr2.h"

void displayPlayer(Player* p)
{
	int i;
	printf("\n*******************ALL PLAYERS*******************\n");
	for(i=0;i<totalPlayers;i++)
	{
		printf("\nPlayer Jersey Number : %d",p[i].jerseyNumber);
		printf("\nPlayer Name : %s",p[i].name);
		printf("\nPlayer Runs : %d",p[i].Runs);
		printf("\nPlayer Wickets : %d",p[i].Wickets);
		printf("\nMatches Played : %d",p[i].matchesPlay);
		printf("\n---------------------------------------------------------\n");
		
	}
}
void addPlayersinfo(Player* p)
{
	int i;
	if(totalPlayers>=size)
		{
			char ans;
			printf("\nStructure array is fulled");
			printf("\ndo you want resize array ? y/n\n");
			fflush(stdin);
			scanf("%c",&ans);
			if(ans=='y'||ans=='Y')
			{
				resizeStruct(p);
			}
			else
			{
				return;	
			}
		}
	printf("\n---------------------------------------------------------\n");
	printf("\nEnter Player Jersey Number : ");
	scanf("%d",&p[totalPlayers].jerseyNumber);
	for(i=0;i<totalPlayers;i++)
	{
		if(p[totalPlayers].jerseyNumber==p[i].jerseyNumber)
		{
			printf("\nPlayer With This Jersey Number Already Exist");
			
			addPlayersinfo(p);
			break;
		}
	}
	printf("\nEnter Player Name : ");
	fflush(stdin);
	gets(p[totalPlayers].name);
	printf("\nEnter Runs : ");
	scanf("%d",&p[totalPlayers].Runs);
	printf("\nEnter Wickets : ");
	scanf("%d",&p[totalPlayers].Wickets);
	printf("\nMatches Played : ");
	scanf("%d",&p[totalPlayers].matchesPlay);
	totalPlayers++;
	printf("\n***********Player Added Successfully***********\n");
	
}


void removePlayer(Player* p)
{
	int n,i,j;
	printf("Enter Player Jersey Number :");
	scanf("%d",&n);
	int count =0;
	for(i=0;i<totalPlayers;i++)
	{
		if(p[i].jerseyNumber==n)
		{
			for(j=i;j<totalPlayers;j++)
			{
				p[j]=p[j+1];
			}
			totalPlayers--;
			count++;
			break;
		}
		
	}
	if(count==1)
	{
		printf("\n***********Player Deleted succesfully***********\n");
	}
	else
	{
		printf("player not found");
	}
	
}
void searchPlayer(Player* p)
{
	int ch;
	printf("\n1.Search Player By Jersey Number.\n2.Search Player By Name\n");
	printf("\n*******************************************************************\n");
	printf("\nEnter Your Choice : ");
	scanf("%d",&ch);
	if(ch==1)
	{
		int n,i,flag=0;
		printf("\nEnter Jersey NUmber : ");
		scanf("%d",&n);
		for(i=0;i<totalPlayers;i++)
		{
			if(p[i].jerseyNumber==n)
			{
				printf("\nPlayer Jersey Number : %d",p[i].jerseyNumber);
				printf("\nPlayer Name : %s",p[i].name);
				printf("\nPlayer Runs : %d",p[i].Runs);
				printf("\nPlayer Wickets : %d",p[i].Wickets);
				printf("\nMatches Played : %d",p[i].matchesPlay);
				printf("\n---------------------------------------------------------\n");
				flag++;
			}
		}
		if(flag==0)
		{
			printf("\nPlayer Not Found\n");
		}
	}
	else if(ch==2)
	{
		char n[20];
		int i,flag=0;
		printf("\nEnter Player Name : ");
		fflush(stdin);
		gets(n);
		for(i=0;i<totalPlayers;i++)
		{
			if(strcasecmp(p[i].name,n)==0)
			{
				printf("\nPlayer Jersey Number : %d",p[i].jerseyNumber);
				printf("\nPlayer Name : %s",p[i].name);
				printf("\nPlayer Runs : %d",p[i].Runs);
				printf("\nPlayer Wickets : %d",p[i].Wickets);
				printf("\nMatches Played : %d",p[i].matchesPlay);
				printf("\n---------------------------------------------------------\n");
				flag++;
			}
		}
		if(flag==0)
		{
			printf("\nPlayer Not Found\n");
		}
		
	}
}
void update(Player* p)
{
	int ch;
	printf("\n1.Upadate Runs\n2.Update Wickets\n3.Update Matches\n");
	printf("\nWhat You Want To Update\nEnter Your Choice : \n");
	scanf("%d",&ch);
	if(ch==1)
	{
		int d,r,i;
		printf("Enter Jersey Number Of Player :");
		scanf("%d",&d);
		printf("\nEnter New Runs That You Want To Update : ");
		scanf("%d",&r);
		for(i=0;i<totalPlayers;i++)
		{
		
			if(p[i].jerseyNumber==d)
			{
				p[i].Runs=r;
			}
		}
		printf("\n ! UPDATED SUCCESSFULLY !\n");
	}
	else if(ch==2)
	{
		int d,w,i;
		printf("Enter Jersey Number Of Player :");
		scanf("%d",&d);
		printf("\nEnter Wickets That You Want To Update : ");
		scanf("%d",&w);
		for(i=0;i<totalPlayers;i++)
		{
		
			if(p[i].jerseyNumber==d)
			{
				p[i].Wickets=w;
			}
		}
		printf("\n ! UPDATED SUCCESSFULLY !\n");
	}
	else if(ch==3)
	{
		int d,m,i;
		printf("Enter Jersey Number Of Player :");
		scanf("%d",&d);
		printf("\nEnter Wickets That You Want To Update : ");
		scanf("%d",&m);
		for(i=0;i<totalPlayers;i++)
		{
		
			if(p[i].jerseyNumber==d)
			{
				p[i].matchesPlay=m;
			}
		}
		printf("\n ! UPDATED SUCCESSFULLY !\n");
	}
	
}
void sortPlayer(Player* p)
{
	int ch;
	printf("\n1.Players Sort By Runs\n2.Players Sort By Wivkets\n3.Players Sort By Matches\n");
	printf("\nEnter Your Choice : \n");
	scanf("%d",&ch);
	if(ch==1)
	{
		int ans;
		printf("\n1.Sort by ascending order\n2.Sort by descending order\n");
		printf("\nEnter Your Choice : \n");
		scanf("%d",&ans);
		if(ans==1)
		{
			int i,j;
		Player temp;
		for(i=0;i<totalPlayers;i++)
		{
			for(j=i+1;j<totalPlayers;j++)
			{
				if(p[i].Runs>p[j].Runs)
				{
					temp=p[i];
					p[i]=p[j];
					p[j]=temp;
				}
				
			}
		}
	}
		if(ans==2)
		{
			
			int i,j;
		Player temp;
		for(i=0;i<totalPlayers;i++)
		{
			for(j=i+1;j<totalPlayers;j++)
			{
				if(p[i].Runs<p[j].Runs)
				{
					temp=p[i];
					p[i]=p[j];
					p[j]=temp;
				}
				
			}	
		}
		}
		int i;
		printf("\n************SORTED PLAYERS ARE**********\n");
		for(i=0;i<totalPlayers;i++)
		{
			printf("\nPlayer Jersey Number : %d",p[i].jerseyNumber);
			printf("\nPlayer Name : %s",p[i].name);
			printf("\nPlayer Runs : %d",p[i].Runs);
			printf("\nPlayer Wickets : %d",p[i].Wickets);
			printf("\nMatches Played : %d",p[i].matchesPlay);
			printf("\n---------------------------------------------------------\n");
		
		}
				
	}
	else if(ch==2)
	{
		int ans;
		printf("\n1.Sort by ascending order\n2.Sort by descending order\n");
		printf("\nEnter Your Choice : \n");
		scanf("%d",&ans);
		if(ans==1)
		{
			int i,j;
		Player temp;
		for(i=0;i<totalPlayers;i++)
		{
			for(j=i+1;j<totalPlayers;j++)
			{
				if(p[i].Wickets>p[j].Wickets)
				{
					temp=p[i];
					p[i]=p[j];
					p[j]=temp;
				}
				
			}
		}
		}
		if(ans==2)
		{
			int i,j;
		Player temp;
		for(i=0;i<totalPlayers;i++)
		{
			for(j=i+1;j<totalPlayers;j++)
			{
				if(p[i].Wickets<p[j].Wickets)
				{
					temp=p[i];
					p[i]=p[j];
					p[j]=temp;
				}
				
			}
		}
		}
		int i;
		printf("\nSORTED PLAYERS ARE : \n");
		for(i=0;i<totalPlayers;i++)
		{
			printf("\nPlayer Jersey Number : %d",p[i].jerseyNumber);
			printf("\nPlayer Name : %s",p[i].name);
			printf("\nPlayer Runs : %d",p[i].Runs);
			printf("\nPlayer Wickets : %d",p[i].Wickets);
			printf("\nMatches Played : %d",p[i].matchesPlay);
			printf("\n---------------------------------------------------------\n");
		
		}
		
	}
	else if(ch==3)
	{
		int ans;
		printf("\n1.Sort by ascending order\n2.Sort by descending order\n");
		printf("\nEnter Your Choice : \n");
		scanf("%d",&ans);
		if(ans==1)
		{
			int i,j;
		Player temp;
		for(i=0;i<totalPlayers;i++)
		{
			for(j=i+1;j<totalPlayers;j++)
			{
				if(p[i].matchesPlay>p[j].matchesPlay)
				{
					temp=p[i];
					p[i]=p[j];
					p[j]=temp;
				}
				
			}
		}
		}
		if(ans==2)
		{
			int i,j;
		Player temp;
		for(i=0;i<totalPlayers;i++)
		{
			for(j=i+1;j<totalPlayers;j++)
			{
				if(p[i].matchesPlay<p[j].matchesPlay)
				{
					temp=p[i];
					p[i]=p[j];
					p[j]=temp;
				}
				
			}
		}
		}
		int i;
		printf("\nSORTED PLAYERS ARE : \n");
		for(i=0;i<totalPlayers;i++)
		{
			printf("\nPlayer Jersey Number : %d",p[i].jerseyNumber);
			printf("\nPlayer Name : %s",p[i].name);
			printf("\nPlayer Runs : %d",p[i].Runs);
			printf("\nPlayer Wickets : %d",p[i].Wickets);
			printf("\nMatches Played : %d",p[i].matchesPlay);
			printf("\n---------------------------------------------------------\n");
		
		}
		
	}
	
}
Player* resizeStruct(Player* p)
{
		
	int size;
	printf("\nenter new size : ");
	scanf("%d",&size);
	p=(Player*)realloc(p,(size+totalPlayers)*sizeof(Player));
	return p;
}

