#include <stdio.h>

 struct student {
 	int age;
 	
 };


void GetStudent( struct student child[][ 10 ], int *room ) {
	
	int i      = 0;
	int j      = 0;
	int k = 0;
	int l = 0;
	int cout;
	int number = 1;
	int roomclass = 1;
	int countstd = 10;
	
	printf("amount room want ? = ");
	scanf("%d",&cout);
		
	printf( " \ninput age student : \n  ");
	for (i = 0 ; i<cout; i++ ){
		
		printf("\n");
		
		
		for(j = 0 ; j<countstd; j++){
			
			printf( "Room[%d] Student[%d] = " ,roomclass,number);
			scanf("%d",&child[*room][j].age);
			
			number++;
			
		}
		
		number = 1;
		roomclass++;
		(*room) ++ ;
		
	
	}
	
	
	//printf("%d",number);
	
	//show data in struct 
	
	printf( "---|| show data : \n");
	
	int emptl = 0;
	int roomshow = 1;
	for (k = 0; k < cout ; k++){
	
		i = 0;
		
		printf("\n Room[%d] : \n ",roomshow );
		
		while(i < countstd ){
			
			printf( " stdent[%d] = %d \n ",number,child[emptl][i]);
			
			i++;
			number++;
			
		}
		number = 1;
		roomshow ++;
		emptl++;
			
		
	}
	
	
	
	
	
	
}

int main() {
 struct student children[ 20 ][ 10 ] ;
 int group ;
 GetStudent( children, &group ) ;
 return 0 ;
}//end function
