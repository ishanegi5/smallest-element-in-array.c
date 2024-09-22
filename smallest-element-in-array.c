#include<stdio.h>

int main()

{ int x[6]={432,553,878,7676,767,32};

int min=x[0];

int i;
  
for(i=0;i<6;i++)
  
{ if(min>x[i]) 
    
{ 
      
min=x[i];
    
}
  
}

printf("[%d]= %d --> is the smallest in array ",i,min);

}