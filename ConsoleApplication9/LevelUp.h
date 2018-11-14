void levelup(){
	if(level==0){
		//if(word_level_0[word1.easy][0]=='B'&&word_level_0[word1.easy][1]=='A'&&word_level_0[word1.easy][2]=='T'){
		if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='B'){
			if(level_0_flag_discovered_word_TAB>=1&&level_0_flag_discovered_word_BAT>=1&&level_0_flag_discovered_word_AT>=1){
				first.index_image=100;second.index_image=100;third.index_image=100;
				level_0++;
				Index++;
			}
		}
		if(word_level_0[WordRandom[Index]][0]=='R'&&word_level_0[WordRandom[Index]][1]=='O'&&word_level_0[WordRandom[Index]][2]=='B'){
			if(level_0_flag_discovered_word_BRO>=1&&level_0_flag_discovered_word_ROB>=1&&level_0_flag_discovered_word_OR>=1){
				first.index_image=100;second.index_image=100;third.index_image=100;
				level_0++;
				Index++;
			}
		}
		if(word_level_0[WordRandom[Index]][0]=='M'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='D'){
			if(level_0_flag_discovered_word_MAD>=1&&level_0_flag_discovered_word_DAM>=1&&level_0_flag_discovered_word_AM>=1){
				first.index_image=100;second.index_image=100;third.index_image=100;
				level_0++;
				Index++;
			}
		}
		if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='I'&&word_level_0[WordRandom[Index]][2]=='P'){
			if(level_0_flag_discovered_word_TIP>=1&&level_0_flag_discovered_word_PIT>=1&&level_0_flag_discovered_word_IT>=1){
				first.index_image=100;second.index_image=100;third.index_image=100;
				level_0++;
				Index++;
			}
		}
		if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='P'){
			if(level_0_flag_discovered_word_TAP>=1&&level_0_flag_discovered_word_PAT>=1&&level_0_flag_discovered_word_APT>=1){
				first.index_image=100;second.index_image=100;third.index_image=100;
				level_0++;
				Index++;
			}
		}
		if(level_0==5){
		//	level=1;
			Index=0;
			flag_easy_level=1;
		//	time_min=5;
		//	time_sec=60;
		}
	}
	if(level==1){
		if(word_level_1[WordRandom[Index]][0]=='W'&&word_level_1[WordRandom[Index]][1]=='O'&&word_level_1[WordRandom[Index]][2]=='R'&&word_level_1[WordRandom[Index]][3]=='D'){
			if(level_1_flag_discovered_word_ROW>=1&&level_1_flag_discovered_word_WORD>=1&&level_1_flag_discovered_word_OR>=1){
				first.index_image=100;second.index_image=100;third.index_image=100;fourth.index_image=100;
				level_1++;
				Index++;
			}
		}
		if(word_level_1[WordRandom[Index]][0]=='D'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='N'&&word_level_1[WordRandom[Index]][3]=='Y'){
			if(level_1_flag_discovered_word_DENY>=1&&level_1_flag_discovered_word_DYE>=1&&level_1_flag_discovered_word_END>=1&&level_1_flag_discovered_word_DEN>=1){
				first.index_image=100;second.index_image=100;third.index_image=100;fourth.index_image=100;
				level_1++;
				Index++;
		}
	}
		if(word_level_1[WordRandom[Index]][0]=='G'&&word_level_1[WordRandom[Index]][1]=='O'&&word_level_1[WordRandom[Index]][2]=='N'&&word_level_1[WordRandom[Index]][3]=='E'){
			if(level_1_flag_discovered_word_GONE>=1&&level_1_flag_discovered_word_EGO>=1&&level_1_flag_discovered_word_ONE>=1&&level_1_flag_discovered_word_GEN>=1){
				first.index_image=100;second.index_image=100;third.index_image=100;fourth.index_image=100;
				level_1++;
				Index++;
		}
	}
		if(word_level_1[WordRandom[Index]][0]=='N'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='A'&&word_level_1[WordRandom[Index]][3]=='R'){
			if(level_1_flag_discovered_word_NEAR>=1&&level_1_flag_discovered_word_EARN>=1&&level_1_flag_discovered_word_ERA>=1&&level_1_flag_discovered_word_EAR>=1){
				first.index_image=100;second.index_image=100;third.index_image=100;fourth.index_image=100;
				level_1++;
				Index++;
		}
	}
		if(word_level_1[WordRandom[Index]][0]=='H'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='A'&&word_level_1[WordRandom[Index]][3]=='T'){
			
				if(level_1_flag_discovered_word_HEAT>=1&&level_1_flag_discovered_word_EAT>=1&&level_1_flag_discovered_word_TEA>=1&&level_1_flag_discovered_word_THE>=1){
				first.index_image=100;second.index_image=100;third.index_image=100;fourth.index_image=100;
				level_1++;
				Index++;
				}
		
	}
		if(level_1==5){
		//	level=2;
			Index=0;
			flag_medium_level=1;
		//	time_min=5;
		//	time_sec=60;
		}
	}
	if(level==2){
		if(word_level_2[WordRandom[Index]][0]=='D'&&word_level_2[WordRandom[Index]][1]=='R'&&word_level_2[WordRandom[Index]][2]=='E'&&word_level_2[WordRandom[Index]][3]=='A'&&word_level_2[WordRandom[Index]][4]=='M'){
			if(level_2_flag_discovered_word_DREAM>=1&&level_2_flag_discovered_word_DEAM>=1&&level_2_flag_discovered_word_DARE>=1&&level_2_flag_discovered_word_DAME>=1&&level_2_flag_discovered_word_READ>=1&&level_2_flag_discovered_word_MADE>=1){
				first.index_image=100;second.index_image=100;third.index_image=100;fourth.index_image=100;fifth.index_image=100;
				level_2++;
				
				Index++;
			}
		}
	if(word_level_2[WordRandom[Index]][0]=='S'&&word_level_2[WordRandom[Index]][1]=='W'&&word_level_2[WordRandom[Index]][2]=='I'&&word_level_2[WordRandom[Index]][3]=='N'&&word_level_2[WordRandom[Index]][4]=='G'){
			if(level_2_flag_discovered_word_SWING>=1&&level_2_flag_discovered_word_SING>=1&&level_2_flag_discovered_word_WING>=1&&level_2_flag_discovered_word_SIGN>=1){
				level_2++;
				first.index_image=100;second.index_image=100;third.index_image=100;fourth.index_image=100;fifth.index_image=100;
				Index++;
			}
		}
	if(word_level_2[WordRandom[Index]][0]=='W'&&word_level_2[WordRandom[Index]][1]=='R'&&word_level_2[WordRandom[Index]][2]=='O'&&word_level_2[WordRandom[Index]][3]=='N'&&word_level_2[WordRandom[Index]][4]=='G'){
			if(level_2_flag_discovered_word_WRONG>=1&&level_2_flag_discovered_word_WORN>=1&&level_2_flag_discovered_word_GROW>=1&&level_2_flag_discovered_word_GOWN>=1&&level_2_flag_discovered_word_WON>=1&&level_2_flag_discovered_word_NOW>=1){
				level_2++;
				first.index_image=100;second.index_image=100;third.index_image=100;fourth.index_image=100;fifth.index_image=100;
				Index++;
			}
		}
	}
	if(level_2==3){
		//	level=2;
			Index=0;
			flag_hard_level=1;
		//	time_min=5;
		//	time_sec=60;
		}
}
