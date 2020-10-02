#include <iostream>
#include<algorithm>
using namespace std;
void display(int arr[1000][1000],int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void rotate(int arr[1000][1000],int n){
    for(int i = 0; i < n; i++){
         int start_col = 0;
        int end_col = n - 1;
        while(start_col < end_col){
            swap(arr[i][start_col],arr[i][end_col]);
            start_col++;
            end_col--;
        }

    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i < j){
              swap(arr[i][j],arr[j][i]);
            }
        }
    }

}
void rotate_stl(int arr[1000][1000],int n){
    for(int i = 0; i < n; i++){
        reverse(arr[i],arr[i] + n);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i < j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
}
int main() {
    int n;
    cin>>n;
    int arr[1000][1000];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    rotate_stl(arr,n);
    display(arr,n);

}
