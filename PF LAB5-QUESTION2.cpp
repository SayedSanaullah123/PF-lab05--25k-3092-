#include<stdio.h>
int  main(){
	int power;
	char light_color;
	printf("Power on= 1\nPower off=2\n");
	printf("Tell  me the power is  ON/OFF= \n");
	scanf("%d",&power);
	    if (power==1){
	    	printf("Red=R/r \n Yellow=Y/y \nGreen=G/g \nTell melight color :");
	    	scanf(" %c",&light_color);
	    	  if (light_color=='r' || light_color=='R'){
	    	       printf("Stop Your Car");
	    	     }else if(light_color=='Y' || light_color=='y'){
	    	     printf("Coution");
	        }  else if(light_color=='G' || light_color=='g'){
	        	printf("You can go");
			}else {
				  printf("Invalic color");
				  			}
			}else if(power==2){
				printf("Signal Off");
			}
		
	
	
	return 0;
}
