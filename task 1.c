#include<stdio.h>
int main(){
   int device;
   int symptoms;
   printf(" Laptop = 1\n");
   printf(" Smartphone = 2\n");
   printf(" Router = 3\n");
    
   printf("Enter Device Name = ");
   scanf("%d",&device);
   
   switch(device){
    case 1 :
                  printf("\n10 for Wont turn on");
                  printf("\n11 for Overheating");
                  printf("\n12 For Slow performer");
                  printf("\nEnter  Symptoms type ");
                  scanf("%d",&symptoms);
                         switch (symptoms){
                             case 10: 
                               printf("\n Check power adopter and battery connections.try defferent power out lets.");
                            case 11 :
                               printf( "clean fans and ensure proper vantilation. check for dust . use a cooling pad\n");
                            case 12:
                               printf("\nRun system diagnostic and check resource usage RAM if naccesary.Defragment hard drive");
                           }
		break;
		case 2:
		         printf("\n20 far battery drain fast");
                  printf("\n 21 for no signal");
                  printf("\n 22 touch screen unresponsive");
                  printf("\n enter symptoms ");
                  scanf("%d",&symptoms);
                         switch (symptoms){
                             case 20: 
                               printf("\n Run battery calibration tool and check for background");
                            case 21:
                               printf( "Check sim carrd AND netywork settings \n");
                            case 22 :
                               printf("\n perform screen calibration test. cleanscreen surface.");
                           }
                           break;
                           
        case 3 :       printf("\n30 internet connections");
                  printf("\n 31or wifi signals");
                  printf("\n 32 Device can not connect");
                  printf("\n enter symptoms ");
                  scanf("%d",&symptoms);
                         switch (symptoms){
                             case 30: 
                               printf("\n Check Isp Statuys and router cables;. Restart mode mandator");
                            case 31:
                               printf( " reposition outer ansd checkn connections ; reduce interfereance from othere devices\n");
                            case 32 :
                               printf("\n perform screen calibration test. cleanscreen surface.");
                           }
		break;


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	break;
}
return 0;
}
