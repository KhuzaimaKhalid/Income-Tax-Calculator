   /*Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab                       
2.5 – 5.0L                               
5.0L - 10.0L                          
Above 10.0L                         
Tax  
5% 
20% 
30% */
#include<stdio.h>

int main()
{
    float i;
    float tax = 0.0;
   printf("\nEnter your income: ");
   scanf("%f", &i);
   if(i<=250000){
   	tax = 0;
   } else if(i > 250000 && i <= 500000){
   	  tax = 0.05 * (i - 250000);
   } else if(i > 500000 && i <= 1000000){
   	  tax = 0.05 * (500000 - 250000) + 0.2 * (i - 500000);
   } else{
   	tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (i - 1000000);
   }
   printf("the total income tax is %.2f", tax);
   
   return 0;
}
