void scoreadd(){
	//scoreadd function is not called only in case of hints
	if(level==0){
		//if(word_level_0[word1.easy][0]=='B'&&word_level_0[word1.easy][1]=='A'&&word_level_0[word1.easy][2]=='T'){
		if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='B'){
			if(level_0_flag_discovered_word_TAB<=1){
				//score is added only if tab is called once
				if(level0_tab==1&&level0_tab_score_flag==1){
					//another flag of score is called and the value is made 0 after adding score so that score of tab is added oy once not everytime tab is called
					score+=5;
					level0_tab_score_flag=0;
				}
			}
			if(level_0_flag_discovered_word_BAT<=1){
				if(level0_bat==1&&level0_bat_score_flag==1){
					score+=5;
					level0_bat_score_flag=0;
				}
			}
			if(level_0_flag_discovered_word_AT<=1){
				if(level0_at==1&&level0_at_score_flag==1){
					 score+=5;
					 level0_at_score_flag=0;
				 }
			}
		}
		if(word_level_0[WordRandom[Index]][0]=='R'&&word_level_0[WordRandom[Index]][1]=='O'&&word_level_0[WordRandom[Index]][2]=='B'){
			if(level_0_flag_discovered_word_BRO<=1){
				//score is added only if bro is called once
				if(level0_bro==1&&level0_bro_score_flag==1){
					//another flag of score is called and the value is made 0 after adding score so that score of bro is added oy once not everytime bro is called
					score+=5;
					level0_bro_score_flag=0;
				}
			}
			if(level_0_flag_discovered_word_ROB<=1){
				if(level0_rob==1&&level0_rob_score_flag==1){
					score+=5;
					level0_rob_score_flag=0;
				}
			}
			if(level_0_flag_discovered_word_OR<=1){
				if(level0_or==1&&level0_or_score_flag==1){
					 score+=5;
					 level0_or_score_flag=0;
				 }
			}
		}
		if(word_level_0[WordRandom[Index]][0]=='M'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='D'){
			if(level_0_flag_discovered_word_MAD<=1){
				//score is added only if tab is called once
				if(level0_mad==1&&level0_mad_score_flag==1){
					//another flag of score is called and the value is made 0 after adding score so that score of tab is added oy once not everytime tab is called
					score+=5;
					level0_mad_score_flag=0;
				}
			}
			if(level_0_flag_discovered_word_DAM<=1){
				if(level0_dam==1&&level0_dam_score_flag==1){
					score+=5;
					level0_dam_score_flag=0;
				}
			}
			if(level_0_flag_discovered_word_AM<=1){
				if(level0_am==1&&level0_am_score_flag==1){
					 score+=5;
					 level0_am_score_flag=0;
				 }
			}
		}
		if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='I'&&word_level_0[WordRandom[Index]][2]=='P'){
			if(level_0_flag_discovered_word_TIP<=1){
				//score is added only if tip is called once
				if(level0_tip==1&&level0_tip_score_flag==1){
					//another flag of score is called and the value is made 0 after adding score so that score of tip is added oy once not everytime tab is called
					score+=5;
					level0_tip_score_flag=0;
				}
			}
			if(level_0_flag_discovered_word_PIT<=1){
				if(level0_pit==1&&level0_pit_score_flag==1){
					score+=5;
					level0_pit_score_flag=0;
				}
			}
			if(level_0_flag_discovered_word_IT<=1){
				if(level0_it==1&&level0_it_score_flag==1){
					 score+=5;
					 level0_it_score_flag=0;
				 }
			}
		}
		if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='P'){
			if(level_0_flag_discovered_word_TAP<=1){
				//score is added only if tab is called once
				if(level0_tap==1&&level0_tap_score_flag==1){
					//another flag of score is called and the value is made 0 after adding score so that score of tab is added oy once not everytime tab is called
					score+=5;
					level0_tap_score_flag=0;
				}
			}
			if(level_0_flag_discovered_word_PAT<=1){
				if(level0_pat==1&&level0_pat_score_flag==1){
					score+=5;
					level0_pat_score_flag=0;
				}
			}
			if(level_0_flag_discovered_word_APT<=1){
				if(level0_apt==1&&level0_apt_score_flag==1){
					 score+=5;
					 level0_apt_score_flag=0;
				 }
			}
		}
	}
		if(level==1){
			if(word_level_1[WordRandom[Index]][0]=='W'&&word_level_1[WordRandom[Index]][1]=='O'&&word_level_1[WordRandom[Index]][2]=='R'&&word_level_1[WordRandom[Index]][3]=='D'){
				if(level_1_flag_discovered_word_ROW<=1){
					//score is added only if row is called once
					if(level1_row==1&&level1_row_score_flag==1){
						//another flag of score is called and the value is made 0 after adding score so that score of row is added oy once not everytime a word is called
						score+=5;
						level1_row_score_flag=0;
					}
				}
				if(level_1_flag_discovered_word_WORD<=1){
					if(level1_word==1&&level1_word_score_flag==1){
						score+=5;
						level1_word_score_flag=0;
					}
				}
				if(level_1_flag_discovered_word_OR<=1){
					if(level1_or==1&&level1_or_score_flag==1){
						 score+=5;
						 level1_or_score_flag=0;
					 }
				}
				if(level_1_flag_discovered_word_DO<=1){
					 if(level1_do==1&&level1_do_score_flag==1){
						 score+=3;
						 level1_do_score_flag=0;
					 }
				}
				if(level_1_flag_discovered_word_ROD<=1){
					 if(level1_rod==1&&level1_rod_score_flag==1){
						  score+=3;
						  level1_rod_score_flag=0;
					  }
				}
			}
			if(word_level_1[WordRandom[Index]][0]=='D'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='N'&&word_level_1[WordRandom[Index]][3]=='Y'){
				if(level_1_flag_discovered_word_DYE<=1){
					//score is added only if dye is called once
					if(level1_dye==1&&level1_dye_score_flag==1){
						//another flag of score is called and the value is made 0 after adding score so that score of dye is added oy once not everytime a word is called
						score+=5;
						level1_dye_score_flag=0;
					}
				}
				if(level_1_flag_discovered_word_DENY<=1){
					if(level1_deny==1&&level1_deny_score_flag==1){
						score+=5;
						level1_deny_score_flag=0;
					}
				}
				if(level_1_flag_discovered_word_DEN<=1){
					if(level1_den==1&&level1_den_score_flag==1){
						 score+=5;
						 level1_den_score_flag=0;
					 }
				}
				if(level_1_flag_discovered_word_END<=1){
					 if(level1_end==1&&level1_end_score_flag==1){
						 score+=5;
						 level1_end_score_flag=0;
					 }
				}
				if(level_1_flag_discovered_word_YEN<=1){
					 if(level1_yen==1&&level1_yen_score_flag==1){
						  score+=3;
						  level1_yen_score_flag=0;
					  }
				}
				
			}
			if(word_level_1[WordRandom[Index]][0]=='G'&&word_level_1[WordRandom[Index]][1]=='O'&&word_level_1[WordRandom[Index]][2]=='N'&&word_level_1[WordRandom[Index]][3]=='E'){
				if(level_1_flag_discovered_word_EGO<=1){
					//score is added only if ego is called once
					if(level1_ego==1&&level1_ego_score_flag==1){
						//another flag of score is called and the value is made 0 after adding score so that score of ego is added oy once not everytime a word is called
						score+=5;
						level1_ego_score_flag=0;
					}
				}
				if(level_1_flag_discovered_word_GONE<=1){
					if(level1_gone==1&&level1_gone_score_flag==1){
						score+=5;
						level1_gone_score_flag=0;
					}
				}
				if(level_1_flag_discovered_word_GEN<=1){
					if(level1_gen==1&&level1_gen_score_flag==1){
						 score+=5;
						 level1_gen_score_flag=0;
					 }
				}
				if(level_1_flag_discovered_word_ONE<=1){
					 if(level1_one==1&&level1_one_score_flag==1){
						 score+=5;
						 level1_one_score_flag=0;
					 }
				}
				if(level_1_flag_discovered_word_NEO<=1){
					 if(level1_neo==1&&level1_neo_score_flag==1){
						  score+=3;
						  level1_neo_score_flag=0;
					  }
				}
				
			}
			if(word_level_1[WordRandom[Index]][0]=='N'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='A'&&word_level_1[WordRandom[Index]][3]=='R'){
				if(level_1_flag_discovered_word_NEAR<=1){
					//score is added only if near is called once
					if(level1_near==1&&level1_near_score_flag==1){
						//another flag of score is called and the value is made 0 after adding score so that score of near is added only once not everytime a word is called
						score+=5;
						level1_near_score_flag=0;
					}
				}
				if(level_1_flag_discovered_word_EARN<=1){
					if(level1_earn==1&&level1_earn_score_flag==1){
						score+=5;
						level1_earn_score_flag=0;
					}
				}
				if(level_1_flag_discovered_word_EAR<=1){
					if(level1_ear==1&&level1_ear_score_flag==1){
						 score+=5;
						 level1_ear_score_flag=0;
					 }
				}
				if(level_1_flag_discovered_word_ERA<=1){
					 if(level1_era==1&&level1_era_score_flag==1){
						 score+=5;
						 level1_era_score_flag=0;
					 }
				}
				if(level_1_flag_discovered_word_ARE<=1){
					 if(level1_are==1&&level1_are_score_flag==1){
						  score+=3;
						  level1_are_score_flag=0;
					  }
				}
				if(level_1_flag_discovered_word_RAN<=1){
					 if(level1_ran==1&&level1_ran_score_flag==1){
						  score+=3;
						  level1_ran_score_flag=0;
					  }
				}
				
			}
			if(word_level_1[WordRandom[Index]][0]=='H'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='A'&&word_level_1[WordRandom[Index]][3]=='T'){
				if(level_1_flag_discovered_word_TEA<=1){
					//score is added only if near is called once
					if(level1_tea==1&&level1_tea_score_flag==1){
						//another flag of score is called and the value is made 0 after adding score so that score of tea is added only once not everytime a word is called
						score+=5;
						level1_tea_score_flag=0;
					}
				}
				if(level_1_flag_discovered_word_HEAT<=1){
					if(level1_heat==1&&level1_heat_score_flag==1){
						score+=5;
						level1_heat_score_flag=0;
					}
				}
				if(level_1_flag_discovered_word_THE<=1){
					if(level1_the==1&&level1_the_score_flag==1){
						 score+=5;
						 level1_the_score_flag=0;
					 }
				}
				if(level_1_flag_discovered_word_EAT<=1){
					 if(level1_eat==1&&level1_eat_score_flag==1){
						 score+=5;
						 level1_eat_score_flag=0;
					 }
				}
				if(level_1_flag_discovered_word_HAT<=1){
					 if(level1_hat==1&&level1_hat_score_flag==1){
						  score+=3;
						  level1_hat_score_flag=0;
					  }
				}
				if(level_1_flag_discovered_word_HATE<=1){
					 if(level1_hate==1&&level1_hate_score_flag==1){
						  score+=3;
						  level1_hate_score_flag=0;
					  }
				}
				if(level_1_flag_discovered_word_ATE<=1){
					 if(level1_ate==1&&level1_ate_score_flag==1){
						  score+=3;
						  level1_ate_score_flag=0;
					  }
				}				
			}
		}
		if(level==2){
			if(word_level_2[WordRandom[Index]][0]=='D'&&word_level_2[WordRandom[Index]][1]=='R'&&word_level_2[WordRandom[Index]][2]=='E'&&word_level_2[WordRandom[Index]][3]=='A'&&word_level_2[WordRandom[Index]][4]=='M'){
				if(level_2_flag_discovered_word_DREAM<=1){
					//score is added only if dream is called once
					if(level2_dream==1&&level2_dream_score_flag==1){
						//another flag of score is called and the value is made 0 after adding score so that score of dream is added only once not everytime a word is called
						score+=5;
						level2_dream_score_flag=0;
					}
				}
				if(level_2_flag_discovered_word_DEAM<=1){
					if(level2_deam==1&&level2_deam_score_flag==1){
						score+=5;
						level2_deam_score_flag=0;
					}
				}
				if(level_2_flag_discovered_word_DARE<=1){
					if(level2_dare==1&&level2_dare_score_flag==1){
						 score+=5;
						 level2_dare_score_flag=0;
					 }
				}
				if(level_2_flag_discovered_word_DAME<=1){
					 if(level2_dame==1&&level2_dame_score_flag==1){
						 score+=5;
						 level2_dame_score_flag=0;
					 }
				}
				if(level_2_flag_discovered_word_MADE<=1){
					 if(level2_made==1&&level2_made_score_flag==1){
						  score+=5;
						  level2_made_score_flag=0;
					  }
				}
				if(level_2_flag_discovered_word_READ<=1){
					 if(level2_read==1&&level2_read_score_flag==1){
						  score+=5;
						  level2_read_score_flag=0;
					  }
				}
				if(level_2_flag_discovered_word_MARE<=1){
					 if(level2_mare==1&&level2_mare_score_flag==1){
						  score+=3;
						  level2_mare_score_flag=0;
					  }
				}
				if(level_2_flag_discovered_word_DEAR<=1){
					 if(level2_dear==1&&level2_dear_score_flag==1){
						  score+=3;
						  level2_dear_score_flag=0;
					  }
				}
			}
			if(word_level_2[WordRandom[Index]][0]=='S'&&word_level_2[WordRandom[Index]][1]=='W'&&word_level_2[WordRandom[Index]][2]=='I'&&word_level_2[WordRandom[Index]][3]=='N'&&word_level_2[WordRandom[Index]][4]=='G'){
				if(level_2_flag_discovered_word_SWING<=1){
					//score is added only if swing is called once
					if(level2_swing==1&&level2_swing_score_flag==1){
						//another flag of score is called and the value is made 0 after adding score so that score of swing is added only once not everytime a word is called
						score+=5;
						level2_swing_score_flag=0;
					}
				}
				if(level_2_flag_discovered_word_SING<=1){
					if(level2_sing==1&&level2_sing_score_flag==1){
						score+=5;
						level2_sing_score_flag=0;
					}
				}
				if(level_2_flag_discovered_word_WING<=1){
					if(level2_wing==1&&level2_wing_score_flag==1){
						 score+=5;
						 level2_wing_score_flag=0;
					 }
				}
				if(level_2_flag_discovered_word_SIGN<=1){
					 if(level2_sign==1&&level2_sign_score_flag==1){
						 score+=5;
						 level2_sign_score_flag=0;
					 }
				}
				if(level_2_flag_discovered_word_SWIG<=1){
					 if(level2_swig==1&&level2_swig_score_flag==1){
						  score+=3;
						  level2_swig_score_flag=0;
					  }
				}
				if(level_2_flag_discovered_word_WINGS<=1){
					 if(level2_wings==1&&level2_wings_score_flag==1){
						  score+=3;
						  level2_wings_score_flag=0;
					  }
				}
			}
			if(word_level_2[WordRandom[Index]][0]=='W'&&word_level_2[WordRandom[Index]][1]=='R'&&word_level_2[WordRandom[Index]][2]=='O'&&word_level_2[WordRandom[Index]][3]=='N'&&word_level_2[WordRandom[Index]][4]=='G'){
				if(level_2_flag_discovered_word_WRONG<=1){
					//score is added only if wrong is called once
					if(level2_wrong==1&&level2_wrong_score_flag==1){
						//another flag of score is called and the value is made 0 after adding score so that score of wrong is added only once not everytime a word is called
						score+=5;
						level2_wrong_score_flag=0;
					}
				}
				if(level_2_flag_discovered_word_WORN<=1){
					if(level2_worn==1&&level2_worn_score_flag==1){
						score+=5;
						level2_worn_score_flag=0;
					}
				}
				if(level_2_flag_discovered_word_GROW<=1){
					if(level2_grow==1&&level2_grow_score_flag==1){
						 score+=5;
						 level2_grow_score_flag=0;
					 }
				}
				if(level_2_flag_discovered_word_GOWN<=1){
					 if(level2_gown==1&&level2_gown_score_flag==1){
						 score+=5;
						 level2_gown_score_flag=0;
					 }
				}
				if(level_2_flag_discovered_word_WON<=1){
					 if(level2_won==1&&level2_won_score_flag==1){
						 score+=5;
						 level2_won_score_flag=0;
					 }
				}
				if(level_2_flag_discovered_word_NOW<=1){
					 if(level2_now==1&&level2_now_score_flag==1){
						 score+=5;
						 level2_now_score_flag=0;
					 }
				}
				if(level_2_flag_discovered_word_OWN<=1){
					 if(level2_own==1&&level2_own_score_flag==1){
						  score+=3;
						  level2_own_score_flag=0;
					  }
				}
				if(level_2_flag_discovered_word_GROWN<=1){
					 if(level2_grown==1&&level2_grown_score_flag==1){
						  score+=3;
						  level2_grown_score_flag=0;
					  }
				}
			if(level_2_flag_discovered_word_ROW<=1){
					 if(level2_row==1&&level2_row_score_flag==1){
						  score+=3;
						  level2_row_score_flag=0;
					  }
				}
			if(level_2_flag_discovered_word_NOR<=1){
					 if(level2_nor==1&&level2_nor_score_flag==1){
						  score+=3;
						  level2_nor_score_flag=0;
					  }
				}
			if(level_2_flag_discovered_word_ARMED<=1){
					 if(level2_armed==1&&level2_armed_score_flag==1){
						  score+=3;
						  level2_armed_score_flag=0;
					  }
				}
			}
		}
}