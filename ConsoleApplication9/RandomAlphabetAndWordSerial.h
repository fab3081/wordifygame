void word_random_series(){
	if(level==0){
		while(word1.easy==word2.easy||word2.easy==word3.easy||word1.easy==word3.easy||word4.easy==word1.easy||word4.easy==word2.easy||word4.easy==word3.easy||word5.easy==word4.easy||word5.easy==word3.easy||word5.easy==word2.easy||word5.easy==word1.easy){
			word1.easy=rand()%5;
			word2.easy=rand()%5;
			word3.easy=rand()%5;
			word4.easy=rand()%5;
			word5.easy=rand()%5;
		}
		WordRandom[0]=word1.easy;WordRandom[1]=word2.easy;WordRandom[2]=word3.easy;WordRandom[3]=word4.easy;WordRandom[4]=word5.easy;
	}
	if(level==1){
		while(word1.medium==word2.medium||word2.medium==word3.medium||word1.medium==word3.medium||word4.medium==word1.medium||word4.medium==word2.medium||word4.medium==word3.medium||word5.medium==word4.medium||word5.medium==word3.medium||word5.medium==word2.medium||word5.medium==word1.medium){
			word1.medium=rand()%5;
			word2.medium=rand()%5;
			word3.medium=rand()%5;
			word4.medium=rand()%5;
			word5.medium=rand()%5;
		}
		WordRandom[0]=word1.medium;WordRandom[1]=word2.medium;WordRandom[2]=word3.medium;WordRandom[3]=word4.medium;WordRandom[4]=word5.medium;
	}
	if(level==2){
		while(word1.hard==word2.hard||word2.hard==word3.hard||word1.hard==word3.hard){
			word1.hard=rand()%3;
			word2.hard=rand()%3;
			word3.hard=rand()%3;
			
		}
		WordRandom[0]=word1.hard;WordRandom[1]=word2.hard;WordRandom[2]=word3.hard;
	}
}
void word_image_random(){
	if(level==0){
		if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='B'){
		while(first.index_image==second.index_image||second.index_image==third.index_image||third.index_image==first.index_image){
			first.index_image=rand()%3;
			second.index_image=rand()%3;
			third.index_image=rand()%3;
			//here the position of images is assigned randomly
		}
		index_tab[0]=first.index_image;index_tab[1]=second.index_image;index_tab[2]=third.index_image;
		//in index_tab[0] indicates the position of image 't',in index_tab[1] indicates the position of image 'a',in index_tab[2] indicates the position of image 'b'
		if(index_tab[0]==0){
			position_x.tab.t=200;
			position_y.tab.t=150;
				if(index_tab[1]==1){
					position_x.tab.a=300;
					position_y.tab.a=300;
					position_x.tab.b=400;
					position_y.tab.b=150;
				}
				else if(index_tab[1]==2){
					position_x.tab.a=400;
					position_y.tab.a=150;
					position_x.tab.b=300;
					position_y.tab.b=300;
				}
		}
		else if(index_tab[0]==1){
			position_x.tab.t=300;
			position_y.tab.t=300;
				if(index_tab[1]==0){
					position_x.tab.a=200;
					position_y.tab.a=150;
					position_x.tab.b=400;
					position_y.tab.b=150;
				}
				else if(index_tab[1]==2){
					position_x.tab.a=400;
					position_y.tab.a=150;
					position_x.tab.b=200;
					position_y.tab.b=150;
				}
		}
		else if(index_tab[0]==2){
			position_x.tab.t=400;
			position_y.tab.t=150;
				if(index_tab[1]==0){
					position_x.tab.a=200;
					position_y.tab.a=150;
					position_x.tab.b=300;
					position_y.tab.b=300;
				}
				else if(index_tab[1]==1){
					position_x.tab.a=300;
					position_y.tab.a=300;
					position_x.tab.b=200;
					position_y.tab.b=150;
				}
			}
		}
	//level 0 in level 0/easy ends
	if(word_level_0[WordRandom[Index]][0]=='R'&&word_level_0[WordRandom[Index]][1]=='O'&&word_level_0[WordRandom[Index]][2]=='B'){
		while(first.index_image==second.index_image||second.index_image==third.index_image||third.index_image==first.index_image){
			first.index_image=rand()%3;
			second.index_image=rand()%3;
			third.index_image=rand()%3;
			//here the position of images is assigned randomly
		}
		index_rob[0]=first.index_image;index_rob[1]=second.index_image;index_rob[2]=third.index_image;
		//in index_rob[0] indicates the position of image 'r',in index_rob[2] indicates the position of image 'o',in index_rob[2] indicates the position of image 'b'
		if(index_rob[0]==0){
			position_x.rob.r=200;
			position_y.rob.r=150;
				if(index_rob[1]==1){
					position_x.rob.o=300;
					position_y.rob.o=300;
					position_x.rob.b=400;
					position_y.rob.b=150;
				}
				else if(index_rob[1]==2){
					position_x.rob.o=400;
					position_y.rob.o=150;
					position_x.rob.b=300;
					position_y.rob.b=300;
				}
		}
		else if(index_rob[0]==1){
			position_x.rob.r=300;
			position_y.rob.r=300;
				if(index_rob[1]==0){
					position_x.rob.o=200;
					position_y.rob.o=150;
					position_x.rob.b=400;
					position_y.rob.b=150;
				}
				else if(index_rob[1]==2){
					position_x.rob.o=400;
					position_y.rob.o=150;
					position_x.rob.b=200;
					position_y.rob.b=150;
				}
		}
		else if(index_rob[0]==2){
			position_x.rob.r=400;
			position_y.rob.r=150;
				if(index_rob[1]==0){
					position_x.rob.o=200;
					position_y.rob.o=150;
					position_x.rob.b=300;
					position_y.rob.b=300;
				}
				else if(index_rob[1]==1){
					position_x.rob.o=300;
					position_y.rob.o=300;
					position_x.rob.b=200;
					position_y.rob.b=150;
				}
			}
		}
	if(word_level_0[WordRandom[Index]][0]=='M'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='D'){
		while(first.index_image==second.index_image||second.index_image==third.index_image||third.index_image==first.index_image){
			first.index_image=rand()%3;
			second.index_image=rand()%3;
			third.index_image=rand()%3;
			//here the position of images is assigned randomly
		}
		index_mad[0]=first.index_image;index_mad[1]=second.index_image;index_mad[2]=third.index_image;
		//in index_mad[0] indicates the position of image 'm',in index_mad[1] indicates the position of image 'a',in index_mad[2] indicates the position of image 'd'
		if(index_mad[0]==0){
			position_x.mad.m=200;
			position_y.mad.m=150;
				if(index_mad[1]==1){
					position_x.mad.a=300;
					position_y.mad.a=300;
					position_x.mad.d=400;
					position_y.mad.d=150;
				}
				else if(index_mad[1]==2){
					position_x.mad.a=400;
					position_y.mad.a=150;
					position_x.mad.d=300;
					position_y.mad.d=300;
				}
		}
		else if(index_mad[0]==1){
			position_x.mad.m=300;
			position_y.mad.m=300;
				if(index_mad[1]==0){
					position_x.mad.a=200;
					position_y.mad.a=150;
					position_x.mad.d=400;
					position_y.mad.d=150;
				}
				else if(index_mad[1]==2){
					position_x.mad.a=400;
					position_y.mad.a=150;
					position_x.mad.d=200;
					position_y.mad.d=150;
				}
		}
		else if(index_mad[0]==2){
			position_x.mad.m=400;
			position_y.mad.m=150;
				if(index_mad[1]==0){
					position_x.mad.a=200;
					position_y.mad.a=150;
					position_x.mad.d=300;
					position_y.mad.d=300;
				}
				else if(index_mad[1]==1){
					position_x.mad.a=300;
					position_y.mad.a=300;
					position_x.mad.d=200;
					position_y.mad.d=150;
				}
			}
		}
	if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='I'&&word_level_0[WordRandom[Index]][2]=='P'){
		while(first.index_image==second.index_image||second.index_image==third.index_image||third.index_image==first.index_image){
			first.index_image=rand()%3;
			second.index_image=rand()%3;
			third.index_image=rand()%3;
			//here the position of images is assigned randomly
		}
		index_tip[0]=first.index_image;index_tip[1]=second.index_image;index_tip[2]=third.index_image;
		//in index_tip[0] indicates the position of image 't',in index_tip[1] indicates the position of image 'i',in index_tip[2] indicates the position of image 'p'
		if(index_tip[0]==0){
			position_x.tip.t=200;
			position_y.tip.t=150;
				if(index_tip[1]==1){
					position_x.tip.i=300;
					position_y.tip.i=300;
					position_x.tip.p=400;
					position_y.tip.p=150;
				}
				else if(index_tip[1]==2){
					position_x.tip.i=400;
					position_y.tip.i=150;
					position_x.tip.p=300;
					position_y.tip.p=300;
				}
		}
		else if(index_tip[0]==1){
			position_x.tip.t=300;
			position_y.tip.t=300;
				if(index_tip[1]==0){
					position_x.tip.i=200;
					position_y.tip.i=150;
					position_x.tip.p=400;
					position_y.tip.p=150;
				}
				else if(index_tip[1]==2){
					position_x.tip.i=400;
					position_y.tip.i=150;
					position_x.tip.p=200;
					position_y.tip.p=150;
				}
		}
		else if(index_tip[0]==2){
			position_x.tip.t=400;
			position_y.tip.t=150;
				if(index_tip[1]==0){
					position_x.tip.i=200;
					position_y.tip.i=150;
					position_x.tip.p=300;
					position_y.tip.p=300;
				}
				else if(index_tip[1]==1){
					position_x.tip.i=300;
					position_y.tip.i=300;
					position_x.tip.p=200;
					position_y.tip.p=150;
				}
			}
		}
	if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='P'){
		while(first.index_image==second.index_image||second.index_image==third.index_image||third.index_image==first.index_image){
			first.index_image=rand()%3;
			second.index_image=rand()%3;
			third.index_image=rand()%3;
			//here the position of images is assigned randomly
		}
		index_tap[0]=first.index_image;index_tap[1]=second.index_image;index_tap[2]=third.index_image;
		//in index_tap[0] indicates the position of image 't',in index_tap[1] indicates the position of image 'a',in index_tap[2] indicates the position of image 'p'
		if(index_tap[0]==0){
			position_x.tap.t=200;
			position_y.tap.t=150;
				if(index_tap[1]==1){
					position_x.tap.a=300;
					position_y.tap.a=300;
					position_x.tap.p=400;
					position_y.tap.p=150;
				}
				else if(index_tap[1]==2){
					position_x.tap.a=400;
					position_y.tap.a=150;
					position_x.tap.p=300;
					position_y.tap.p=300;
				}
		}
		else if(index_tap[0]==1){
			position_x.tap.t=300;
			position_y.tap.t=300;
				if(index_tap[1]==0){
					position_x.tap.a=200;
					position_y.tap.a=150;
					position_x.tap.p=400;
					position_y.tap.p=150;
				}
				else if(index_tap[1]==2){
					position_x.tap.a=400;
					position_y.tap.a=150;
					position_x.tap.p=200;
					position_y.tap.p=150;
				}
		}
		else if(index_tap[0]==2){
			position_x.tap.t=400;
			position_y.tap.t=150;
				if(index_tap[1]==0){
					position_x.tap.a=200;
					position_y.tap.a=150;
					position_x.tap.p=300;
					position_y.tap.p=300;
				}
				else if(index_tap[1]==1){
					position_x.tap.a=300;
					position_y.tap.a=300;
					position_x.tap.p=200;
					position_y.tap.p=150;
				}
			}
		}
	}
	
	if(level==1){
		
		if(word_level_1[WordRandom[Index]][0]=='W'&&word_level_1[WordRandom[Index]][1]=='O'&&word_level_1[WordRandom[Index]][2]=='R'&&word_level_1[WordRandom[Index]][3]=='D'){
			while(first.index_image==second.index_image||second.index_image==third.index_image||third.index_image==first.index_image||fourth.index_image==first.index_image||fourth.index_image==second.index_image||fourth.index_image==third.index_image){
				first.index_image=rand()%4;
				second.index_image=rand()%4;
				third.index_image=rand()%4;
				fourth.index_image=rand()%4;
				//here the position of images is assigned randomly
			}
			index_word[0]=first.index_image;index_word[1]=second.index_image;index_word[2]=third.index_image;index_word[3]=fourth.index_image;
			//in index_word[0] indicates the position of image 'w',in index_word[1] indicates the position of image 'o',in index_word[3] indicates the position of image 'r',in index_word[3] indicates the position of image 'd'
			if(index_word[0]==0){//w
				position_x.word.w=200;
				position_y.word.w=200;
					if(index_word[1]==1){//o
						position_x.word.o=300;
						position_y.word.o=300;
						if(index_word[2]==2){//r
							position_x.word.r=400;
							position_y.word.r=200;
							position_x.word.d=300;
							position_y.word.d=100;

						}
						else if(index_word[2]==3){
							position_x.word.r=300;
							position_y.word.r=100;
							position_x.word.d=400;
							position_y.word.d=200;
						}
					}
					if(index_word[1]==2){//o
						position_x.word.o=400;
						position_y.word.o=200;
						if(index_word[2]==1){//r
							position_x.word.r=300;
							position_y.word.r=300;
							position_x.word.d=300;
							position_y.word.d=100;

						}
						else if(index_word[2]==3){
							position_x.word.r=300;
							position_y.word.r=100;
							position_x.word.d=300;
							position_y.word.d=300;
						}
					}
					if(index_word[1]==3){//o
						position_x.word.o=300;
						position_y.word.o=100;
						if(index_word[2]==1){//r
							position_x.word.r=300;
							position_y.word.r=300;
							position_x.word.d=400;
							position_y.word.d=200;

						}
						else if(index_word[2]==2){
							position_x.word.r=400;
							position_y.word.r=200;
							position_x.word.d=300;
							position_y.word.d=300;
						}
					}

			}
			else if(index_word[0]==1){//w
				position_x.word.w=300;
				position_y.word.w=300;
					if(index_word[1]==0){//o
						position_x.word.o=200;
						position_y.word.o=200;
						if(index_word[2]==2){//r
							position_x.word.r=400;
							position_y.word.r=200;
							position_x.word.d=300;
							position_y.word.d=100;

						}
						else if(index_word[2]==3){
							position_x.word.r=300;
							position_y.word.r=100;
							position_x.word.d=400;
							position_y.word.d=200;
						}
					}
					if(index_word[1]==2){//o
						position_x.word.o=400;
						position_y.word.o=200;
						if(index_word[2]==0){//r
							position_x.word.r=200;
							position_y.word.r=200;
							position_x.word.d=300;
							position_y.word.d=100;

						}
						else if(index_word[2]==3){
							position_x.word.r=300;
							position_y.word.r=100;
							position_x.word.d=200;
							position_y.word.d=200;
						}
					}
					if(index_word[1]==3){//o
						position_x.word.o=300;
						position_y.word.o=100;
						if(index_word[2]==0){//r
							position_x.word.r=200;
							position_y.word.r=200;
							position_x.word.d=400;
							position_y.word.d=200;

						}
						else if(index_word[2]==2){
							position_x.word.r=400;
							position_y.word.r=200;
							position_x.word.d=200;
							position_y.word.d=200;
						}
					}

			}
			else if(index_word[0]==2){//w
				position_x.word.w=400;
				position_y.word.w=200;
					if(index_word[1]==0){//o
						position_x.word.o=200;
						position_y.word.o=200;
						if(index_word[2]==1){//r
							position_x.word.r=300;
							position_y.word.r=300;
							position_x.word.d=300;
							position_y.word.d=100;

						}
						else if(index_word[2]==3){
							position_x.word.r=300;
							position_y.word.r=100;
							position_x.word.d=300;
							position_y.word.d=300;
						}
					}
					if(index_word[1]==1){//o
						position_x.word.o=300;
						position_y.word.o=300;
						if(index_word[2]==0){//r
							position_x.word.r=200;
							position_y.word.r=200;
							position_x.word.d=300;
							position_y.word.d=100;

						}
						else if(index_word[2]==3){
							position_x.word.r=300;
							position_y.word.r=100;
							position_x.word.d=200;
							position_y.word.d=200;
						}
					}
					if(index_word[1]==3){//o
						position_x.word.o=300;
						position_y.word.o=100;
						if(index_word[2]==0){//r
							position_x.word.r=200;
							position_y.word.r=200;
							position_x.word.d=300;
							position_y.word.d=300;

						}
						else if(index_word[2]==1){
							position_x.word.r=300;
							position_y.word.r=300;
							position_x.word.d=200;
							position_y.word.d=200;
						}
					}

			}
			else if(index_word[0]==3){//w
				position_x.word.w=300;
				position_y.word.w=100;
					if(index_word[1]==0){//o
						position_x.word.o=200;
						position_y.word.o=200;
						if(index_word[2]==1){//r
							position_x.word.r=300;
							position_y.word.r=300;
							position_x.word.d=400;
							position_y.word.d=200;

						}
						else if(index_word[2]==2){
							position_x.word.r=400;
							position_y.word.r=200;
							position_x.word.d=300;
							position_y.word.d=300;
						}
					}
					if(index_word[1]==1){//o
						position_x.word.o=300;
						position_y.word.o=300;
						if(index_word[2]==0){//r
							position_x.word.r=200;
							position_y.word.r=200;
							position_x.word.d=400;
							position_y.word.d=200;

						}
						else if(index_word[2]==2){
							position_x.word.r=400;
							position_y.word.r=200;
							position_x.word.d=200;
							position_y.word.d=200;
						}
					}
					if(index_word[1]==2){//o
						position_x.word.o=400;
						position_y.word.o=200;
						if(index_word[2]==0){//r
							position_x.word.r=200;
							position_y.word.r=200;
							position_x.word.d=300;
							position_y.word.d=300;

						}
						else if(index_word[2]==1){
							position_x.word.r=300;
							position_y.word.r=300;
							position_x.word.d=200;
							position_y.word.d=200;
						}
					}

			}

			}
		if(word_level_1[WordRandom[Index]][0]=='D'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='N'&&word_level_1[WordRandom[Index]][3]=='Y'){
			while(first.index_image==second.index_image||second.index_image==third.index_image||third.index_image==first.index_image||fourth.index_image==first.index_image||fourth.index_image==second.index_image||fourth.index_image==third.index_image){
				first.index_image=rand()%4;
				second.index_image=rand()%4;
				third.index_image=rand()%4;
				fourth.index_image=rand()%4;
				//here the position of images is assigned randomly
			}
			index_deny[0]=first.index_image;index_deny[1]=second.index_image;index_deny[2]=third.index_image;index_deny[3]=fourth.index_image;
			//in index_word[0] indicates the position of image 'w',in index_word[1] indicates the position of image 'o',in index_word[3] indicates the position of image 'r',in index_word[3] indicates the position of image 'd'
			if(index_deny[0]==0){//d
				position_x.deny.d=200;
				position_y.deny.d=200;
					if(index_deny[1]==1){//e
						position_x.deny.e=300;
						position_y.deny.e=300;
						if(index_deny[2]==2){//n
							position_x.deny.n=400;
							position_y.deny.n=200;
							position_x.deny.y=300;//y
							position_y.deny.y=100;

						}
						else if(index_deny[2]==3){
							position_x.deny.n=300;
							position_y.deny.n=100;
							position_x.deny.y=400;
							position_y.deny.y=200;
						}
					}
					if(index_deny[1]==2){
						position_x.deny.e=400;
						position_y.deny.e=200;
						if(index_deny[2]==1){
							position_x.deny.n=300;
							position_y.deny.n=300;
							position_x.deny.y=300;
							position_y.deny.y=100;

						}
						else if(index_deny[2]==3){
							position_x.deny.n=300;
							position_y.deny.n=100;
							position_x.deny.y=300;
							position_y.deny.y=300;
						}
					}
					if(index_deny[1]==3){
						position_x.deny.e=300;
						position_y.deny.e=100;
						if(index_deny[2]==1){
							position_x.deny.n=300;
							position_y.deny.n=300;
							position_x.deny.y=400;
							position_y.deny.y=200;

						}
						else if(index_deny[2]==2){
							position_x.deny.n=400;
							position_y.deny.n=200;
							position_x.deny.y=300;
							position_y.deny.y=300;
						}
					}

			}
			else if(index_deny[0]==1){
				position_x.deny.d=300;
				position_y.deny.d=300;
					if(index_deny[1]==0){
						position_x.deny.e=200;
						position_y.deny.e=200;
						if(index_deny[2]==2){
							position_x.deny.n=400;
							position_y.deny.n=200;
							position_x.deny.y=300;
							position_y.deny.y=100;

						}
						else if(index_deny[2]==3){
							position_x.deny.n=300;
							position_y.deny.n=100;
							position_x.deny.y=400;
							position_y.deny.y=200;
						}
					}
					if(index_deny[1]==2){
						position_x.deny.e=400;
						position_y.deny.e=200;
						if(index_deny[2]==0){
							position_x.deny.n=200;
							position_y.deny.n=200;
							position_x.deny.y=300;
							position_y.deny.y=100;

						}
						else if(index_deny[2]==3){
							position_x.deny.n=300;
							position_y.deny.n=100;
							position_x.deny.y=200;
							position_y.deny.y=200;
						}
					}
					if(index_deny[1]==3){
						position_x.deny.e=300;
						position_y.deny.e=100;
						if(index_deny[2]==0){
							position_x.deny.n=200;
							position_y.deny.n=200;
							position_x.deny.y=400;
							position_y.deny.y=200;

						}
						else if(index_deny[2]==2){
							position_x.deny.n=400;
							position_y.deny.n=200;
							position_x.deny.y=200;
							position_y.deny.y=200;
						}
					}

			}
			else if(index_deny[0]==2){
				position_x.deny.d=400;
				position_y.deny.d=200;
					if(index_deny[1]==0){
						position_x.deny.e=200;
						position_y.deny.e=200;
						if(index_deny[2]==1){
							position_x.deny.n=300;
							position_y.deny.n=300;
							position_x.deny.y=300;
							position_y.deny.y=100;

						}
						else if(index_deny[2]==3){
							position_x.deny.n=300;
							position_y.deny.n=100;
							position_x.deny.y=300;
							position_y.deny.y=300;
						}
					}
					if(index_deny[1]==1){
						position_x.deny.e=300;
						position_y.deny.e=300;
						if(index_deny[2]==0){
							position_x.deny.n=200;
							position_y.deny.n=200;
							position_x.deny.y=300;
							position_y.deny.y=100;

						}
						else if(index_deny[2]==3){
							position_x.deny.n=300;
							position_y.deny.n=100;
							position_x.deny.y=200;
							position_y.deny.y=200;
						}
					}
					if(index_deny[1]==3){
						position_x.deny.e=300;
						position_y.deny.e=100;
						if(index_deny[2]==0){
							position_x.deny.n=200;
							position_y.deny.n=200;
							position_x.deny.y=300;
							position_y.deny.y=300;

						}
						else if(index_deny[2]==1){
							position_x.deny.n=300;
							position_y.deny.n=300;
							position_x.deny.y=200;
							position_y.deny.y=200;
						}
					}

			}
			else if(index_deny[0]==3){
				position_x.deny.d=300;
				position_y.deny.d=100;
					if(index_deny[1]==0){
						position_x.deny.e=200;
						position_y.deny.e=200;
						if(index_deny[2]==1){
							position_x.deny.n=300;
							position_y.deny.n=300;
							position_x.deny.y=400;
							position_y.deny.y=200;

						}
						else if(index_deny[2]==2){
							position_x.deny.n=400;
							position_y.deny.n=200;
							position_x.deny.y=300;
							position_y.deny.y=300;
						}
					}
					if(index_deny[1]==1){
						position_x.deny.e=300;
						position_y.deny.e=300;
						if(index_deny[2]==0){
							position_x.deny.n=200;
							position_y.deny.n=200;
							position_x.deny.y=400;
							position_y.deny.y=200;

						}
						else if(index_deny[2]==2){
							position_x.deny.n=400;
							position_y.deny.n=200;
							position_x.deny.y=200;
							position_y.deny.y=200;
						}
					}
					if(index_deny[1]==2){
						position_x.deny.e=400;
						position_y.deny.e=200;
						if(index_deny[2]==0){
							position_x.deny.n=200;
							position_y.deny.n=200;
							position_x.deny.y=300;
							position_y.deny.y=300;

						}
						else if(index_deny[2]==1){
							position_x.deny.n=300;
							position_y.deny.n=300;
							position_x.deny.y=200;
							position_y.deny.y=200;
						}
					}

			}

			}
		if(word_level_1[WordRandom[Index]][0]=='G'&&word_level_1[WordRandom[Index]][1]=='O'&&word_level_1[WordRandom[Index]][2]=='N'&&word_level_1[WordRandom[Index]][3]=='E'){
			while(first.index_image==second.index_image||second.index_image==third.index_image||third.index_image==first.index_image||fourth.index_image==first.index_image||fourth.index_image==second.index_image||fourth.index_image==third.index_image){
				first.index_image=rand()%4;
				second.index_image=rand()%4;
				third.index_image=rand()%4;
				fourth.index_image=rand()%4;
				//here the position of images is assigned randomly
			}
			index_gone[0]=first.index_image;index_gone[1]=second.index_image;index_gone[2]=third.index_image;index_gone[3]=fourth.index_image;
			//in index_gone[0] indicates the position of image 'g',in index_gone[1] indicates the position of image 'o',in index_gone[3] indicates the position of image 'n',in index_gone[3] indicates the position of image 'e'
			if(index_gone[0]==0){
				position_x.gone.g=200;
				position_y.gone.g=200;
					if(index_gone[1]==1){
						position_x.gone.o=300;
						position_y.gone.o=300;
						if(index_gone[2]==2){
							position_x.gone.n=400;
							position_y.gone.n=200;
							position_x.gone.e=300;
							position_y.gone.e=100;

						}
						else if(index_gone[2]==3){
							position_x.gone.n=300;
							position_y.gone.n=100;
							position_x.gone.e=400;
							position_y.gone.e=200;
						}
					}
					if(index_gone[1]==2){
						position_x.gone.o=400;
						position_y.gone.o=200;
						if(index_gone[2]==1){
							position_x.gone.n=300;
							position_y.gone.n=300;
							position_x.gone.e=300;
							position_y.gone.e=100;

						}
						else if(index_gone[2]==3){
							position_x.gone.n=300;
							position_y.gone.n=100;
							position_x.gone.e=300;
							position_y.gone.e=300;
						}
					}
					if(index_gone[1]==3){
						position_x.gone.o=300;
						position_y.gone.o=100;
						if(index_gone[2]==1){
							position_x.gone.n=300;
							position_y.gone.n=300;
							position_x.gone.e=400;
							position_y.gone.e=200;

						}
						else if(index_gone[2]==2){
							position_x.gone.n=400;
							position_y.gone.n=200;
							position_x.gone.e=300;
							position_y.gone.e=300;
						}
					}

			}
			else if(index_gone[0]==1){
				position_x.gone.g=300;
				position_y.gone.g=300;
					if(index_gone[1]==0){
						position_x.gone.o=200;
						position_y.gone.o=200;
						if(index_gone[2]==2){
							position_x.gone.n=400;
							position_y.gone.n=200;
							position_x.gone.e=300;
							position_y.gone.e=100;

						}
						else if(index_gone[2]==3){
							position_x.gone.n=300;
							position_y.gone.n=100;
							position_x.gone.e=400;
							position_y.gone.e=200;
						}
					}
					if(index_gone[1]==2){
						position_x.gone.o=400;
						position_y.gone.o=200;
						if(index_gone[2]==0){
							position_x.gone.n=200;
							position_y.gone.n=200;
							position_x.gone.e=300;
							position_y.gone.e=100;

						}
						else if(index_gone[2]==3){
							position_x.gone.n=300;
							position_y.gone.n=100;
							position_x.gone.e=200;
							position_y.gone.e=200;
						}
					}
					if(index_gone[1]==3){
						position_x.gone.o=300;
						position_y.gone.o=100;
						if(index_gone[2]==0){
							position_x.gone.n=200;
							position_y.gone.n=200;
							position_x.gone.e=400;
							position_y.gone.e=200;

						}
						else if(index_gone[2]==2){
							position_x.gone.n=400;
							position_y.gone.n=200;
							position_x.gone.e=200;
							position_y.gone.e=200;
						}
					}

			}
			else if(index_gone[0]==2){
				position_x.gone.g=400;
				position_y.gone.g=200;
					if(index_gone[1]==0){
						position_x.gone.o=200;
						position_y.gone.o=200;
						if(index_gone[2]==1){
							position_x.gone.n=300;
							position_y.gone.n=300;
							position_x.gone.e=300;
							position_y.gone.e=100;

						}
						else if(index_gone[2]==3){
							position_x.gone.n=300;
							position_y.gone.n=100;
							position_x.gone.e=300;
							position_y.gone.e=300;
						}
					}
					if(index_gone[1]==1){
						position_x.gone.o=300;
						position_y.gone.o=300;
						if(index_gone[2]==0){
							position_x.gone.n=200;
							position_y.gone.n=200;
							position_x.gone.e=300;
							position_y.gone.e=100;

						}
						else if(index_gone[2]==3){
							position_x.gone.n=300;
							position_y.gone.n=100;
							position_x.gone.e=200;
							position_y.gone.e=200;
						}
					}
					if(index_gone[1]==3){
						position_x.gone.o=300;
						position_y.gone.o=100;
						if(index_gone[2]==0){
							position_x.gone.n=200;
							position_y.gone.n=200;
							position_x.gone.e=300;
							position_y.gone.e=300;

						}
						else if(index_gone[2]==1){
							position_x.gone.n=300;
							position_y.gone.n=300;
							position_x.gone.e=200;
							position_y.gone.e=200;
						}
					}

			}
			else if(index_gone[0]==3){
				position_x.gone.g=300;
				position_y.gone.g=100;
					if(index_gone[1]==0){
						position_x.gone.o=200;
						position_y.gone.o=200;
						if(index_gone[2]==1){
							position_x.gone.n=300;
							position_y.gone.n=300;
							position_x.gone.e=400;
							position_y.gone.e=200;

						}
						else if(index_gone[2]==2){
							position_x.gone.n=400;
							position_y.gone.n=200;
							position_x.gone.e=300;
							position_y.gone.e=300;
						}
					}
					if(index_gone[1]==1){
						position_x.gone.o=300;
						position_y.gone.o=300;
						if(index_gone[2]==0){
							position_x.gone.n=200;
							position_y.gone.n=200;
							position_x.gone.e=400;
							position_y.gone.e=200;

						}
						else if(index_gone[2]==2){
							position_x.gone.n=400;
							position_y.gone.n=200;
							position_x.gone.e=200;
							position_y.gone.e=200;
						}
					}
					if(index_gone[1]==2){
						position_x.gone.o=400;
						position_y.gone.o=200;
						if(index_gone[2]==0){
							position_x.gone.n=200;
							position_y.gone.n=200;
							position_x.gone.e=300;
							position_y.gone.e=300;

						}
						else if(index_gone[2]==1){
							position_x.gone.n=300;
							position_y.gone.n=300;
							position_x.gone.e=200;
							position_y.gone.e=200;
						}
					}

			}

			}
		if(word_level_1[WordRandom[Index]][0]=='N'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='A'&&word_level_1[WordRandom[Index]][3]=='R'){
			while(first.index_image==second.index_image||second.index_image==third.index_image||third.index_image==first.index_image||fourth.index_image==first.index_image||fourth.index_image==second.index_image||fourth.index_image==third.index_image){
				first.index_image=rand()%4;
				second.index_image=rand()%4;
				third.index_image=rand()%4;
				fourth.index_image=rand()%4;
				//here the position of images is assigned randomly
			}
			index_earn[0]=first.index_image;index_earn[1]=second.index_image;index_earn[2]=third.index_image;index_earn[3]=fourth.index_image;
			//index_earn[0]=3;index_earn[1]=1;index_earn[2]=0;index_earn[3]=2;
			//in index_earn[0] indicates the position of image 'e',in index_earn[1] indicates the position of image 'a',in index_earn[3] indicates the position of image 'r',in index_earn[3] indicates the position of image 'n'
			if(index_earn[0]==0){
				position_x.earn.e=200;
				position_y.earn.e=200;
					if(index_earn[1]==1){
						position_x.earn.a=300;
						position_y.earn.a=300;
						if(index_earn[2]==2){
							position_x.earn.r=400;
							position_y.earn.r=200;
							position_x.earn.n=300;
							position_y.earn.n=100;

						}
						else if(index_earn[2]==3){
							position_x.earn.r=300;
							position_y.earn.r=100;
							position_x.earn.n=400;
							position_y.earn.n=200;
						}
					}
					if(index_earn[1]==2){
						position_x.earn.a=400;
						position_y.earn.a=200;
						if(index_earn[2]==1){
							position_x.earn.r=300;
							position_y.earn.r=300;
							position_x.earn.n=300;
							position_y.earn.n=100;

						}
						else if(index_earn[2]==3){
							position_x.earn.r=300;
							position_y.earn.r=100;
							position_x.earn.n=300;
							position_y.earn.n=300;
						}
					}
					if(index_earn[1]==3){
						position_x.earn.a=300;
						position_y.earn.a=100;
						if(index_earn[2]==1){
							position_x.earn.r=300;
							position_y.earn.r=300;
							position_x.earn.n=400;
							position_y.earn.n=200;

						}
						else if(index_earn[2]==2){
							position_x.earn.r=400;
							position_y.earn.r=200;
							position_x.earn.n=300;
							position_y.earn.n=300;
						}
					}

			}
			else if(index_earn[0]==1){
				position_x.earn.e=300;
				position_y.earn.e=300;
					if(index_earn[1]==0){
						position_x.earn.a=200;
						position_y.earn.a=200;
						if(index_earn[2]==2){
							position_x.earn.r=400;
							position_y.earn.r=200;
							position_x.earn.n=300;
							position_y.earn.n=100;

						}
						else if(index_earn[2]==3){
							position_x.earn.r=300;
							position_y.earn.r=100;
							position_x.earn.n=400;
							position_y.earn.n=200;
						}
					}
					if(index_earn[1]==2){
						position_x.earn.a=400;
						position_y.earn.a=200;
						if(index_earn[2]==0){
							position_x.earn.r=200;
							position_y.earn.r=200;
							position_x.earn.n=300;
							position_y.earn.n=100;

						}
						else if(index_earn[2]==3){
							position_x.earn.r=300;
							position_y.earn.r=100;
							position_x.earn.n=200;
							position_y.earn.n=200;
						}
					}
					if(index_earn[1]==3){
						position_x.earn.a=300;
						position_y.earn.a=100;
						if(index_earn[2]==0){
							position_x.earn.r=200;
							position_y.earn.r=200;
							position_x.earn.n=400;
							position_y.earn.n=200;

						}
						else if(index_earn[2]==2){
							position_x.earn.r=400;
							position_y.earn.r=200;
							position_x.earn.n=200;
							position_y.earn.n=200;
						}
					}

			}
			else if(index_earn[0]==2){
				position_x.earn.e=400;
				position_y.earn.e=200;
					if(index_earn[1]==0){
						position_x.earn.a=200;
						position_y.earn.a=200;
						if(index_earn[2]==1){
							position_x.earn.r=300;
							position_y.earn.r=300;
							position_x.earn.n=300;
							position_y.earn.n=100;

						}
						else if(index_earn[2]==3){
							position_x.earn.r=300;
							position_y.earn.r=100;
							position_x.earn.n=300;
							position_y.earn.n=300;
						}
					}
					if(index_earn[1]==1){
						position_x.earn.a=300;
						position_y.earn.a=300;
						if(index_earn[2]==0){
							position_x.earn.r=200;
							position_y.earn.r=200;
							position_x.earn.n=300;
							position_y.earn.n=100;

						}
						else if(index_earn[2]==3){
							position_x.earn.r=300;
							position_y.earn.r=100;
							position_x.earn.n=200;
							position_y.earn.n=200;
						}
					}
					if(index_earn[1]==3){
						position_x.earn.a=300;
						position_y.earn.a=100;
						if(index_earn[2]==0){
							position_x.earn.r=200;
							position_y.earn.r=200;
							position_x.earn.n=300;
							position_y.earn.n=300;

						}
						else if(index_earn[2]==1){
							position_x.earn.r=300;
							position_y.earn.r=300;
							position_x.earn.n=200;
							position_y.earn.n=200;
						}
					}

			}
			else if(index_earn[0]==3){
				position_x.earn.e=300;
				position_y.earn.e=100;
				if(index_earn[1]==0){
						position_x.earn.a=200;
						position_y.earn.a=200;
						if(index_earn[2]==1){
							position_x.earn.r=300;
							position_y.earn.r=300;
							position_x.earn.n=400;
							position_y.earn.n=200;

						}
						else if(index_earn[2]==2){
							position_x.earn.r=400;
							position_y.earn.r=200;
							position_x.earn.n=300;
							position_y.earn.n=300;
						}
					}
					if(index_earn[1]==1){
						position_x.earn.a=300;
						position_y.earn.a=300;
						if(index_earn[2]==0){
							position_x.earn.r=200;
							position_y.earn.r=200;
							position_x.earn.n=400;
							position_y.earn.n=200;

						}
						else if(index_earn[2]==2){
							position_x.earn.r=400;
							position_y.earn.r=200;
							position_x.earn.n=200;
							position_y.earn.n=200;
						}
					}
					if(index_earn[1]==2){
						position_x.earn.a=400;
						position_y.earn.a=200;
						if(index_earn[2]==0){
							position_x.earn.r=200;
							position_y.earn.r=200;
							position_x.earn.n=300;
							position_y.earn.n=300;

						}
						else if(index_earn[2]==1){
							position_x.earn.r=300;
							position_y.earn.r=300;
							position_x.earn.n=200;
							position_y.earn.n=200;
						}
					}

			}

			}
		if(word_level_1[WordRandom[Index]][0]=='H'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='A'&&word_level_1[WordRandom[Index]][3]=='T'){
			while(first.index_image==second.index_image||second.index_image==third.index_image||third.index_image==first.index_image||fourth.index_image==first.index_image||fourth.index_image==second.index_image||fourth.index_image==third.index_image){
				first.index_image=rand()%4;
				second.index_image=rand()%4;
				third.index_image=rand()%4;
				fourth.index_image=rand()%4;
				//here the position of images is assigned randomly
			}
			index_heat[0]=first.index_image;index_heat[1]=second.index_image;index_heat[2]=third.index_image;index_heat[3]=fourth.index_image;
			//in index_heat[0] indicates the position of image 'h',in index_heat[1] indicates the position of image 'e',in index_heat[3] indicates the position of image 'a',in index_heat[3] indicates the position of image 't'
			if(index_heat[0]==0){
				position_x.heat.h=200;
				position_y.heat.h=200;
					if(index_heat[1]==1){
						position_x.heat.e=300;
						position_y.heat.e=300;
						if(index_heat[2]==2){
							position_x.heat.a=400;
							position_y.heat.a=200;
							position_x.heat.t=300;
							position_y.heat.t=100;

						}
						else if(index_heat[2]==3){
							position_x.heat.a=300;
							position_y.heat.a=100;
							position_x.heat.t=400;
							position_y.heat.t=200;
						}
					}
					if(index_heat[1]==2){
						position_x.heat.e=400;
						position_y.heat.e=200;
						if(index_heat[2]==1){
							position_x.heat.a=300;
							position_y.heat.a=300;
							position_x.heat.t=300;
							position_y.heat.t=100;

						}
						else if(index_heat[2]==3){
							position_x.heat.a=300;
							position_y.heat.a=100;
							position_x.heat.t=300;
							position_y.heat.t=300;
						}
					}
					if(index_heat[1]==3){
						position_x.heat.e=300;
						position_y.heat.e=100;
						if(index_heat[2]==1){
							position_x.heat.a=300;
							position_y.heat.a=300;
							position_x.heat.t=400;
							position_y.heat.t=200;

						}
						else if(index_heat[2]==2){
							position_x.heat.a=400;
							position_y.heat.a=200;
							position_x.heat.t=300;
							position_y.heat.t=300;
						}
					}

			}
			else if(index_heat[0]==1){
				position_x.heat.h=300;
				position_y.heat.h=300;
					if(index_heat[1]==0){
						position_x.heat.e=200;
						position_y.heat.e=200;
						if(index_heat[2]==2){
							position_x.heat.a=400;
							position_y.heat.a=200;
							position_x.heat.t=300;
							position_y.heat.t=100;

						}
						else if(index_heat[2]==3){
							position_x.heat.a=300;
							position_y.heat.a=100;
							position_x.heat.t=400;
							position_y.heat.t=200;
						}
					}
					if(index_heat[1]==2){
						position_x.heat.e=400;
						position_y.heat.e=200;
						if(index_heat[2]==0){
							position_x.heat.a=200;
							position_y.heat.a=200;
							position_x.heat.t=300;
							position_y.heat.t=100;

						}
						else if(index_heat[2]==3){
							position_x.heat.a=300;
							position_y.heat.a=100;
							position_x.heat.t=200;
							position_y.heat.t=200;
						}
					}
					if(index_heat[1]==3){
						position_x.heat.e=300;
						position_y.heat.e=100;
						if(index_heat[2]==0){
							position_x.heat.a=200;
							position_y.heat.a=200;
							position_x.heat.t=400;
							position_y.heat.t=200;

						}
						else if(index_heat[2]==2){
							position_x.heat.a=400;
							position_y.heat.a=200;
							position_x.heat.t=200;
							position_y.heat.t=200;
						}
					}

			}
			else if(index_heat[0]==2){
				position_x.heat.h=400;
				position_y.heat.h=200;
					if(index_heat[1]==0){
						position_x.heat.e=200;
						position_y.heat.e=200;
						if(index_heat[2]==1){
							position_x.heat.a=300;
							position_y.heat.a=300;
							position_x.heat.t=300;
							position_y.heat.t=100;

						}
						else if(index_heat[2]==3){
							position_x.heat.a=300;
							position_y.heat.a=100;
							position_x.heat.t=300;
							position_y.heat.t=300;
						}
					}
					if(index_heat[1]==1){
						position_x.heat.e=300;
						position_y.heat.e=300;
						if(index_heat[2]==0){
							position_x.heat.a=200;
							position_y.heat.a=200;
							position_x.heat.t=300;
							position_y.heat.t=100;

						}
						else if(index_heat[2]==3){
							position_x.heat.a=300;
							position_y.heat.a=100;
							position_x.heat.t=200;
							position_y.heat.t=200;
						}
					}
					if(index_heat[1]==3){
						position_x.heat.e=300;
						position_y.heat.e=100;
						if(index_heat[2]==0){
							position_x.heat.a=200;
							position_y.heat.a=200;
							position_x.heat.t=300;
							position_y.heat.t=300;

						}
						else if(index_heat[2]==1){
							position_x.heat.a=300;
							position_y.heat.a=300;
							position_x.heat.t=200;
							position_y.heat.t=200;
						}
					}

			}
			else if(index_heat[0]==3){
				position_x.heat.h=300;
				position_y.heat.h=100;
					if(index_heat[1]==0){
						position_x.heat.e=200;
						position_y.heat.e=200;
						if(index_heat[2]==1){
							position_x.heat.a=300;
							position_y.heat.a=300;
							position_x.heat.t=400;
							position_y.heat.t=200;

						}
						else if(index_heat[2]==2){
							position_x.heat.a=400;
							position_y.heat.a=200;
							position_x.heat.t=300;
							position_y.heat.t=300;
						}
					}
					if(index_heat[1]==1){
						position_x.earn.e=300;
						position_y.earn.e=300;
						if(index_heat[2]==0){
							position_x.heat.a=200;
							position_y.heat.a=200;
							position_x.heat.t=400;
							position_y.heat.t=200;

						}
						else if(index_heat[2]==2){
							position_x.heat.a=400;
							position_y.heat.a=200;
							position_x.heat.t=200;
							position_y.heat.t=200;
						}
					}
					if(index_heat[1]==2){
						position_x.heat.e=400;
						position_y.heat.e=200;
						if(index_heat[2]==0){
							position_x.heat.a=200;
							position_y.heat.a=200;
							position_x.heat.t=300;
							position_y.heat.t=300;

						}
						else if(index_heat[2]==1){
							position_x.heat.a=300;
							position_y.heat.a=300;
							position_x.heat.t=200;
							position_y.heat.t=200;
						}
					}

			}

			}
			
		}
		if(level==2){
			if(word_level_2[WordRandom[Index]][0]=='D'&&word_level_2[WordRandom[Index]][1]=='R'&&word_level_2[WordRandom[Index]][2]=='E'&&word_level_2[WordRandom[Index]][3]=='A'&&word_level_2[WordRandom[Index]][4]=='M'){
				while(first.index_image==second.index_image||second.index_image==third.index_image||third.index_image==first.index_image||fourth.index_image==first.index_image||fourth.index_image==second.index_image||fourth.index_image==third.index_image||fifth.index_image==first.index_image||fifth.index_image==second.index_image||fifth.index_image==third.index_image||fifth.index_image==fourth.index_image){
					first.index_image=rand()%5;
					second.index_image=rand()%5;
					third.index_image=rand()%5;
					fourth.index_image=rand()%5;
					fifth.index_image=rand()%5;
					//here the position of images is assigned randomly
				}
				index_dream[0]=first.index_image;index_dream[1]=second.index_image;index_dream[2]=third.index_image;index_dream[3]=fourth.index_image;index_dream[4]=fifth.index_image;
				
				if(index_dream[0]==0){
					position_x.dream.d=250;
					position_y.dream.d=75;
				}
				
				if(index_dream[0]==1){
					position_x.dream.d=400;
					position_y.dream.d=75;
				}
				if(index_dream[0]==2){
					position_x.dream.d=435;
					position_y.dream.d=200;
				}
				if(index_dream[0]==3){
					position_x.dream.d=325;
					position_y.dream.d=290;
				}
				if(index_dream[0]==4){
					position_x.dream.d=215;
					position_y.dream.d=200;
				}
				if(index_dream[1]==0){
					position_x.dream.r=250;
					position_y.dream.r=75;
				}
				
				if(index_dream[1]==1){
					position_x.dream.r=400;
					position_y.dream.r=75;
				}
				if(index_dream[1]==2){
					position_x.dream.r=435;
					position_y.dream.r=200;
				}
				if(index_dream[1]==3){
					position_x.dream.r=325;
					position_y.dream.r=290;
				}
				if(index_dream[1]==4){
					position_x.dream.r=215;
					position_y.dream.r=200;
				}
				if(index_dream[2]==0){
					position_x.dream.e=250;
					position_y.dream.e=75;
				}
				
				if(index_dream[2]==1){
					position_x.dream.e=400;
					position_y.dream.e=75;
				}
				if(index_dream[2]==2){
					position_x.dream.e=435;
					position_y.dream.e=200;
				}
				if(index_dream[2]==3){
					position_x.dream.e=325;
					position_y.dream.e=290;
				}
				if(index_dream[2]==4){
					position_x.dream.e=215;
					position_y.dream.e=200;
				}
				if(index_dream[3]==0){
					position_x.dream.a=250;
					position_y.dream.a=75;
				}
				
				if(index_dream[3]==1){
					position_x.dream.a=400;
					position_y.dream.a=75;
				}
				if(index_dream[3]==2){
					position_x.dream.a=435;
					position_y.dream.a=200;
				}
				if(index_dream[3]==3){
					position_x.dream.a=325;
					position_y.dream.a=290;
				}
				if(index_dream[3]==4){
					position_x.dream.a=215;
					position_y.dream.a=200;
				}
				if(index_dream[4]==0){
					position_x.dream.m=250;
					position_y.dream.m=75;
				}
				
				if(index_dream[4]==1){
					position_x.dream.m=400;
					position_y.dream.m=75;
				}
				if(index_dream[4]==2){
					position_x.dream.m=435;
					position_y.dream.m=200;
				}
				if(index_dream[4]==3){
					position_x.dream.m=325;
					position_y.dream.m=290;
				}
				if(index_dream[4]==4){
					position_x.dream.m=215;
					position_y.dream.m=200;
				}
			}
			if(word_level_2[WordRandom[Index]][0]=='S'&&word_level_2[WordRandom[Index]][1]=='W'&&word_level_2[WordRandom[Index]][2]=='I'&&word_level_2[WordRandom[Index]][3]=='N'&&word_level_2[WordRandom[Index]][4]=='G'){
				while(first.index_image==second.index_image||second.index_image==third.index_image||third.index_image==first.index_image||fourth.index_image==first.index_image||fourth.index_image==second.index_image||fourth.index_image==third.index_image||fifth.index_image==first.index_image||fifth.index_image==second.index_image||fifth.index_image==third.index_image||fifth.index_image==fourth.index_image){
					first.index_image=rand()%5;
					second.index_image=rand()%5;
					third.index_image=rand()%5;
					fourth.index_image=rand()%5;
					fifth.index_image=rand()%5;
					//here the position of images is assigned randomly
				}
				index_swing[0]=first.index_image;index_swing[1]=second.index_image;index_swing[2]=third.index_image;index_swing[3]=fourth.index_image;index_swing[4]=fifth.index_image;
				
				if(index_swing[0]==0){
					position_x.swing.s=250;
					position_y.swing.s=75;
				}
				
				if(index_swing[0]==1){
					position_x.swing.s=400;
					position_y.swing.s=75;
				}
				if(index_swing[0]==2){
					position_x.swing.s=435;
					position_y.swing.s=200;
				}
				if(index_swing[0]==3){
					position_x.swing.s=325;
					position_y.swing.s=290;
				}
				if(index_swing[0]==4){
					position_x.swing.s=215;
					position_y.swing.s=200;
				}
				if(index_swing[1]==0){
					position_x.swing.w=250;
					position_y.swing.w=75;
				}
				
				if(index_swing[1]==1){
					position_x.swing.w=400;
					position_y.swing.w=75;
				}
				if(index_swing[1]==2){
					position_x.swing.w=435;
					position_y.swing.w=200;
				}
				if(index_swing[1]==3){
					position_x.swing.w=325;
					position_y.swing.w=290;
				}
				if(index_swing[1]==4){
					position_x.swing.w=215;
					position_y.swing.w=200;
				}
				if(index_swing[2]==0){
					position_x.swing.i=250;
					position_y.swing.i=75;
				}
				
				if(index_swing[2]==1){
					position_x.swing.i=400;
					position_y.swing.i=75;
				}
				if(index_swing[2]==2){
					position_x.swing.i=435;
					position_y.swing.i=200;
				}
				if(index_swing[2]==3){
					position_x.swing.i=325;
					position_y.swing.i=290;
				}
				if(index_swing[2]==4){
					position_x.swing.i=215;
					position_y.swing.i=200;
				}
				if(index_swing[3]==0){
					position_x.swing.n=250;
					position_y.swing.n=75;
				}
				
				if(index_swing[3]==1){
					position_x.swing.n=400;
					position_y.swing.n=75;
				}
				if(index_swing[3]==2){
					position_x.swing.n=435;
					position_y.swing.n=200;
				}
				if(index_swing[3]==3){
					position_x.swing.n=325;
					position_y.swing.n=290;
				}
				if(index_swing[3]==4){
					position_x.swing.n=215;
					position_y.swing.n=200;
				}
				if(index_swing[4]==0){
					position_x.swing.g=250;
					position_y.swing.g=75;
				}
				
				if(index_swing[4]==1){
					position_x.swing.g=400;
					position_y.swing.g=75;
				}
				if(index_swing[4]==2){
					position_x.swing.g=435;
					position_y.swing.g=200;
				}
				if(index_swing[4]==3){
					position_x.swing.g=325;
					position_y.swing.g=290;
				}
				if(index_swing[4]==4){
					position_x.swing.g=215;
					position_y.swing.g=200;
				}
			
			}
			if(word_level_2[WordRandom[Index]][0]=='W'&&word_level_2[WordRandom[Index]][1]=='R'&&word_level_2[WordRandom[Index]][2]=='O'&&word_level_2[WordRandom[Index]][3]=='N'&&word_level_2[WordRandom[Index]][4]=='G'){
				while(first.index_image==second.index_image||second.index_image==third.index_image||third.index_image==first.index_image||fourth.index_image==first.index_image||fourth.index_image==second.index_image||fourth.index_image==third.index_image||fifth.index_image==first.index_image||fifth.index_image==second.index_image||fifth.index_image==third.index_image||fifth.index_image==fourth.index_image){
					first.index_image=rand()%5;
					second.index_image=rand()%5;
					third.index_image=rand()%5;
					fourth.index_image=rand()%5;
					fifth.index_image=rand()%5;
					//here the position of images is assigned randomly
				}
				index_wrong[0]=first.index_image;index_wrong[1]=second.index_image;index_wrong[2]=third.index_image;index_wrong[3]=fourth.index_image;index_wrong[4]=fifth.index_image;
				
				if(index_wrong[0]==0){
					position_x.wrong.w=250;
					position_y.wrong.w=75;
				}
				
				if(index_wrong[0]==1){
					position_x.wrong.w=400;
					position_y.wrong.w=75;
				}
				if(index_wrong[0]==2){
					position_x.wrong.w=435;
					position_y.wrong.w=200;
				}
				if(index_wrong[0]==3){
					position_x.wrong.w=325;
					position_y.wrong.w=290;
				}
				if(index_wrong[0]==4){
					position_x.wrong.w=215;
					position_y.wrong.w=200;
				}
				if(index_wrong[1]==0){
					position_x.wrong.r=250;
					position_y.wrong.r=75;
				}
				
				if(index_wrong[1]==1){
					position_x.wrong.r=400;
					position_y.wrong.r=75;
				}
				if(index_wrong[1]==2){
					position_x.wrong.r=435;
					position_y.wrong.r=200;
				}
				if(index_wrong[1]==3){
					position_x.wrong.r=325;
					position_y.wrong.r=290;
				}
				if(index_wrong[1]==4){
					position_x.wrong.r=215;
					position_y.wrong.r=200;
				}
				if(index_wrong[2]==0){
					position_x.wrong.o=250;
					position_y.wrong.o=75;
				}
				
				if(index_wrong[2]==1){
					position_x.wrong.o=400;
					position_y.wrong.o=75;
				}
				if(index_wrong[2]==2){
					position_x.wrong.o=435;
					position_y.wrong.o=200;
				}
				if(index_wrong[2]==3){
					position_x.wrong.o=325;
					position_y.wrong.o=290;
				}
				if(index_wrong[2]==4){
					position_x.wrong.o=215;
					position_y.wrong.o=200;
				}
				if(index_wrong[3]==0){
					position_x.wrong.n=250;
					position_y.wrong.n=75;
				}
				
				if(index_wrong[3]==1){
					position_x.wrong.n=400;
					position_y.wrong.n=75;
				}
				if(index_wrong[3]==2){
					position_x.wrong.n=435;
					position_y.wrong.n=200;
				}
				if(index_wrong[3]==3){
					position_x.wrong.n=325;
					position_y.wrong.n=290;
				}
				if(index_wrong[3]==4){
					position_x.wrong.n=215;
					position_y.wrong.n=200;
				}
				if(index_wrong[4]==0){
					position_x.wrong.g=250;
					position_y.wrong.g=75;
				}
				
				if(index_wrong[4]==1){
					position_x.wrong.g=400;
					position_y.wrong.g=75;
				}
				if(index_wrong[4]==2){
					position_x.wrong.g=435;
					position_y.wrong.g=200;
				}
				if(index_wrong[4]==3){
					position_x.wrong.g=325;
					position_y.wrong.g=290;
				}
				if(index_wrong[4]==4){
					position_x.wrong.g=215;
					position_y.wrong.g=200;
				}
			
			}
		}
	
}