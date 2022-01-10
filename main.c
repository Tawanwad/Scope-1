#include <stdio.h>
#include <stdlib.h>

int *a,i,j,n,k=0,t;
int max,min;

void checking(void);

int main(int argc,char*argv[])
{
  a=(int*) malloc (sizeof(int)*n);
  n=argc-1;
  for(i=0; i<n; i++)
  {
    a[i]=atoi(argv[i+1]);
  }

  checking();
  if(k!=0)
  {
    printf("The smallest prime is %d\n",min);
    printf("The biggest prime is %d\n",max);
  }
  if(k==0)
  {
    printf("Do not have prime number\n");
  }
  
  return 0;
}

void checking(void)
{
  int check;
  for(i=0; i<n; i++)
  {
    check=0;
    for(j=1; j<=a[i]; j++)
    {
      if(a[i]!=0||a[i]!=1)
      {
        if(a[i]%j==0) 
        {
         check++;
        }
      }
    }
    if(check==2)
    {
      k++;
      if(k==1) 
      {
          t=a[i];
          min=t;
          max=t;
      }
      if(t<a[i])
      {
        if(max<a[i]) max=a[i];
      }
      if(t>a[i])
      {
        if(min>a[i]) min=a[i];
      }
    }
  }
}

