#include <stdio.h>

int USCLN(int x,int y)
{int r;
    if(x<y)
    {
        r=x;
        x=y;
        y=r;
    }
return ((r=x%y)?USCLN(y,r):y);
}

int BCNN(int x, int y)
{
 static int i=1;
 if(x<y)
 {
  if(y%x==0) return y;
  else {
         i++;
         BCNN(x,y*i);
        }
 }
 else
 {
  if(x%y==0) return x;
  else {
         i++;
         BCNN(x*i,y);
        }
  }
}


main()
{
	int x, y;
	printf("nhap x = ");
	scanf("%d", &x);
	printf("nhap y = ");
	scanf("%d", &y);
	printf("USCLN : %d", USCLN(x,y));
	printf("\nBCNN : %d", BCNN(x,y)/2);

}
