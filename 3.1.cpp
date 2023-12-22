
#include <stdio.h>

struct student {
 char name[ 20 ] ;
 int age ;
 char sex ;
 float gpa ;
} ;

void upgrade( struct student child ) ;


int main() {
 struct student aboy ;
 aboy.sex = 'F' ;
 aboy.gpa = 3.00 ;
 upgrade( aboy ) ;
 printf( "%.2f", aboy.gpa ) ;
 return 0 ;
}//end function

void upgrade( struct student child ) {
	
	float sum;
	
	if(child.sex == 'M'){
		
		sum = child.gpa + (child.gpa * 10/100 );
		
	printf(" Male GPA = %.2f \n",sum);
		
		
	}else if (child.sex == 'F'){
		
		sum = child.gpa + (child.gpa * 20/100 );
		
		printf(" Female GPA = %.2f \n",sum);
		
	}

	
}
