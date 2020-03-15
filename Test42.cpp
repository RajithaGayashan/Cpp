#include<iostream>
using namespace std;
int strlen(char []);
int main(){
    char S[]="University of Colombo";
    cout<<strlen(S)<<endl;
}

int strlen(char S[]){
    int count=0;
    while(S[count]){
        count++;
    }
    return (count);
}
