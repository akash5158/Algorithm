#include<iostream.h>
    #include<graphics.h>
    #include<dos.h>
     
    void Floodfilling(int x,int y,int oldcolor,int newcolor){
        if(getpixel(x,y) == oldcolor){
            putpixel(x,y,newcolor);
            Floodfilling(x+1,y,oldcolor,newcolor);
            Floodfilling(x,y+1,oldcolor,newcolor);
            Floodfilling(x-1,y,oldcolor,newcolor);
            Floodfilling(x,y-1,oldcolor,newcolor);
        }
    }
     
    int main(){
        int gm,gd=DETECT,radius;
        int x,y;
        cout<<"Enter x and y positions for circle: "<<endl;
        cin>>x>>y;
        cout<<"Enter radius of circle"<<endl;
        cin>>radius;
        initgraph(&gd,&gm,"c:\\turboc3\\bgi");
        circle(x,y,radius);
        Floodfilling(x,y,0,15);
        delay(3000);
        closegraph();
        return 0;
    }
