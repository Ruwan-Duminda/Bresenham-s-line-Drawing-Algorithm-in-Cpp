/* Ruwan Duminda Rathnayaka */
#include<stdio.h>  
#include<graphics.h>   
int main()  
{  
	float x1,x2,y1,y2;
	int gd,gm;
	/*clrscr(); clrscr() will not work here because this function is old. 
	we will use system("cls") insted of clrscr()*/
	system("cls");

    /* to Read Two end points of line */
    printf("Enter the value of x1: ");  
    scanf("%f", &x1); 
	printf("Enter the value of y1: ");  
    scanf("%f", &y1); 
    printf("Enter the value of x2: ");  
    scanf("%f", &x2); 
	printf("Enter the value of y2: ");  
    scanf("%f", &y2);  
    	
    /* to initialise graphics mode. */
	detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");
    
    
    float dx, dy, p, x, y;  
    dx=x2-x1;  
    dy=y2-y1;  
    x=x1;  
    y=y1;  
    p=2*dy-dx;  
    
    while(x<x2)  
    {  
        if(p>=0)  
        {  
            putpixel(x,y,7);  
            y=y+1;  
            p=p+2*dy-2*dx;  
        }  
        else  
        {  
            putpixel(x,y,7);  
            p=p+2*dy;
		}  
            x=x+1; 
			delay(10);/*delay fuction is used to suspend execution of a 
		program for a particular time.*/ 
    }  
        getch();
    	closegraph();
}  
