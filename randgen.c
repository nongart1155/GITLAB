#include<stdio.h>
#include<time.h>
double random()
{
  int i;
     double n = 0;
     n = rand() % 999;
     return n+1;
}
int main()
{
      srand(time(NULL));
      FILE *myFile = fopen("C:\\Users\\Boatkung556\\Desktop\\Study\\CPE100program\\Randomgenerater\\text1.txt","w");
      double x1,x2,y1,y2,i;
      for(i=0;i<10000;i++)
      {
      x1=random();
      x2=random();
      y1=random();
      y2=random();
      fprintf(myFile,"%.0lf %.0lf %.0lf %.0lf\n",x1,x2,y1,y2);
      }
      fclose(myFile);
}
