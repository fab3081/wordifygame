void gamescreen(){
	if(level==0){
		//if(word_level_0[word1.easy][0]=='B'&&word_level_0[word1.easy][1]=='A'&&word_level_0[word1.easy][2]=='T'){
		if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='B'){
			iShowBMP(0,0,"imageW//bg5i.bmp");
			//for the background and score
			iSetColor(500,500,500);
			iText(680,760,"Score: ",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(score,strscore,10);
			iText(750,760,strscore,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iText(20,750,"Level:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(level,str_level,10);
			iText(90,750,str_level,GLUT_BITMAP_TIMES_ROMAN_24);
	
			//for the current word displaying on the top of the screen
			iSetColor(78,58,25);
			iFilledRectangle(298,410,20*i,40);
			iSetColor(500,500,500);
			iText(300,420,arr,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iShowBMP(position_x.tab.b,position_y.tab.b,"imageW//B.bmp");
			iShowBMP(position_x.tab.a,position_y.tab.a,"imageW//A.bmp");
			iShowBMP(position_x.tab.t,position_y.tab.t,"imageW//T.bmp");
			iShowBMP(600,200,"imageW//COMPARE7.bmp");
			if(score>=15&&arr[0]=='\0'){
				iShowBMP(610,100,"imageW//hint.bmp");
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
			}
			else {
				iShowBMP(610,100,"imageW//hintsdark.bmp");
				iSetColor(154,154,154);
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
		
			}
			iShowBMP(615,40,"imageW//QUIT.bmp");
			iSetColor(255,255,255);
			//empty box for level 1
			iShowBMP(70,650,"imageW//emptybox.bmp");
			iShowBMP(140,650,"imageW//emptybox.bmp");
			iShowBMP(210,650,"imageW//emptybox.bmp");

			iShowBMP(490,650,"imageW//emptybox.bmp");
			iShowBMP(560,650,"imageW//emptybox.bmp");
			iShowBMP(630,650,"imageW//emptybox.bmp");

			iShowBMP(70,500,"imageW//emptybox.bmp");
			iShowBMP(140,500,"imageW//emptybox.bmp");

			//for the time

			iText(610,350,"Time left:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(time_min,string_time_min,10);
			itoa(time_sec,string_time_sec,10);
			iText(610,300,string_time_min,GLUT_BITMAP_TIMES_ROMAN_24);
			if(time_sec<60)iText(650,300,string_time_sec,GLUT_BITMAP_TIMES_ROMAN_24);
			else iText(650,300,"0",GLUT_BITMAP_TIMES_ROMAN_24);

			//iShowBMP(30,200,"imageW//shuffle.bmp");
		}
		if(word_level_0[WordRandom[Index]][0]=='R'&&word_level_0[WordRandom[Index]][1]=='O'&&word_level_0[WordRandom[Index]][2]=='B'){
			iShowBMP(0,0,"imageW//bg5i.bmp");
			//for the background and score
			iSetColor(500,500,500);
			iText(680,760,"Score: ",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(score,strscore,10);
			iText(750,760,strscore,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iText(20,750,"Level:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(level,str_level,10);
			iText(90,750,str_level,GLUT_BITMAP_TIMES_ROMAN_24);
	
			//for the current word displaying on the top of the screen
			iSetColor(78,58,25);
			iFilledRectangle(298,410,20*i,40);
			iSetColor(500,500,500);
			iText(300,420,arr,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iShowBMP(position_x.rob.b,position_y.rob.b,"imageW//B.bmp");
			iShowBMP(position_x.rob.o,position_y.rob.o,"imageW//O.bmp");
			iShowBMP(position_x.rob.r,position_y.rob.r,"imageW//R.bmp");
			iShowBMP(600,200,"imageW//COMPARE7.bmp");
			if(score>=15&&arr[0]=='\0'){
				iShowBMP(610,100,"imageW//hint.bmp");
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
			}
			else {
				iShowBMP(610,100,"imageW//hintsdark.bmp");
				iSetColor(154,154,154);
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
		
			}
			iShowBMP(615,40,"imageW//QUIT.bmp");
			iSetColor(255,255,255);
			//empty box for level 1
			iShowBMP(70,650,"imageW//emptybox.bmp");
			iShowBMP(140,650,"imageW//emptybox.bmp");
			iShowBMP(210,650,"imageW//emptybox.bmp");

			iShowBMP(490,650,"imageW//emptybox.bmp");
			iShowBMP(560,650,"imageW//emptybox.bmp");
			iShowBMP(630,650,"imageW//emptybox.bmp");

			iShowBMP(70,500,"imageW//emptybox.bmp");
			iShowBMP(140,500,"imageW//emptybox.bmp");

			//for the time

			iText(610,350,"Time left:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(time_min,string_time_min,10);
			itoa(time_sec,string_time_sec,10);
			iText(610,300,string_time_min,GLUT_BITMAP_TIMES_ROMAN_24);
			if(time_sec<60)iText(650,300,string_time_sec,GLUT_BITMAP_TIMES_ROMAN_24);
			else iText(650,300,"0",GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if(word_level_0[WordRandom[Index]][0]=='M'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='D'){
			iShowBMP(0,0,"imageW//bg5i.bmp");
			//for the background and score
			iSetColor(500,500,500);
			iText(680,760,"Score: ",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(score,strscore,10);
			iText(750,760,strscore,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iText(20,750,"Level:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(level,str_level,10);
			iText(90,750,str_level,GLUT_BITMAP_TIMES_ROMAN_24);
	
			//for the current word displaying on the top of the screen
			iSetColor(78,58,25);
			iFilledRectangle(298,410,20*i,40);
			iSetColor(500,500,500);
			iText(300,420,arr,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iShowBMP(position_x.mad.d,position_y.mad.d,"imageW//D.bmp");
			iShowBMP(position_x.mad.a,position_y.mad.a,"imageW//A.bmp");
			iShowBMP(position_x.mad.m,position_y.mad.m,"imageW//M.bmp");
			iShowBMP(600,200,"imageW//COMPARE7.bmp");
			if(score>=15&&arr[0]=='\0'){
				iShowBMP(610,100,"imageW//hint.bmp");
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
			}
			else {
				iShowBMP(610,100,"imageW//hintsdark.bmp");
				iSetColor(154,154,154);
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
		
			}
			iShowBMP(615,40,"imageW//QUIT.bmp");
			iSetColor(255,255,255);
			//empty box for level 1
			iShowBMP(70,650,"imageW//emptybox.bmp");
			iShowBMP(140,650,"imageW//emptybox.bmp");
			iShowBMP(210,650,"imageW//emptybox.bmp");

			iShowBMP(490,650,"imageW//emptybox.bmp");
			iShowBMP(560,650,"imageW//emptybox.bmp");
			iShowBMP(630,650,"imageW//emptybox.bmp");

			iShowBMP(70,500,"imageW//emptybox.bmp");
			iShowBMP(140,500,"imageW//emptybox.bmp");

			//for the time

			iText(610,350,"Time left:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(time_min,string_time_min,10);
			itoa(time_sec,string_time_sec,10);
			iText(610,300,string_time_min,GLUT_BITMAP_TIMES_ROMAN_24);
			if(time_sec<60)iText(650,300,string_time_sec,GLUT_BITMAP_TIMES_ROMAN_24);
			else iText(650,300,"0",GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='I'&&word_level_0[WordRandom[Index]][2]=='P'){
			iShowBMP(0,0,"imageW//bg5i.bmp");
			//for the background and score
			iSetColor(500,500,500);
			iText(680,760,"Score: ",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(score,strscore,10);
			iText(750,760,strscore,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iText(20,750,"Level:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(level,str_level,10);
			iText(90,750,str_level,GLUT_BITMAP_TIMES_ROMAN_24);
	
			//for the current word displaying on the top of the screen
			iSetColor(78,58,25);
			iFilledRectangle(298,410,20*i,40);
			iSetColor(500,500,500);
			iText(300,420,arr,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iShowBMP(position_x.tip.p,position_y.tip.p,"imageW//P.bmp");
			iShowBMP(position_x.tip.i,position_y.tip.i,"imageW//I.bmp");
			iShowBMP(position_x.tip.t,position_y.tip.t,"imageW//T.bmp");
			iShowBMP(600,200,"imageW//COMPARE7.bmp");
			if(score>=15&&arr[0]=='\0'){
				iShowBMP(610,100,"imageW//hint.bmp");
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
			}
			else {
				iShowBMP(610,100,"imageW//hintsdark.bmp");
				iSetColor(154,154,154);
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
		
			}
			iShowBMP(615,40,"imageW//QUIT.bmp");
			iSetColor(255,255,255);
			//empty box for level 1
			iShowBMP(70,650,"imageW//emptybox.bmp");
			iShowBMP(140,650,"imageW//emptybox.bmp");
			iShowBMP(210,650,"imageW//emptybox.bmp");

			iShowBMP(490,650,"imageW//emptybox.bmp");
			iShowBMP(560,650,"imageW//emptybox.bmp");
			iShowBMP(630,650,"imageW//emptybox.bmp");

			iShowBMP(70,500,"imageW//emptybox.bmp");
			iShowBMP(140,500,"imageW//emptybox.bmp");

			//for the time

			iText(610,350,"Time left:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(time_min,string_time_min,10);
			itoa(time_sec,string_time_sec,10);
			iText(610,300,string_time_min,GLUT_BITMAP_TIMES_ROMAN_24);
			if(time_sec<60)iText(650,300,string_time_sec,GLUT_BITMAP_TIMES_ROMAN_24);
			else iText(650,300,"0",GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if(word_level_0[WordRandom[Index]][0]=='T'&&word_level_0[WordRandom[Index]][1]=='A'&&word_level_0[WordRandom[Index]][2]=='P'){
			iShowBMP(0,0,"imageW//bg5i.bmp");
			//for the background and score
			iSetColor(500,500,500);
			iText(680,760,"Score: ",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(score,strscore,10);
			iText(750,760,strscore,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iText(20,750,"Level:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(level,str_level,10);
			iText(90,750,str_level,GLUT_BITMAP_TIMES_ROMAN_24);
	
			//for the current word displaying on the top of the screen
			iSetColor(78,58,25);
			iFilledRectangle(298,410,20*i,40);
			iSetColor(500,500,500);
			iText(300,420,arr,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iShowBMP(position_x.tap.p,position_y.tap.p,"imageW//P.bmp");
			iShowBMP(position_x.tap.a,position_y.tap.a,"imageW//A.bmp");
			iShowBMP(position_x.tap.t,position_y.tap.t,"imageW//T.bmp");
			iShowBMP(600,200,"imageW//COMPARE7.bmp");
			if(score>=15&&arr[0]=='\0'){
				iShowBMP(610,100,"imageW//hint.bmp");
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
			}
			else {
				iShowBMP(610,100,"imageW//hintsdark.bmp");
				iSetColor(154,154,154);
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
		
			}
			iShowBMP(615,40,"imageW//QUIT.bmp");
			iSetColor(255,255,255);
			//empty box for level 1
			iShowBMP(70,650,"imageW//emptybox.bmp");
			iShowBMP(140,650,"imageW//emptybox.bmp");
			iShowBMP(210,650,"imageW//emptybox.bmp");

			iShowBMP(490,650,"imageW//emptybox.bmp");
			iShowBMP(560,650,"imageW//emptybox.bmp");
			iShowBMP(630,650,"imageW//emptybox.bmp");

			iShowBMP(70,500,"imageW//emptybox.bmp");
			iShowBMP(140,500,"imageW//emptybox.bmp");
			iShowBMP(210,500,"imageW//emptybox.bmp");

			//for the time

			iText(610,350,"Time left:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(time_min,string_time_min,10);
			itoa(time_sec,string_time_sec,10);
			iText(610,300,string_time_min,GLUT_BITMAP_TIMES_ROMAN_24);
			if(time_sec<60)iText(650,300,string_time_sec,GLUT_BITMAP_TIMES_ROMAN_24);
			else iText(650,300,"0",GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}
	if(level==1){
		if(word_level_1[WordRandom[Index]][0]=='W'&&word_level_1[WordRandom[Index]][1]=='O'&&word_level_1[WordRandom[Index]][2]=='R'&&word_level_1[WordRandom[Index]][3]=='D'){
			iShowBMP(0,0,"imageW//bg5i.bmp");
			//for the background and score
			iSetColor(500,500,500);
			iText(680,760,"Score: ",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(score,strscore,10);
			iText(750,760,strscore,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iText(20,750,"Level:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(level,str_level,10);
			iText(90,750,str_level,GLUT_BITMAP_TIMES_ROMAN_24);
	
			//for the current word displaying on the top of the screen
			iSetColor(78,58,25);
			iFilledRectangle(298,410,20*i,40);
			iSetColor(500,500,500);
			iText(300,420,arr,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iShowBMP(position_x.word.w,position_y.word.w,"imageW//W.bmp");
			iShowBMP(position_x.word.o,position_y.word.o,"imageW//O.bmp");
			iShowBMP(position_x.word.r,position_y.word.r,"imageW//R.bmp");
			iShowBMP(position_x.word.d,position_y.word.d,"imageW//D.bmp");
			iShowBMP(600,200,"imageW//COMPARE7.bmp");
			if(score>=15&&arr[0]=='\0'){
				iShowBMP(610,100,"imageW//hint.bmp");
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
			}
			else {
				iShowBMP(610,100,"imageW//hintsdark.bmp");
				iSetColor(154,154,154);
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
		
			}
			iShowBMP(615,40,"imageW//QUIT.bmp");
			iSetColor(255,255,255);
			//empty box for level 1
			iShowBMP(70,650,"imageW//emptybox.bmp");
			iShowBMP(140,650,"imageW//emptybox.bmp");
			iShowBMP(210,650,"imageW//emptybox.bmp");
			iShowBMP(280,650,"imageW//emptybox.bmp");

			iShowBMP(490,650,"imageW//emptybox.bmp");
			iShowBMP(560,650,"imageW//emptybox.bmp");
			iShowBMP(630,650,"imageW//emptybox.bmp");

			iShowBMP(70,500,"imageW//emptybox.bmp");
			iShowBMP(140,500,"imageW//emptybox.bmp");

			//for the time

			iText(610,350,"Time left:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(time_min,string_time_min,10);
			itoa(time_sec,string_time_sec,10);
			iText(610,300,string_time_min,GLUT_BITMAP_TIMES_ROMAN_24);
			if(time_sec<60)iText(650,300,string_time_sec,GLUT_BITMAP_TIMES_ROMAN_24);
			else iText(650,300,"0",GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if(word_level_1[WordRandom[Index]][0]=='D'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='N'&&word_level_1[WordRandom[Index]][3]=='Y'){
			iShowBMP(0,0,"imageW//bg5i.bmp");
			//for the background and score
			iSetColor(500,500,500);
			iText(680,760,"Score: ",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(score,strscore,10);
			iText(750,760,strscore,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iText(20,750,"Level:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(level,str_level,10);
			iText(90,750,str_level,GLUT_BITMAP_TIMES_ROMAN_24);
	
			//for the current word displaying on the top of the screen
			iSetColor(78,58,25);
			iFilledRectangle(298,410,20*i,40);
			iSetColor(500,500,500);
			iText(300,420,arr,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iShowBMP(position_x.deny.d,position_y.deny.d,"imageW//D.bmp");
			iShowBMP(position_x.deny.e,position_y.deny.e,"imageW//E.bmp");
			iShowBMP(position_x.deny.n,position_y.deny.n,"imageW//N.bmp");
			iShowBMP(position_x.deny.y,position_y.deny.y,"imageW//Y.bmp");
			iShowBMP(600,200,"imageW//COMPARE7.bmp");
			if(score>=15&&arr[0]=='\0'){
				iShowBMP(610,100,"imageW//hint.bmp");
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
			}
			else {
				iShowBMP(610,100,"imageW//hintsdark.bmp");
				iSetColor(154,154,154);
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
		
			}
			iShowBMP(615,40,"imageW//QUIT.bmp");
			iSetColor(255,255,255);
			//empty box for level 1
			iShowBMP(70,650,"imageW//emptybox.bmp");
			iShowBMP(140,650,"imageW//emptybox.bmp");
			iShowBMP(210,650,"imageW//emptybox.bmp");
			iShowBMP(280,650,"imageW//emptybox.bmp");

			iShowBMP(490,650,"imageW//emptybox.bmp");
			iShowBMP(560,650,"imageW//emptybox.bmp");
			iShowBMP(630,650,"imageW//emptybox.bmp");

			iShowBMP(70,500,"imageW//emptybox.bmp");
			iShowBMP(140,500,"imageW//emptybox.bmp");
			iShowBMP(210,500,"imageW//emptybox.bmp");

			iShowBMP(490,500,"imageW//emptybox.bmp");
			iShowBMP(560,500,"imageW//emptybox.bmp");
			iShowBMP(630,500,"imageW//emptybox.bmp");

			//for the time

			iText(610,350,"Time left:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(time_min,string_time_min,10);
			itoa(time_sec,string_time_sec,10);
			iText(610,300,string_time_min,GLUT_BITMAP_TIMES_ROMAN_24);
			if(time_sec<60)iText(650,300,string_time_sec,GLUT_BITMAP_TIMES_ROMAN_24);
			else iText(650,300,"0",GLUT_BITMAP_TIMES_ROMAN_24);
		}
	
		if(word_level_1[WordRandom[Index]][0]=='G'&&word_level_1[WordRandom[Index]][1]=='O'&&word_level_1[WordRandom[Index]][2]=='N'&&word_level_1[WordRandom[Index]][3]=='E'){
			iShowBMP(0,0,"imageW//bg5i.bmp");
			//bg5i stands for background image
			//for the background and score
			iSetColor(500,500,500);
			iText(680,760,"Score: ",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(score,strscore,10);
			iText(750,760,strscore,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iText(20,750,"Level:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(level,str_level,10);
			iText(90,750,str_level,GLUT_BITMAP_TIMES_ROMAN_24);
	
			//for the current word displaying on the top of the screen
			iSetColor(78,58,25);
			iFilledRectangle(298,410,20*i,40);
			iSetColor(500,500,500);
			iText(300,420,arr,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iShowBMP(position_x.gone.g,position_y.gone.g,"imageW//G.bmp");
			iShowBMP(position_x.gone.o,position_y.gone.o,"imageW//O.bmp");
			iShowBMP(position_x.gone.n,position_y.gone.n,"imageW//N.bmp");
			iShowBMP(position_x.gone.e,position_y.gone.e,"imageW//E.bmp");
			iShowBMP(600,200,"imageW//COMPARE7.bmp");
			if(score>=15&&arr[0]=='\0'){
				iShowBMP(610,100,"imageW//hint.bmp");
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
			}
			else {
				iShowBMP(610,100,"imageW//hintsdark.bmp");
				iSetColor(154,154,154);
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
		
			}
			iShowBMP(615,40,"imageW//QUIT.bmp");
			iSetColor(255,255,255);
			//empty box for level 1
			iShowBMP(70,650,"imageW//emptybox.bmp");
			iShowBMP(140,650,"imageW//emptybox.bmp");
			iShowBMP(210,650,"imageW//emptybox.bmp");
			iShowBMP(280,650,"imageW//emptybox.bmp");

			iShowBMP(490,650,"imageW//emptybox.bmp");
			iShowBMP(560,650,"imageW//emptybox.bmp");
			iShowBMP(630,650,"imageW//emptybox.bmp");

			iShowBMP(70,500,"imageW//emptybox.bmp");
			iShowBMP(140,500,"imageW//emptybox.bmp");
			iShowBMP(210,500,"imageW//emptybox.bmp");

			iShowBMP(490,500,"imageW//emptybox.bmp");
			iShowBMP(560,500,"imageW//emptybox.bmp");
			iShowBMP(630,500,"imageW//emptybox.bmp");

			//for the time

			iText(610,350,"Time left:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(time_min,string_time_min,10);
			itoa(time_sec,string_time_sec,10);
			iText(610,300,string_time_min,GLUT_BITMAP_TIMES_ROMAN_24);
			if(time_sec<60)iText(650,300,string_time_sec,GLUT_BITMAP_TIMES_ROMAN_24);
			else iText(650,300,"0",GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if(word_level_1[WordRandom[Index]][0]=='N'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='A'&&word_level_1[WordRandom[Index]][3]=='R'){
			iShowBMP(0,0,"imageW//bg5i.bmp");
			//bg5i stands for background image
			//for the background and score
			iSetColor(500,500,500);
			iText(680,760,"Score: ",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(score,strscore,10);
			iText(750,760,strscore,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iText(20,750,"Level:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(level,str_level,10);
			iText(90,750,str_level,GLUT_BITMAP_TIMES_ROMAN_24);
	
			//for the current word displaying on the top of the screen
			iSetColor(78,58,25);
			iFilledRectangle(298,410,20*i,40);
			iSetColor(500,500,500);
			iText(300,420,arr,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iShowBMP(position_x.earn.e,position_y.earn.e,"imageW//E.bmp");
			iShowBMP(position_x.earn.a,position_y.earn.a,"imageW//A.bmp");
			iShowBMP(position_x.earn.r,position_y.earn.r,"imageW//R.bmp");
			iShowBMP(position_x.earn.n,position_y.earn.n,"imageW//N.bmp");
			iShowBMP(600,200,"imageW//COMPARE7.bmp");
			if(score>=15&&arr[0]=='\0'){
				iShowBMP(610,100,"imageW//hint.bmp");
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
			}
			else {
				iShowBMP(610,100,"imageW//hintsdark.bmp");
				iSetColor(154,154,154);
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
		
			}
			iShowBMP(615,40,"imageW//QUIT.bmp");
			iSetColor(255,255,255);
			//empty box for level 1
			iShowBMP(70,650,"imageW//emptybox.bmp");
			iShowBMP(140,650,"imageW//emptybox.bmp");
			iShowBMP(210,650,"imageW//emptybox.bmp");
			iShowBMP(280,650,"imageW//emptybox.bmp");

			iShowBMP(490,650,"imageW//emptybox.bmp");
			iShowBMP(560,650,"imageW//emptybox.bmp");
			iShowBMP(630,650,"imageW//emptybox.bmp");
			iShowBMP(700,650,"imageW//emptybox.bmp");

			iShowBMP(70,500,"imageW//emptybox.bmp");
			iShowBMP(140,500,"imageW//emptybox.bmp");
			iShowBMP(210,500,"imageW//emptybox.bmp");

			iShowBMP(490,500,"imageW//emptybox.bmp");
			iShowBMP(560,500,"imageW//emptybox.bmp");
			iShowBMP(630,500,"imageW//emptybox.bmp");

			//for the time

			iText(610,350,"Time left:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(time_min,string_time_min,10);
			itoa(time_sec,string_time_sec,10);
			iText(610,300,string_time_min,GLUT_BITMAP_TIMES_ROMAN_24);
			if(time_sec<60)iText(650,300,string_time_sec,GLUT_BITMAP_TIMES_ROMAN_24);
			else iText(650,300,"0",GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if(word_level_1[WordRandom[Index]][0]=='H'&&word_level_1[WordRandom[Index]][1]=='E'&&word_level_1[WordRandom[Index]][2]=='A'&&word_level_1[WordRandom[Index]][3]=='T'){
			iShowBMP(0,0,"imageW//bg5i.bmp");
			//bg5i stands for background image
			//for the background and score
			iSetColor(500,500,500);
			iText(680,760,"Score: ",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(score,strscore,10);
			iText(750,760,strscore,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iText(20,750,"Level:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(level,str_level,10);
			iText(90,750,str_level,GLUT_BITMAP_TIMES_ROMAN_24);
	
			//for the current word displaying on the top of the screen
			iSetColor(78,58,25);
			iFilledRectangle(298,410,20*i,40);
			iSetColor(500,500,500);
			iText(300,420,arr,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iShowBMP(position_x.heat.h,position_y.heat.h,"imageW//H.bmp");
			iShowBMP(position_x.heat.e,position_y.heat.e,"imageW//E.bmp");
			iShowBMP(position_x.heat.a,position_y.heat.a,"imageW//A.bmp");
			iShowBMP(position_x.heat.t,position_y.heat.t,"imageW//T.bmp");
			iShowBMP(600,200,"imageW//COMPARE7.bmp");
			if(score>=15&&arr[0]=='\0'){
				iShowBMP(610,100,"imageW//hint.bmp");
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
			}
			else {
				iShowBMP(610,100,"imageW//hintsdark.bmp");
				iSetColor(154,154,154);
				iText(645,104,"15",GLUT_BITMAP_HELVETICA_18);
		
			}
			iShowBMP(615,40,"imageW//QUIT.bmp");
			iSetColor(255,255,255);
			//empty box for level 1
			iShowBMP(70,650,"imageW//emptybox.bmp");
			iShowBMP(140,650,"imageW//emptybox.bmp");
			iShowBMP(210,650,"imageW//emptybox.bmp");
			iShowBMP(280,650,"imageW//emptybox.bmp");

			iShowBMP(490,650,"imageW//emptybox.bmp");
			iShowBMP(560,650,"imageW//emptybox.bmp");
			iShowBMP(630,650,"imageW//emptybox.bmp");
		//	iShowBMP(700,650,"imageW//emptybox.bmp");

			iShowBMP(70,500,"imageW//emptybox.bmp");
			iShowBMP(140,500,"imageW//emptybox.bmp");
			iShowBMP(210,500,"imageW//emptybox.bmp");

			iShowBMP(490,500,"imageW//emptybox.bmp");
			iShowBMP(560,500,"imageW//emptybox.bmp");
			iShowBMP(630,500,"imageW//emptybox.bmp");

			//for the time

			iText(610,350,"Time left:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(time_min,string_time_min,10);
			itoa(time_sec,string_time_sec,10);
			iText(610,300,string_time_min,GLUT_BITMAP_TIMES_ROMAN_24);
			if(time_sec<60)iText(650,300,string_time_sec,GLUT_BITMAP_TIMES_ROMAN_24);
			else iText(650,300,"0",GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}
	if(level==2){
		if(word_level_2[WordRandom[Index]][0]=='D'&&word_level_2[WordRandom[Index]][1]=='R'&&word_level_2[WordRandom[Index]][2]=='E'&&word_level_2[WordRandom[Index]][3]=='A'&&word_level_2[WordRandom[Index]][4]=='M'){
			iShowBMP(0,0,"imageW//bg5i.bmp");
			//bg5i stands for background image
			//for the background and score
			iSetColor(500,500,500);
			iText(680,760,"Score: ",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(score,strscore,10);
			iText(750,760,strscore,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iText(20,750,"Level:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(level,str_level,10);
			iText(90,750,str_level,GLUT_BITMAP_TIMES_ROMAN_24);
	
			//for the current word displaying on the top of the screen
			iSetColor(78,58,25);
			iFilledRectangle(298,410,20*i,40);
			iSetColor(500,500,500);
			iText(300,420,arr,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iShowBMP(position_x.dream.d,position_y.dream.d,"imageW//D.bmp");
			iShowBMP(position_x.dream.r,position_y.dream.r,"imageW//R.bmp");
			iShowBMP(position_x.dream.e,position_y.dream.e,"imageW//E.bmp");
			iShowBMP(position_x.dream.a,position_y.dream.a,"imageW//A.bmp");
			iShowBMP(position_x.dream.m,position_y.dream.m,"imageW//M.bmp");
			iShowBMP(600,200,"imageW//COMPARE7.bmp");
			iShowBMP(615,40,"imageW//QUIT.bmp");
			iSetColor(255,255,255);
			//empty box for level 1
			iShowBMP(70,650,"imageW//emptybox.bmp");
			iShowBMP(140,650,"imageW//emptybox.bmp");
			iShowBMP(210,650,"imageW//emptybox.bmp");
			iShowBMP(280,650,"imageW//emptybox.bmp");

			iShowBMP(420,650,"imageW//emptybox.bmp");
			iShowBMP(490,650,"imageW//emptybox.bmp");
			iShowBMP(560,650,"imageW//emptybox.bmp");
			iShowBMP(630,650,"imageW//emptybox.bmp");

			iShowBMP(70,550,"imageW//emptybox.bmp");
			iShowBMP(140,550,"imageW//emptybox.bmp");
			iShowBMP(210,550,"imageW//emptybox.bmp");
			iShowBMP(280,550,"imageW//emptybox.bmp");

			iShowBMP(420,550,"imageW//emptybox.bmp");
			iShowBMP(490,550,"imageW//emptybox.bmp");
			iShowBMP(560,550,"imageW//emptybox.bmp");
			iShowBMP(630,550,"imageW//emptybox.bmp");

			iShowBMP(70,450,"imageW//emptybox.bmp");
			iShowBMP(140,450,"imageW//emptybox.bmp");
			iShowBMP(210,450,"imageW//emptybox.bmp");
			iShowBMP(280,450,"imageW//emptybox.bmp");

			iShowBMP(420,450,"imageW//emptybox.bmp");
			iShowBMP(490,450,"imageW//emptybox.bmp");
			iShowBMP(560,450,"imageW//emptybox.bmp");
			iShowBMP(630,450,"imageW//emptybox.bmp");
			iShowBMP(700,450,"imageW//emptybox.bmp");
			//for the time

			iText(610,350,"Time left:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(time_min,string_time_min,10);
			itoa(time_sec,string_time_sec,10);
			iText(610,300,string_time_min,GLUT_BITMAP_TIMES_ROMAN_24);
			if(time_sec<60)iText(650,300,string_time_sec,GLUT_BITMAP_TIMES_ROMAN_24);
			else iText(650,300,"0",GLUT_BITMAP_TIMES_ROMAN_24);
	
		}
		if(word_level_2[WordRandom[Index]][0]=='S'&&word_level_2[WordRandom[Index]][1]=='W'&&word_level_2[WordRandom[Index]][2]=='I'&&word_level_2[WordRandom[Index]][3]=='N'&&word_level_2[WordRandom[Index]][4]=='G'){
			iShowBMP(0,0,"imageW//bg5i.bmp");
			//bg5i stands for background image
			//for the background and score
			iSetColor(500,500,500);
			iText(680,760,"Score: ",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(score,strscore,10);
			iText(750,760,strscore,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iText(20,750,"Level:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(level,str_level,10);
			iText(90,750,str_level,GLUT_BITMAP_TIMES_ROMAN_24);
	
			//for the current word displaying on the top of the screen
			iSetColor(78,58,25);
			iFilledRectangle(298,410,20*i,40);
			iSetColor(500,500,500);
			iText(300,420,arr,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iShowBMP(position_x.swing.s,position_y.swing.s,"imageW//S.bmp");
			iShowBMP(position_x.swing.w,position_y.swing.w,"imageW//W.bmp");
			iShowBMP(position_x.swing.i,position_y.swing.i,"imageW//I.bmp");
			iShowBMP(position_x.swing.n,position_y.swing.n,"imageW//N.bmp");
			iShowBMP(position_x.swing.g,position_y.swing.g,"imageW//G.bmp");
			iShowBMP(600,200,"imageW//COMPARE7.bmp");
			iShowBMP(615,40,"imageW//QUIT.bmp");
			iSetColor(255,255,255);
			//empty box for level 1
			iShowBMP(70,650,"imageW//emptybox.bmp");
			iShowBMP(140,650,"imageW//emptybox.bmp");
			iShowBMP(210,650,"imageW//emptybox.bmp");
			iShowBMP(280,650,"imageW//emptybox.bmp");

			iShowBMP(420,650,"imageW//emptybox.bmp");
			iShowBMP(490,650,"imageW//emptybox.bmp");
			iShowBMP(560,650,"imageW//emptybox.bmp");
			iShowBMP(630,650,"imageW//emptybox.bmp");

			iShowBMP(70,500,"imageW//emptybox.bmp");
			iShowBMP(140,500,"imageW//emptybox.bmp");
			iShowBMP(210,500,"imageW//emptybox.bmp");
			iShowBMP(280,500,"imageW//emptybox.bmp");

			iShowBMP(420,500,"imageW//emptybox.bmp");
			iShowBMP(490,500,"imageW//emptybox.bmp");
			iShowBMP(560,500,"imageW//emptybox.bmp");
			iShowBMP(630,500,"imageW//emptybox.bmp");
			iShowBMP(700,500,"imageW//emptybox.bmp");
			//iShowBMP(700,550,"imageW//emptybox.bmp");
			//for the time

			iText(610,350,"Time left:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(time_min,string_time_min,10);
			itoa(time_sec,string_time_sec,10);
			iText(610,300,string_time_min,GLUT_BITMAP_TIMES_ROMAN_24);
			if(time_sec<60)iText(650,300,string_time_sec,GLUT_BITMAP_TIMES_ROMAN_24);
			else iText(650,300,"0",GLUT_BITMAP_TIMES_ROMAN_24);
	
		}
		if(word_level_2[WordRandom[Index]][0]=='W'&&word_level_2[WordRandom[Index]][1]=='R'&&word_level_2[WordRandom[Index]][2]=='O'&&word_level_2[WordRandom[Index]][3]=='N'&&word_level_2[WordRandom[Index]][4]=='G'){
			iShowBMP(0,0,"imageW//bg5i.bmp");
			//bg5i stands for background image
			//for the background and score
			iSetColor(500,500,500);
			iText(680,760,"Score: ",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(score,strscore,10);
			iText(750,760,strscore,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iText(20,750,"Level:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(level,str_level,10);
			iText(90,750,str_level,GLUT_BITMAP_TIMES_ROMAN_24);
	
			//for the current word displaying on the top of the screen
			iSetColor(78,58,25);
			iFilledRectangle(298,410,20*i,40);
			iSetColor(500,500,500);
			iText(300,420,arr,GLUT_BITMAP_TIMES_ROMAN_24);
	
			iShowBMP(position_x.wrong.w,position_y.wrong.w,"imageW//W.bmp");
			iShowBMP(position_x.wrong.r,position_y.wrong.r,"imageW//R.bmp");
			iShowBMP(position_x.wrong.o,position_y.wrong.o,"imageW//O.bmp");
			iShowBMP(position_x.wrong.n,position_y.wrong.n,"imageW//N.bmp");
			iShowBMP(position_x.wrong.g,position_y.wrong.g,"imageW//G.bmp");
			iShowBMP(600,200,"imageW//COMPARE7.bmp");
			iShowBMP(615,40,"imageW//QUIT.bmp");
			
			iSetColor(255,255,255);
			//empty box for level 1
			iShowBMP(70,650,"imageW//emptybox.bmp");
			iShowBMP(140,650,"imageW//emptybox.bmp");
			iShowBMP(210,650,"imageW//emptybox.bmp");
			//iShowBMP(280,650,"imageW//emptybox.bmp");

			iShowBMP(420,650,"imageW//emptybox.bmp");
			iShowBMP(490,650,"imageW//emptybox.bmp");
			iShowBMP(560,650,"imageW//emptybox.bmp");
			iShowBMP(630,650,"imageW//emptybox.bmp");

			iShowBMP(70,550,"imageW//emptybox.bmp");
			iShowBMP(140,550,"imageW//emptybox.bmp");
			iShowBMP(210,550,"imageW//emptybox.bmp");
			//iShowBMP(280,550,"imageW//emptybox.bmp");

			iShowBMP(420,550,"imageW//emptybox.bmp");
			iShowBMP(490,550,"imageW//emptybox.bmp");
			iShowBMP(560,550,"imageW//emptybox.bmp");
			iShowBMP(630,550,"imageW//emptybox.bmp");

			iShowBMP(70,450,"imageW//emptybox.bmp");
			iShowBMP(140,450,"imageW//emptybox.bmp");
			iShowBMP(210,450,"imageW//emptybox.bmp");
			iShowBMP(280,450,"imageW//emptybox.bmp");

			iShowBMP(420,450,"imageW//emptybox.bmp");
			iShowBMP(490,450,"imageW//emptybox.bmp");
			iShowBMP(560,450,"imageW//emptybox.bmp");
			iShowBMP(630,450,"imageW//emptybox.bmp");
			iShowBMP(700,450,"imageW//emptybox.bmp");
			//iShowBMP(700,550,"imageW//emptybox.bmp");
			//for the time

			iText(610,350,"Time left:",GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(time_min,string_time_min,10);
			itoa(time_sec,string_time_sec,10);
			iText(610,300,string_time_min,GLUT_BITMAP_TIMES_ROMAN_24);
			if(time_sec<60)iText(650,300,string_time_sec,GLUT_BITMAP_TIMES_ROMAN_24);
			else iText(650,300,"0",GLUT_BITMAP_TIMES_ROMAN_24);
	
		}
	}
}