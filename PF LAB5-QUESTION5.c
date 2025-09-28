#include<stdio.h>
int main(){
	int having_prerequisite ;
	int is_courseful;
	printf("If you have the prerequisite? (yes=1  No=0:");
	scanf("%d",&having_prerequisite);
	printf("If Your  Course is full. (Yes=1; No=0)");
	scanf("%d",&is_courseful);
	
	if  (having_prerequisite==1 && is_courseful==0){
		printf("Enrolled Successfully\n");
	}
    else if(having_prerequisite==0 && is_courseful==0){
	    printf("Can not enroll : Prerequisite  is  missing\n");
	}
	else  if(having_prerequisite==1 && is_courseful==1){
		printf("can not enroll: Prerequisite  is missing and course is full\n");
	}
		return 0;
}
