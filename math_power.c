
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

long math_power(int n, int p) { //This function takes two arguments, n(base nuumber) and p(exponient). It returns n raised to the power of p.
	int i, result = 1;
	for (i = 1; i <=p; i++) {
		result = result * n;
		printf("%d^%d is %d\n", n, i,result);
	}

}

int main() {



	/*int n, p, result = 1;
	//long n;
	//long long n;
	printf("Please enter your number N:");//asks the user of a number
	scanf("%d", &n);// stores the number to the int type variable, n.
	
	
	//scanf("%ld", &n);// stores the number to the long type variable, n.
	//scanf("%lld", &n);// stores the number to the long long type variable, n.
	//printf("2*%d=%d\n",n,2*n);//prints the number multiplied by two(2) (for the int type variable)
	//printf("2*%ld=%ld\n", n, 2 * n);//prints the number multiplied by two(2) (for the long type variable)
	//printf("2*%lld=%lld\n", n, 2 * n);//prints the number multiplied by two(2)(for the long long type variable)
	//printf("%d^%d=%d", n,2,n* n );//prints the square of the number by multiplying the number by itself.(for the int type variable)
	//printf("%ld^%d=%ld", n, 2, n * n);//prints the square of the number by multiplying the number by itself.( for the long type variable)
    //printf("%lld^%d=%lld", n, 2, n* n);//prints the square of the number by multiplying the number by itself.(for the long long type variable)




	printf("Please enter power P:");// asks user for exponient number.
	scanf("%d", &p);// stores the number to the int type variabe,p.

	/***************************
	This is for loop for calculating the power(p) of a number (n).
	A variable (i) will have to be indrotuced in the global scope for it to work.
	****************************/
	/*for (i=1; i<=p; i++) {
		result *=n;
	}


	/*****************************************
	**This is a while loop that calculates the power of a number**
	******************************************* /
	/*while (p != 0) {
		result*=n;
		--p;

	}
	printf("%d^2=%d",n,result);*/
	
	
	
	int n, p;
	printf("Input your base number, N:");
	scanf("%d", &n);
	printf("Input your power number,P:");
	scanf("%d", &p);
	math_power(n, p);

	return 0;
}
