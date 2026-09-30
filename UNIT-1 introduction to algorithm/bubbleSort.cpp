#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr){
    for(int i=0; i<arr.size()-1; i++){
        for(int j=0; j<arr.size()-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

            }
        }
    }
}
void display(vector<int>& arr){
    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {1,5,9,4,22,74,56,89,6};
    cout<<"original arr";
    display(arr);
    bubbleSort(arr);
    cout<<"sorted arr";
    cout<<endl;
    display(arr);
    return 0;
}