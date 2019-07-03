#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define MAX_LIMIT 40
int main()
{
	int odi=50,current_score_batting,final_score_batting,oponent_score_will;
	float avg_run_batting,over_left,predicted_score_batting,over,avgg,avg_run_oponent,avgo;
	printf("     welcome to match prediction!     ");
	printf("\n    -----------------------------  \n");
	printf("\n   Enter the match type: ODI or T20 \n");
	char match[MAX_LIMIT];
	fgets(match,MAX_LIMIT,stdin);
	printf("\n   match type is: %s",match);
	printf("\n   Enter the names of the first team  \n");
	char first[MAX_LIMIT];
	fgets(first,MAX_LIMIT,stdin);
	printf("\n   name of the first team is: %s",first);
	printf("\n   Enter name of the second team\n");
	char second[MAX_LIMIT];
	fgets(second,MAX_LIMIT,stdin);
	printf("\n   name of the second team is: %s\n",second);
	printf("\n  ....................................... \n");
	
	
	printf("\n   Enter the name of the players of first team\n");
	printf("\n        \n");
	char first_player[MAX_LIMIT];
	fgets(first_player,MAX_LIMIT,stdin);
	
	char second_player[MAX_LIMIT];
	fgets(second_player,MAX_LIMIT,stdin);
	
	char third_player[MAX_LIMIT];
	fgets(third_player,MAX_LIMIT,stdin);
	
	char fourth_player[MAX_LIMIT];
	fgets(fourth_player,MAX_LIMIT,stdin);
	
	char fifth_player[MAX_LIMIT];
	fgets(fifth_player,MAX_LIMIT,stdin);
	
    char sixth_player[MAX_LIMIT];
    fgets(sixth_player,MAX_LIMIT,stdin);
    
    char seventh_player[MAX_LIMIT];
    fgets(seventh_player,MAX_LIMIT,stdin);
    
    char eigth_player[MAX_LIMIT];
    fgets(eigth_player,MAX_LIMIT,stdin);
    
    char ninth_player[MAX_LIMIT];
    fgets(ninth_player,MAX_LIMIT,stdin);
    
    char tenth_player[MAX_LIMIT];
    fgets(tenth_player,MAX_LIMIT,stdin);
    
    char eleventh_player[MAX_LIMIT];
    fgets(eleventh_player,MAX_LIMIT,stdin);
    
    printf("\n---------------------------------------------\n");
    printf("\n    Enter name of the players of second team\n");
    printf("\n        \n");
    
    
    char sec_fir[MAX_LIMIT];
    fgets(sec_fir,MAX_LIMIT,stdin);
    
    char sec_sec[MAX_LIMIT];
    fgets(sec_sec,MAX_LIMIT,stdin);
    
    char sec_thir[MAX_LIMIT];
    fgets(sec_thir,MAX_LIMIT,stdin);
    
    char sec_for[MAX_LIMIT];
    fgets(sec_thir,MAX_LIMIT,stdin);
    
    char sec_fif[MAX_LIMIT];
    fgets(sec_fif,MAX_LIMIT,stdin);
    
    char sec_six[MAX_LIMIT];
    fgets(sec_six,MAX_LIMIT,stdin);
    
    char sec_seve[MAX_LIMIT];
    fgets(sec_seve,MAX_LIMIT,stdin);
    
    char sec_eig[MAX_LIMIT];
    fgets(sec_eig,MAX_LIMIT,stdin);
    
    char sec_nin[MAX_LIMIT];
    fgets(sec_nin,MAX_LIMIT,stdin);
    
    char sec_ten[MAX_LIMIT];
    fgets(sec_ten,MAX_LIMIT,stdin);
    
    char sec_ele[MAX_LIMIT];
    fgets(sec_ele,MAX_LIMIT,stdin);
    
    printf("\n .................................................\n");
    
    printf("\n    Enter the name of the batting & balling team? \n");
    char batting[MAX_LIMIT];
    fgets(batting,MAX_LIMIT,stdin);
    
    char balling[MAX_LIMIT];
    fgets(balling,MAX_LIMIT,stdin);
    
    printf("\n batting team is : %s and balling team is: %s",batting,balling);
    
    printf("\n ........................................................\n");
    
    printf("\n    Enter the current score of batting  team\n");
    scanf("%d",&current_score_batting);
    printf("\n    enter the current over!\n");
    scanf("%f",&over);
	avg_run_batting= current_score_batting/over;
	printf("\n     current run rate is: %f",avg_run_batting);
	
	predicted_score_batting=(avg_run_batting*50);
	printf("\n      predicted score of batting team will: %f",predicted_score_batting);
	
	if(avg_run_batting=(avg_run_batting+1))
		predicted_score_batting=(avg_run_batting*50);
		printf("\n    preicted score will be :%f if the run rate will %f per over",predicted_score_batting,avg_run_batting);
     
	 
	if(avg_run_batting=(avg_run_batting+2))
	 predicted_score_batting=(avg_run_batting*50);
	 printf("\n    predicted score will be: %f if the run rate will %f per over",predicted_score_batting,avg_run_batting);
	 
if(avg_run_batting=avgg)
	 printf("\n enter the average score per over you want!\n");
	 scanf("%f",&avgg);
	 predicted_score_batting=(avgg*50);
	 printf("\n       predicted score will be: %f if the run rate will: %f be the value that you entered\n",predicted_score_batting,avgg);
	 
	printf("\n         Enter the final score of batting team:\n",final_score_batting);
	scanf("%d",&final_score_batting);
	 
	 
   printf("\n.......................................................................................\n");
   printf("\n      statistics for oponent team!\n");
   printf("\n.......................................................................................\n");
   
   oponent_score_will=(final_score_batting+1);
   printf("\n       oponent team have to do %d runs to win the match\n",oponent_score_will);
   avg_run_oponent=(oponent_score_will/50);
   printf("Required run rate per over:%f",avg_run_oponent);
   
   printf("\n............................................................................\n");
   printf("\n      here comes the match prediction result: winning & loosing percentage\n");
   float run_rate_bat_10,run_rate_bat_20,run_rate_bat_30,run_rate_bat_40,run_rate_bat_45;
   int wicket_bat_10,wicket_bat_25,wicket_bat_35,wicket_bat_45;
   float run_rate_ball_10,run_rate_ball_20,run_rate_ball_30,run_rate_ball_40,run_rate_ball_45;
float wicket_10,wicket_25,wicket_35,wicket_45;
   printf("\n     enter the details.........\n");
   printf("\n      enter the run rate of the batting team after 10,20,30,40 and 45 overs\n",run_rate_bat_10,run_rate_bat_20,run_rate_bat_30,run_rate_bat_40,run_rate_bat_45);
   scanf("%f%f%f%f%f",&run_rate_bat_10,&run_rate_bat_20,&run_rate_bat_30,&run_rate_bat_40,&run_rate_bat_45);
   
     
   printf("\n     Enter the number of wickets batting team loose after playing the 20,25,35 and 45 overs\n",wicket_bat_10,wicket_bat_25,wicket_bat_35,wicket_bat_45);
   scanf("%d%d%d%d",&wicket_bat_10,&wicket_bat_25,&wicket_bat_35,&wicket_bat_45);
   
   printf("\n    Enter the run rate of the oponent team after 10,20,30,40 and 45 overs\n",run_rate_ball_10,run_rate_ball_20,run_rate_ball_30,run_rate_ball_40,run_rate_ball_45);
   scanf("%f%f%f%f%f",&run_rate_ball_10,&run_rate_ball_20,&run_rate_ball_30,&run_rate_ball_40,&run_rate_ball_45);
   
   printf("\n    enter the number of wickets oponent team loose after 10,25,35 and 45 overs\n",wicket_10,wicket_25,wicket_35,wicket_45);
   scanf("%d%d%d%d",&wicket_10,&wicket_25,&wicket_35,&wicket_45);
   
   printf("\n ................ .........it's prediction time.....................  ......................");
printf("\n      prediction after 10 overs..........");
  
  
   

   
	 
	

}
