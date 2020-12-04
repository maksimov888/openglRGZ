#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>
#include <stdlib.h>
#define SIZE 6
#define LP 0.4
#define M M_PI

  void DRAWING(double x,double y,double r,double a);
  void DARER(double x, double y, double r, double a, int d);

int main(){
  
  int graphdriver = DETECT, gmode, errorcode;
  initgraph(&graphdriver,&gmode,"c:\\bgi");
  DARER(320, 260, 95, M_PI/10, 3);

 getch();
 return 0;
}
void DRAWING(double x,double y,double r,double a) {
   double m1[SIZE];
   double m2[SIZE];

     for(int i = 0; i < SIZE; i++){
	m1[i] = r*cos(a+i*M_PI*LP);
	m2[i] = r*sin(a+i*M_PI*LP);
      }

     for(i = 0; i < SIZE-1; i++){
       setcolor(11);
       line(x+m1[i],y+m2[i],x+m1[i+1],y+m2[i+1]);
      }
    }

void DARER(double x, double y, double r, double a, int d) {
    double v;

    v = 2*r*cos(M/5);
      for(int i = 0; i < SIZE; i++){
	DRAWING(x-v*cos(a+i*M*LP),y-v*sin(a+i*M*LP),r,a+M+i*M*LP);
	   if (d > 0)
	     DARER(x-v*cos(a+i*M*LP),y-
	      v*sin(a+i*M*LP),r/(2*cos(M/5)+1),a+M+(2*i+1)*M*2/10, d-1);
	  }
	}
