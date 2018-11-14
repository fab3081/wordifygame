void algorithm(){
	//levelup();
	if(level==0){	
		if(flag>=1){
			//if(word_level_0[word1.easy][0]=='B'&&word_level_0[word1.easy][1]=='A'&&word_level_0[word1.easy][2]=='T'){
			if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='B'){
				if(strcmp(arr,"BAT")==0){
				level0_bat=1;
				//for picture and score and global variable value remains 1
				arr[0]='\0';
				arr[1]='\0';
				arr[2]='\0';
				//the string is made null when a new word is entered
				i=0;
				//word array becomes 0
				level0_bat_score_flag=1;
				//if bat is called then score is added
				level_0_flag_discovered_word_BAT++;
				//how many times bat is called
				if(level_0_flag_discovered_word_BAT>1)CountDiscoveredWord=1;
				//if bat is called more than once flag is on
				scoreadd();
				//score function is called
				}
				else if(strcmp(arr,"TAB")==0){
					level0_tab=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
			
					i=0;
					level0_tab_score_flag=1;
					level_0_flag_discovered_word_TAB++;
					if(level_0_flag_discovered_word_TAB>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
	
				else if(strcmp(arr,"AT")==0){
					level0_at=1;
					arr[0]='\0';
					arr[1]='\0';
					i=0;
					level0_at_score_flag=1;
					level_0_flag_discovered_word_AT++;
					if(level_0_flag_discovered_word_AT>1)CountDiscoveredWord=1;
					scoreadd();
				}
				else{
					int len=strlen(arr);
					for(int j=0;j<len;j++){
						arr[j]='\0';
					}
					i=0;
					if(len>0)FlagNoWord=1;
					flag=0;
			
				}
			}
			if(word_level_0[WordRandom[Index]][0]=='R'&&word_level_0[WordRandom[Index]][1]=='O'&&word_level_0[WordRandom[Index]][2]=='B'){
				if(strcmp(arr,"ROB")==0){
				level0_rob=1;
				//for picture and score and global variable value remains 1
				arr[0]='\0';
				arr[1]='\0';
				arr[2]='\0';
				//the string is made null when a new word is entered
				i=0;
				//word array becomes 0
				level0_rob_score_flag=1;
				//if rob is called then score is added
				level_0_flag_discovered_word_ROB++;
				//how many times rob is called
				if(level_0_flag_discovered_word_ROB>1)CountDiscoveredWord=1;
				//if rob is called more than once flag is on
				scoreadd();
				//score function is called
				}
				else if(strcmp(arr,"BRO")==0){
					level0_bro=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
			
					i=0;
					level0_bro_score_flag=1;
					level_0_flag_discovered_word_BRO++;
					if(level_0_flag_discovered_word_BRO>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
	
				else if(strcmp(arr,"OR")==0){
					level0_or=1;
					arr[0]='\0';
					arr[1]='\0';
					i=0;
					level0_or_score_flag=1;
					level_0_flag_discovered_word_OR++;
					if(level_0_flag_discovered_word_OR>1)CountDiscoveredWord=1;
					scoreadd();
				}
				else{
					int len=strlen(arr);
					for(int j=0;j<len;j++){
						arr[j]='\0';
					}
					i=0;
					if(len>0)FlagNoWord=1;
					flag=0;
			
				}
			}
			if(word_level_0[WordRandom[Index]][0]=='M'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='D'){
				if(strcmp(arr,"DAM")==0){
				level0_dam=1;
				//for picture and score and global variable value remains 1
				arr[0]='\0';
				arr[1]='\0';
				arr[2]='\0';
				//the string is made null when a new word is entered
				i=0;
				//word array becomes 0
				level0_dam_score_flag=1;
				//if dam is called then score is added
				level_0_flag_discovered_word_DAM++;
				//how many times dam is called
				if(level_0_flag_discovered_word_DAM>1)CountDiscoveredWord=1;
				//if dam is called more than once flag is on
				scoreadd();
				//score function is called
				}
				else if(strcmp(arr,"MAD")==0){
					level0_mad=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
			
					i=0;
					level0_mad_score_flag=1;
					level_0_flag_discovered_word_MAD++;
					if(level_0_flag_discovered_word_MAD>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
	
				else if(strcmp(arr,"AM")==0){
					level0_am=1;
					arr[0]='\0';
					arr[1]='\0';
					i=0;
					level0_am_score_flag=1;
					level_0_flag_discovered_word_AM++;
					if(level_0_flag_discovered_word_AM>1)CountDiscoveredWord=1;
					scoreadd();
				}
				else{
					int len=strlen(arr);
					for(int j=0;j<len;j++){
						arr[j]='\0';
					}
					i=0;
					if(len>0)FlagNoWord=1;
					flag=0;
			
				}
			}
			if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='I'&&word_level_0[WordRandom[Index]][2]=='P'){
				if(strcmp(arr,"PIT")==0){
				level0_pit=1;
				//for picture and score and global variable value remains 1
				arr[0]='\0';
				arr[1]='\0';
				arr[2]='\0';
				//the string is made null when a new word is entered
				i=0;
				//word array becomes 0
				level0_pit_score_flag=1;
				//if pit is called then score is added
				level_0_flag_discovered_word_PIT++;
				//how many times pit is called
				if(level_0_flag_discovered_word_PIT>1)CountDiscoveredWord=1;
				//if pit is called more than once flag is on
				scoreadd();
				//score function is called
				}
				else if(strcmp(arr,"TIP")==0){
					level0_tip=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
			
					i=0;
					level0_tip_score_flag=1;
					level_0_flag_discovered_word_TIP++;
					if(level_0_flag_discovered_word_TIP>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
	
				else if(strcmp(arr,"IT")==0){
					level0_it=1;
					arr[0]='\0';
					arr[1]='\0';
					i=0;
					level0_it_score_flag=1;
					level_0_flag_discovered_word_IT++;
					if(level_0_flag_discovered_word_IT>1)CountDiscoveredWord=1;
					scoreadd();
				}
				else{
					int len=strlen(arr);
					for(int j=0;j<len;j++){
						arr[j]='\0';
					}
					i=0;
					if(len>0)FlagNoWord=1;
					flag=0;
			
				}
			}
			if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='P'){
				if(strcmp(arr,"PAT")==0){
				level0_pat=1;
				//for picture and score and global variable value remains 1
				arr[0]='\0';
				arr[1]='\0';
				arr[2]='\0';
				//the string is made null when a new word is entered
				i=0;
				//word array becomes 0
				level0_pat_score_flag=1;
				//if pat is called then score is added
				level_0_flag_discovered_word_PAT++;
				//how many times pat is called
				if(level_0_flag_discovered_word_PAT>1)CountDiscoveredWord=1;
				//if pat is called more than once flag is on
				scoreadd();
				//score function is called
				}
				else if(strcmp(arr,"TAP")==0){
					level0_tap=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
			
					i=0;
					level0_tap_score_flag=1;
					level_0_flag_discovered_word_TAP++;
					if(level_0_flag_discovered_word_TAP>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
	
				else if(strcmp(arr,"APT")==0){
					level0_apt=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					level0_apt_score_flag=1;
					level_0_flag_discovered_word_APT++;
					if(level_0_flag_discovered_word_APT>1)CountDiscoveredWord=1;
					scoreadd();
				}
				else if(strcmp(arr,"AT")==0){
					
					arr[0]='\0';
					arr[1]='\0';
					i=0;
					FlagMatchWordBox=1;
					flag=0;
				}
				else{
					int len=strlen(arr);
					for(int j=0;j<len;j++){
						arr[j]='\0';
					}
					i=0;
					if(len>0)FlagNoWord=1;
					flag=0;
			
				}
			}
		}
	}
	//level 0 ends
	if(level==1){	
		if(flag>=1){
			if(word_level_1[WordRandom[Index]][0]=='W'&&word_level_1[WordRandom[Index]][1]=='O'&&word_level_1[WordRandom[Index]][2]=='R'&&word_level_1[WordRandom[Index]][3]=='D'){
				if(strcmp(arr,"ROW")==0){
				level1_row=1;
				//for picture and score and global variable value remains 1
				//strcpy(arr,"");
				arr[0]='\0';
				arr[1]='\0';
				arr[2]='\0';
				//the string is made null when a new word is entered
				i=0;
				//word array becomes 0
				level1_row_score_flag=1;
				//if row is called then score is added
				level_1_flag_discovered_word_ROW++;
				//how many times row is called
				if(level_1_flag_discovered_word_ROW>1)CountDiscoveredWord=1;
				//if row is called more than once flag is on
				scoreadd();
				//score function is called
				}
				else if(strcmp(arr,"WORD")==0){
					level1_word=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
			
					i=0;
					level1_word_score_flag=1;
					level_1_flag_discovered_word_WORD++;
					if(level_1_flag_discovered_word_WORD>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
	
				else if(strcmp(arr,"OR")==0){
					level1_or=1;
					arr[0]='\0';
					arr[1]='\0';
					i=0;
					level1_or_score_flag=1;
					level_1_flag_discovered_word_OR++;
					if(level_1_flag_discovered_word_OR>1)CountDiscoveredWord=1;
					scoreadd();
				}
				else if(strcmp(arr,"DO")==0){
					level1_do=1;
					arr[0]='\0';
					arr[1]='\0';
					i=0;
					FlagExtraWord=1;
					level1_do_score_flag=1;
					level_1_flag_discovered_word_DO++;
					if(level_1_flag_discovered_word_DO>1)CountDiscoveredBonusWord=1;
					scoreadd();
					flag=0;
				}
				else if(strcmp(arr,"ROD")==0){
					level1_rod=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					FlagExtraWord=1;
					level1_rod_score_flag=1;
					level_1_flag_discovered_word_ROD++;
					if(level_1_flag_discovered_word_ROD>1)CountDiscoveredBonusWord=1;
					scoreadd();
					flag=0;
		
				}
				else{
					int len=strlen(arr);
					for(int j=0;j<len;j++){
						arr[j]='\0';
					}
					i=0;
					if(len>0)FlagNoWord=1;
					flag=0;
				}
			}
			if(word_level_1[WordRandom[Index]][0]=='D'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='N'&&word_level_1[WordRandom[Index]][3]=='Y'){
				if(strcmp(arr,"DYE")==0){
				level1_dye=1;
				//for picture and score and global variable value remains 1
				arr[0]='\0';
				arr[1]='\0';
				arr[2]='\0';
				//the string is made null when a new word is entered
				i=0;
				//word array becomes 0
				level1_dye_score_flag=1;
				//if dye is called then score is added
				level_1_flag_discovered_word_DYE++;
				//how many times dye is called
				if(level_1_flag_discovered_word_DYE>1)CountDiscoveredWord=1;
				//if dye is called more than once flag is on
				scoreadd();
				//score function is called
				}
				else if(strcmp(arr,"DENY")==0){
					level1_deny=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
			
					i=0;
					level1_deny_score_flag=1;
					level_1_flag_discovered_word_DENY++;
					if(level_1_flag_discovered_word_DENY>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
	
				else if(strcmp(arr,"DEN")==0){
					level1_den=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					level1_den_score_flag=1;
					level_1_flag_discovered_word_DEN++;
					if(level_1_flag_discovered_word_DEN>1)CountDiscoveredWord=1;
					scoreadd();
				}
				else if(strcmp(arr,"END")==0){
					level1_end=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					level1_end_score_flag=1;
					level_1_flag_discovered_word_END++;
					if(level_1_flag_discovered_word_END>1)CountDiscoveredBonusWord=1;
					scoreadd();
					flag=0;
				}
				else if(strcmp(arr,"YEN")==0){
					level1_yen=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					FlagExtraWord=1;
					level1_yen_score_flag=1;
					level_1_flag_discovered_word_YEN++;
					if(level_1_flag_discovered_word_YEN>1)CountDiscoveredBonusWord=1;
					scoreadd();
					flag=0;
		
				}
				else{
					int len=strlen(arr);
					for(int j=0;j<len;j++){
						arr[j]='\0';
					}
					i=0;
					if(len>0)FlagNoWord=1;
					flag=0;
				}
			}
			if(word_level_1[WordRandom[Index]][0]=='G'&&word_level_1[WordRandom[Index]][1]=='O'&&word_level_1[WordRandom[Index]][2]=='N'&&word_level_1[WordRandom[Index]][3]=='E'){
				if(strcmp(arr,"EGO")==0){
				level1_ego=1;
				//for picture and score and global variable value remains 1
				arr[0]='\0';
				arr[1]='\0';
				arr[2]='\0';
				//the string is made null when a new word is entered
				i=0;
				//word array becomes 0
				level1_ego_score_flag=1;
				//if ego is called then score is added
				level_1_flag_discovered_word_EGO++;
				//how many times ego is called
				if(level_1_flag_discovered_word_EGO>1)CountDiscoveredWord=1;
				//if ego is called more than once flag is on
				scoreadd();
				//score function is called
				}
				else if(strcmp(arr,"GONE")==0){
					level1_gone=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
			
					i=0;
					level1_gone_score_flag=1;
					level_1_flag_discovered_word_GONE++;
					if(level_1_flag_discovered_word_GONE>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
	
				else if(strcmp(arr,"GEN")==0){
					level1_gen=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					level1_gen_score_flag=1;
					level_1_flag_discovered_word_GEN++;
					if(level_1_flag_discovered_word_GEN>1)CountDiscoveredWord=1;
					scoreadd();
				}
				else if(strcmp(arr,"ONE")==0){
					level1_one=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					level1_one_score_flag=1;
					level_1_flag_discovered_word_ONE++;
					if(level_1_flag_discovered_word_ONE>1)CountDiscoveredBonusWord=1;
					scoreadd();
					flag=0;
				}
				else if(strcmp(arr,"NEO")==0){
					level1_neo=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					FlagExtraWord=1;
					level1_neo_score_flag=1;
					level_1_flag_discovered_word_NEO++;
					if(level_1_flag_discovered_word_NEO>1)CountDiscoveredBonusWord=1;
					scoreadd();
					flag=0;
		
				}
				else{
					int len=strlen(arr);
					for(int j=0;j<len;j++){
						arr[j]='\0';
					}
					i=0;
					if(len>2)FlagNoWord=1;
					else if(len<=2&&len>0)FlagMatchWordBox=1;
					flag=0;
				}
			}
			if(word_level_1[WordRandom[Index]][0]=='N'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='A'&&word_level_1[WordRandom[Index]][3]=='R'){
				if(strcmp(arr,"NEAR")==0){
				level1_near=1;
				//for picture and score and global variable value remains 1
				arr[0]='\0';
				arr[1]='\0';
				arr[2]='\0';
				arr[3]='\0';
				//the string is made null when a new word is entered
				i=0;
				//word array becomes 0
				level1_near_score_flag=1;
				//if near is called then score is added
				level_1_flag_discovered_word_NEAR++;
				//how many times near is called
				if(level_1_flag_discovered_word_NEAR>1)CountDiscoveredWord=1;
				//if near is called more than once flag is on
				scoreadd();
				//score function is called
				}
				else if(strcmp(arr,"EARN")==0){
					level1_earn=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
			
					i=0;
					level1_earn_score_flag=1;
					level_1_flag_discovered_word_EARN++;
					if(level_1_flag_discovered_word_EARN>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
	
				else if(strcmp(arr,"EAR")==0){
					level1_ear=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					level1_ear_score_flag=1;
					level_1_flag_discovered_word_EAR++;
					if(level_1_flag_discovered_word_EAR>1)CountDiscoveredWord=1;
					scoreadd();
				}
				else if(strcmp(arr,"ERA")==0){
					level1_era=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					level1_era_score_flag=1;
					level_1_flag_discovered_word_ERA++;
					if(level_1_flag_discovered_word_ERA>1)CountDiscoveredBonusWord=1;
					scoreadd();
					flag=0;
				}
				else if(strcmp(arr,"ARE")==0){
					level1_are=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					FlagExtraWord=1;
					level1_are_score_flag=1;
					level_1_flag_discovered_word_ARE++;
					if(level_1_flag_discovered_word_ARE>1)CountDiscoveredBonusWord=1;
					scoreadd();
					flag=0;
		
				}
				else if(strcmp(arr,"RAN")==0){
					level1_ran=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					FlagExtraWord=1;
					level1_ran_score_flag=1;
					level_1_flag_discovered_word_RAN++;
					if(level_1_flag_discovered_word_RAN>1)CountDiscoveredBonusWord=1;
					scoreadd();
					flag=0;
		
				}
				else{
					int len=strlen(arr);
					for(int j=0;j<len;j++){
						arr[j]='\0';
					}
					i=0;
					if(len>2)FlagNoWord=1;
					else if(len<=2&&len>0)FlagMatchWordBox=1;
					flag=0;
				}
			}
			if(word_level_1[WordRandom[Index]][0]=='H'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='A'&&word_level_1[WordRandom[Index]][3]=='T'){
				if(strcmp(arr,"HEAT")==0){
				level1_heat=1;
				//for picture and score and global variable value remains 1
				arr[0]='\0';
				arr[1]='\0';
				arr[2]='\0';
				arr[3]='\0';
				//the string is made null when a new word is entered
				i=0;
				//word array becomes 0
				level1_heat_score_flag=1;
				//if heat is called then score is added
				level_1_flag_discovered_word_HEAT++;
				//how many times heat is called
				if(level_1_flag_discovered_word_HEAT>1)CountDiscoveredWord=1;
				//if heat is called more than once flag is on
				scoreadd();
				//score function is called
				}
				else if(strcmp(arr,"EAT")==0){
					level1_eat=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
			
					i=0;
					level1_eat_score_flag=1;
					level_1_flag_discovered_word_EAT++;
					if(level_1_flag_discovered_word_EAT>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
	
				else if(strcmp(arr,"THE")==0){
					level1_the=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					level1_the_score_flag=1;
					level_1_flag_discovered_word_THE++;
					if(level_1_flag_discovered_word_THE>1)CountDiscoveredWord=1;
					scoreadd();
				}
				else if(strcmp(arr,"TEA")==0){
					level1_tea=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					level1_tea_score_flag=1;
					level_1_flag_discovered_word_TEA++;
					if(level_1_flag_discovered_word_TEA>1)CountDiscoveredBonusWord=1;
					scoreadd();
					flag=0;
				}
				else if(strcmp(arr,"HAT")==0){
					level1_hat=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					FlagExtraWord=1;
					level1_hat_score_flag=1;
					level_1_flag_discovered_word_HAT++;
					if(level_1_flag_discovered_word_HAT>1)CountDiscoveredBonusWord=1;
					scoreadd();
					flag=0;
		
				}
				else if(strcmp(arr,"HATE")==0){
					level1_hate=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
					i=0;
					FlagExtraWord=1;
					level1_hate_score_flag=1;
					level_1_flag_discovered_word_HATE++;
					if(level_1_flag_discovered_word_HATE>1)CountDiscoveredBonusWord=1;
					scoreadd();
					flag=0;
		
				}
				else if(strcmp(arr,"ATE")==0){
					level1_ate=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					i=0;
					FlagExtraWord=1;
					level1_ate_score_flag=1;
					level_1_flag_discovered_word_ATE++;
					if(level_1_flag_discovered_word_ATE>1)CountDiscoveredBonusWord=1;
					scoreadd();
					flag=0;
		
				}
				else{
					int len=strlen(arr);
					for(int j=0;j<len;j++){
						arr[j]='\0';
					}
					i=0;
					if(len>2)FlagNoWord=1;
					else if(len<=2&&len>0)FlagMatchWordBox=1;
					flag=0;
				}
			}
		}
		}
		if(level==2){
			if(flag>=1){
			if(word_level_2[WordRandom[Index]][0]=='D'&&word_level_2[WordRandom[Index]][1]=='R'&&word_level_2[WordRandom[Index]][2]=='E'&&word_level_2[WordRandom[Index]][3]=='A'&&word_level_2[WordRandom[Index]][4]=='M'){
						
				if(strcmp(arr,"DREAM")==0){
				level2_dream=1;
				//for picture and score and global variable value remains 1
				arr[0]='\0';
				arr[1]='\0';
				arr[2]='\0';
				arr[3]='\0';
				arr[4]='\0';
				//the string is made null when a new word is entered
				i=0;
				//word array becomes 0
				level2_dream_score_flag=1;
				//if dream is called then score is added
				level_2_flag_discovered_word_DREAM++;
				//how many times dream is called
				if(level_2_flag_discovered_word_DREAM>1)CountDiscoveredWord=1;
				//if dream is called more than once flag is on
				scoreadd();
				//score function is called
				}
				else if(strcmp(arr,"DEAM")==0){
					level2_deam=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
			
					i=0;
					level2_deam_score_flag=1;
					level_2_flag_discovered_word_DEAM++;
					if(level_2_flag_discovered_word_DEAM>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
			else if(strcmp(arr,"DARE")==0){
					level2_dare=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
			
					i=0;
					level2_dare_score_flag=1;
					level_2_flag_discovered_word_DARE++;
					if(level_2_flag_discovered_word_DARE>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
				else if(strcmp(arr,"DAME")==0){
					level2_dame=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
			
					i=0;
					level2_dame_score_flag=1;
					level_2_flag_discovered_word_DAME++;
					if(level_2_flag_discovered_word_DAME>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
			else if(strcmp(arr,"MADE")==0){
					level2_made=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
			
					i=0;
					level2_made_score_flag=1;
					level_2_flag_discovered_word_MADE++;
					if(level_2_flag_discovered_word_MADE>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
			else if(strcmp(arr,"READ")==0){
					level2_read=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
			
					i=0;
					level2_read_score_flag=1;
					level_2_flag_discovered_word_READ++;
					if(level_2_flag_discovered_word_READ>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
			else if(strcmp(arr,"MARE")==0){
					level2_mare=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
					FlagExtraWord=1;
					i=0;
					level2_mare_score_flag=1;
					level_2_flag_discovered_word_MARE++;
					if(level_2_flag_discovered_word_MARE>1)CountDiscoveredBonusWord=1;
					scoreadd();
		
				}
		else if(strcmp(arr,"DEAR")==0){
					level2_dear=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
					FlagExtraWord=1;
					i=0;
					level2_dear_score_flag=1;
					level_2_flag_discovered_word_DEAR++;
					if(level_2_flag_discovered_word_DEAR>1)CountDiscoveredBonusWord=1;
					scoreadd();
		
				}
		else if(strcmp(arr,"DREAM")==0){
					level2_dream=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
					arr[4]='\0';
					FlagExtraWord=1;
					i=0;
					level2_dream_score_flag=1;
					level_2_flag_discovered_word_DREAM++;
					if(level_2_flag_discovered_word_DREAM>1)CountDiscoveredBonusWord=1;
					scoreadd();
		
				}
				else{
					int len=strlen(arr);
					for(int j=0;j<len;j++){
						arr[j]='\0';
					}
					i=0;
					if(len>3)FlagNoWord=1;
					else if(len<=3&&len>0)FlagMatchWordBox=1;
					flag=0;
				}
			
			}
			if(word_level_2[WordRandom[Index]][0]=='S'&&word_level_2[WordRandom[Index]][1]=='W'&&word_level_2[WordRandom[Index]][2]=='I'&&word_level_2[WordRandom[Index]][3]=='N'&&word_level_2[WordRandom[Index]][4]=='G'){
						
				if(strcmp(arr,"SWING")==0){
				level2_swing=1;
				//for picture and score and global variable value remains 1
				arr[0]='\0';
				arr[1]='\0';
				arr[2]='\0';
				arr[3]='\0';
				arr[4]='\0';
				//the string is made null when a new word is entered
				i=0;
				//word array becomes 0
				level2_swing_score_flag=1;
				//if swing is called then score is added
				level_2_flag_discovered_word_SWING++;
				//how many times swing is called
				if(level_2_flag_discovered_word_SWING>1)CountDiscoveredWord=1;
				//if swing is called more than once flag is on
				scoreadd();
				//score function is called
				}
				else if(strcmp(arr,"SING")==0){
					level2_sing=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
			
					i=0;
					level2_sing_score_flag=1;
					level_2_flag_discovered_word_SING++;
					if(level_2_flag_discovered_word_SING>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
			else if(strcmp(arr,"WING")==0){
					level2_wing=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
			
					i=0;
					level2_wing_score_flag=1;
					level_2_flag_discovered_word_WING++;
					if(level_2_flag_discovered_word_WING>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
				else if(strcmp(arr,"SIGN")==0){
					level2_sign=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
			
					i=0;
					level2_sign_score_flag=1;
					level_2_flag_discovered_word_SIGN++;
					if(level_2_flag_discovered_word_SIGN>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
			else if(strcmp(arr,"SWIG")==0){
					level2_swig=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
					FlagExtraWord=1;
					i=0;
					level2_swig_score_flag=1;
					level_2_flag_discovered_word_SWIG++;
					if(level_2_flag_discovered_word_SWIG>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
		else if(strcmp(arr,"WINGS")==0){
					level2_wings=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
					arr[4]='\0';
					FlagExtraWord=1;
					i=0;
					level2_wings_score_flag=1;
					level_2_flag_discovered_word_WINGS++;
					if(level_2_flag_discovered_word_WINGS>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
		

				else{
					int len=strlen(arr);
					for(int j=0;j<len;j++){
						arr[j]='\0';
					}
					i=0;
					if(len>3)FlagNoWord=1;
					else if(len<=3&&len>0)FlagMatchWordBox=1;
					flag=0;
				}
			
			}
			if(word_level_2[WordRandom[Index]][0]=='W'&&word_level_2[WordRandom[Index]][1]=='R'&&word_level_2[WordRandom[Index]][2]=='O'&&word_level_2[WordRandom[Index]][3]=='N'&&word_level_2[WordRandom[Index]][4]=='G'){
						
				if(strcmp(arr,"WRONG")==0){
				level2_wrong=1;
				//for picture and score and global variable value remains 1
				arr[0]='\0';
				arr[1]='\0';
				arr[2]='\0';
				arr[3]='\0';
				arr[4]='\0';
				//the string is made null when a new word is entered
				i=0;
				//word array becomes 0
				level2_wrong_score_flag=1;
				//if wrong is called then score is added
				level_2_flag_discovered_word_WRONG++;
				//how many times wrong is called
				if(level_2_flag_discovered_word_WRONG>1)CountDiscoveredWord=1;
				//if wrong is called more than once flag is on
				scoreadd();
				//score function is called
				}
				else if(strcmp(arr,"GOWN")==0){
					level2_gown=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
			
					i=0;
					level2_gown_score_flag=1;
					level_2_flag_discovered_word_GOWN++;
					if(level_2_flag_discovered_word_GOWN>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
			else if(strcmp(arr,"WORN")==0){
					level2_worn=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
			
					i=0;
					level2_worn_score_flag=1;
					level_2_flag_discovered_word_WORN++;
					if(level_2_flag_discovered_word_WORN>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
				else if(strcmp(arr,"GROW")==0){
					level2_grow=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
			
					i=0;
					level2_grow_score_flag=1;
					level_2_flag_discovered_word_GROW++;
					if(level_2_flag_discovered_word_GROW>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
			else if(strcmp(arr,"NOW")==0){
					level2_now=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
			
					i=0;
					level2_now_score_flag=1;
					level_2_flag_discovered_word_NOW++;
					if(level_2_flag_discovered_word_NOW>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
			else if(strcmp(arr,"WON")==0){
					level2_won=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
			
					i=0;
					level2_won_score_flag=1;
					level_2_flag_discovered_word_WON++;
					if(level_2_flag_discovered_word_WON>1)CountDiscoveredWord=1;
					scoreadd();
		
				}
			else if(strcmp(arr,"GROWN")==0){
					level2_grown=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					arr[3]='\0';
					arr[4]='\0';
					FlagExtraWord=1;
					i=0;
					level2_grown_score_flag=1;
					level_2_flag_discovered_word_GROWN++;
					if(level_2_flag_discovered_word_GROWN>1)CountDiscoveredBonusWord=1;
					scoreadd();
		
				}
			else if(strcmp(arr,"OWN")==0){
					level2_own=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					FlagExtraWord=1;
					i=0;
					level2_own_score_flag=1;
					level_2_flag_discovered_word_OWN++;
					if(level_2_flag_discovered_word_OWN>1)CountDiscoveredBonusWord=1;
					scoreadd();
		
				}
			else if(strcmp(arr,"ROW")==0){
					level2_row=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					FlagExtraWord=1;
					i=0;
					level2_row_score_flag=1;
					level_2_flag_discovered_word_ROW++;
					if(level_2_flag_discovered_word_ROW>1)CountDiscoveredBonusWord=1;
					scoreadd();
		
				}
			else if(strcmp(arr,"NOR")==0){
					level2_nor=1;
					arr[0]='\0';
					arr[1]='\0';
					arr[2]='\0';
					FlagExtraWord=1;
					i=0;
					level2_nor_score_flag=1;
					level_2_flag_discovered_word_NOR++;
					if(level_2_flag_discovered_word_NOR>1)CountDiscoveredBonusWord=1;
					scoreadd();
		
				}
				else{
					int len=strlen(arr);
					for(int j=0;j<len;j++){
						arr[j]='\0';
					}
					i=0;
					if(len>2)FlagNoWord=1;
					else if(len<=2&&len>0)FlagMatchWordBox=1;
					flag=0;
				}
			
			}
			}
		
		}
	}
