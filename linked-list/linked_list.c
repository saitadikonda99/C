#include<stdio.h>
#include<stdlib.h>
	struct node {
		int data;
		struct node *link;
		};
	struct node *root = NULL;
	
    	void append() {
		struct node *temp=root;
		temp = ( struct node* )malloc( sizeof( struct node ) );
		printf("enter the data: ");
		scanf("%d",&temp->data);
		temp->link = NULL;
	if( root == NULL )
		root = temp;
	        else {
		 	struct node *p=root;
			while( p->link != NULL ) {
				p=p->link;
				}
			p->link = temp;
			}
}

 	void insert_begin () {
	 	struct node *temp=root;
		temp = ( struct node* )malloc( sizeof(struct node) );
		printf( " enter the data: ");
		scanf("%d",&temp->data );
		temp->link = NULL;
	if( root == NULL ) 
		root = temp;
	  	else {
 		       temp->link = root;
		       root = temp;
		     }
}
	int length_linked() {
		struct node *temp;
		temp = root;
		int length= 0 ;
		while( temp != NULL) {
			length++;
			temp = temp->link;
			}
	 	return length;
		}
	
	void insert_pos() {
		 struct node *temp = root;
		 int pos,len;
		 printf("enter the position to insert : ");
		 scanf("%d" , &pos);
		 len = length_linked();
	if( pos > len ) 
  		printf(" position is greater than length\n");
		else {
		      struct node *p = root ;
		      int i=1;
		while( i < pos ) {
  			p = p->link;
			i++;
			}
  		 temp = ( struct node* )malloc( sizeof(struct node* ) );
		 printf("enter the data: ");
		 scanf("%d", &temp->data);
		 temp->link = p->link; 
		 p->link = temp;
		}
}

  void delete_begin() {
		struct node *temp=root;
		if ( root == NULL ) 
		   printf(" Empty\n");
			else {
				temp = root;
				root = temp->link;				
				free( temp );
				}
		       }
   void delete_pos() {
		struct node *p=root, *q;
		int pos,len;
		printf( "enter the position to delete : " );
 		scanf("%d",&pos);
        len = length_linked();
	if( pos > len ) 
		printf( " enter the valid position\n");
	    else{
		int i=1;
		while( i < pos-1 ) {
			p = p->link;
			i++;
			}
		q = p->link;
		p->link = q->link;
		q->link =NULL;
		free( q );
		}
} 
void delete_last() {
	  struct node*p=root, *q;
	  if( root == NULL )
	   	printf(" Empty\n");
	        else {
			int i=1;
			int len = length_linked();
			while ( i < len-1 ) {
				p=p->link;
 				i++;
				}
			 q = p->link;
			 p->link = q->link;
			 free( q );
}
                      }
void display() {
		struct node *temp =root;
 	if( root == NULL )
		printf(" Empty\n");
                else {
	   		while ( temp != NULL ) { 
			printf("%d ",temp->data);
			temp = temp->link;

}  
			printf("\n");

			}	
		}

int main() {
	  
          printf( " --------- LINKED LIST ---------\n " );
   	  while( 1 ) {

  		printf(" 1.append\n");
		printf(" 2.insert at begin\n" );
                printf(" 3.insert at position \n" );
                printf(" 4.delete at begin \n" );
                printf(" 5.delete at position\n" );
                printf(" 6.delete at end\n" );
                printf(" 7.display\n" );
		//printf(" 8.length\n");
		printf(" 0.exit\n"); 
		 int ch;
	         printf("---- enter your choice ---- : \n");
		 scanf("%d",&ch);
 	 switch( ch ) {
			
                        case 0 : exit(0);
   			case 1 : append();
				 break;
                        case 2 : insert_begin();
                                 break;
                        case 3 : insert_pos();
                                 break;
                        case 4 : delete_begin();
                                 break;
                        case 5 : delete_pos();
                                 break;
                        case 6 : delete_last();
                                 break;
                        case 7 : display();
                                 break;
                        //case 8 : length_linked();
                          //       break;
		       default : printf(" ----choose from 0  -  8 ---- \n ");
		
}
        }

      return 0;
}


