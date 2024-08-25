#include<iostream>
using namespace std;
void sort(int *arr,int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
             if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp; 

        }
    }

int main(){
    int n;
    cin>>n;//size
    int arr[n];
     cout<<" Enter the value";
    for (int i=0;i<n;i++){
       
        cin>>arr[i];
    }
    sort(arr,n);
    for (int i=0;i<n;i++){
        cout<< arr[i] <<" ";
    }

}