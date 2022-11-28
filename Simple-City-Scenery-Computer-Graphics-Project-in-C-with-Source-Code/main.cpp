#include<graphics.h>
#include<iostream>
#include <stdio.h>
#include <conio.h>
#include <dos.h>

using namespace std;

int main()
{
	initwindow(1300,700);

	
	/////////////////
	// Backround
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(200,40,WHITE);
	
	
	
	//////////////
	// Rood working
	line(0,500,1350,500);
	setcolor(WHITE);
	line(50,610,100,610);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(350,550,WHITE);
	line(200,610,250,610);
	line(350,610,400,610);
	line(450,610,500,610);
	line(550,610,600,610);
	line(650,610,700,610);
	line(750,610,800,610);
	line(850,610,900,610);
	line(950,610,1000,610);
	line(1050,610,1100,610);
	line(1150,610,1200,610);
	
	
	//////////////
	/// Rood cros
	line(350,510,400,510);
	line(350,520,400,520);
	line(350,530,400,530);
	line(350,540,400,540);
	line(350,550,400,550);
	line(350,560,400,560);
	line(350,570,400,570);
	line(350,580,400,580);
	line(350,590,400,590);
	line(350,600,400,600);
	line(350,610,400,610);
	line(350,620,400,620);
	line(350,630,400,630);
	line(350,640,400,640);
	line(350,650,400,650);
	line(350,660,400,660);
	line(350,670,400,670);
	line(350,680,400,680);
	
	
	
	
	/////////////////////////
	// Pahar drow 
	line(0,500,280,260);
	line(280,260,640,500);
	line(415,350,710,220);
	line(710,220,1060,500);
	line(1030,480,1300,250);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(50,480,WHITE);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(650,350,WHITE);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(1180,420,WHITE);
		
		
		
	//////////////////////////
	// House or Tower Working
	rectangle(80,190,180,500);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(130,250,WHITE);
	floodfill(130,430,WHITE);
	line(80,190,110,150);
	line(180,190,150,150);
	line(110,150,150,150);
	rectangle(90,210,110,240);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(100,220,WHITE);
	
	outtextxy(110,170,"Tower");
	
	rectangle(90,260,110,290);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(100,265,WHITE);
	
	rectangle(90,330,110,360);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(100,335,WHITE);
	
    rectangle(90,380,110,410);
    setfillstyle(SOLID_FILL,WHITE);
	floodfill(100,385,WHITE);
	
    rectangle(150,210,170,240);
    setfillstyle(SOLID_FILL,WHITE);
	floodfill(155,215,WHITE);
	
	rectangle(150,260,170,290);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(155,265,WHITE);
	
	rectangle(150,330,170,360);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(155,335,WHITE);
	
	rectangle(150,380,170,410);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(155,385,WHITE);
	
	rectangle(110,440,155,500);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(115,445,WHITE);
	
	
	
	////////////////////////////////
	// House 2 nd 
	outtextxy(330,80,"Hospital");
	
	rectangle(300,100,425,500);
	setfillstyle(SOLID_FILL,LIGHTMAGENTA);
	floodfill(350,250,WHITE);
	floodfill(350,400,WHITE);
	
	rectangle(310,120,340,170);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(311,121,WHITE);
	
	rectangle(310,190,340,240);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(311,191,WHITE);
	
	rectangle(310,260,340,310);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(311,261,WHITE);
	floodfill(311,285,WHITE);
	
	rectangle(310,330,340,380);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(311,331,WHITE);
	
	rectangle(310,400,340,450);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(311,401,WHITE);
	
	rectangle(380,120,410,170);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(381,121,WHITE);
	
	rectangle(380,190,410,240);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(381,191,WHITE);
	
	rectangle(380,260,410,310);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(381,261,WHITE);
	
	rectangle(380,330,410,380);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(381,331,WHITE);
	floodfill(405,335,WHITE);
	
	rectangle(380,400,410,450);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(381,401,WHITE);
	
	rectangle(340,460,390,500);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(341,461,WHITE);
	
	
	
	//////////////////////////
	// House 3rd
	outtextxy(520,80,"University");
	rectangle(500,100,625,500);
	setfillstyle(SOLID_FILL,CYAN);
	floodfill(550,250,WHITE);
	floodfill(550,350,WHITE);
	floodfill(510,480,WHITE);
	
	rectangle(510,120,540,170);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(511,121,WHITE);
	
	rectangle(510,190,540,240);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(511,191,WHITE);
	
	rectangle(510,260,540,310);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(511,261,WHITE);
	floodfill(535,300,WHITE);
	
	rectangle(510,330,540,380);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(511,331,WHITE);
	
	rectangle(510,400,540,450);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(511,401,WHITE);
	floodfill(530,440,WHITE);
	
	rectangle(580,120,610,170);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(581,121,WHITE);
	
	rectangle(580,190,610,240);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(581,191,WHITE);
	
	rectangle(580,260,610,310);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(581,261,WHITE);
	floodfill(600,300,WHITE);
	
	rectangle(580,330,610,380);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(581,331,WHITE);
	
	rectangle(580,400,610,450);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(581,401,WHITE);
	
	rectangle(530,460,605,500);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(531,461,WHITE);
	floodfill(600,465,WHITE);
	
	
	
	///////////////////////////
	// Tower 
	rectangle(730,380,770,500);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(750,450,WHITE);
	
	rectangle(740,390,760,420);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(741,391,WHITE);
	
	rectangle(740,430,760,460);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(741,431,WHITE);
	
	rectangle(770,280,810,500);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(775,450,WHITE);
	
	rectangle(780,290,800,320);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(781,291,WHITE);
	
	rectangle(780,330,800,360);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(781,331,WHITE);
	
	rectangle(780,370,800,400);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(781,371,WHITE);
	
	rectangle(780,410,800,440);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(781,411,WHITE);  
	
	rectangle(780,450,800,480);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(781,451,WHITE);
	
	rectangle(810,220,870,500);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(815,450,WHITE);
	floodfill(815,290,WHITE);
	
	rectangle(820,230,860,260);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(821,231,WHITE);
	
	rectangle(820,270,860,300);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(821,271,WHITE);
	
	rectangle(820,310,860,340);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(821,311,WHITE);
	floodfill(850,315,WHITE);
	
	rectangle(820,350,860,380);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(821,351,WHITE);
	
	rectangle(820,390,860,420);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(821,391,WHITE);
	
	rectangle(820,430,860,460);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(821,431,WHITE);
	
	rectangle(870,130,920,500);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(875,450,WHITE);
	floodfill(875,290,WHITE);
	
	rectangle(880,140,910,170);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(881,141,WHITE);
	
	rectangle(880,180,910,210);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(881,181,WHITE);
	
	rectangle(880,220,910,250);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(881,221,WHITE);
	
	rectangle(880,260,910,290);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(881,261,WHITE);
	
	rectangle(880,300,910,330);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(881,301,WHITE);
	
	rectangle(880,340,910,370);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(881,341,WHITE);
	floodfill(885,365,WHITE);
	
	rectangle(880,380,910,410);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(881,381,WHITE);
	
	rectangle(880,420,910,450);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(881,421,WHITE);
	
	
	rectangle(920,230,980,500);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(925,450,WHITE);
	floodfill(925,290,WHITE);
	
	rectangle(930,240,970,270);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(931,241,WHITE);
	
	rectangle(930,280,970,310);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(931,281,WHITE);
	
	rectangle(930,320,970,350);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(931,321,WHITE);
	
	rectangle(930,360,970,390);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(931,361,WHITE);
	
	rectangle(930,400,970,430);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(931,401,WHITE);
	floodfill(960,410,WHITE);
	
	rectangle(930,440,970,470);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(931,441,WHITE);
	
	rectangle(980,370,1020,500);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(985,450,WHITE);
	floodfill(1000,420,WHITE);
	
	rectangle(990,380,1010,410);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(991,381,WHITE);
	
	rectangle(990,420,1010,450);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(991,421,WHITE);
	
	
	
	////////////////////////////
	// Signal tower
	rectangle(1220,370,1260,500);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(1225,450,WHITE);
	line(1180,370,1300,370);
	line(1180,370,1200,310);
	line(1300,370,1280,310);
	line(1200,310,1280,310);
	line(1235,310,1235,250);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(1225,340,WHITE);
	floodfill(1205,315,WHITE);
	circle(1235,240,20);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(1236,250,WHITE);
	
	
	
	///
	// bord 
	rectangle(1095,425,1180,450);
	setfillstyle(SOLID_FILL,RED);
	floodfill(1100,430,WHITE);
	
    rectangle(1135,450,1145,500);
    setfillstyle(SOLID_FILL,BLACK);
	floodfill(1136,451,WHITE);
	
    outtextxy(1100,432,"Dhaka City");
	
	
	
	// Sun working
	circle(1230,75,50);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(1235,80,WHITE);
	
	
	
		
	////////////////////////
	// Bus and car working 
	rectangle(50,520,250,590);
	setfillstyle(SOLID_FILL,RED);
	floodfill(51,521,WHITE);
	
	rectangle(80,540,100,555);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(81,542,WHITE);
	
	rectangle(130,540,160,555);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(135,545,WHITE);
	
	rectangle(190,540,210,555);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(195,545,WHITE);
	
	rectangle(220,540,240,590);
	circle(105,590,20);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(110,595,WHITE);
	floodfill(110,580,WHITE);
	
	circle(190,590,20);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(190,595,WHITE);
	floodfill(195,580,WHITE);
	
	
	
		
	/////////////////////
    // Car Working
	rectangle(600,530,700,575);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(601,531,WHITE);
	circle(630,580,15);
	circle(690,580,15);
	line(700,530,750,560);
	line(700,575,750,575);
	line(750,575,750,560);
	
	
	   
	   
	///////////////////////////
	// Sky  1st 
	circle(200,70,25);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(200,70,WHITE);
	circle(235,60,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(235,60,WHITE);
	circle(235,80,35);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(236,81,WHITE);
	floodfill(235,90,WHITE);
	circle(260,70,35);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(261,70,WHITE);
	floodfill(280,70,WHITE);
	floodfill(265,70,WHITE);
	
	    
	    
	    
	    
	/////////////////////////
	// sky 2nd 
	circle(700,90,25);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(700,90,WHITE);
	circle(730,65,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(730,65,WHITE);
	circle(730,100,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(730,100,WHITE);
	circle(760,90,35);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(760,90,WHITE);
	
	   
	   
	   
	////////////////////
	// sky 3rd
	circle(1035,165,25);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(1035,165,WHITE);
	circle(1055,160,25);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(1060,140,WHITE);
	circle(1055,190,25);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(1055,190,WHITE);
	circle(1090,175,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(1090,170,WHITE);
	
	    
	    
	    
	/////////////////////
	// Bird
	setcolor(BLACK);
	line(870,90,890,100);
	line(890,100,910,90);
	line(920,90,940,100);
	line(940,100,960,90);
	line(970,90,990,100);
	line(990,100,1010,90);
	line(900,60,920,70);
	line(920,70,940,60);
	line(950,60,970,70);
	line(970,70,990,60);
	
	line(50,50,70,60);
	line(70,60,90,50);
	line(100,50,120,60);
	line(120,60,140,50);
	line(30,90,50,100);
	line(50,100,70,90);
	line(80,90,100,100);
	line(100,100,120,90);
	

	
	
	////////////////
	// Human
	circle(250,450,10);
	line(250,460,250,480);
	line(250,460,240,480);
	line(250,460,260,480);
	line(250,480,240,500);
	line(250,480,260,500);
	
	circle(280,450,10);
	line(280,460,280,480);
	line(280,460,270,480);
	line(280,460,290,480);
	line(280,480,270,500);
	line(280,480,290,500);
	
	circle(460,450,10);
	line(460,460,460,480);
	line(460,460,450,480);
	line(460,460,470,480);
	line(460,480,450,500);
	line(460,480,470,500);
	
	circle(670,450,10);
	line(670,460,670,480);
	line(670,460,660,480);
	line(670,460,680,480);
	line(670,480,660,500);
	line(670,480,680,500);
	
	circle(700,450,10);
	line(700,460,700,480);
	line(700,460,690,480);
	line(700,460,710,480);
	line(700,480,690,500);
	line(700,480,710,500);

		
	getch();
	
}

