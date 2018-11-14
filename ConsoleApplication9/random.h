# include "iGraphics.h"
#define WrongWord iText(20,350,"No word found",GLUT_BITMAP_TIMES_ROMAN_24);
#define ExtraWord iText(20,350,"Extra Word",GLUT_BITMAP_TIMES_ROMAN_24);
#define MoreThanOnce iText(20,400,"You cannot use a ",GLUT_BITMAP_TIMES_ROMAN_24);iText(20,350,"alphabet more than ",GLUT_BITMAP_TIMES_ROMAN_24);iText(20,300,"once",GLUT_BITMAP_TIMES_ROMAN_24);
#define DiscoveredWord iText(20,400,"You have already ",GLUT_BITMAP_TIMES_ROMAN_24);iText(20,350,"discovered this word",GLUT_BITMAP_TIMES_ROMAN_24);
#define DiscoveredBonusWord iText(20,400,"You have already",GLUT_BITMAP_TIMES_ROMAN_24);iText(20,350,"discovered this",GLUT_BITMAP_TIMES_ROMAN_24);iText(20,300,"bonus word",GLUT_BITMAP_TIMES_ROMAN_24);
#define WidthOfImage 60
#define HeightOfImage 60
# define ChestOpen 1
#define ChestClose 0
#define LinkMode 10
#define MoleMode 20
int i=0;
char arr[100];
int level0_bat=0,level0_tab=0,level0_at=0;
int level1_word=0,level1_row=0,level1_or=0,level1_do=0,level1_rod=0;
int FlagNoWord=0;
int FlagExtraWord=0;
int flag=0;
int score=1000;
char strscore[1000];
int countW=0,countO=0,countR=0,countD=0,countB=0,countA=0,countT=0;
int flagW_MoreThanOnce=0,flagO_MoreThanOnce=0,flagR_MoreThanOnce=0,flagD_MoreThanOnce=0,flagB_MoreThanOnce=0,flagA_MoreThanOnce=0,flagT_MoreThanOnce=0;
double xa[100],ya[100];
int level_0=0;
int level1_word_score_flag=0,level1_or_score_flag=0,level1_do_score_flag=0,level1_row_score_flag=0,level1_rod_score_flag=0;
int level0_bat_score_flag=0,level0_tab_score_flag=0,level0_at_score_flag=0;
int level_1_flag_discovered_word_WORD=0,level_1_flag_discovered_word_OR=0,level_1_flag_discovered_word_DO=0,level_1_flag_discovered_word_ROW=0,level_1_flag_discovered_word_ROD=0;
int level_0_flag_discovered_word_BAT=0,level_0_flag_discovered_word_TAB=0,level_0_flag_discovered_word_AT=0;
int CountDiscoveredWord=0,CountDiscoveredBonusWord=0;

int level_0_CountHints_TAB=0,level_0_CountHints_BAT=0,level_0_CountHints_AT=0;

int l1_CountHints_WORD=0,l1_CountHints_OR=0,l1_CountHints_ROW=0;

int level_0_hints_score_flag_t_of_tab=0,level_0_hints_score_flag_a_of_tab=0,level_0_hints_score_flag_b_of_tab=0,level_0_hints_score_flag_t_of_bat=0,level_0_hints_score_flag_a_of_bat=0,level_0_hints_score_flag_b_of_bat=0,level_0_hints_score_flag_t_of_at=0,level_0_hints_score_flag_a_of_at=0;

int l1_hints_score_flag_w_of_word=0,l1_hints_score_flag_o_of_word=0,l1_hints_score_flag_r_of_word=0,l1_hints_score_flag_d_of_word=0,l1_hints_score_flag_r_of_row=0,l1_hints_score_flag_o_of_row=0,l1_hints_score_flag_w_of_row=0,l1_hints_score_flag_o_of_or=0,l1_hints_score_flag_r_of_or=0;

int l1_hints_image_flag_w_of_word=0,l1_hints_image_flag_o_of_word=0,l1_hints_image_flag_r_of_word=0,l1_hints_image_flag_d_of_word=0,l1_hints_image_flag_r_of_row=0,l1_hints_image_flag_o_of_row=0,l1_hints_image_flag_w_of_row=0,l1_hints_image_flag_o_of_or=0,l1_hints_image_flag_r_of_or=0;

int level_0_hints_image_flag_t_of_tab=0,level_0_hints_image_flag_a_of_tab=0,level_0_hints_image_flag_b_of_tab=0,level_0_hints_image_flag_t_of_bat=0,level_0_hints_image_flag_a_of_bat=0,level_0_hints_image_flag_b_of_bat=0,level_0_hints_image_flag_t_of_at=0,level_0_hints_image_flag_a_of_at=0;
char string_time_sec[1000],string_time_min[1000];
int level1;
int modechest=ChestClose;
int time_sec=60,time_min=5;
int level=0;char str_level[1000];
int GameMode=LinkMode;
//char image_tab[3][20]={"imageW//T.bmp","imageW//A.bmp","imageB//W.bmp"};
char word_level_0[7][4]={"FIT","BAT","MAD","ROB","TAP","TIP","SIN"};
//int index_first_image,index_second_image,index_third_image;
int index_tab[3];


struct RandomWord{
	int easy;
	int medium;
	int hard;
	
};
RandomWord word1,word2,word3,word4,word5,word6;
/*struct bar{
	int easy;
	int medium;
	int hard;
}bat,at,tab;
bar bat.easy=0;
*/
struct Alphabet{
	int a;int b;int c;int d;int e;int f;int g;int h;int i;int j;int k;int l;int m;int n;int o;int p;int q;int r;int s;int t;int u;int v;int w;int x;int y;int z;

};
struct WordAlphabetPosition{
	struct Alphabet tab;
}position_x,position_y;
 
struct IndexImage{
	int index_image;
}first,second,third,fourth,fifth;

void word_image_random(){
	if(level==0){
	if(word_level_0[word1.easy][0]=='B'&&word_level_0[word1.easy][1]=='A'&&word_level_0[word1.easy][2]=='T'){	
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
	}
}