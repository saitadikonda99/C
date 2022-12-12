#include<stdio.h>
#include<stdlib.h>
  struct node  {
	int data;
	struct node*next;
	};
  struct node *head=NULL;
	void create() {
  		int x;
  		struct node *new;
                new=(struct node*)malloc(sizeof(struct node));
		printf("\nenter data to create a node for the node\n");
		scanf("%d",&x);
		new->data=x;
		new->next=NULL;
       	if(head==NULL)
		 head=new;
 
	else{
      		struct node *temp=head;
        while(temp->next!=NULL)  {
          	temp=temp->next;
          }
         	temp->next=new;
	}
 
		}
	void insert_begin() {
		int x;
		struct node *new;
		new=(struct node*)malloc(sizeof(struct node));
   		printf("\nenter data to insert node at begin \n");
  		scanf("%d",&x);
  		new->data=x;
  		new->next=NULL;
  	if(head==NULL)
  		head=new;
  	else {
      		new->next=head;
      		head=new;
  	}
  		}
  	void insert_last()  {
      		int x;
  		struct node *new;
  		new=(struct node*)malloc(sizeof(struct node));
  		printf("\nenter data to insert node at last\n");
  		scanf("%d",&x);
  		new->data=x;
  		new->next=NULL;
	if(head==NULL)
  		head=new;	
	else{
      		struct node *temp=head;
      	while(temp->next!=NULL) {
          	temp=temp->next;
      	}	
      		temp->next=new;
  		}
 
  			}
  	void insert_pos() {
      		int x,pos;
  		struct node *new;
  		new=(struct node*)malloc(sizeof(struct node));
  		printf("\nenter data to insert node at some position \n");
  		scanf("%d",&x);
  		new->data=x;
  		new->next=NULL;
  		printf("\nenter position\n");
  		scanf("%d",&pos);
 	 	if(head==NULL)
  		head=new;
  	else{
  		struct node*ptr=head;
  	if(pos==1) {
                new->next=head;
                head=new;
        }
        else  {
	 	for(int i=1;i<pos-1;i++)   {
                    	ptr=ptr->next;
                 if(ptr==NULL) {
                        printf("\nPosition not found:\n");
                        return;
                        }
                }
                        new->next =ptr->next ;
                	ptr->next=new;
        }
  }
 		 }
 	void Delete_begin() {
      		if(head==NULL)
      			printf("\nlist is empty\n");
      		else {  
          		struct node *temp=head;
         	        head=head->next;
       			printf("\n %d After deletion at begin\n",temp->data);
          		free(temp);
                }
  }
 
	void Delete_last() {
   
    			struct node *temp,*prev;
    		if(head==NULL)  {
        		printf("\nlist is empty\n");
    }
   
        	else if(head->next ==NULL) {
               		temp=head;
                	head=NULL;
               	 	printf("\nThe deleted element is:%d\n",temp->data);
                	free(temp);
        }
    		else {
        		temp=head;
        	        //prev=NULL;
        	while(temp->next!=NULL){
 			prev=temp;
                        temp=temp->next;
        }
                        prev->next=NULL;
                        printf("\n %d After deletion at last \n",temp->data);
            	free(temp);
       
    }
   
}
	void Delete_pos() {
   		if(head==NULL)
   			printf("\nList is empty\n");
		else {
    			struct node*temp,*ptr;
    			int pos;
    			printf("\nenter position to delete\n");
    			scanf("%d",&pos);
    	        if(pos==1) {
        		temp=head;
                        head=head->next ;
                        printf("nThe deleted element is:%dt",temp->data);
                        free(temp);
                }
 	        else  {
                        temp=head;
                  for(int i=1;i<=pos;i++) {
                        ptr=temp;
                        temp=temp->next ;
                  if(temp==NULL) {
                         printf("\nPosition not Found:\n");
                         return;
                                }
                        }
                         ptr->next =temp->next ;
                         printf("\nThe deleted element is:%d\n",temp->data );
                         free(temp);
          } 
} 
                    }
   
	void display() {
		if(head==NULL)
			printf("\n List is empty\n");
      			struct node*ptr=head;
      		while(ptr->next!=NULL) {
          		printf("%d--> ",ptr->data);
          		ptr=ptr->next;
    }
     		        printf("%d",ptr->data);
          }
 
	int main()   {
        		int choice;
         	while(1){
               
              	  	printf("\n  MENU \n");
                	printf("\n 1.Create \n");
               	 	printf("\n 2.Display \n");
                	printf("\n 3.Insert at the beginning\n");
                	printf("\n 4.Insert at the end \n");
                	printf("\n 5.Insert at specified position\n");
                	printf("\n 6.Delete from beginning\n");
                	printf("\n 7.Delete from the end\n");
                	printf("\n 8.Delete from specified position \n");
                	printf("\n 9.Exit\n");
                	printf("\n--------------------------------------\n");
                	printf("Enter your choice:");
                	scanf("%d",&choice);
                	switch(choice) {
                       		case 1:
                                        create();
                                        break;
                        	case 2:
                                        display();
                                        break;
                        	case 3:
                                        insert_begin();
                                        break;
                        	case 4:
                                        insert_last();
                                        break;
                        	case 5:
                                        insert_pos();
                                        break;
                        	case 6:
                                        Delete_begin();
                                        break;
                       	case 7:
                                        Delete_last();
                                        break;
                        	case 8:
                                        Delete_pos();
                                        break;
                       
                        	case 9:
                                        exit(0);
                                        break;
                             
                        	default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }
        }
        		return 0;
}
