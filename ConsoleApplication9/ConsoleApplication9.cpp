/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/

# include "iGraphics.h"
#include "VariableDeclaration.h"
#include "RandomAlphabetAndWordSerial.h"
#include "Score.h"
#include "Algorithm.h"
#include "Hints.h"
#include "AlphabetConnectingLine.h"
#include "ImageAlgorithm.h"
#include "GameScreen.h"
#include "LevelUp.h"

void timechange(){
	if(GameMode==LinkMode){
		if(level==1){
			if(time_sec==0&&time_min>0)time_sec=60;
			if(time_sec==60&&time_min>0){
				time_min--;
		
			}
			if(time_sec>0){
				time_sec--;
			}
		}
		if(level==2){
			if(time_sec==0&&time_min>0)time_sec=60;
			if(time_sec==60&&time_min>0){
				time_min--;
		
			}
			if(time_sec>0){
				time_sec--;
			}
		}	
		if(level==0){
			if(time_sec==0&&time_min>0)time_sec=60;
			if(time_sec==60&&time_min>0){
				time_min--;
		
			}
			if(time_sec>0){
				time_sec--;
			}
		}
		if(level==0&&time_min==0&&time_sec==0||level==1&&time_min==0&&time_sec==0||level==2&&time_min==0&&time_sec==0){
			GameMode=GameOver;
		}
	}
}

/* 
	function iDraw() is called again and again by the system.
*/
void filestructure(){
	

//	for(i_score=0;i_score<3;i_score++){
//		printf("%d\n",scorefile[i_score]);
//	}
	scorefile[3]=score;
		ScoreRead=fopen("Leaderboard.txt","r");
		for(i_score=0;i_score<3;i_score++){
			fscanf(ScoreRead,"%d",&scorefile[i_score]);
		}
		fclose(ScoreRead);
	if(GameMode==GameOver){

		
		//printf("%d\n",j_score);
		for(i_score=0;i_score<4;i_score++){
			for(j_score=i_score+1;j_score<4;j_score++){
				if(scorefile[i_score]<scorefile[j_score]){
					 temp=scorefile[i_score];
					scorefile[i_score]=scorefile[j_score];
					scorefile[j_score]=temp;
				}
			}
		}
		for(i_score=0;i_score<4;i_score++){
			printf("%d\n",scorefile[i_score]);
		}
		ScoreWrite=fopen("Leaderboard.txt","w");
		for(i_score=0;i_score<3;i_score++){
			fprintf(ScoreWrite,"%d\n",scorefile[i_score]);
		}
	
		fclose(ScoreWrite);
		
	}
	if(flag_exit==1)ExitMode;
	/*for(i_score=0;i_score<3;i_score++){
			scorefile[i_score]=scorefile2[i_score];
		}
	ScoreWrite=fopen("Leaderboard.txt","w");
	for(i_score=0;i_score<3;i_score++){
		fprintf(ScoreWrite,"%d\n",scorefile[i_score]);
	}
	fclose(ScoreWrite);
	*/
	//printf("0000\n");
//	for(i_score=0;i_score<4;i_score++){
	//		printf("%d\n",scorefile[i_score]);
	//	}
	//printf("%d\n",scorefile[3]);
	//ScoreReadUsername=fopen("LeaderBoardUserName.txt","r");
	//fscanf(ScoreReadUsername,"%[^\n]",UserName);
	//printf("%s\n",UserName);
	/*
	if(GameMode==GameOver)if(score>scorefile[){
		p=score;
	}
	if(GameMode==GameOver){
		
		
	}
	*/
	
	//fclose(ScoreReadUsername);
	
}

void Reset(){
	if(GameMode==GameOver){
	level0_bat=0,level0_tab=0,level0_at=0,level0_bro=0,level0_rob=0,level0_or=0,level0_mad=0,level0_dam=0,level0_am=0,level0_pit=0,level0_tip=0,level0_it=0,level0_pat=0,level0_tap=0,level0_apt=0;
	level1_word=0,level1_row=0,level1_or=0,level1_do=0,level1_rod=0,level1_deny=0,level1_dye=0,level1_end=0,level1_den=0,level1_yen=0,level1_gone=0,level1_ego=0,level1_gen=0,level1_one=0,level1_neo=0,level1_near=0,level1_ear=0,level1_earn=0,level1_era=0,level1_are=0,level1_ran=0,level1_heat=0,level1_eat=0,level1_the=0,level1_tea=0,level1_hat=0,level1_hate=0,level1_ate=0;
	level2_dream=0,level2_deam=0,level2_dare=0,level2_dame=0,level2_made=0,level2_read=0,level2_mare=0,level2_dear=0,level2_swing=0,level2_wing=0,level2_sing=0,level2_sign=0,level2_swig=0,level2_wrong=0,level2_worn=0,level2_grow=0,level2_gown=0,level2_now=0,level2_own=0,level2_won=0,level2_grown=0,level2_row=0,level2_nor=0,level2_wings=0;
	level_0=0,level_1=0,level_2=0;
	level2_dream_score_flag=0,level2_dame_score_flag=0,level2_deam_score_flag=0,level2_dare_score_flag=0,level2_read_score_flag=0,level2_made_score_flag=0,level2_mare_score_flag=0,level2_dear_score_flag=0,level2_swing_score_flag=0,level2_wing_score_flag=0,level2_sing_score_flag=0,level2_sign_score_flag=0,level2_swig_score_flag=0,level2_wrong_score_flag=0,level2_worn_score_flag=0,level2_grow_score_flag=0,level2_gown_score_flag=0,level2_won_score_flag=0,level2_now_score_flag=0,level2_own_score_flag=0,level2_grown_score_flag=0,level2_row_score_flag=0,level2_nor_score_flag=0,level2_wings_score_flag=0;
	level1_word_score_flag=0,level1_or_score_flag=0,level1_do_score_flag=0,level1_row_score_flag=0,level1_rod_score_flag=0,level1_dye_score_flag=0,level1_end_score_flag=0,level1_deny_score_flag=0,level1_den_score_flag=0,level1_yen_score_flag=0,level1_gone_score_flag=0,level1_ego_score_flag=0,level1_gen_score_flag=0,level1_one_score_flag=0,level1_neo_score_flag=0,level1_near_score_flag=0,level1_earn_score_flag=0,level1_are_score_flag=0,level1_era_score_flag=0,level1_ear_score_flag=0,level1_ran_score_flag=0,level1_heat_score_flag=0,level1_eat_score_flag=0,level1_tea_score_flag=0,level1_the_score_flag=0,level1_hat_score_flag=0,level1_hate_score_flag=0,level1_ate_score_flag=0;
	level0_bat_score_flag=0,level0_tab_score_flag=0,level0_at_score_flag=0,level0_rob_score_flag=0,level0_bro_score_flag=0,level0_or_score_flag=0,level0_mad_score_flag=0,level0_dam_score_flag=0,level0_am_score_flag=0,level0_pit_score_flag=0,level0_tip_score_flag=0,level0_it_score_flag=0,level0_pat_score_flag=0,level0_tap_score_flag=0,level0_apt_score_flag=0;
	level_2_flag_discovered_word_DREAM=0,level_2_flag_discovered_word_DEAM=0,level_2_flag_discovered_word_DARE=0,level_2_flag_discovered_word_DAME=0,level_2_flag_discovered_word_MADE=0,level_2_flag_discovered_word_READ=0,level_2_flag_discovered_word_MARE=0,level_2_flag_discovered_word_DEAR=0,level_2_flag_discovered_word_SWING=0,level_2_flag_discovered_word_SING=0,level_2_flag_discovered_word_WING=0,level_2_flag_discovered_word_SIGN=0,level_2_flag_discovered_word_SWIG=0,level_2_flag_discovered_word_WRONG=0,level_2_flag_discovered_word_WORN=0,level_2_flag_discovered_word_GROW=0,level_2_flag_discovered_word_GOWN=0,level_2_flag_discovered_word_WON=0,level_2_flag_discovered_word_NOW=0,level_2_flag_discovered_word_OWN=0,level_2_flag_discovered_word_GROWN=0,level_2_flag_discovered_word_ROW=0,level_2_flag_discovered_word_NOR=0,level_2_flag_discovered_word_WINGS=0;
	level_1_flag_discovered_word_WORD=0,level_1_flag_discovered_word_OR=0,level_1_flag_discovered_word_DO=0,level_1_flag_discovered_word_ROW=0,level_1_flag_discovered_word_ROD=0,level_1_flag_discovered_word_DENY=0,level_1_flag_discovered_word_DYE=0,level_1_flag_discovered_word_DEN=0,level_1_flag_discovered_word_END=0,level_1_flag_discovered_word_YEN=0,level_1_flag_discovered_word_GONE=0,level_1_flag_discovered_word_EGO=0,level_1_flag_discovered_word_GEN=0,level_1_flag_discovered_word_ONE=0,level_1_flag_discovered_word_NEO=0,level_1_flag_discovered_word_NEAR=0,level_1_flag_discovered_word_EARN=0,level_1_flag_discovered_word_EAR=0,level_1_flag_discovered_word_ERA=0,level_1_flag_discovered_word_ARE=0,level_1_flag_discovered_word_RAN=0,level_1_flag_discovered_word_HEAT=0,level_1_flag_discovered_word_EAT=0,level_1_flag_discovered_word_TEA=0,level_1_flag_discovered_word_THE=0,level_1_flag_discovered_word_HAT=0,level_1_flag_discovered_word_HATE=0,level_1_flag_discovered_word_ATE=0;
	level_0_flag_discovered_word_BAT=0,level_0_flag_discovered_word_TAB=0,level_0_flag_discovered_word_AT=0,level_0_flag_discovered_word_BRO=0,level_0_flag_discovered_word_ROB=0,level_0_flag_discovered_word_OR=0,level_0_flag_discovered_word_MAD=0,level_0_flag_discovered_word_DAM=0,level_0_flag_discovered_word_AM=0,level_0_flag_discovered_word_TIP=0,level_0_flag_discovered_word_PIT=0,level_0_flag_discovered_word_IT=0,level_0_flag_discovered_word_PAT=0,level_0_flag_discovered_word_TAP=0,level_0_flag_discovered_word_APT=0;
	level_0_CountHints_TAB=0,level_0_CountHints_BAT=0,level_0_CountHints_AT=0,level_0_CountHints_ROB=0,level_0_CountHints_BRO=0,level_0_CountHints_OR=0,level_0_CountHints_MAD=0,level_0_CountHints_DAM=0,level_0_CountHints_AM=0,level_0_CountHints_TIP=0,level_0_CountHints_PIT=0,level_0_CountHints_IT=0, level_0_CountHints_TAP=0,level_0_CountHints_PAT=0,level_0_CountHints_APT=0;
	level_1_CountHints_WORD=0,level_1_CountHints_OR=0,level_1_CountHints_ROW=0,level_1_CountHints_DENY=0,level_1_CountHints_DYE=0,level_1_CountHints_END=0,level_1_CountHints_DEN=0,level_1_CountHints_GONE=0,level_1_CountHints_GEN=0,level_1_CountHints_EGO=0,level_1_CountHints_ONE=0,level_1_CountHints_NEAR=0,level_1_CountHints_EARN=0,level_1_CountHints_EAR=0,level_1_CountHints_ERA=0,level_1_CountHints_HEAT=0,level_1_CountHints_TEA=0,level_1_CountHints_EAT=0,level_1_CountHints_THE=0;
	level_0_hints_score_flag_t_of_tab=0,level_0_hints_score_flag_a_of_tab=0,level_0_hints_score_flag_b_of_tab=0,level_0_hints_score_flag_t_of_bat=0,level_0_hints_score_flag_a_of_bat=0,level_0_hints_score_flag_b_of_bat=0,level_0_hints_score_flag_t_of_at=0,level_0_hints_score_flag_a_of_at=0,level_0_hints_score_flag_b_of_bro=0,level_0_hints_score_flag_r_of_bro=0,level_0_hints_score_flag_o_of_bro=0,level_0_hints_score_flag_r_of_rob=0,level_0_hints_score_flag_o_of_rob=0,level_0_hints_score_flag_b_of_rob=0,level_0_hints_score_flag_r_of_or=0,level_0_hints_score_flag_o_of_or=0,level_0_hints_score_flag_m_of_mad=0,level_0_hints_score_flag_a_of_mad=0,level_0_hints_score_flag_d_of_mad=0,level_0_hints_score_flag_d_of_dam=0,level_0_hints_score_flag_a_of_dam=0,level_0_hints_score_flag_m_of_dam=0,level_0_hints_score_flag_m_of_am=0,level_0_hints_score_flag_a_of_am=0,level_0_hints_score_flag_t_of_tip=0,level_0_hints_score_flag_i_of_tip=0,level_0_hints_score_flag_p_of_tip=0,level_0_hints_score_flag_t_of_pit=0,level_0_hints_score_flag_i_of_pit=0,level_0_hints_score_flag_p_of_pit=0,level_0_hints_score_flag_t_of_it=0,level_0_hints_score_flag_i_of_it=0,level_0_hints_score_flag_t_of_tap=0,level_0_hints_score_flag_a_of_tap=0,level_0_hints_score_flag_p_of_tap=0,level_0_hints_score_flag_t_of_pat=0,level_0_hints_score_flag_a_of_pat=0,level_0_hints_score_flag_p_of_pat=0,level_0_hints_score_flag_t_of_apt=0,level_0_hints_score_flag_a_of_apt=0,level_0_hints_score_flag_p_of_apt=0;
	level_1_hints_score_flag_w_of_word=0,level_1_hints_score_flag_o_of_word=0,level_1_hints_score_flag_r_of_word=0,level_1_hints_score_flag_d_of_word=0,level_1_hints_score_flag_r_of_row=0,level_1_hints_score_flag_o_of_row=0,level_1_hints_score_flag_w_of_row=0,level_1_hints_score_flag_o_of_or=0,level_1_hints_score_flag_r_of_or=0,level_1_hints_score_flag_d_of_deny=0,level_1_hints_score_flag_e_of_deny=0,level_1_hints_score_flag_n_of_deny=0,level_1_hints_score_flag_y_of_deny=0,level_1_hints_score_flag_d_of_dye=0,level_1_hints_score_flag_y_of_dye=0,level_1_hints_score_flag_e_of_dye=0,level_1_hints_score_flag_d_of_den=0,level_1_hints_score_flag_e_of_den=0,level_1_hints_score_flag_n_of_den=0,level_1_hints_score_flag_d_of_end=0,level_1_hints_score_flag_e_of_end=0,level_1_hints_score_flag_n_of_end=0,level_1_hints_score_flag_g_of_gone=0,level_1_hints_score_flag_o_of_gone=0,level_1_hints_score_flag_n_of_gone=0,level_1_hints_score_flag_e_of_gone=0,level_1_hints_score_flag_g_of_gen=0,level_1_hints_score_flag_e_of_gen=0,level_1_hints_score_flag_n_of_gen=0,level_1_hints_score_flag_o_of_one=0,level_1_hints_score_flag_n_of_one=0,level_1_hints_score_flag_e_of_one=0,level_1_hints_score_flag_e_of_ego=0,level_1_hints_score_flag_g_of_ego=0,level_1_hints_score_flag_o_of_ego=0,level_1_hints_score_flag_e_of_earn=0,level_1_hints_score_flag_a_of_earn=0,level_1_hints_score_flag_r_of_earn=0,level_1_hints_score_flag_n_of_earn=0,level_1_hints_score_flag_e_of_near=0,level_1_hints_score_flag_a_of_near=0,level_1_hints_score_flag_r_of_near=0,level_1_hints_score_flag_n_of_near=0,level_1_hints_score_flag_e_of_era=0,level_1_hints_score_flag_r_of_era=0,level_1_hints_score_flag_a_of_era=0,level_1_hints_score_flag_e_of_ear=0,level_1_hints_score_flag_r_of_ear=0,level_1_hints_score_flag_a_of_ear=0,level_1_hints_score_flag_h_of_heat=0,level_1_hints_score_flag_e_of_heat=0,level_1_hints_score_flag_a_of_heat=0,level_1_hints_score_flag_t_of_heat=0,level_1_hints_score_flag_t_of_tea=0,level_1_hints_score_flag_e_of_tea=0,level_1_hints_score_flag_a_of_tea=0,level_1_hints_score_flag_t_of_eat=0,level_1_hints_score_flag_a_of_eat=0,level_1_hints_score_flag_e_of_eat=0,level_1_hints_score_flag_t_of_the=0,level_1_hints_score_flag_h_of_the=0,level_1_hints_score_flag_e_of_the=0;
	level_1_hints_image_flag_w_of_word=0,level_1_hints_image_flag_o_of_word=0,level_1_hints_image_flag_r_of_word=0,level_1_hints_image_flag_d_of_word=0,level_1_hints_image_flag_r_of_row=0,level_1_hints_image_flag_o_of_row=0,level_1_hints_image_flag_w_of_row=0,level_1_hints_image_flag_o_of_or=0,level_1_hints_image_flag_r_of_or=0,level_1_hints_image_flag_d_of_deny=0,level_1_hints_image_flag_e_of_deny=0,level_1_hints_image_flag_n_of_deny=0,level_1_hints_image_flag_y_of_deny=0,level_1_hints_image_flag_d_of_dye=0,level_1_hints_image_flag_y_of_dye=0,level_1_hints_image_flag_e_of_dye=0,level_1_hints_image_flag_d_of_den=0,level_1_hints_image_flag_e_of_den=0,level_1_hints_image_flag_n_of_den=0,level_1_hints_image_flag_d_of_end=0,level_1_hints_image_flag_e_of_end=0,level_1_hints_image_flag_n_of_end=0,level_1_hints_image_flag_g_of_gone=0,level_1_hints_image_flag_o_of_gone=0,level_1_hints_image_flag_n_of_gone=0,level_1_hints_image_flag_e_of_gone=0,level_1_hints_image_flag_g_of_gen=0,level_1_hints_image_flag_e_of_gen=0,level_1_hints_image_flag_n_of_gen=0,level_1_hints_image_flag_o_of_one=0,level_1_hints_image_flag_n_of_one=0,level_1_hints_image_flag_e_of_one=0,level_1_hints_image_flag_e_of_ego=0,level_1_hints_image_flag_g_of_ego=0,level_1_hints_image_flag_o_of_ego=0,level_1_hints_image_flag_e_of_earn=0,level_1_hints_image_flag_a_of_earn=0,level_1_hints_image_flag_r_of_earn=0,level_1_hints_image_flag_n_of_earn=0,level_1_hints_image_flag_e_of_near=0,level_1_hints_image_flag_a_of_near=0,level_1_hints_image_flag_r_of_near=0,level_1_hints_image_flag_n_of_near=0,level_1_hints_image_flag_e_of_era=0,level_1_hints_image_flag_r_of_era=0,level_1_hints_image_flag_a_of_era=0,level_1_hints_image_flag_e_of_ear=0,level_1_hints_image_flag_r_of_ear=0,level_1_hints_image_flag_a_of_ear=0,level_1_hints_image_flag_h_of_heat=0,level_1_hints_image_flag_e_of_heat=0,level_1_hints_image_flag_a_of_heat=0,level_1_hints_image_flag_t_of_heat=0,level_1_hints_image_flag_t_of_tea=0,level_1_hints_image_flag_e_of_tea=0,level_1_hints_image_flag_a_of_tea=0,level_1_hints_image_flag_t_of_eat=0,level_1_hints_image_flag_a_of_eat=0,level_1_hints_image_flag_e_of_eat=0,level_1_hints_image_flag_t_of_the=0,level_1_hints_image_flag_h_of_the=0,level_1_image_score_flag_e_of_the=0;
	level_0_hints_image_flag_t_of_tab=0,level_0_hints_image_flag_a_of_tab=0,level_0_hints_image_flag_b_of_tab=0,level_0_hints_image_flag_t_of_bat=0,level_0_hints_image_flag_a_of_bat=0,level_0_hints_image_flag_b_of_bat=0,level_0_hints_image_flag_t_of_at=0,level_0_hints_image_flag_a_of_at=0,level_0_hints_image_flag_b_of_bro=0,level_0_hints_image_flag_r_of_bro=0,level_0_hints_image_flag_o_of_bro=0,level_0_hints_image_flag_r_of_rob=0,level_0_hints_image_flag_o_of_rob=0,level_0_hints_image_flag_b_of_rob=0,level_0_hints_image_flag_r_of_or=0,level_0_hints_image_flag_o_of_or=0,level_0_hints_image_flag_m_of_mad=0,level_0_hints_image_flag_a_of_mad=0,level_0_hints_image_flag_d_of_mad=0,level_0_hints_image_flag_d_of_dam=0,level_0_hints_image_flag_a_of_dam=0,level_0_hints_image_flag_m_of_dam=0,level_0_hints_image_flag_m_of_am=0,level_0_hints_image_flag_a_of_am=0,level_0_hints_image_flag_t_of_tip=0,level_0_hints_image_flag_i_of_tip=0,level_0_hints_image_flag_p_of_tip=0,level_0_hints_image_flag_t_of_pit=0,level_0_hints_image_flag_i_of_pit=0,level_0_hints_image_flag_p_of_pit=0,level_0_hints_image_flag_t_of_it=0,level_0_hints_image_flag_i_of_it=0;
	time_min=0;time_sec=30;
	int len=strlen(arr);
	for(i=0;i<len;i++){
		arr[i]='\0';
	}
	CountDiscoveredWord=0,CountDiscoveredBonusWord=0;
	countW=0,countO=0,countR=0,countD=0,countB=0,countA=0,countT=0,countM=0,countI=0,countP=0,countE=0,countY=0,countN=0,countG=0,countH=0,countS=0;
	flagW_MoreThanOnce=0,flagO_MoreThanOnce=0,flagR_MoreThanOnce=0,flagD_MoreThanOnce=0,flagB_MoreThanOnce=0,flagA_MoreThanOnce=0,flagT_MoreThanOnce=0,flagM_MoreThanOnce=0,flagP_MoreThanOnce=0,flagI_MoreThanOnce=0,flagN_MoreThanOnce=0,flagY_MoreThanOnce=0,flagE_MoreThanOnce=0,flagG_MoreThanOnce=0,flagH_MoreThanOnce=0,flagS_MoreThanOnce=0;
	score=0;
	}


}
void iDraw()
{
	
	//place your drawing codes here	
	iClear();

	filestructure();
	if(GameMode==LinkMode){
		levelup();
		algorithm();
		gamescreen();
		word_image_random();
		 word_random_series();
		if(FlagNoWord==1){
			WrongWord;
			}
		if(FlagExtraWord==1&&CountDiscoveredBonusWord==0){
			//CountDiscoveredBonusWord is used so that extra word and repeated extra word do not overlap 
			ExtraWord;
		}
		if(flagW_MoreThanOnce==1||flagO_MoreThanOnce==1||flagR_MoreThanOnce==1||flagD_MoreThanOnce==1||flagB_MoreThanOnce==1||flagA_MoreThanOnce==1||flagT_MoreThanOnce==1||flagM_MoreThanOnce==1||flagI_MoreThanOnce==1||flagP_MoreThanOnce==1||flagE_MoreThanOnce==1||flagN_MoreThanOnce==1||flagY_MoreThanOnce==1||flagG_MoreThanOnce==1||flagH_MoreThanOnce==1||flagS_MoreThanOnce==1){
			MoreThanOnce;
		}
		if(CountDiscoveredWord==1){
			 DiscoveredWord;
		}
		if(CountDiscoveredBonusWord==1){
			 DiscoveredBonusWord;
		}
		if(FlagMatchWordBox==1){
			MatchWordBox;
		}
		hints_algo();
		image_algo();
		line();



	}
	if(GameMode==DifficultyMode){
		
		iShowBMP(0,0,"background//menu_easy_medium_hard.bmp");
		iShowBMP(30,30,"imageW//HomeMenu.bmp");
	}
	if(GameMode==GameOver){
		iShowBMP(0,0,"background//background_game_over.bmp");
		iSetColor(177,105,67);
		iText(360,800-590,strscore,GLUT_BITMAP_TIMES_ROMAN_24);
		Reset();
	}
	if(GameMode==MenuMode){
		iShowBMP(0,0,"background//background_menu_wordify.bmp");
	}
	if(GameMode==HighScoreMode){
		iShowBMP(0,0,"background//high_score.bmp");
		iSetColor(251,223,183);
		itoa(scorefile[0],user1.str,10);
		iText(120,500,"1.",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(150,500,user1.str,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(scorefile[1],user2.str,10);
		iText(120,430,"2.",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(150,430,user2.str,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(scorefile[2],user3.str,10);
		iText(120,360,"3.",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(150,360,user3.str,GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if(GameMode==InstructionsMode){
	
		iShowBMP(0,0,"background//Instructions.bmp");
	}

	// word_image_random();
	printf("%d %d %d %d %d\n",word1.medium,word2.medium,word3.medium,word4.medium,word5.medium);
	printf("%d\n",Index);
	printf("%d %d %d %d %d\n",word1.hard,word2.hard,word3.hard,word4.hard,word5.hard);
	//printf("%d %d %d %d %d\n",WordRandom[0],WordRandom[1],WordRandom[2],WordRandom[3],WordRandom[4]);
	//printf("%d %d %d %d\n",first.index_image,second.index_image,third.index_image,fourth.index_image);
	//printf("%d %d\n",level_0,level);
	//printf("%d\n",GameMode);
	//printf("%d %d %d %d %d\n",first.index_image,second.index_image,third.index_image,fourth.index_image,fifth.index_image);
	//printf("%d %d\n",position_x.earn.e,position_y.earn.e);

	//iSetColor(113,77,53);
	//iFilledRectangle(0,0,800,800);
	//iShowBMP(100,0,"background//easy_medium_hard.bmp");
	//printf("%d %d %d\n",first.index_image,second.index_image,third.index_image);
	//printf("%d %d %d %d\n",level_0_flag_discovered_word_TAP,level_0_flag_discovered_word_PAT,level_0_flag_discovered_word_APT,level0_apt);

}

/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/

void iMouseMove(int mx, int my)
{
	//place your codes here

		
	
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	if(GameMode==MenuMode){
		if(mx>20&&mx<=228&&my>800-298&&my<800-281){
			GameMode=DifficultyMode;

		}
		if(mx>21&&mx<=249&&my>800-432&&my<800-414){
			GameMode=HighScoreMode;
		}
		if(mx>25&&mx<=301&&my>800-362&&my<800-344){
			GameMode=InstructionsMode;
		}
		if(mx>27&&mx<=231&&my>800-496&&my<800-480){
			GameMode=GameOver;
			flag_exit=1;
		}
	}
		
	if(GameMode==DifficultyMode){
		//This is for the easy level
		if(mx>250&&mx<475&&my>(800-300)&&my<(800-230)){
			GameMode=LinkMode;
			level=0;
			time_min=5;
			time_sec=60;
			}
		if(mx>250&&mx<475&&my>(800-444)&&my<(800-355)){
			GameMode=LinkMode;
			level=1;	
			time_min=5;
			time_sec=60;
			}
		if(mx>250&&mx<475&&my>(800-601)&&my<(800-489)){
			GameMode=LinkMode;
			level=2;
			time_min=5;
			time_sec=60;
			}
		if(mx>30&&mx<30+50&&my>30&&my<30+47){
			GameMode=MenuMode;	
		}
	}

	
	if(GameMode==LinkMode){
		if(level==0){
			//if(word_level_0[word1.easy][0]=='B'&&word_level_0[word1.easy][1]=='A'&&word_level_0[word1.easy][2]=='T'){
			if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='B'){
				if(mx>=610&&mx<=710&&my>=100&&my<=150){
					//this is for the hints though maybe it was not needed
						CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
						FlagNoWord=0;
						FlagExtraWord=0;
						}
				if(flag==0){

					if(mx>position_x.tab.b&&mx<position_x.tab.b+WidthOfImage&&my>position_y.tab.b&&my<position_y.tab.b+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagT_MoreThanOnce=0;flagA_MoreThanOnce=0;

					countB++;
					FlagNoWord=0;
					FlagExtraWord=0;
					if(countB>1)flagB_MoreThanOnce=1;

					if(countB<=1){
				
						arr[i]='B';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.tab.a&&mx<position_x.tab.a+WidthOfImage&&my>position_y.tab.a&&my<position_y.tab.a+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagB_MoreThanOnce=0;flagT_MoreThanOnce=0;

					countA++;
			
					FlagNoWord=0;
					FlagExtraWord=0;

					if(countA>1)flagA_MoreThanOnce=1;
					if(countA<=1){
				
						arr[i]='A';
				
						i++;
				
					}
				}
				if(mx>position_x.tab.t&&mx<position_x.tab.t+WidthOfImage&&my>position_y.tab.t&&my<position_y.tab.t+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagB_MoreThanOnce=0;flagA_MoreThanOnce=0;

					countT++;
					FlagNoWord=0;
					FlagExtraWord=0;

					if(countT>1)flagT_MoreThanOnce=1;
					if(countT<=1){

						arr[i]='T';
						i++;
						}
			
			
				}
				//}

				if(mx>600&&mx<720&&my>200&&my<260){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagB_MoreThanOnce=0;flagA_MoreThanOnce=0;flagT_MoreThanOnce=0;
					FlagNoWord=0;
					FlagExtraWord=0;
					arr[i]='\0';
					i++;
					flag=1;
					//if flag is one idraw function is used to carry out processing the output
					if(flag==1){
						countB=0;
						countA=0;
						countT=0;
						//the no. of alphabets used is again started counting from next word
					}
			
				}
		
				//for the chest
				if(mx>5&&mx<128&&my>10&&my<137){
					 modechest=ChestOpen;
				}
				if(modechest==ChestOpen){
					if(mx>95+540&&mx<95+555&&my>400+89&&my<425+89)modechest=ChestClose;
				}

			}
					if(i==0&&score>=15){
					
						if(level0_bat==0){
							if(mx>=610&&mx<=710&&my>=100&&my<=150){
								if(score>=15)level_0_CountHints_BAT++;
							}
						}
		
						else if(level0_tab==0&&level0_bat==1){
							if(mx>=610&&mx<=710&&my>=100&&my<=150){
								if(score>=15)level_0_CountHints_TAB++;
								}
							}
						else if(level0_at==0&&level0_bat==1&&level0_tab==1){
							if(mx>=610&&mx<=710&&my>=100&&my<=150){
								if(score>=15)level_0_CountHints_AT++;
							}
						}
					}
					if(mx>615&&mx<615+90&&my>40&&my<40+37){
						GameMode=GameOver;
					}
		}

			//if(word_level_0[word1.easy][0]=='B'&&word_level_0[word1.easy][1]=='A'&&word_level_0[word1.easy][2]=='T'){
			if(word_level_0[WordRandom[Index]][0]=='R'&&word_level_0[WordRandom[Index]][1]=='O'&&word_level_0[WordRandom[Index]][2]=='B'){
				if(mx>=610&&mx<=710&&my>=100&&my<=150){
					//this is for the hints though maybe it was not needed
						CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
						FlagNoWord=0;
						FlagExtraWord=0;
						}
				if(flag==0){

					if(mx>position_x.rob.b&&mx<position_x.rob.b+WidthOfImage&&my>position_y.rob.b&&my<position_y.rob.b+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagR_MoreThanOnce=0;flagO_MoreThanOnce=0;

					countB++;
					FlagNoWord=0;
					FlagExtraWord=0;
					if(countB>1)flagB_MoreThanOnce=1;

					if(countB<=1){
				
						arr[i]='B';
				
						i++;
				
				
					}
			
			
				}
					if(mx>position_x.rob.o&&mx<position_x.rob.o+WidthOfImage&&my>position_y.rob.o&&my<position_y.rob.o+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagB_MoreThanOnce=0;flagR_MoreThanOnce=0;

					countO++;
			
					FlagNoWord=0;
					FlagExtraWord=0;

					if(countO>1)flagO_MoreThanOnce=1;
					if(countO<=1){
				
						arr[i]='O';
				
						i++;
				
					}
				}
				if(mx>position_x.rob.r&&mx<position_x.rob.r+WidthOfImage&&my>position_y.rob.r&&my<position_y.rob.r+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagB_MoreThanOnce=0;flagO_MoreThanOnce=0;

					countR++;
					FlagNoWord=0;
					FlagExtraWord=0;

					if(countR>1)flagR_MoreThanOnce=1;
					if(countR<=1){

						arr[i]='R';
						i++;
						}
			
			
				}
				//}

				if(mx>600&&mx<720&&my>200&&my<260){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagB_MoreThanOnce=0;flagO_MoreThanOnce=0;flagR_MoreThanOnce=0;
					FlagNoWord=0;
					FlagExtraWord=0;
					arr[i]='\0';
					i++;
					flag=1;
					//if flag is one idraw function is used to carry out processing the output
					if(flag==1){
						countB=0;
						countR=0;
						countO=0;
						//the no. of alphabets used is again started counting from next word
					}
			
				}
		
				//for the chest
				if(mx>5&&mx<128&&my>10&&my<137){
					 modechest=ChestOpen;
				}
				if(modechest==ChestOpen){
					if(mx>95+540&&mx<95+555&&my>400+89&&my<425+89)modechest=ChestClose;
				}

			}
					if(i==0&&score>=15){
					
						if(level0_rob==0){
							if(mx>=610&&mx<=710&&my>=100&&my<=150){
								if(score>=15)level_0_CountHints_ROB++;
							}
						}
		
						else if(level0_bro==0&&level0_rob==1){
							if(mx>=610&&mx<=710&&my>=100&&my<=150){
								if(score>=15)level_0_CountHints_BRO++;
								}
							}
						else if(level0_or==0&&level0_rob==1&&level0_bro==1){
							if(mx>=610&&mx<=710&&my>=100&&my<=150){
								if(score>=15)level_0_CountHints_OR++;
							}
						}
					}
					if(mx>615&&mx<615+90&&my>40&&my<40+37){
						GameMode=GameOver;
					}
		}
			//if(word_level_0[word1.easy][0]=='B'&&word_level_0[word1.easy][1]=='A'&&word_level_0[word1.easy][2]=='T'){
			if(word_level_0[WordRandom[Index]][0]=='M'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='D'){
				if(mx>=610&&mx<=710&&my>=100&&my<=150){
					//this is for the hints though maybe it was not needed
						CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
						FlagNoWord=0;
						FlagExtraWord=0;
						}
				if(flag==0){

					if(mx>position_x.mad.d&&mx<position_x.mad.d+WidthOfImage&&my>position_y.mad.d&&my<position_y.mad.d+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagM_MoreThanOnce=0;flagA_MoreThanOnce=0;

					countD++;
					FlagNoWord=0;
					FlagExtraWord=0;
					if(countD>1)flagD_MoreThanOnce=1;

					if(countD<=1){
				
						arr[i]='D';
				
						i++;
				
				
					}
			
			
				}
					if(mx>position_x.mad.a&&mx<position_x.mad.a+WidthOfImage&&my>position_y.mad.a&&my<position_y.mad.a+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagD_MoreThanOnce=0;flagM_MoreThanOnce=0;

					countA++;
			
					FlagNoWord=0;
					FlagExtraWord=0;

					if(countA>1)flagA_MoreThanOnce=1;
					if(countA<=1){
				
						arr[i]='A';
				
						i++;
				
					}
				}
				if(mx>position_x.mad.m&&mx<position_x.mad.m+WidthOfImage&&my>position_y.mad.m&&my<position_y.mad.m+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagD_MoreThanOnce=0;flagA_MoreThanOnce=0;

					countM++;
					FlagNoWord=0;
					FlagExtraWord=0;

					if(countM>1)flagM_MoreThanOnce=1;
					if(countM<=1){

						arr[i]='M';
						i++;
						}
			
			
				}
				//}

				if(mx>600&&mx<720&&my>200&&my<260){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagM_MoreThanOnce=0;flagA_MoreThanOnce=0;flagD_MoreThanOnce=0;
					FlagNoWord=0;
					FlagExtraWord=0;
					arr[i]='\0';
					i++;
					flag=1;
					//if flag is one idraw function is used to carry out processing the output
					if(flag==1){
						countM=0;
						countA=0;
						countD=0;
						//the no. of alphabets used is again started counting from next word
					}
			
				}
		
				//for the chest
				if(mx>5&&mx<128&&my>10&&my<137){
					 modechest=ChestOpen;
				}
				if(modechest==ChestOpen){
					if(mx>95+540&&mx<95+555&&my>400+89&&my<425+89)modechest=ChestClose;
				}

			}
					if(i==0&&score>=15){
					
						if(level0_dam==0){
							if(mx>=610&&mx<=710&&my>=100&&my<=150){
								if(score>=15)level_0_CountHints_DAM++;
							}
						}
		
						else if(level0_mad==0&&level0_dam==1){
							if(mx>=610&&mx<=710&&my>=100&&my<=150){
								if(score>=15)level_0_CountHints_MAD++;
								}
							}
						else if(level0_am==0&&level0_dam==1&&level0_mad==1){
							if(mx>=610&&mx<=710&&my>=100&&my<=150){
								if(score>=15)level_0_CountHints_AM++;
							}
						}
					}
					if(mx>615&&mx<615+90&&my>40&&my<40+37){
						GameMode=GameOver;
					}
		}
			if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='I'&&word_level_0[WordRandom[Index]][2]=='P'){
				if(mx>=610&&mx<=710&&my>=100&&my<=150){
					//this is for the hints though maybe it was not needed
						CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
						FlagNoWord=0;
						FlagExtraWord=0;
						}
				if(flag==0){

					if(mx>position_x.tip.p&&mx<position_x.tip.p+WidthOfImage&&my>position_y.tip.p&&my<position_y.tip.p+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagT_MoreThanOnce=0;flagI_MoreThanOnce=0;

					countP++;
					FlagNoWord=0;
					FlagExtraWord=0;
					if(countP>1)flagP_MoreThanOnce=1;

					if(countP<=1){
				
						arr[i]='P';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.tip.i&&mx<position_x.tip.i+WidthOfImage&&my>position_y.tip.i&&my<position_y.tip.i+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagP_MoreThanOnce=0;flagT_MoreThanOnce=0;

					countI++;
			
					FlagNoWord=0;
					FlagExtraWord=0;

					if(countI>1)flagI_MoreThanOnce=1;
					if(countI<=1){
				
						arr[i]='I';
				
						i++;
				
					}
				}
				if(mx>position_x.tip.t&&mx<position_x.tip.t+WidthOfImage&&my>position_y.tip.t&&my<position_y.tip.t+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagP_MoreThanOnce=0;flagI_MoreThanOnce=0;

					countT++;
					FlagNoWord=0;
					FlagExtraWord=0;

					if(countT>1)flagT_MoreThanOnce=1;
					if(countT<=1){

						arr[i]='T';
						i++;
						}
			
			
				}
				//}

				if(mx>600&&mx<720&&my>200&&my<260){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagP_MoreThanOnce=0;flagI_MoreThanOnce=0;flagT_MoreThanOnce=0;
					FlagNoWord=0;
					FlagExtraWord=0;
					arr[i]='\0';
					i++;
					flag=1;
					//if flag is one idraw function is used to carry out processing the output
					if(flag==1){
						countP=0;
						countI=0;
						countT=0;
						//the no. of alphabets used is again started counting from next word
					}
			
				}
		
				//for the chest
				if(mx>5&&mx<128&&my>10&&my<137){
					 modechest=ChestOpen;
				}
				if(modechest==ChestOpen){
					if(mx>95+540&&mx<95+555&&my>400+89&&my<425+89)modechest=ChestClose;
				}

			}
					if(i==0&&score>=15){
					
						if(level0_pit==0){
							if(mx>=610&&mx<=710&&my>=100&&my<=150){
								if(score>=15)level_0_CountHints_PIT++;
							}
						}
		
						else if(level0_tip==0&&level0_pit==1){
							if(mx>=610&&mx<=710&&my>=100&&my<=150){
								if(score>=15)level_0_CountHints_TIP++;
								}
							}
						else if(level0_it==0&&level0_pit==1&&level0_tip==1){
							if(mx>=610&&mx<=710&&my>=100&&my<=150){
								if(score>=15)level_0_CountHints_IT++;
							}
						}
					}
					if(mx>615&&mx<615+90&&my>40&&my<40+37){
						GameMode=GameOver;
					}
		}
			if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='P'){
				if(mx>=610&&mx<=710&&my>=100&&my<=150){
					//this is for the hints though maybe it was not needed
						CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
						FlagNoWord=0;
						FlagExtraWord=0;
						FlagMatchWordBox=0;
						}
				if(flag==0){

					if(mx>position_x.tap.p&&mx<position_x.tap.p+WidthOfImage&&my>position_y.tap.p&&my<position_y.tap.p+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagT_MoreThanOnce=0;flagA_MoreThanOnce=0;

					countP++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countP>1)flagP_MoreThanOnce=1;

					if(countP<=1){
				
						arr[i]='P';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.tap.a&&mx<position_x.tap.a+WidthOfImage&&my>position_y.tap.a&&my<position_y.tap.a+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagP_MoreThanOnce=0;flagT_MoreThanOnce=0;

					countA++;
			
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countA>1)flagA_MoreThanOnce=1;
					if(countA<=1){
				
						arr[i]='A';
				
						i++;
				
					}
				}
				if(mx>position_x.tap.t&&mx<position_x.tap.t+WidthOfImage&&my>position_y.tap.t&&my<position_y.tap.t+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagP_MoreThanOnce=0;flagA_MoreThanOnce=0;

					countT++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countT>1)flagT_MoreThanOnce=1;
					if(countT<=1){

						arr[i]='T';
						i++;
						}
			
			
				}
				//}

				if(mx>600&&mx<720&&my>200&&my<260){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagP_MoreThanOnce=0;flagA_MoreThanOnce=0;flagT_MoreThanOnce=0;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					arr[i]='\0';
					i++;
					flag=1;
					//if flag is one idraw function is used to carry out processing the output
					if(flag==1){
						countP=0;
						countA=0;
						countT=0;
						//the no. of alphabets used is again started counting from next word
					}
			
				}
		
				//for the chest
				if(mx>5&&mx<128&&my>10&&my<137){
					 modechest=ChestOpen;
				}
				if(modechest==ChestOpen){
					if(mx>95+540&&mx<95+555&&my>400+89&&my<425+89)modechest=ChestClose;
				}

			}
					if(i==0&&score>=15){
					
						if(level0_pat==0){
							if(mx>=610&&mx<=710&&my>=100&&my<=150){
								if(score>=15)level_0_CountHints_PAT++;
							}
						}
		
						else if(level0_tap==0&&level0_pat==1){
							if(mx>=610&&mx<=710&&my>=100&&my<=150){
								if(score>=15)level_0_CountHints_TAP++;
								}
							}
						else if(level0_apt==0&&level0_pat==1&&level0_tap==1){
							if(mx>=610&&mx<=710&&my>=100&&my<=150){
								if(score>=15)level_0_CountHints_APT++;
							}
						}
					}
					if(mx>615&&mx<615+90&&my>40&&my<40+37){
						GameMode=GameOver;
					}
		}
	}
		if(level==1){
			if(word_level_1[WordRandom[Index]][0]=='H'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='A'&&word_level_1[WordRandom[Index]][3]=='T'){
				if(mx>=610&&mx<=710&&my>=100&&my<=150){
						CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
						FlagNoWord=0;
						FlagExtraWord=0;
						FlagMatchWordBox=0;
						}
				if(flag==0){


				if(mx>position_x.heat.h&&mx<position_x.heat.h+WidthOfImage&&my>position_y.heat.h&&my<position_y.heat.h+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagE_MoreThanOnce=0;flagA_MoreThanOnce=0;flagT_MoreThanOnce=0;

					countH++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countH>1)flagH_MoreThanOnce=1;

					if(countH<=1){
				
						arr[i]='H';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.heat.e&&mx<position_x.heat.e+WidthOfImage&&my>position_y.heat.e&&my<position_y.heat.e+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagH_MoreThanOnce=0;flagA_MoreThanOnce=0;flagT_MoreThanOnce=0;

					countE++;
			
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countE>1)flagE_MoreThanOnce=1;
					if(countE<=1){
				
						arr[i]='E';
				
						i++;
				
					}
			
			
				}
				if(mx>position_x.heat.a&&mx<position_x.heat.a+WidthOfImage&&my>position_y.heat.a&&my<position_y.heat.a+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagH_MoreThanOnce=0;flagE_MoreThanOnce=0;flagT_MoreThanOnce=0;

					countA++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countA>1)flagA_MoreThanOnce=1;
					if(countA<=1){

						arr[i]='A';
						i++;
						}
			
			
				}
				if(mx>position_x.heat.t&&mx<position_x.heat.t+WidthOfImage&&my>position_y.heat.t&&my<position_y.heat.t+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagH_MoreThanOnce=0;flagE_MoreThanOnce=0;flagA_MoreThanOnce=0;

					countT++;

					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countT>1)flagT_MoreThanOnce=1;
					if(countT<=1){	
						arr[i]='T';
						i++;
					}
				}
				if(mx>600&&mx<720&&my>200&&my<260){
				//This is for the position of compare
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagH_MoreThanOnce=0;flagE_MoreThanOnce=0;flagA_MoreThanOnce=0;flagT_MoreThanOnce=0;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					arr[i]='\0';
					i++;
					flag=1;
					//if flag is one idraw function is used to carry out processing the output
					if(flag==1){
						countH=0;
						countE=0;
						countA=0;
						countT=0;
						//the no. of alphabets used is again started counting from next word
					}
			
				}
		
				//for the chest
				if(mx>5&&mx<128&&my>10&&my<137){
					 modechest=ChestOpen;
				}
				if(modechest==ChestOpen){
					if(mx>95+540&&mx<95+555&&my>400+89&&my<425+89)modechest=ChestClose;
				}

				if(i==0&&score>=15){
					if(level1_heat==0){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_HEAT++;
						}
					}
		
					else if(level1_tea==0&&level1_heat==1){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_TEA++;
							}
						}
					else if(level1_eat==0&&level1_tea==1&&level1_heat==1){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_EAT++;
							}
						}
					else if(level1_the==0&&level1_eat==1&&level1_tea==1&&level1_heat==1){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_THE++;
							}
						}
					
					}
				}
				if(mx>615&&mx<615+90&&my>40&&my<40+37){
						GameMode=GameOver;
					}
			}
			if(word_level_1[WordRandom[Index]][0]=='N'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='A'&&word_level_1[WordRandom[Index]][3]=='R'){
				if(mx>=610&&mx<=710&&my>=100&&my<=150){
						CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
						FlagNoWord=0;
						FlagExtraWord=0;
						FlagMatchWordBox=0;
						}
				if(flag==0){


				if(mx>position_x.earn.e&&mx<position_x.earn.e+WidthOfImage&&my>position_y.earn.e&&my<position_y.earn.e+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagA_MoreThanOnce=0;flagR_MoreThanOnce=0;flagN_MoreThanOnce=0;

					countE++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countE>1)flagE_MoreThanOnce=1;

					if(countE<=1){
				
						arr[i]='E';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.earn.a&&mx<position_x.earn.a+WidthOfImage&&my>position_y.earn.a&&my<position_y.earn.a+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagE_MoreThanOnce=0;flagR_MoreThanOnce=0;flagN_MoreThanOnce=0;

					countA++;
			
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countA>1)flagA_MoreThanOnce=1;
					if(countA<=1){
				
						arr[i]='A';
				
						i++;
				
					}
			
			
				}
				if(mx>position_x.earn.n&&mx<position_x.earn.n+WidthOfImage&&my>position_y.earn.n&&my<position_y.earn.n+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagE_MoreThanOnce=0;flagA_MoreThanOnce=0;flagR_MoreThanOnce=0;

					countN++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countN>1)flagN_MoreThanOnce=1;
					if(countN<=1){

						arr[i]='N';
						i++;
						}
			
			
				}
				if(mx>position_x.earn.r&&mx<position_x.earn.r+WidthOfImage&&my>position_y.earn.r&&my<position_y.earn.r+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagE_MoreThanOnce=0;flagA_MoreThanOnce=0;flagN_MoreThanOnce=0;

					countR++;

					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countR>1)flagR_MoreThanOnce=1;
					if(countR<=1){	
						arr[i]='R';
						i++;
					}
				}
				if(mx>600&&mx<720&&my>200&&my<260){
				//This is for the position of compare
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagA_MoreThanOnce=0;flagE_MoreThanOnce=0;flagN_MoreThanOnce=0;flagR_MoreThanOnce=0;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					arr[i]='\0';
					i++;
					flag=1;
					//if flag is one idraw function is used to carry out processing the output
					if(flag==1){
						countE=0;
						countA=0;
						countR=0;
						countN=0;
						//the no. of alphabets used is again started counting from next word
					}
			
				}
		
				//for the chest
				if(mx>5&&mx<128&&my>10&&my<137){
					 modechest=ChestOpen;
				}
				if(modechest==ChestOpen){
					if(mx>95+540&&mx<95+555&&my>400+89&&my<425+89)modechest=ChestClose;
				}

				if(i==0&&score>=15){
					if(level1_earn==0){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_EARN++;
						}
					}
		
					else if(level1_near==0&&level1_earn==1){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_NEAR++;
							}
						}
					else if(level1_era==0&&level1_near==1&&level1_earn==1){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_ERA++;
							}
						}
					else if(level1_ear==0&&level1_era==1&&level1_near==1&&level1_earn==1){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_EAR++;
							}
						}
					
					}
				}
				if(mx>615&&mx<615+90&&my>40&&my<40+37){
						GameMode=GameOver;
					}
			}
			if(word_level_1[WordRandom[Index]][0]=='G'&&word_level_1[WordRandom[Index]][1]=='O'&&word_level_1[WordRandom[Index]][2]=='N'&&word_level_1[WordRandom[Index]][3]=='E'){
				if(mx>=610&&mx<=710&&my>=100&&my<=150){
						CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
						FlagNoWord=0;
						FlagExtraWord=0;
						FlagMatchWordBox=0;
						}
				if(flag==0){


				if(mx>position_x.gone.g&&mx<position_x.gone.g+WidthOfImage&&my>position_y.gone.g&&my<position_y.gone.g+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagO_MoreThanOnce=0;flagN_MoreThanOnce=0;flagE_MoreThanOnce=0;

					countG++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countG>1)flagG_MoreThanOnce=1;

					if(countG<=1){
				
						arr[i]='G';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.gone.e&&mx<position_x.gone.e+WidthOfImage&&my>position_y.gone.e&&my<position_y.gone.e+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagO_MoreThanOnce=0;flagN_MoreThanOnce=0;flagG_MoreThanOnce=0;

					countE++;
			
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countE>1)flagE_MoreThanOnce=1;
					if(countE<=1){
				
						arr[i]='E';
				
						i++;
				
					}
			
			
				}
				if(mx>position_x.gone.n&&mx<position_x.gone.n+WidthOfImage&&my>position_y.gone.n&&my<position_y.gone.n+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagG_MoreThanOnce=0;flagE_MoreThanOnce=0;flagO_MoreThanOnce=0;

					countN++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countN>1)flagN_MoreThanOnce=1;
					if(countN<=1){

						arr[i]='N';
						i++;
						}
			
			
				}
				if(mx>position_x.gone.o&&mx<position_x.gone.o+WidthOfImage&&my>position_y.gone.o&&my<position_y.gone.o+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagG_MoreThanOnce=0;flagE_MoreThanOnce=0;flagN_MoreThanOnce=0;

					countO++;

					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countO>1)flagO_MoreThanOnce=1;
					if(countO<=1){	
						arr[i]='O';
						i++;
					}
				}
				if(mx>600&&mx<720&&my>200&&my<260){
				//This is for the position of compare
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagG_MoreThanOnce=0;flagE_MoreThanOnce=0;flagN_MoreThanOnce=0;flagO_MoreThanOnce=0;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					arr[i]='\0';
					i++;
					flag=1;
					//if flag is one idraw function is used to carry out processing the output
					if(flag==1){
						countG=0;
						countO=0;
						countN=0;
						countE=0;
						//the no. of alphabets used is again started counting from next word
					}
			
				}
		
				//for the chest
				if(mx>5&&mx<128&&my>10&&my<137){
					 modechest=ChestOpen;
				}
				if(modechest==ChestOpen){
					if(mx>95+540&&mx<95+555&&my>400+89&&my<425+89)modechest=ChestClose;
				}

				if(i==0&&score>=15){
					if(level1_gone==0){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_GONE++;
						}
					}
		
					else if(level1_ego==0&&level1_gone==1){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_EGO++;
							}
						}
					else if(level1_one==0&&level1_ego==1&&level1_gone==1){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_ONE++;
							}
						}
					else if(level1_gen==0&&level1_one==1&&level1_ego==1&&level1_gone==1){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_GEN++;
							}
						}
					
					}
				}
				if(mx>615&&mx<615+90&&my>40&&my<40+37){
						GameMode=GameOver;
					}
			}
			if(word_level_1[WordRandom[Index]][0]=='D'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='N'&&word_level_1[WordRandom[Index]][3]=='Y'){
				if(mx>=610&&mx<=710&&my>=100&&my<=150){
						CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
						FlagNoWord=0;
						FlagExtraWord=0;
						}
				if(flag==0){


				if(mx>position_x.deny.d&&mx<position_x.deny.d+WidthOfImage&&my>position_y.deny.d&&my<position_y.deny.d+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagE_MoreThanOnce=0;flagN_MoreThanOnce=0;flagY_MoreThanOnce=0;

					countD++;
					FlagNoWord=0;
					FlagExtraWord=0;
					if(countD>1)flagD_MoreThanOnce=1;

					if(countD<=1){
				
						arr[i]='D';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.deny.e&&mx<position_x.deny.e+WidthOfImage&&my>position_y.deny.e&&my<position_y.deny.e+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagD_MoreThanOnce=0;flagN_MoreThanOnce=0;flagY_MoreThanOnce=0;

					countE++;
			
					FlagNoWord=0;
					FlagExtraWord=0;

					if(countE>1)flagE_MoreThanOnce=1;
					if(countE<=1){
				
						arr[i]='E';
				
						i++;
				
					}
			
			
				}
				if(mx>position_x.deny.n&&mx<position_x.deny.n+WidthOfImage&&my>position_y.deny.n&&my<position_y.deny.n+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagD_MoreThanOnce=0;flagE_MoreThanOnce=0;flagY_MoreThanOnce=0;

					countN++;
					FlagNoWord=0;
					FlagExtraWord=0;

					if(countN>1)flagN_MoreThanOnce=1;
					if(countN<=1){

						arr[i]='N';
						i++;
						}
			
			
				}
				if(mx>position_x.deny.y&&mx<position_x.deny.y+WidthOfImage&&my>position_y.deny.y&&my<position_y.deny.y+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagD_MoreThanOnce=0;flagE_MoreThanOnce=0;flagN_MoreThanOnce=0;

					countY++;

					FlagNoWord=0;
					FlagExtraWord=0;

					if(countY>1)flagY_MoreThanOnce=1;
					if(countY<=1){	
						arr[i]='Y';
						i++;
					}
				}
				if(mx>600&&mx<720&&my>200&&my<260){
				//This is for the position of compare
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagD_MoreThanOnce=0;flagE_MoreThanOnce=0;flagN_MoreThanOnce=0;flagY_MoreThanOnce=0;
					FlagNoWord=0;
					FlagExtraWord=0;
					arr[i]='\0';
					i++;
					flag=1;
					//if flag is one idraw function is used to carry out processing the output
					if(flag==1){
						countD=0;
						countE=0;
						countN=0;
						countY=0;
						//the no. of alphabets used is again started counting from next word
					}
			
				}
		
				//for the chest
				if(mx>5&&mx<128&&my>10&&my<137){
					 modechest=ChestOpen;
				}
				if(modechest==ChestOpen){
					if(mx>95+540&&mx<95+555&&my>400+89&&my<425+89)modechest=ChestClose;
				}

				if(i==0&&score>=15){
					if(level1_deny==0){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_DENY++;
						}
					}
		
					else if(level1_dye==0&&level1_deny==1){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_DYE++;
							}
						}
					else if(level1_end==0&&level1_dye==1&&level1_deny==1){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_END++;
							}
						}
					else if(level1_den==0&&level1_end==1&&level1_dye==1&&level1_deny==1){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_DEN++;
							}
						}
					
					}
				}
				if(mx>615&&mx<615+90&&my>40&&my<40+37){
						GameMode=GameOver;
					}
			}
			if(word_level_1[WordRandom[Index]][0]=='W'&&word_level_1[WordRandom[Index]][1]=='O'&&word_level_1[WordRandom[Index]][2]=='R'&&word_level_1[WordRandom[Index]][3]=='D'){
				if(mx>=610&&mx<=710&&my>=100&&my<=150){
						CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
						FlagNoWord=0;
						FlagExtraWord=0;
						}
				if(flag==0){


				if(mx>position_x.word.w&&mx<position_x.word.w+WidthOfImage&&my>position_y.word.w&&my<position_y.word.w+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagO_MoreThanOnce=0;flagR_MoreThanOnce=0;flagD_MoreThanOnce=0;

					countW++;
					FlagNoWord=0;
					FlagExtraWord=0;
					if(countW>1)flagW_MoreThanOnce=1;

					if(countW<=1){
				
						arr[i]='W';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.word.o&&mx<position_x.word.o+WidthOfImage&&my>position_y.word.o&&my<position_y.word.o+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagW_MoreThanOnce=0;flagR_MoreThanOnce=0;flagD_MoreThanOnce=0;

					countO++;
			
					FlagNoWord=0;
					FlagExtraWord=0;

					if(countO>1)flagO_MoreThanOnce=1;
					if(countO<=1){
				
						arr[i]='O';
				
						i++;
				
					}
			
			
				}
				if(mx>position_x.word.r&&mx<position_x.word.r+WidthOfImage&&my>position_y.word.r&&my<position_y.word.r+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagO_MoreThanOnce=0;flagW_MoreThanOnce=0;flagD_MoreThanOnce=0;

					countR++;
					FlagNoWord=0;
					FlagExtraWord=0;

					if(countR>1)flagR_MoreThanOnce=1;
					if(countR<=1){

						arr[i]='R';
						i++;
						}
			
			
				}
				if(mx>position_x.word.d&&mx<position_x.word.d+WidthOfImage&&my>position_y.word.d&&my<position_y.word.d+HeightOfImage){
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagW_MoreThanOnce=0;flagR_MoreThanOnce=0;flagO_MoreThanOnce=0;

					countD++;

					FlagNoWord=0;
					FlagExtraWord=0;

					if(countD>1)flagD_MoreThanOnce=1;
					if(countD<=1){	
						arr[i]='D';
						i++;
					}
				}
				if(mx>600&&mx<720&&my>200&&my<260){
				//This is for the position of compare
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagW_MoreThanOnce=0;flagO_MoreThanOnce=0;flagR_MoreThanOnce=0;flagD_MoreThanOnce=0;
					FlagNoWord=0;
					FlagExtraWord=0;
					arr[i]='\0';
					i++;
					flag=1;
					//if flag is one idraw function is used to carry out processing the output
					if(flag==1){
						countW=0;
						countO=0;
						countR=0;
						countD=0;
						//the no. of alphabets used is again started counting from next word
					}
			
				}
		
				//for the chest
				if(mx>5&&mx<128&&my>10&&my<137){
					 modechest=ChestOpen;
				}
				if(modechest==ChestOpen){
					if(mx>95+540&&mx<95+555&&my>400+89&&my<425+89)modechest=ChestClose;
				}

				if(i==0&&score>=15){
					if(level1_word==0){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_WORD++;
						}
					}
		
					else if(level1_row==0&&level1_word==1){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_ROW++;
							}
						}
					else if(level1_or==0&&level1_row==1&&level1_word==1){
						if(mx>=610&&mx<=710&&my>=100&&my<=150){
							if(score>=15)level_1_CountHints_OR++;
							}
						}
					
					}
				}
			}
			if(mx>615&&mx<615+90&&my>40&&my<40+37){
						GameMode=GameOver;
					}
		}
		if(level==2){
			if(word_level_2[WordRandom[Index]][0]=='D'&&word_level_2[WordRandom[Index]][1]=='R'&&word_level_2[WordRandom[Index]][2]=='E'&&word_level_2[WordRandom[Index]][3]=='A'&&word_level_2[WordRandom[Index]][4]=='M'){
				if(mx>=610&&mx<=710&&my>=100&&my<=150){
						CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
						FlagNoWord=0;
						FlagExtraWord=0;
						FlagMatchWordBox=0;
						}
				if(flag==0){


				if(mx>position_x.dream.d&&mx<position_x.dream.d+WidthOfImage&&my>position_y.dream.d&&my<position_y.dream.d+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagE_MoreThanOnce=0;flagA_MoreThanOnce=0;flagR_MoreThanOnce=0;flagM_MoreThanOnce=0;

					countD++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countD>1)flagD_MoreThanOnce=1;

					if(countD<=1){
				
						arr[i]='D';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.dream.r&&mx<position_x.dream.r+WidthOfImage&&my>position_y.dream.r&&my<position_y.dream.r+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagE_MoreThanOnce=0;flagA_MoreThanOnce=0;flagD_MoreThanOnce=0;flagM_MoreThanOnce=0;

					countR++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countR>1)flagR_MoreThanOnce=1;

					if(countR<=1){
				
						arr[i]='R';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.dream.e&&mx<position_x.dream.e+WidthOfImage&&my>position_y.dream.e&&my<position_y.dream.e+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagR_MoreThanOnce=0;flagA_MoreThanOnce=0;flagD_MoreThanOnce=0;flagM_MoreThanOnce=0;

					countE++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countE>1)flagE_MoreThanOnce=1;

					if(countE<=1){
				
						arr[i]='E';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.dream.a&&mx<position_x.dream.a+WidthOfImage&&my>position_y.dream.a&&my<position_y.dream.a+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagE_MoreThanOnce=0;flagR_MoreThanOnce=0;flagD_MoreThanOnce=0;flagM_MoreThanOnce=0;

					countA++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countA>1)flagA_MoreThanOnce=1;

					if(countA<=1){
				
						arr[i]='A';
				
						i++;
					}
			
			}
				if(mx>position_x.dream.m&&mx<position_x.dream.m+WidthOfImage&&my>position_y.dream.m&&my<position_y.dream.m+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagE_MoreThanOnce=0;flagA_MoreThanOnce=0;flagD_MoreThanOnce=0;flagR_MoreThanOnce=0;

					countM++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countM>1)flagM_MoreThanOnce=1;

					if(countM<=1){
				
						arr[i]='M';
				
						i++;
				
				
					}
			
			
				}
				if(mx>600&&mx<720&&my>200&&my<260){
				//This is for the position of compare
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagD_MoreThanOnce=0;flagE_MoreThanOnce=0;flagA_MoreThanOnce=0;flagR_MoreThanOnce=0;flagM_MoreThanOnce=0;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					arr[i]='\0';
					i++;
					flag=1;
					//if flag is one idraw function is used to carry out processing the output
					if(flag==1){
						countD=0;
						countE=0;
						countA=0;
						countR=0;
						countM=0;
						//the no. of alphabets used is again started counting from next word
					}
			
				}
		
				//for the chest
				if(mx>5&&mx<128&&my>10&&my<137){
					 modechest=ChestOpen;
				}
				if(modechest==ChestOpen){
					if(mx>95+540&&mx<95+555&&my>400+89&&my<425+89)modechest=ChestClose;
				}


				}
				if(mx>615&&mx<615+90&&my>40&&my<40+37){
						GameMode=GameOver;
					}
			}
			if(word_level_2[WordRandom[Index]][0]=='S'&&word_level_2[WordRandom[Index]][1]=='W'&&word_level_2[WordRandom[Index]][2]=='I'&&word_level_2[WordRandom[Index]][3]=='N'&&word_level_2[WordRandom[Index]][4]=='G'){
				if(mx>=610&&mx<=710&&my>=100&&my<=150){
						CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
						FlagNoWord=0;
						FlagExtraWord=0;
						FlagMatchWordBox=0;
						}
				if(flag==0){


				if(mx>position_x.swing.s&&mx<position_x.swing.s+WidthOfImage&&my>position_y.swing.s&&my<position_y.swing.s+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagW_MoreThanOnce=0;flagI_MoreThanOnce=0;flagN_MoreThanOnce=0;flagG_MoreThanOnce=0;

					countS++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countS>1)flagS_MoreThanOnce=1;

					if(countS<=1){
				
						arr[i]='S';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.swing.w&&mx<position_x.swing.w+WidthOfImage&&my>position_y.swing.w&&my<position_y.swing.w+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagS_MoreThanOnce=0;flagI_MoreThanOnce=0;flagN_MoreThanOnce=0;flagG_MoreThanOnce=0;

					countW++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countW>1)flagW_MoreThanOnce=1;

					if(countW<=1){
				
						arr[i]='W';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.swing.i&&mx<position_x.swing.i+WidthOfImage&&my>position_y.swing.i&&my<position_y.swing.i+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagS_MoreThanOnce=0;flagW_MoreThanOnce=0;flagN_MoreThanOnce=0;flagG_MoreThanOnce=0;

					countI++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countI>1)flagI_MoreThanOnce=1;

					if(countI<=1){
				
						arr[i]='I';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.swing.n&&mx<position_x.swing.n+WidthOfImage&&my>position_y.swing.n&&my<position_y.swing.n+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagS_MoreThanOnce=0;flagW_MoreThanOnce=0;flagI_MoreThanOnce=0;flagG_MoreThanOnce=0;

					countN++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countN>1)flagN_MoreThanOnce=1;

					if(countN<=1){
				
						arr[i]='N';
				
						i++;
					}
			
			}
				if(mx>position_x.swing.g&&mx<position_x.swing.g+WidthOfImage&&my>position_y.swing.g&&my<position_y.swing.g+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagS_MoreThanOnce=0;flagW_MoreThanOnce=0;flagI_MoreThanOnce=0;flagN_MoreThanOnce=0;

					countG++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countG>1)flagG_MoreThanOnce=1;

					if(countG<=1){
				
						arr[i]='G';
				
						i++;
				
				
					}
			
			
				}
				if(mx>600&&mx<720&&my>200&&my<260){
				//This is for the position of compare
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagS_MoreThanOnce=0;flagW_MoreThanOnce=0;flagI_MoreThanOnce=0;flagN_MoreThanOnce=0;flagG_MoreThanOnce=0;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					arr[i]='\0';
					i++;
					flag=1;
					//if flag is one idraw function is used to carry out processing the output
					if(flag==1){
						countS=0;
						countW=0;
						countI=0;
						countN=0;
						countG=0;
						//the no. of alphabets used is again started counting from next word
					}
			
				}
		
				//for the chest
				if(mx>5&&mx<128&&my>10&&my<137){
					 modechest=ChestOpen;
				}
				if(modechest==ChestOpen){
					if(mx>95+540&&mx<95+555&&my>400+89&&my<425+89)modechest=ChestClose;
				}


				}
				if(mx>615&&mx<615+90&&my>40&&my<40+37){
						GameMode=GameOver;
					}
			}
			if(word_level_2[WordRandom[Index]][0]=='W'&&word_level_2[WordRandom[Index]][1]=='R'&&word_level_2[WordRandom[Index]][2]=='O'&&word_level_2[WordRandom[Index]][3]=='N'&&word_level_2[WordRandom[Index]][4]=='G'){
				if(mx>=610&&mx<=710&&my>=100&&my<=150){
						CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
						FlagNoWord=0;
						FlagExtraWord=0;
						FlagMatchWordBox=0;
						}
				if(flag==0){


				if(mx>position_x.wrong.w&&mx<position_x.wrong.w+WidthOfImage&&my>position_y.wrong.w&&my<position_y.wrong.w+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagR_MoreThanOnce=0;flagO_MoreThanOnce=0;flagN_MoreThanOnce=0;flagG_MoreThanOnce=0;

					countW++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countW>1)flagW_MoreThanOnce=1;

					if(countW<=1){
				
						arr[i]='W';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.wrong.r&&mx<position_x.wrong.r+WidthOfImage&&my>position_y.wrong.r&&my<position_y.wrong.r+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagW_MoreThanOnce=0;flagO_MoreThanOnce=0;flagN_MoreThanOnce=0;flagG_MoreThanOnce=0;

					countR++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countR>1)flagR_MoreThanOnce=1;

					if(countR<=1){
				
						arr[i]='R';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.wrong.o&&mx<position_x.wrong.o+WidthOfImage&&my>position_y.wrong.o&&my<position_y.wrong.o+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagR_MoreThanOnce=0;flagW_MoreThanOnce=0;flagN_MoreThanOnce=0;flagG_MoreThanOnce=0;

					countO++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countO>1)flagO_MoreThanOnce=1;

					if(countO<=1){
				
						arr[i]='O';
				
						i++;
				
				
					}
			
			
				}
				if(mx>position_x.wrong.n&&mx<position_x.wrong.n+WidthOfImage&&my>position_y.wrong.n&&my<position_y.wrong.n+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagW_MoreThanOnce=0;flagR_MoreThanOnce=0;flagO_MoreThanOnce=0;flagG_MoreThanOnce=0;

					countN++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countN>1)flagN_MoreThanOnce=1;

					if(countN<=1){
				
						arr[i]='N';
				
						i++;
					}
			
			}
				if(mx>position_x.wrong.g&&mx<position_x.wrong.g+WidthOfImage&&my>position_y.wrong.g&&my<position_y.wrong.g+HeightOfImage){
			
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagN_MoreThanOnce=0;flagO_MoreThanOnce=0;flagW_MoreThanOnce=0;flagR_MoreThanOnce=0;

					countG++;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					if(countG>1)flagG_MoreThanOnce=1;

					if(countG<=1){
				
						arr[i]='G';
				
						i++;
				
				
					}
			
			
				}
				if(mx>600&&mx<720&&my>200&&my<260){
				//This is for the position of compare
					CountDiscoveredWord=0;CountDiscoveredBonusWord=0;
					flagW_MoreThanOnce=0;flagO_MoreThanOnce=0;flagN_MoreThanOnce=0;flagR_MoreThanOnce=0;flagG_MoreThanOnce=0;
					FlagNoWord=0;
					FlagExtraWord=0;
					FlagMatchWordBox=0;
					arr[i]='\0';
					i++;
					flag=1;
					//if flag is one idraw function is used to carry out processing the output
					if(flag==1){
						countW=0;
						countR=0;
						countO=0;
						countN=0;
						countG=0;
						//the no. of alphabets used is again started counting from next word
					}
			
				}
		
				//for the chest
				if(mx>5&&mx<128&&my>10&&my<137){
					 modechest=ChestOpen;
				}
				if(modechest==ChestOpen){
					if(mx>95+540&&mx<95+555&&my>400+89&&my<425+89)modechest=ChestClose;
				}


				}
				if(mx>615&&mx<615+90&&my>40&&my<40+37){
						GameMode=GameOver;
					}
			}
		
		}
	}
}
	
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(flag_easy_level==1){
			if(key=='\r'){
				level=1;
				time_min=5;
				time_sec=60;
			}
		}
	if(flag_medium_level==1){
			if(key=='\r'){
				level=2;
				time_min=5;
				time_sec=60;
			}
		}
	if(key == 'o')
	{
		//do something with 'q'
		GameMode=GameOver;
	}
	if(key == 'l')
	{
		//do something with 'q'
		GameMode=LinkMode;
	}
	if(key == 'm'&&GameMode==InstructionsMode||key == 'm'&&GameMode==HighScoreMode||key == 'm'&&GameMode==GameOver||key == 'm'&&GameMode==DifficultyMode||key == 'm'&&GameMode==LinkMode)
	{
		GameMode=MenuMode;
	}
	if(key == 'd')
	{
		GameMode=DifficultyMode;
	}
	
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	//place your codes for other keys here
}

int main()
{
	//place your own initialization codes here. 
	iSetTimer(1000,timechange);
	srand(time(NULL));
	iInitialize(800, 800, "Wordify");
	return 0;
}	