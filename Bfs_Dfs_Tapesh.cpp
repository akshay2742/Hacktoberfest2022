#include<stdio.h>
#include<stdlib.h>

#define max 10

int arr[1],front=-1,rear=-1,n;
int *visited,v[7];

int IsEmpty(){
    if(front==-1){
        return 0;
    }
    return 1;
}

int IsFullStack(){
    if(rear==max-1){
        return 0;
    }
    return 1; 
}



void enqueue(int a){
    if(rear==max-1){
        printf("Overflow\n");
    }
    else{
        if(front==-1){
            front++;
            rear++;
        }
        else{
            rear++;
        }
        arr[rear]=a;
    }
}

int dequeue(){
    int b;
    if(front==-1 && rear==-1){
        printf("underflow\n");
    }
    else{
        if(front==rear){
            b=arr[front];
            front=-1;
            rear=-1;
            return b;
        }
        else{
            b=arr[front];
            front++;
            return b;
        }
        printf("Dequeue Successfull\n");
    }
}

void bfs(int mtr[7][7],int a){
    int u;
    printf("%d  ",a);
    visited=(int *)calloc(7,sizeof(int));
    visited[a]=1;
    enqueue(a);
    while(IsEmpty()!=0){
        u=dequeue();
        for(int v=1;v<7;v++){
            if(mtr[u][v]==1 && visited[v]==0){
                printf("%d  ",v);
                visited[v]=1;
                enqueue(v);
            }
        }
    }
}

void dfs(int mtr[7][7],int a){
    
    if(v[a]==0){
        printf("%d  ",a);
        v[a]=1;
        for(int j=1;j<7;j++){
            if(mtr[a][j]==1 && v[j]==0){
                dfs(mtr,j);
            }
        }
    }
}


int main(){
    int c;
    int mtr[7][7]={{0,0,0,0,0,0,0},
                   {0,0,1,1,0,0,0},
                    {0,1,0,0,1,0,0},
                    {0,1,0,0,1,0,0},
                    {0,0,1,1,0,1,1},
                    {0,0,0,0,1,0,0},
                    {0,0,0,0,1,0,0} };
    
    printf("Enter Your choice:\n");
    printf("1.Breadth First Search\n2.Depth First Search\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        bfs(mtr,4);
        break;
    
    case 2:
        dfs(mtr,1);
        break;
    default:
        printf("Wrong input\n");
        break;
    }
    return 0;
}
