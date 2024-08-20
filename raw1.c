#include<string.h>
#include "pr2.h"
void rawData(Player* p)
{

	
   p[0].jerseyNumber=1;
   strcpy(p[0].name,"Rohit Sharma");
   p[0].Runs=1111;
   p[0].Wickets=55;
   p[0].matchesPlay=300;
   totalPlayers++;

  
   
   p[1].jerseyNumber=2;
   strcpy(p[1].name,"Hardik Pandya");
   p[1].Runs=900;
   p[1].Wickets=22;
   p[1].matchesPlay=222;
   totalPlayers++;
   

   
   p[2].jerseyNumber=3;
   strcpy(p[2].name,"M.S.Dhoni");
   p[2].Runs=3692;
   p[2].Wickets=88;
   p[2].matchesPlay=650;
   totalPlayers++;

   
   
   p[3].jerseyNumber=4;
   strcpy(p[3].name,"Virat Kohli");
   p[3].Runs=2734;
   p[3].Wickets=43;
   p[3].matchesPlay=444;
   totalPlayers++;
   
	
   
   p[4].jerseyNumber=5;
   strcpy(p[4].name,"Shubhman Gill");
   p[4].Runs=1890;
   p[4].Wickets=5;
   p[4].matchesPlay=238;
   totalPlayers++;
}
