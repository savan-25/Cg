#include<math.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    int gm,gd=DETECT;
    int x1,y1,x2,y2,x3,y3,ch;//old coordinates
    int r; //angle
    int nx1,nx2,nx3,ny1,ny2,ny3;//new coordinates
    int tx,ty,sx,sy;
    float t;//angle in radian
    initgraph (&gm,&gd,"");
    cout<<"\t Program for basic tramsformation ";
    cout<<"\n\t Enter the points of triangle ";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    setcolor(13);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    getch();

    cout<<"\n 1.Translation \n 2.Scaling \n 3.Rotation \n 4.Exit ";
    cout<<"\n Enter your choice ---->";
    cin>>ch;
    switch(ch)
    {
    case 1:
        cout<<"Enter the translation factor-->";
        cin>>tx>>ty;
        line(x1+tx,y1+ty,x2+tx,y2+ty);
        line(x2+tx,y2+ty,x3+tx,y3+ty);
        line(x3+tx,y3+ty,x1+tx,y1+ty);
        getch();
    case 2:
        cout<<"Enter the scaling factor-->";
        cin>>sx>>sy;
        line(x1*sx,y1*ty,x2*sx,y2*ty);
        line(x2*sx,y2*ty,x3*sx,y3*ty);
        line(x3*sx,y3*ty,x1*sx,y1*ty);
        getch();
    case 3:
        cout<<"Enter the angle of rotation-->";
        cin>>r;
        t=3.14*r/180;
        nx1=abs(x1*cos(t)-y1*sin(t));
        ny1=abs(x1*sin(t)+y1*cos(t));
        nx2=abs(x2*cos(t)-y2*sin(t));
        ny2=abs(x2*sin(t)+y2*cos(t));
        nx3=abs(x3*cos(t)-y3*sin(t));
        ny3=abs(x3*sin(t)+y3*cos(t));
        line(nx1,ny1,nx2,ny2);
        line(nx2,ny2,nx3,ny3);
        line(nx3,ny3,nx1,ny1);
        getch();
    case 4:
        break;
    default:
        cout<<"enter the right condition";

    }
    getch();
    closegraph();
}
