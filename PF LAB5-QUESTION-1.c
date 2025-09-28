#include<stdio.h>
int main(){
	int age;
	printf("Tell me your age and I  will show you how much discout you will get. ");
	printf("\n Enter age");
	scanf("%d",&age);
	    if (age<5){
	    	printf("Free Entry, Enjoy The  Movie");
	    }else if(age>65){
	        printf("You will  a  discout");
	    }else if(age>5 && age<65){
	        printf("You should  pay the standard price");
	 }
		return 0;
}
