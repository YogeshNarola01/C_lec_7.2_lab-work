#include<stdio.h>

/*
1234554321
1234  4321
123    321
12      21
1        1
*/

void main(){

int i,j,s;

for(i=5; i>=1; i--){

	for(j=1; j<=i; j++){
		printf("%d",j);

	}
	for(s=4; s>=i; s--){
		printf(" ");
	}

		for(s=i; s<=4; s++){
		printf(" ");
	}


	for(j=i; j>=1; j--){
		printf("%d",j);

	}

	printf("\n");
}

}
