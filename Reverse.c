#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Palendrom(int iNo)
{   
    int iDigit=0;
    int iRev=0;
    int iNo1=iNo;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;

        
    }   
    if(iRev==iNo1)
        {
         return TRUE;
         }
        else
        {
          return FALSE;
        }
}


int main()
{
    int ino=0;
    int bret=FALSE;
   

    printf("Enter the number\n");
    scanf("%d",&ino);

    bret=Palendrom(ino);
   
   if(bret==TRUE)
   {
       printf("It is");
   }
   else
   {
       printf("it is not");
   }
    

    return 0;

}