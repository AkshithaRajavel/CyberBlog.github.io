#include<iostream>
using namespace std;
class Test{
    public :
    Test(int a,int b){

    }
};
int main(){
    Test t(100,200);
    int arr[4]={1,2,3,4};
    int ind;
    cout<<"Index Limit : ";
    cin>>ind;
    for(int i=0;i<=ind;i++)
    cout<< arr[i]<<" ";
}