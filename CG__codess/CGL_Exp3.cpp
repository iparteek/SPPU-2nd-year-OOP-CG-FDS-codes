/*#include <iostream>
#include <graphics.h>
using namespace std;
class DDA
{
int x1,y1,x2,y2;
public:
DDA(int xx1,int yy1,int xx2,int yy2)
{
x1=xx1;
y1=yy1;
x2=xx2;
y2=yy2;
}
void read(){
cout<<"Enter x and y coordinates of start point:: ";
cin>>x1>>y1;
cout<<"Enter x and y coordinates of end point:: ";
cin>>x2>>y2;
}
void drawline();
};
void DDA::drawline()
{
float dx=x2-x1;
float dy=y2-y1;
float length;
if (abs(dx)>=abs(dy))
length=abs(dx);
else
length = abs(dy);
float xi=dx/length;
float yi=dy/length;
float x=x1;
float y=y1;
for(int i=1;i<=length;i++)
{
putpixel(x,y,WHITE);
x+=xi;
y+=yi;
}
}
class BCA
{
int r,xc,yc;
public:
BCA(int rr,int x1, int y1)
{
r=rr;
xc=x1;
yc=y1;
}
void read()
{
cout <<"Enter the radius: ";
cin >> r;
cout <<"Enter the x and y coordinates: ";
cin >> xc>>yc;
}
void drawCircle();
void plot8WaySymmetry(int,int);
};
void BCA::plot8WaySymmetry(int x,int y)
{
putpixel(x+xc,y+yc,WHITE);
putpixel(y+yc,x+xc,WHITE);
putpixel(xc-x,y+yc,WHITE);
putpixel(y+yc,xc-x,WHITE);
putpixel(x+xc,yc-y,WHITE);
putpixel(yc-y,x+xc,WHITE);
putpixel(xc-x,yc-y,WHITE);
putpixel(yc-y,xc-x,WHITE);
}
void BCA::drawCircle(){
int x=0,y=r;
int d=3-2*r;
putpixel(xc,yc,WHITE);
while(x<=y){
if (d<=0){
d+=4*x+6;
x++;
}
else{
d+=4*(x-y)+10;
x++;
y--;
}
plot8WaySymmetry(x,y);
}
}
int main()
{
int gd = DETECT, gm;
initgraph(&gd,&gm,NULL);
// To draw first shape
BCA circle1(50,120,120),circle2(100,120,120);
DDA line1(34,170,120,20),line2(206,170,120,20),line3(206,170,30,170);
circle1.drawCircle();
circle2.drawCircle();
line1.drawline();
line2.drawline();
line3.drawline();
// To draw second shape
BCA Circle1(45,350,350);
DDA Line1(250,300,450,300),Line2(450,300,450,400),Line3(450,400,250,400),Line4(250,400,250,300);
DDA Line5(350,300,450,350),Line6(450,350,350,400),Line7(350,400,250,350),Line8(250,350,350,300);
Circle1.drawCircle();
Line1.drawline();
Line2.drawline();
Line3.drawline();
Line4.drawline();
Line5.drawline();
Line6.drawline();
Line7.drawline();
Line8.drawline();
getch();
closegraph();
return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    enum mylist{monday,tuesday=4,thursday}a,b,c;
    
    b=tuesday;
    c=thursday;
    a=monday;

    cout<<endl<<b<<endl<<c<<endl<<a;
    return 0;
}