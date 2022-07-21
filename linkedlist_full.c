//checked code running successfully
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
    {
        int data;
        struct node *next;
    }*head,*newnode ,*temp;
int pos;int count=0; int i=1;

// int length(){
//     int length=0;
//     while(head!=0){
//         head=head->next;
//         length++;
//     }
//     printf("the length of the linkedlist is %d",length);
// }

int insert()
{
    head=0;int choice; int count=0;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue (1,0)?");
        scanf("%d",&choice);
    }

}


//insert at beginning


int begining()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data you want to insert:");
    scanf("%d",&newnode->data);
    if(head==0)
    {
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
    // newnode->next=head;
    // head=newnode;

}
//insert at end

int atend(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data you want to insert at the end :");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
        }
        temp->next=newnode;
}

//insert after given position
int afterPos(){
    int i=1;
    int count1=0;
    int count=0;
    temp=head;
     while(temp!=0){
        count++;
        temp=temp->next;
    }
    printf("the total nodes are= %d \n",count);
    printf("enter the pos");
    scanf("%d", &pos);
    if(pos==0){
        begining();
    }
    
    else if(pos>count){
         printf("invalid");
         }
    else{
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
        
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        temp->next=newnode;
        temp=head;
        while(temp!=0)
        {
           printf("%d\n",temp->data);
           temp=temp->next;
           count1++;
        }
        printf("total nodes are=%d\n",count1);
    
    }
    // printf("enter the position:");
    // scanf("%d",&pos);
    // if(pos==0){
    //     begining();
    // }
    // else if(pos>length){ 
    //     printf("invalid"); 
    //     }
    
    // else{
    //     temp=head;
    //     while(i<pos)
    //     {
    //         temp=temp->next;
    //         i++;
    //     }
    //     newnode=(struct node*)malloc(sizeof(struct node));
    //     printf("enter data you want to insert at specific position:");
    //     scanf("%d",&newnode->data);
    //     newnode->next=temp->next;
    //     temp->next=newnode;
    //     display();
    // }

}


int display(){
     temp=head;
     int count=0;
        while(temp!=0)
        {
           printf("%d\n",temp->data);
           temp=temp->next;
           count++;
        }
        printf("total nodes are=%d\n",count);
}


int main(){
    int ch;
    do{
        printf("press 1 for insert \n press 2 for beginning \n press 3 for inset atend \n press 4 for after a position \n press 5 for display");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            insert();
            break;
            case 2:
            begining();
            break;
            case 3:
            atend();
            break;
            case 4:
            afterPos();
            break;
            case 5:
            display();
            break;
            default:
            printf("invalid entry");
    }
    }
    while(ch!=0);

}






// //program of insertion in link list
// void main()
// {
//     struct node
//     {
//         int data;
//         struct node *next;
//     };
//     struct node*head,*newnode ,*temp;
//     head=0;int choice; int count=0;
//     while(choice)
//     {
//         newnode=(struct node*)malloc(sizeof(struct node));
//         printf("enter data");
//         scanf("%d",&newnode->data);
//         newnode->next=0;
//         if(head==0)
//         {
//             head=temp=newnode;
//         }
//         else{
//             temp->next=newnode;
//             temp=newnode;
//         }
//         printf("Do you want to continue (1,0)?");
//         scanf("%d",&choice);
//     }
//     //insert at beginning
//     newnode=(struct node*)malloc(sizeof(struct node));
//         printf("enter data you want to insert:");
//         scanf("%d",&newnode->data);
//         newnode->next=head;
//         head=newnode;

//         temp=head;
//         while(temp!=0)
//         {
//            printf("%d\n",temp->data);
//            temp=temp->next;
//            count++;
//         }
//         printf("total nodes are=%d\n",count);
    
// getch();

// }
        


/*#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
    {
        int data;
        struct node *next;
    }*head,*newnode ,*temp;
int pos;int count=0; int i=1;

// int length(){
//     int length=0;
//     while(head!=0){
//         head=head->next;
//         length++;
//     }
//     printf("the length of the linkedlist is %d",length);
// }

int insert()
{
    head=0;int choice; int count=0;
    choice=1;
    while(choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue (1,0)?");
        scanf("%d",&choice);
    }

}


//insert at beginning


int begining()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data you want to insert:");
    scanf("%d",&newnode->data);
    if(head==0)
    {
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
    // newnode->next=head;
    // head=newnode;

}
//insert at end

int atend(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data you want to insert at the end :");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
        }
        temp->next=newnode;
}

//insert after given position
int afterPos(){
    int i=1;
    int count1=0;
    int count=0;
    temp=head;
     while(temp!=0){
        count++;
        temp=temp->next;
    }
    printf("the total nodes are= %d \n",count);
    printf("enter the pos");
    scanf("%d", &pos);
    if(pos==0){
        begining();
    }
    
    else if(pos>count)
    {
        printf("invalid");
       
    }
    else{
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
        
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        temp->next=newnode;
        temp=head;
        while(temp!=0)
        {
           printf("%d\n",temp->data);
           temp=temp->next;
           count1++;
        }
        printf("total nodes are=%d\n",count1);
    
    }
    // printf("enter the position:");
    // scanf("%d",&pos);
    // if(pos==0){
    //     begining();
    // }
    // else if(pos>length){ 
    //     printf("invalid"); 
    //     }
    
    // else{
    //     temp=head;
    //     while(i<pos)
    //     {
    //         temp=temp->next;
    //         i++;
    //     }
    //     newnode=(struct node*)malloc(sizeof(struct node));
    //     printf("enter data you want to insert at specific position:");
    //     scanf("%d",&newnode->data);
    //     newnode->next=temp->next;
    //     temp->next=newnode;
    //     display();
    // }

}


int display(){
     temp=head;
     int count=0;
        while(temp!=0)
        {
           printf("%d\n",temp->data);
           temp=temp->next;
           count++;
        }
        printf("total nodes are=%d\n",count);
}


int main(){
    int ch;
    do{
        printf("press 1 for insert \n press 2 for beginning \n press 3 for inset atend \n press 4 for after a position \n press 5 for display");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            insert();
            break;
            case 2:
            begining();
            break;
            case 3:
            atend();
            break;
            case 4:
            afterPos();
            break;
            case 5:
            display();
            break;
            default:
            printf("invalid entry");
    }
    }
    while(ch!=0);

}*/






// //program of insertion in link list
// void main()
// {
//     struct node
//     {
//         int data;
//         struct node *next;
//     };
//     struct node*head,*newnode ,*temp;
//     head=0;int choice; int count=0;
//     while(choice)
//     {
//         newnode=(struct node*)malloc(sizeof(struct node));
//         printf("enter data");
//         scanf("%d",&newnode->data);
//         newnode->next=0;
//         if(head==0)
//         {
//             head=temp=newnode;
//         }
//         else{
//             temp->next=newnode;
//             temp=newnode;
//         }
//         printf("Do you want to continue (1,0)?");
//         scanf("%d",&choice);
//     }
//     //insert at beginning
//     newnode=(struct node*)malloc(sizeof(struct node));
//         printf("enter data you want to insert:");
//         scanf("%d",&newnode->data);
//         newnode->next=head;
//         head=newnode;

//         temp=head;
//         while(temp!=0)
//         {
//            printf("%d\n",temp->data);
//            temp=temp->next;
//            count++;
//         }
//         printf("total nodes are=%d\n",count);
    
// getch();

// }

/*#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*temp,*tail,*newnode;


int insert(){
    struct node* head,*newnode,*temp;
    head=0;
    int choice = 1;
    while(choice==1){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the data in the element");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0){
            head=newnode=temp=tail;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("press 1 if you want to continue and 0 for exit");
        scanf("%d",&choice);
        
    }
    

}

// int first(){
//     struct node* newnode,*temp,*head;
//     head=newnode=temp=tail;
// }

int begining(){
    struct node* newnode,*temp,*head;
    if(head==0){
        head=newnode=temp=tail;

    }
    else{
        newnode->next=head;
        head=newnode;
    }
}

int last(){
    struct node* newnode,*temp,*head;
    if(head==0){
        head=newnode=temp=tail;
    }
    else{
        newnode->next=0;
        temp=head;
        while(temp!=0){
            temp=temp->next;
        }
        temp->next=newnode;
    }

}
int display(){
    struct node* newnode,*temp,*head;
    temp=head;
    while(temp!=0){
        printf("the element int the linked list is %d",temp->data);
        temp=temp->next;
    }
}

int afterposition(){
    struct node* newnode,*temp,*head;
    int pos,i=1;
    // int a = newnode.Length();
    printf("enter the poition you want to ");
    scanf("%d",&pos);
    int length=0;
    temp=head;
    while(temp!=0){
        temp=temp->next;
        length++;
    }
    printf("the total number of length is %d",length);
    if(pos==0){
        begining();
    }
    else if(pos>length){
        last();
    }
    else{
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
        newnode =(struct node*)malloc(sizeof(struct node));
        printf("enter the data you want to enter");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        temp->next=newnode;
        display();

    }
}


int main()
{
    int ch;
    do{
        printf("press 1 for insert  \n press 2 for display \n press 3 for begining \n press 4 for last \n press 5 for afterposition");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            insert();
            break;
            case 2:
            display();
            break;
            case 3:
            begining();
            break;
            case 4:
            last();
            break;
            case 5:
            afterposition();
            break;
            default:
            printf("invalid entry");
    }
    
    }
    while(ch!=0);
}*/