#include<iostream>
using namespace std;
char& replace(int i);
char s[80]="hello there";
int main(){
    replace(5)='X';
    cout<<s;
    return 0;

}
char& replace(int i){
    return s[i];
}