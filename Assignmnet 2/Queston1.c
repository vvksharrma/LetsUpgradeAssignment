//Write a program to print the following pattern
//1
//2*2
//3*3*3
//4*4*4*4

              #include<stdio.h>
              int main()
              {
              int i,j,r,count;                                      
              count=0;                                              
              printf("Enter the number of rows :\n");                
              scanf("%d",&r);                                       
              for(i=0;i<r;i++)                                      
                {
                  for(j=0;j<=i;j++)
                    {
                      count++;                                      
                      if(j!=0)                                      
                      printf("*%d",i);     
                      else
                      printf("%d",i);
                    }
                  printf("\n");                                     
                }
              }

