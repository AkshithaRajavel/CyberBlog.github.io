#include<iostream>
using namespace std;
int main(){
string s = "computer science";
cout<<s.length()<<endl;//actual length
int *ptr = (int*)&s;//pointer to string object in heap
*((int*)*ptr-6) = 8;//changing length field to 8
cout<<s;
}