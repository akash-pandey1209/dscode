#include<iostream>
using namespace std;

void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
}
void swapalternate(int arr[],int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);

        }
    }
}

int main(){
    int even[8]={ 2,3,4,5,6,7,8,9 };
    int odd[5]={ 8,7,6,5,4 };

    swapalternate(even,8);
    printarray(even,8);


    return 0;


}