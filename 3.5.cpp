
#include <stdio.h>

struct student{
	
	int age;
	
};

struct student (*GetStudent( int *room ) )[ 10 ] ;


int main() {
 struct student ( *children )[ 10 ] ;
 int group ;
 children = GetStudent( &group ) ;
 return 0 ;
}//end function



struct student (*GetStudent( int *room ) )[ 10 ] {
	
	int i = 0;
	int j = 0;
	int countstd = 10;
	int roomcout = 1;
	int list = 1;

	int amoutroom;

	
	struct student Adddata[10][10] ;	

	
	printf(" Enter amout Room want = " );
	//scanf( "%d" , & (*room) );
	scanf( "%d" , & amoutroom );
	

		
	// input data in struct 
	for( i = 0 ; i < amoutroom ; i++ ){
			
			printf("\n");
	
			for(j = 0; j < countstd; j++){
				
				printf(" Room[%d] ",roomcout);
				printf(" sttdent[%d] : " ,list);
				scanf("%d",&Adddata[i][j].age);
				
				list++;
			
			}
			
			list = 1;
			roomcout++;
			(*room) ++;
	
	
	}

	
	//show struct
	
		int pointroom = 0;
		int showroom = 1;
		j = 0;
		
	for (i = 0 ; i < (*room) ; i++ ){
		
		printf( "\n---|Room[%d] : \n", showroom );
		
		while(j < countstd ){
			
			printf( " stdent[%d] : %d \n ",list,Adddata[i][j].age);
			
			j++;
			list ++;
			
		}
		showroom++;
		list = 1;
		j=0;
		
	}
}


