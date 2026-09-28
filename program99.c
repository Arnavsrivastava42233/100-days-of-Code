//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include<stdio.h>
#include<string.h>
int main()
{
 int date,year,month;
 printf("Enter the date month and year:");
 scanf("%d%d%d", &date, &month, &year);
char *mon[12]={"January","febuary","March","April","May","June","July","August","September","October","November","December"};
 for(int i=1;i<=12;i++)
 {
   printf("month=%d i=%d\n", month,i );	 
   if(i==month)
   {
   printf("Date: %02d-%s-%d\n", date,mon[i-1],year);
   break;
   }
 }
 return 0;
}