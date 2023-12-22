#include <stdio.h>

struct student {
 char name[ 20 ] ;
 int age ;
 char sex ;
 float gpa ;
} ;

struct student upgrade( struct student child ) {
	
	float sum;
	
	if(child.sex == 'M'){
		
		printf( " ---| Male : \n " );
		printf( "---|up 10 percent \n ");
		
		sum = child.gpa + (child.gpa * 10/100);
		
		printf( "---|GPA : %.2f \n " , sum);
	
		
	}else if (child . sex == 'F'){
		
		printf( " ---| Female : \n " );
		printf( "---|up 20 percent \n ");
		
		sum = child.gpa + (child.gpa * 20/100);
		
		printf( "---|GPA : %.2f \n " , sum);
		
	}
	
	return child ;
	
}

int main() {
 struct student aboy ;
 aboy.sex = 'F' ;
 aboy.gpa = 3.00 ;
 aboy = upgrade( aboy ) ;
 printf( "%.2f", aboy.gpa ) ; // output befor up 10 && 20
 return 0 ;
}//end function
