//Created by : Yash Mahesh Khalkar
//Write C++ program to implement Cohen Southerland line clipping algorithm.#include<iostream>



#include<graphics.h>
void line1(int,int,int,int);
int main(){
	int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    line(50,50,200,50);
	line(200,50,200,150);
	line(200,150,50,150);
	line(50,150,50,50);
	delay(500);
	line1(0,0,150,200);
	delay(2000);
    closegraph();
    return 0;
}
void line1(int a1, int b1,int a2, int b2){
	int l;
	int diffx = a2-a1;
	int diffy = b2-b1;
	diffx>diffy?l=diffx:l=diffy;
	int dx=a2/diffx,dy=b2/diffy;
	int x=a1,y=b1;
	for(int i = 0;i<l;i++){
		if(x>=50&&x<=200&&y>=50&&y<=150){
			putpixel(x,y,WHITE);
			x+=dx;
			y+=dy;
		}else{
			putpixel(x,y,RED);
			x+=dx;
			y+=dy;
		}
	}
}
