#include<iostream>

using namespace std;

void insert(int h[],int n){
    int i = n;
    int x = h[n];

    while(i > 1 && x > h[i/2]){
           h[i] = h[i/2] ;
           i=i/2;
    }
        h[i] = x;
   
}

void deleteEle(int h[],int n){
    int i,j,x,temp;
    x = h[1];
    h[1] = h[n];
    i = 1;
    j= 2*i;

    while (j < n-1)
    {
        if(h[j] < h[j+1]){
            j = j+1;
        }

        if(h[i] < h[j]){
            temp = h[i];
            h[i]=h[j];
            h[j] = temp;

            i=j;
        }
        else
            break;
    }
    
    h[n] =x;


}
int main(){

   int heap[20] = {0,40,20,4,5,33,29,89};
   cout<<"hello\n";

    for(int i=2;i<=7;i++){
        insert(heap,i);
    }


    for(int i=1;i<7;i++){
        cout<<heap[i]<<' ';
    }

    for(int i=7;i>=1;i--){
        deleteEle(heap,i);
    }

    cout<<"\nafter delete operation\n";
    for(int i=1;i<7;i++){
        cout<<heap[i]<<' ';
    }


    return 0;
}