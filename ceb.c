/**
  *C program to calculate the total electricity bill
  */

 #include <stdio.h>

 int main()
 {
   int p;
 //p implies the units of monthly consumption
    
   float x;
  
   /*Input unit consumed from user*/
   printf("Enter Total Units Consumed: ");
   scanf("%d", &p);

   /*calculate electricity bill according to given CEB conditions */
	
	if (p<0){
		x=-1;
		}
		else if(0<=p && p<=30){
			x=p*2.50+30.00;
			}
		else if(30<p && p<=60){
			x=30*2.50+(p-30)*4.85+60.00;
			}
		else if(60<p && p<=90){
			x=(60*7.85)+((p-60)*10.00)+90.00;	
			}
		else if(90<p && p<=120){
			x=60*7.85+30*10.00+(p-90)*27.75+480.00;
			}
		else if(120<p && p<=180){
			x=60*7.85+30*10.00+30*27.75+(p-120)*32.00+480.00;
			}
	else{
		x=60*7.85+30*10.00+30*27.75+60*32.00+(p-180)*45.00+540.00;
		}
	printf("Electricity Bill Cost =Rs. %.2f", x);

  return 0;
  }








