 #include <stdio.h>
 #include <stdlib.h>
 struct node{
 	int data;
 	struct node *link;
 };
 struct node* root =NULL;
 void append();
 void main(){
 	int choice;
 	while(1){
	 
 	printf("Single linked list operations:\n");	
    printf("1.Append\n");
    printf("2.Add at begnning\n");
    printf("3.Add after\n");
    printf("4.Length\n");
    printf("5.Display\n");
    printf("6.Delete\n");
    printf("7.Exit\n\n");
    printf("Enter choice[1-7]:");
    scanf("$d",&choice);
	
	switch(choice){
	case 1:append();break;
	
	case 2:addb();break;
	
	case 3:addl();break;
	
	case 4:length();break;
	
	case 5:display();break;
	
	case 6:delete();break;
	
	case 7:exit(1);
	
	default:printf("\n\nInvalid choice\n");
	}
	
	}
 }
 
 void append(){
 	struct node* temp;
 	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter node data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL){
		root=temp;
	}else{
		struct node* p;
		p=root;
		while(p->link!=NULL){
			p=p->link;
		}
		p->link=temp;
	}
 }
 
 
