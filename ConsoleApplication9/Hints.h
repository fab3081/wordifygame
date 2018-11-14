void hints_algo(){
	if(level==0){
		//if(word_level_0[word1.easy][0]=='B'&&word_level_0[word1.easy][1]=='A'&&word_level_0[word1.easy][2]=='T'){
		if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='B'){
			if(level0_bat==0){
	
			if(level_0_CountHints_BAT==1){
				iShowBMP(70,650,"hints_image//B.bmp");
				if(level_0_hints_score_flag_b_of_bat==0){
					score-=15;
					level_0_hints_score_flag_b_of_bat=1;
				}
		
			}
			if(level_0_CountHints_BAT==2){
				iShowBMP(70,650,"hints_image//B.bmp");iShowBMP(140,650,"hints_image//A.bmp");
				if(level_0_hints_score_flag_a_of_bat==0){
					score-=15;
					level_0_hints_score_flag_a_of_bat=1;
				}
			}
			if(level_0_CountHints_BAT==3){
		
				iShowBMP(70,650,"hints_image//B.bmp");iShowBMP(140,650,"hints_image//A.bmp");iShowBMP(210,650,"hints_image//T.bmp");
		
				if(level_0_hints_score_flag_t_of_bat==0){
					score-=15;
					level_0_hints_score_flag_t_of_bat=1;
				}


				arr[0]='B';arr[1]='A';arr[2]='T';arr[3]='\0';
		
				flag=1;
				algorithm();
				level0_bat=1;

				}
	
			}
			else if(level0_tab==0&&level0_bat==1){
		
				if(level_0_CountHints_TAB==1){
					iShowBMP(490,650,"hints_image//T.bmp");
					if(level_0_hints_score_flag_t_of_tab==0){
					score-=15;
					level_0_hints_score_flag_t_of_tab=1;
					}
				}
				if(level_0_CountHints_TAB==2){
					iShowBMP(490,650,"hints_image//T.bmp");iShowBMP(560,650,"hints_image//A.bmp");
					if(level_0_hints_score_flag_a_of_tab==0){
					score-=15;
					level_0_hints_score_flag_a_of_tab=1;
					}
				}
				if(level_0_CountHints_TAB==3){
					iShowBMP(490,650,"hints_image//T.bmp");iShowBMP(560,650,"hints_image//A.bmp");iShowBMP(630,650,"hints_image//B.bmp");
					if(level_0_hints_score_flag_b_of_tab==0){
					score-=15;
					level_0_hints_score_flag_b_of_tab=1;
					}
					level0_tab=1;
					arr[0]='T';arr[1]='A';arr[2]='B';arr[3]='\0';
			
					flag=1;
			
					algorithm();
				}
			}
			else if(level0_at==0&&level0_tab==1&&level0_bat==1){
		
				if(level_0_CountHints_AT==1){
					iShowBMP(70,500,"hints_image//A.bmp");
					if(level_0_hints_score_flag_a_of_at==0){
					score-=15;
					level_0_hints_score_flag_a_of_at=1;
					}
				}
				if(level_0_CountHints_AT==2){
					iShowBMP(70,500,"hints_image//A.bmp");iShowBMP(140,500,"hints_image//T.bmp");
					if(level_0_hints_score_flag_t_of_at==0){
					score-=15;
					level_0_hints_score_flag_t_of_at=1;
					}
					level0_at=1;
					arr[0]='A';arr[1]='T';arr[3]='\0';
			
					flag=1;
					algorithm();
					}
				}
	
		}
		if(word_level_0[WordRandom[Index]][0]=='R'&&word_level_0[WordRandom[Index]][1]=='O'&&word_level_0[WordRandom[Index]][2]=='B'){
			if(level0_rob==0){
	
			if(level_0_CountHints_ROB==1){
				iShowBMP(70,650,"hints_image//R.bmp");
				if(level_0_hints_score_flag_r_of_rob==0){
					score-=15;
					level_0_hints_score_flag_r_of_rob=1;
				}
		
			}
			if(level_0_CountHints_ROB==2){
				iShowBMP(70,650,"hints_image//R.bmp");iShowBMP(140,650,"hints_image//O.bmp");
				if(level_0_hints_score_flag_o_of_rob==0){
					score-=15;
					level_0_hints_score_flag_o_of_rob=1;
				}
			}
			if(level_0_CountHints_ROB==3){
		
				iShowBMP(70,650,"hints_image//R.bmp");iShowBMP(140,650,"hints_image//O.bmp");iShowBMP(210,650,"hints_image//B.bmp");
		
				if(level_0_hints_score_flag_b_of_rob==0){
					score-=15;
					level_0_hints_score_flag_b_of_rob=1;
				}


				arr[0]='R';arr[1]='O';arr[2]='B';arr[3]='\0';
		
				flag=1;
				algorithm();
				level0_rob=1;

				}
	
			}
			else if(level0_bro==0&&level0_rob==1){
		
				if(level_0_CountHints_BRO==1){
					iShowBMP(490,650,"hints_image//B.bmp");
					if(level_0_hints_score_flag_b_of_bro==0){
					score-=15;
					level_0_hints_score_flag_b_of_bro=1;
					}
				}
				if(level_0_CountHints_BRO==2){
					iShowBMP(490,650,"hints_image//B.bmp");iShowBMP(560,650,"hints_image//R.bmp");
					if(level_0_hints_score_flag_r_of_bro==0){
					score-=15;
					level_0_hints_score_flag_r_of_bro=1;
					}
				}
				if(level_0_CountHints_BRO==3){
					iShowBMP(490,650,"hints_image//B.bmp");iShowBMP(560,650,"hints_image//R.bmp");iShowBMP(630,650,"hints_image//O.bmp");
					if(level_0_hints_score_flag_o_of_bro==0){
					score-=15;
					level_0_hints_score_flag_o_of_bro=1;
					}
					level0_bro=1;
					arr[0]='B';arr[1]='R';arr[2]='O';arr[3]='\0';
			
					flag=1;
			
					algorithm();
				}
			}
			else if(level0_or==0&&level0_bro==1&&level0_rob==1){
		
				if(level_0_CountHints_OR==1){
					iShowBMP(70,500,"hints_image//O.bmp");
					if(level_0_hints_score_flag_o_of_or==0){
					score-=15;
					level_0_hints_score_flag_o_of_or=1;
					}
				}
				if(level_0_CountHints_OR==2){
					iShowBMP(70,500,"hints_image//O.bmp");iShowBMP(140,500,"hints_image//R.bmp");
					if(level_0_hints_score_flag_r_of_or==0){
					score-=15;
					level_0_hints_score_flag_r_of_or=1;
					}
					level0_or=1;
					arr[0]='O';arr[1]='R';arr[3]='\0';
			
					flag=1;
					algorithm();
					}
				}
	
		}
		if(word_level_0[WordRandom[Index]][0]=='M'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='D'){
			if(level0_dam==0){
	
			if(level_0_CountHints_DAM==1){
				iShowBMP(70,650,"hints_image//D.bmp");
				if(level_0_hints_score_flag_d_of_dam==0){
					score-=15;
					level_0_hints_score_flag_d_of_dam=1;
				}
		
			}
			if(level_0_CountHints_DAM==2){
				iShowBMP(70,650,"hints_image//D.bmp");iShowBMP(140,650,"hints_image//A.bmp");
				if(level_0_hints_score_flag_a_of_dam==0){
					score-=15;
					level_0_hints_score_flag_a_of_dam=1;
				}
			}
			if(level_0_CountHints_DAM==3){
		
				iShowBMP(70,650,"hints_image//D.bmp");iShowBMP(140,650,"hints_image//A.bmp");iShowBMP(210,650,"hints_image//M.bmp");
		
				if(level_0_hints_score_flag_m_of_dam==0){
					score-=15;
					level_0_hints_score_flag_m_of_dam=1;
				}


				arr[0]='D';arr[1]='A';arr[2]='M';arr[3]='\0';
		
				flag=1;
				algorithm();
				level0_dam=1;

				}
	
			}
			else if(level0_mad==0&&level0_dam==1){
		
				if(level_0_CountHints_MAD==1){
					iShowBMP(490,650,"hints_image//M.bmp");
					if(level_0_hints_score_flag_m_of_mad==0){
					score-=15;
					level_0_hints_score_flag_m_of_mad=1;
					}
				}
				if(level_0_CountHints_MAD==2){
					iShowBMP(490,650,"hints_image//M.bmp");iShowBMP(560,650,"hints_image//A.bmp");
					if(level_0_hints_score_flag_a_of_mad==0){
					score-=15;
					level_0_hints_score_flag_a_of_mad=1;
					}
				}
				if(level_0_CountHints_MAD==3){
					iShowBMP(490,650,"hints_image//M.bmp");iShowBMP(560,650,"hints_image//A.bmp");iShowBMP(630,650,"hints_image//D.bmp");
					if(level_0_hints_score_flag_d_of_mad==0){
					score-=15;
					level_0_hints_score_flag_d_of_mad=1;
					}
					level0_mad=1;
					arr[0]='M';arr[1]='A';arr[2]='D';arr[3]='\0';
			
					flag=1;
			
					algorithm();
				}
			}
			else if(level0_am==0&&level0_mad==1&&level0_dam==1){
		
				if(level_0_CountHints_AM==1){
					iShowBMP(70,500,"hints_image//A.bmp");
					if(level_0_hints_score_flag_a_of_am==0){
					score-=15;
					level_0_hints_score_flag_a_of_am=1;
					}
				}
				if(level_0_CountHints_AM==2){
					iShowBMP(70,500,"hints_image//A.bmp");iShowBMP(140,500,"hints_image//M.bmp");
					if(level_0_hints_score_flag_m_of_am==0){
					score-=15;
					level_0_hints_score_flag_m_of_am=1;
					}
					level0_am=1;
					arr[0]='A';arr[1]='M';arr[3]='\0';
			
					flag=1;
					algorithm();
					}
				}
	
		}
		if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='I'&&word_level_0[WordRandom[Index]][2]=='P'){
			if(level0_pit==0){
	
			if(level_0_CountHints_PIT==1){
				iShowBMP(70,650,"hints_image//P.bmp");
				if(level_0_hints_score_flag_p_of_pit==0){
					score-=15;
					level_0_hints_score_flag_p_of_pit=1;
				}
		
			}
			if(level_0_CountHints_PIT==2){
				iShowBMP(70,650,"hints_image//P.bmp");iShowBMP(140,650,"hints_image//I.bmp");
				if(level_0_hints_score_flag_i_of_pit==0){
					score-=15;
					level_0_hints_score_flag_i_of_pit=1;
				}
			}
			if(level_0_CountHints_PIT==3){
		
				iShowBMP(70,650,"hints_image//P.bmp");iShowBMP(140,650,"hints_image//I.bmp");iShowBMP(210,650,"hints_image//T.bmp");
		
				if(level_0_hints_score_flag_t_of_pit==0){
					score-=15;
					level_0_hints_score_flag_t_of_pit=1;
				}


				arr[0]='P';arr[1]='I';arr[2]='T';arr[3]='\0';
		
				flag=1;
				algorithm();
				level0_pit=1;

				}
	
			}
			else if(level0_tip==0&&level0_pit==1){
		
				if(level_0_CountHints_TIP==1){
					iShowBMP(490,650,"hints_image//T.bmp");
					if(level_0_hints_score_flag_t_of_tip==0){
					score-=15;
					level_0_hints_score_flag_t_of_tip=1;
					}
				}
				if(level_0_CountHints_TIP==2){
					iShowBMP(490,650,"hints_image//T.bmp");iShowBMP(560,650,"hints_image//I.bmp");
					if(level_0_hints_score_flag_i_of_tip==0){
					score-=15;
					level_0_hints_score_flag_i_of_tip=1;
					}
				}
				if(level_0_CountHints_TIP==3){
					iShowBMP(490,650,"hints_image//T.bmp");iShowBMP(560,650,"hints_image//I.bmp");iShowBMP(630,650,"hints_image//P.bmp");
					if(level_0_hints_score_flag_p_of_tip==0){
					score-=15;
					level_0_hints_score_flag_p_of_tip=1;
					}
					level0_tip=1;
					arr[0]='T';arr[1]='I';arr[2]='P';arr[3]='\0';
			
					flag=1;
			
					algorithm();
				}
			}
			else if(level0_it==0&&level0_tip==1&&level0_pit==1){
		
				if(level_0_CountHints_IT==1){
					iShowBMP(70,500,"hints_image//I.bmp");
					if(level_0_hints_score_flag_i_of_it==0){
					score-=15;
					level_0_hints_score_flag_i_of_it=1;
					}
				}
				if(level_0_CountHints_IT==2){
					iShowBMP(70,500,"hints_image//I.bmp");iShowBMP(140,500,"hints_image//T.bmp");
					if(level_0_hints_score_flag_t_of_it==0){
					score-=15;
					level_0_hints_score_flag_t_of_it=1;
					}
					level0_it=1;
					arr[0]='I';arr[1]='T';arr[3]='\0';
			
					flag=1;
					algorithm();
					}
				}
	
		}
		if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='P'){
			if(level0_pat==0){
	
			if(level_0_CountHints_PAT==1){
				iShowBMP(70,650,"hints_image//P.bmp");
				if(level_0_hints_score_flag_p_of_pat==0){
					score-=15;
					level_0_hints_score_flag_p_of_pat=1;
				}
		
			}
			if(level_0_CountHints_PAT==2){
				iShowBMP(70,650,"hints_image//P.bmp");iShowBMP(140,650,"hints_image//A.bmp");
				if(level_0_hints_score_flag_a_of_pat==0){
					score-=15;
					level_0_hints_score_flag_a_of_pat=1;
				}
			}
			if(level_0_CountHints_PAT==3){
		
				iShowBMP(70,650,"hints_image//P.bmp");iShowBMP(140,650,"hints_image//A.bmp");iShowBMP(210,650,"hints_image//T.bmp");
		
				if(level_0_hints_score_flag_t_of_pat==0){
					score-=15;
					level_0_hints_score_flag_t_of_pat=1;
				}


				arr[0]='P';arr[1]='A';arr[2]='T';arr[3]='\0';
		
				flag=1;
				algorithm();
				level0_pat=1;

				}
	
			}
			else if(level0_tap==0&&level0_pat==1){
		
				if(level_0_CountHints_TAP==1){
					iShowBMP(490,650,"hints_image//T.bmp");
					if(level_0_hints_score_flag_t_of_tap==0){
					score-=15;
					level_0_hints_score_flag_t_of_tap=1;
					}
				}
				if(level_0_CountHints_TAP==2){
					iShowBMP(490,650,"hints_image//T.bmp");iShowBMP(560,650,"hints_image//A.bmp");
					if(level_0_hints_score_flag_a_of_tap==0){
					score-=15;
					level_0_hints_score_flag_a_of_tap=1;
					}
				}
				if(level_0_CountHints_TAP==3){
					iShowBMP(490,650,"hints_image//T.bmp");iShowBMP(560,650,"hints_image//A.bmp");iShowBMP(630,650,"hints_image//P.bmp");
					if(level_0_hints_score_flag_p_of_tap==0){
					score-=15;
					level_0_hints_score_flag_p_of_tap=1;
					}
					level0_tap=1;
					arr[0]='T';arr[1]='A';arr[2]='P';arr[3]='\0';
			
					flag=1;
			
					algorithm();
				}
			}
			else if(level0_apt==0&&level0_tap==1&&level0_pat==1){
		
				if(level_0_CountHints_APT==1){
					iShowBMP(70,500,"hints_image//A.bmp");
					if(level_0_hints_score_flag_a_of_apt==0){
					score-=15;
					level_0_hints_score_flag_a_of_apt=1;
					}
				}
				if(level_0_CountHints_APT==2){
					iShowBMP(70,500,"hints_image//A.bmp");iShowBMP(140,500,"hints_image//P.bmp");
					if(level_0_hints_score_flag_p_of_apt==0){
					score-=15;
					level_0_hints_score_flag_p_of_apt=1;
					}
				}
				if(level_0_CountHints_APT==3){
					iShowBMP(70,500,"hints_image//A.bmp");iShowBMP(140,500,"hints_image//P.bmp");;iShowBMP(210,500,"hints_image//T.bmp");
					if(level_0_hints_score_flag_t_of_apt==0){
					score-=15;
					level_0_hints_score_flag_t_of_apt=1;
					}
					level0_apt=1;
					arr[0]='A';arr[1]='P';arr[2]='T';arr[3]='\0';
			
					flag=1;
					algorithm();
					}
				}
	
		}
	}
	if(level==1){
		if(word_level_1[WordRandom[Index]][0]=='W'&&word_level_1[WordRandom[Index]][1]=='O'&&word_level_1[WordRandom[Index]][2]=='R'&&word_level_1[WordRandom[Index]][3]=='D'){
			if(level1_word==0){
	
			if(level_1_CountHints_WORD==1){
				iShowBMP(70,650,"hints_image//W.bmp");
				if(level_1_hints_score_flag_w_of_word==0){
					score-=15;
					level_1_hints_score_flag_w_of_word=1;
				}
		
			}
			if(level_1_CountHints_WORD==2){
				iShowBMP(70,650,"hints_image//W.bmp");iShowBMP(140,650,"hints_image//O.bmp");
				if(level_1_hints_score_flag_o_of_word==0){
					score-=15;
					level_1_hints_score_flag_o_of_word=1;
				}
			}
			if(level_1_CountHints_WORD==3){
				iShowBMP(70,650,"hints_image//W.bmp");iShowBMP(140,650,"hints_image//O.bmp");iShowBMP(210,650,"hints_image//R.bmp");
				if(level_1_hints_score_flag_r_of_word==0){
					score-=15;
					level_1_hints_score_flag_r_of_word=1;
				}
			}
			if(level_1_CountHints_WORD==4){
		
				iShowBMP(70,650,"hints_image//W.bmp");iShowBMP(140,650,"hints_image//O.bmp");iShowBMP(210,650,"hints_image//R.bmp");iShowBMP(280,650,"hints_image//D.bmp");
		
				if(level_1_hints_score_flag_d_of_word==0){
					score-=15;
					level_1_hints_score_flag_d_of_word=1;
				}


				arr[0]='W';arr[1]='O';arr[2]='R';arr[3]='D';arr[4]='\0';
		
				flag=1;
				algorithm();
				level1_word=1;

				}
	
			}
			else if(level1_row==0&&level1_word==1){
		
				if(level_1_CountHints_ROW==1){
					iShowBMP(490,650,"hints_image//R.bmp");
					if(level_1_hints_score_flag_r_of_row==0){
					score-=15;
					level_1_hints_score_flag_r_of_row=1;
					}
				}
				if(level_1_CountHints_ROW==2){
					iShowBMP(490,650,"hints_image//R.bmp");iShowBMP(560,650,"hints_image//O.bmp");
					if(level_1_hints_score_flag_o_of_row==0){
					score-=15;
					level_1_hints_score_flag_o_of_row=1;
					}
				}
				if(level_1_CountHints_ROW==3){
					iShowBMP(490,650,"hints_image//R.bmp");iShowBMP(560,650,"hints_image//O.bmp");iShowBMP(630,650,"hints_image//W.bmp");
					if(level_1_hints_score_flag_w_of_row==0){
					score-=15;
					level_1_hints_score_flag_w_of_row=1;
					}
					level1_row=1;
					arr[0]='R';arr[1]='O';arr[2]='W';arr[3]='\0';
			
					flag=1;
			
					algorithm();
				}
			}
			else if(level1_or==0&&level1_row==1&&level1_word==1){
		
				if(level_1_CountHints_OR==1){
					iShowBMP(70,500,"hints_image//O.bmp");
					if(level_1_hints_score_flag_o_of_or==0){
					score-=15;
					level_1_hints_score_flag_o_of_or=1;
					}
				}
				if(level_1_CountHints_OR==2){
					iShowBMP(70,500,"hints_image//O.bmp");iShowBMP(140,500,"hints_image//R.bmp");
					if(level_1_hints_score_flag_r_of_or==0){
					score-=15;
					level_1_hints_score_flag_r_of_or=1;
					}
					level1_or=1;
					arr[0]='O';arr[1]='R';arr[2]='\0';
			
					flag=1;
					algorithm();
					}
				}
	
		}
		if(word_level_1[WordRandom[Index]][0]=='D'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='N'&&word_level_1[WordRandom[Index]][3]=='Y'){
			if(level1_deny==0){
	
			if(level_1_CountHints_DENY==1){
				iShowBMP(70,650,"hints_image//D.bmp");
				if(level_1_hints_score_flag_d_of_deny==0){
					score-=15;
					level_1_hints_score_flag_d_of_deny=1;
				}
		
			}
			if(level_1_CountHints_DENY==2){
				iShowBMP(70,650,"hints_image//D.bmp");iShowBMP(140,650,"hints_image//E.bmp");
				if(level_1_hints_score_flag_e_of_deny==0){
					score-=15;
					level_1_hints_score_flag_e_of_deny=1;
				}
			}
			if(level_1_CountHints_DENY==3){
				iShowBMP(70,650,"hints_image//D.bmp");iShowBMP(140,650,"hints_image//E.bmp");iShowBMP(210,650,"hints_image//N.bmp");
				if(level_1_hints_score_flag_n_of_deny==0){
					score-=15;
					level_1_hints_score_flag_n_of_deny=1;
				}
			}
			if(level_1_CountHints_DENY==4){
		
				iShowBMP(70,650,"hints_image//D.bmp");iShowBMP(140,650,"hints_image//E.bmp");iShowBMP(210,650,"hints_image//N.bmp");iShowBMP(280,650,"hints_image//Y.bmp");
		
				if(level_1_hints_score_flag_y_of_deny==0){
					score-=15;
					level_1_hints_score_flag_y_of_deny=1;
				}


				arr[0]='D';arr[1]='E';arr[2]='N';arr[3]='Y';arr[4]='\0';
		
				flag=1;
				algorithm();
				level1_deny=1;

				}
	
			}
			else if(level1_dye==0&&level1_deny==1){
		
				if(level_1_CountHints_DYE==1){
					iShowBMP(490,650,"hints_image//D.bmp");
					if(level_1_hints_score_flag_d_of_dye==0){
					score-=15;
					level_1_hints_score_flag_d_of_dye=1;
					}
				}
				if(level_1_CountHints_DYE==2){
					iShowBMP(490,650,"hints_image//D.bmp");iShowBMP(560,650,"hints_image//Y.bmp");
					if(level_1_hints_score_flag_y_of_dye==0){
					score-=15;
					level_1_hints_score_flag_y_of_dye=1;
					}
				}
				if(level_1_CountHints_DYE==3){
					iShowBMP(490,650,"hints_image//D.bmp");iShowBMP(560,650,"hints_image//Y.bmp");iShowBMP(630,650,"hints_image//E.bmp");
					if(level_1_hints_score_flag_e_of_dye==0){
					score-=15;
					level_1_hints_score_flag_e_of_dye=1;
					}
					level1_dye=1;
					arr[0]='D';arr[1]='Y';arr[2]='E';arr[3]='\0';
			
					flag=1;
			
					algorithm();
				}
			}
			else if(level1_end==0&&level1_dye==1&&level1_deny==1){
		
				if(level_1_CountHints_END==1){
					iShowBMP(70,500,"hints_image//E.bmp");
					if(level_1_hints_score_flag_e_of_end==0){
					score-=15;
					level_1_hints_score_flag_e_of_end=1;
					}
				}
				if(level_1_CountHints_END==2){
					iShowBMP(70,500,"hints_image//E.bmp");iShowBMP(140,500,"hints_image//N.bmp");
					if(level_1_hints_score_flag_n_of_end==0){
					score-=15;
					level_1_hints_score_flag_n_of_end=1;
					}
				}
				if(level_1_CountHints_END==3){
					iShowBMP(70,500,"hints_image//E.bmp");iShowBMP(140,500,"hints_image//N.bmp");iShowBMP(210,500,"hints_image//D.bmp");
					if(level_1_hints_score_flag_d_of_end==0){
					score-=15;
					level_1_hints_score_flag_d_of_end=1;
					}
					level1_end=1;
					arr[0]='E';arr[1]='N';arr[2]='D';arr[3]='\0';
			
					flag=1;
					algorithm();
					}
				}
			else if(level1_den==0&&level1_end==1&&level1_dye==1&&level1_deny==1){
		
				if(level_1_CountHints_DEN==1){
					iShowBMP(490,500,"hints_image//D.bmp");
					if(level_1_hints_score_flag_d_of_den==0){
					score-=15;
					level_1_hints_score_flag_d_of_den=1;
					}
				}
				if(level_1_CountHints_DEN==2){
					iShowBMP(490,500,"hints_image//D.bmp");iShowBMP(560,500,"hints_image//E.bmp");
					if(level_1_hints_score_flag_e_of_den==0){
					score-=15;
					level_1_hints_score_flag_e_of_den=1;
					}
				}
				if(level_1_CountHints_DEN==3){
					iShowBMP(490,500,"hints_image//D.bmp");iShowBMP(560,500,"hints_image//E.bmp");iShowBMP(630,500,"hints_image//N.bmp");
					if(level_1_hints_score_flag_n_of_den==0){
					score-=15;
					level_1_hints_score_flag_n_of_den=1;
					}
					level1_den=1;
					arr[0]='D';arr[1]='E';arr[2]='N';arr[3]='\0';
			
					flag=1;
					algorithm();
					}
				}
	
		}
		if(word_level_1[WordRandom[Index]][0]=='G'&&word_level_1[WordRandom[Index]][1]=='O'&&word_level_1[WordRandom[Index]][2]=='N'&&word_level_1[WordRandom[Index]][3]=='E'){
			if(level1_gone==0){
	
			if(level_1_CountHints_GONE==1){
				iShowBMP(70,650,"hints_image//G.bmp");
				if(level_1_hints_score_flag_g_of_gone==0){
					score-=15;
					level_1_hints_score_flag_g_of_gone=1;
				}
		
			}
			if(level_1_CountHints_GONE==2){
				iShowBMP(70,650,"hints_image//G.bmp");iShowBMP(140,650,"hints_image//O.bmp");
				if(level_1_hints_score_flag_o_of_gone==0){
					score-=15;
					level_1_hints_score_flag_o_of_gone=1;
				}
			}
			if(level_1_CountHints_GONE==3){
				iShowBMP(70,650,"hints_image//G.bmp");iShowBMP(140,650,"hints_image//O.bmp");iShowBMP(210,650,"hints_image//N.bmp");
				if(level_1_hints_score_flag_n_of_gone==0){
					score-=15;
					level_1_hints_score_flag_n_of_gone=1;
				}
			}
			if(level_1_CountHints_GONE==4){
		
				iShowBMP(70,650,"hints_image//G.bmp");iShowBMP(140,650,"hints_image//O.bmp");iShowBMP(210,650,"hints_image//N.bmp");iShowBMP(280,650,"hints_image//E.bmp");
		
				if(level_1_hints_score_flag_e_of_gone==0){
					score-=15;
					level_1_hints_score_flag_e_of_gone=1;
				}


				arr[0]='G';arr[1]='O';arr[2]='N';arr[3]='E';arr[4]='\0';
		
				flag=1;
				algorithm();
				level1_gone=1;

				}
	
			}
			else if(level1_ego==0&&level1_gone==1){
		
				if(level_1_CountHints_EGO==1){
					iShowBMP(490,650,"hints_image//E.bmp");
					if(level_1_hints_score_flag_e_of_ego==0){
					score-=15;
					level_1_hints_score_flag_e_of_ego=1;
					}
				}
				if(level_1_CountHints_EGO==2){
					iShowBMP(490,650,"hints_image//E.bmp");iShowBMP(560,650,"hints_image//G.bmp");
					if(level_1_hints_score_flag_g_of_ego==0){
					score-=15;
					level_1_hints_score_flag_g_of_ego=1;
					}
				}
				if(level_1_CountHints_EGO==3){
					iShowBMP(490,650,"hints_image//E.bmp");iShowBMP(560,650,"hints_image//G.bmp");iShowBMP(630,650,"hints_image//O.bmp");
					if(level_1_hints_score_flag_o_of_ego==0){
					score-=15;
					level_1_hints_score_flag_o_of_ego=1;
					}
					level1_ego=1;
					arr[0]='E';arr[1]='G';arr[2]='O';arr[3]='\0';
			
					flag=1;
			
					algorithm();
				}
			}
			else if(level1_one==0&&level1_ego==1&&level1_gone==1){
		
				if(level_1_CountHints_ONE==1){
					iShowBMP(70,500,"hints_image//O.bmp");
					if(level_1_hints_score_flag_o_of_one==0){
					score-=15;
					level_1_hints_score_flag_o_of_one=1;
					}
				}
				if(level_1_CountHints_ONE==2){
					iShowBMP(70,500,"hints_image//O.bmp");iShowBMP(140,500,"hints_image//N.bmp");
					if(level_1_hints_score_flag_n_of_one==0){
					score-=15;
					level_1_hints_score_flag_n_of_one=1;
					}
				}
				if(level_1_CountHints_ONE==3){
					iShowBMP(70,500,"hints_image//O.bmp");iShowBMP(140,500,"hints_image//N.bmp");iShowBMP(210,500,"hints_image//E.bmp");
					if(level_1_hints_score_flag_e_of_one==0){
					score-=15;
					level_1_hints_score_flag_e_of_one=1;
					}
					level1_one=1;
					arr[0]='O';arr[1]='N';arr[2]='E';arr[3]='\0';
			
					flag=1;
					algorithm();
					}
				}
			else if(level1_gen==0&&level1_one==1&&level1_ego==1&&level1_gone==1){
		
				if(level_1_CountHints_GEN==1){
					iShowBMP(490,500,"hints_image//G.bmp");
					if(level_1_hints_score_flag_g_of_gen==0){
					score-=15;
					level_1_hints_score_flag_g_of_gen=1;
					}
				}
				if(level_1_CountHints_GEN==2){
					iShowBMP(490,500,"hints_image//G.bmp");iShowBMP(560,500,"hints_image//E.bmp");
					if(level_1_hints_score_flag_e_of_gen==0){
					score-=15;
					level_1_hints_score_flag_e_of_gen=1;
					}
				}
				if(level_1_CountHints_GEN==3){
					iShowBMP(490,500,"hints_image//G.bmp");iShowBMP(560,500,"hints_image//E.bmp");iShowBMP(630,500,"hints_image//N.bmp");
					if(level_1_hints_score_flag_n_of_gen==0){
					score-=15;
					level_1_hints_score_flag_n_of_gen=1;
					}
					level1_gen=1;
					arr[0]='G';arr[1]='E';arr[2]='N';arr[3]='\0';
			
					flag=1;
					algorithm();
					}
				
			}
		}
		if(word_level_1[WordRandom[Index]][0]=='N'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='A'&&word_level_1[WordRandom[Index]][3]=='R'){
			if(level1_earn==0){
	
			if(level_1_CountHints_EARN==1){
				iShowBMP(70,650,"hints_image//E.bmp");
				if(level_1_hints_score_flag_e_of_earn==0){
					score-=15;
					level_1_hints_score_flag_e_of_earn=1;
				}
		
			}
			if(level_1_CountHints_EARN==2){
				iShowBMP(70,650,"hints_image//E.bmp");iShowBMP(140,650,"hints_image//A.bmp");
				if(level_1_hints_score_flag_a_of_earn==0){
					score-=15;
					level_1_hints_score_flag_a_of_earn=1;
				}
			}
			if(level_1_CountHints_EARN==3){
				iShowBMP(70,650,"hints_image//E.bmp");iShowBMP(140,650,"hints_image//A.bmp");iShowBMP(210,650,"hints_image//R.bmp");
				if(level_1_hints_score_flag_r_of_earn==0){
					score-=15;
					level_1_hints_score_flag_r_of_earn=1;
				}
			}
			if(level_1_CountHints_EARN==4){
		
				iShowBMP(70,650,"hints_image//E.bmp");iShowBMP(140,650,"hints_image//A.bmp");iShowBMP(210,650,"hints_image//R.bmp");iShowBMP(280,650,"hints_image//N.bmp");
		
				if(level_1_hints_score_flag_n_of_earn==0){
					score-=15;
					level_1_hints_score_flag_n_of_earn=1;
				}


				arr[0]='E';arr[1]='A';arr[2]='R';arr[3]='N';arr[4]='\0';
		
				flag=1;
				algorithm();
				level1_earn=1;

				}
	
			}
			else if(level1_near==0&&level1_earn==1){
		
				if(level_1_CountHints_NEAR==1){
					iShowBMP(490,650,"hints_image//N.bmp");
					if(level_1_hints_score_flag_n_of_near==0){
					score-=15;
					level_1_hints_score_flag_n_of_near=1;
					}
				}
				if(level_1_CountHints_NEAR==2){
					iShowBMP(490,650,"hints_image//N.bmp");iShowBMP(560,650,"hints_image//E.bmp");
					if(level_1_hints_score_flag_e_of_near==0){
					score-=15;
					level_1_hints_score_flag_e_of_near=1;
					}
				}
				if(level_1_CountHints_NEAR==3){
					iShowBMP(490,650,"hints_image//N.bmp");iShowBMP(560,650,"hints_image//E.bmp");iShowBMP(630,650,"hints_image//A.bmp");
					if(level_1_hints_score_flag_a_of_near==0){
					score-=15;
					level_1_hints_score_flag_a_of_near=1;
					}
				}
				if(level_1_CountHints_NEAR==4){
					iShowBMP(490,650,"hints_image//N.bmp");iShowBMP(560,650,"hints_image//E.bmp");iShowBMP(630,650,"hints_image//A.bmp");iShowBMP(700,650,"hints_image//R.bmp");
					if(level_1_hints_score_flag_r_of_near==0){
					score-=15;
					level_1_hints_score_flag_r_of_near=1;
					}
					level1_near=1;
					arr[0]='N';arr[1]='E';arr[2]='A';arr[3]='R';arr[4]='\0';
			
					flag=1;
			
					algorithm();
				}
			}
			else if(level1_era==0&&level1_near==1&&level1_earn==1){
		
				if(level_1_CountHints_ERA==1){
					iShowBMP(70,500,"hints_image//E.bmp");
					if(level_1_hints_score_flag_e_of_era==0){
					score-=15;
					level_1_hints_score_flag_e_of_era=1;
					}
				}
				if(level_1_CountHints_ERA==2){
					iShowBMP(70,500,"hints_image//E.bmp");iShowBMP(140,500,"hints_image//R.bmp");
					if(level_1_hints_score_flag_r_of_era==0){
					score-=15;
					level_1_hints_score_flag_r_of_era=1;
					}
				}
				if(level_1_CountHints_ERA==3){
					iShowBMP(70,500,"hints_image//E.bmp");iShowBMP(140,500,"hints_image//R.bmp");iShowBMP(210,500,"hints_image//A.bmp");
					if(level_1_hints_score_flag_a_of_era==0){
					score-=15;
					level_1_hints_score_flag_a_of_era=1;
					}
					level1_era=1;
					arr[0]='E';arr[1]='R';arr[2]='A';arr[3]='\0';
			
					flag=1;
					algorithm();
					}
				}
			else if(level1_ear==0&&level1_era==1&&level1_near==1&&level1_earn==1){
		
				if(level_1_CountHints_EAR==1){
					iShowBMP(490,500,"hints_image//E.bmp");
					if(level_1_hints_score_flag_e_of_ear==0){
					score-=15;
					level_1_hints_score_flag_e_of_ear=1;
					}
				}
				if(level_1_CountHints_EAR==2){
					iShowBMP(490,500,"hints_image//E.bmp");iShowBMP(560,500,"hints_image//A.bmp");
					if(level_1_hints_score_flag_a_of_ear==0){
					score-=15;
					level_1_hints_score_flag_a_of_ear=1;
					}
				}
				if(level_1_CountHints_EAR==3){
					iShowBMP(490,500,"hints_image//E.bmp");iShowBMP(560,500,"hints_image//A.bmp");iShowBMP(630,500,"hints_image//R.bmp");
					if(level_1_hints_score_flag_r_of_ear==0){
					score-=15;
					level_1_hints_score_flag_r_of_ear=1;
					}
					level1_ear=1;
					arr[0]='E';arr[1]='A';arr[2]='R';arr[3]='\0';
			
					flag=1;
					algorithm();
					}
				
			}
		}
		if(word_level_1[WordRandom[Index]][0]=='H'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='A'&&word_level_1[WordRandom[Index]][3]=='T'){
			if(level1_heat==0){
	
			if(level_1_CountHints_HEAT==1){
				iShowBMP(70,650,"hints_image//H.bmp");
				if(level_1_hints_score_flag_h_of_heat==0){
					score-=15;
					level_1_hints_score_flag_h_of_heat=1;
				}
		
			}
			if(level_1_CountHints_HEAT==2){
				iShowBMP(70,650,"hints_image//H.bmp");iShowBMP(140,650,"hints_image//E.bmp");
				if(level_1_hints_score_flag_e_of_earn==0){
					score-=15;
					level_1_hints_score_flag_e_of_earn=1;
				}
			}
			if(level_1_CountHints_HEAT==3){
				iShowBMP(70,650,"hints_image//H.bmp");iShowBMP(140,650,"hints_image//E.bmp");iShowBMP(210,650,"hints_image//A.bmp");
				if(level_1_hints_score_flag_a_of_heat==0){
					score-=15;
					level_1_hints_score_flag_a_of_heat=1;
				}
			}
			if(level_1_CountHints_HEAT==4){
		
				iShowBMP(70,650,"hints_image//H.bmp");iShowBMP(140,650,"hints_image//E.bmp");iShowBMP(210,650,"hints_image//A.bmp");iShowBMP(280,650,"hints_image//T.bmp");
		
				if(level_1_hints_score_flag_t_of_heat==0){
					score-=15;
					level_1_hints_score_flag_t_of_heat=1;
				}


				arr[0]='H';arr[1]='E';arr[2]='A';arr[3]='T';arr[4]='\0';
		
				flag=1;
				algorithm();
				level1_heat=1;

				}
	
			}
			else if(level1_tea==0&&level1_heat==1){
		
				if(level_1_CountHints_TEA==1){
					iShowBMP(490,650,"hints_image//T.bmp");
					if(level_1_hints_score_flag_t_of_tea==0){
					score-=15;
					level_1_hints_score_flag_t_of_tea=1;
					}
				}
				if(level_1_CountHints_TEA==2){
					iShowBMP(490,650,"hints_image//T.bmp");iShowBMP(560,650,"hints_image//E.bmp");
					if(level_1_hints_score_flag_e_of_tea==0){
					score-=15;
					level_1_hints_score_flag_e_of_tea=1;
					}
				}
				if(level_1_CountHints_TEA==3){
					iShowBMP(490,650,"hints_image//T.bmp");iShowBMP(560,650,"hints_image//E.bmp");iShowBMP(630,650,"hints_image//A.bmp");
					if(level_1_hints_score_flag_a_of_tea==0){
					score-=15;
					level_1_hints_score_flag_a_of_tea=1;
					}
					level1_tea=1;
					arr[0]='T';arr[1]='E';arr[2]='A';arr[3]='\0';
			
					flag=1;
			
					algorithm();
				}
			}
			else if(level1_eat==0&&level1_tea==1&&level1_heat==1){
		
				if(level_1_CountHints_EAT==1){
					iShowBMP(70,500,"hints_image//E.bmp");
					if(level_1_hints_score_flag_e_of_eat==0){
					score-=15;
					level_1_hints_score_flag_e_of_eat=1;
					}
				}
				if(level_1_CountHints_EAT==2){
					iShowBMP(70,500,"hints_image//E.bmp");iShowBMP(140,500,"hints_image//A.bmp");
					if(level_1_hints_score_flag_a_of_eat==0){
					score-=15;
					level_1_hints_score_flag_a_of_eat=1;
					}
				}
				if(level_1_CountHints_EAT==3){
					iShowBMP(70,500,"hints_image//E.bmp");iShowBMP(140,500,"hints_image//A.bmp");iShowBMP(210,500,"hints_image//T.bmp");
					if(level_1_hints_score_flag_t_of_eat==0){
					score-=15;
					level_1_hints_score_flag_t_of_eat=1;
					}
					level1_eat=1;
					arr[0]='E';arr[1]='A';arr[2]='T';arr[3]='\0';
			
					flag=1;
					algorithm();
					}
				}
			else if(level1_the==0&&level1_eat==1&&level1_tea==1&&level1_heat==1){
		
				if(level_1_CountHints_THE==1){
					iShowBMP(490,500,"hints_image//T.bmp");
					if(level_1_hints_score_flag_t_of_the==0){
					score-=15;
					level_1_hints_score_flag_t_of_the=1;
					}
				}
				if(level_1_CountHints_THE==2){
					iShowBMP(490,500,"hints_image//T.bmp");iShowBMP(560,500,"hints_image//H.bmp");
					if(level_1_hints_score_flag_h_of_the==0){
					score-=15;
					level_1_hints_score_flag_h_of_the=1;
					}
				}
				if(level_1_CountHints_THE==3){
					iShowBMP(490,500,"hints_image//T.bmp");iShowBMP(560,500,"hints_image//H.bmp");iShowBMP(630,500,"hints_image//E.bmp");
					if(level_1_hints_score_flag_e_of_the==0){
					score-=15;
					level_1_hints_score_flag_e_of_the=1;
					}
					level1_the=1;
					arr[0]='T';arr[1]='H';arr[2]='E';arr[3]='\0';
			
					flag=1;
					algorithm();
					}
				
			}
		}
	}
}
