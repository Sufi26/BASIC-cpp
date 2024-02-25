#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char firstStr[50]="this is softwaretestinghelp.com";
    char secStr[50] ="a testing platform";

    int len =strlen(firstStr);
    cout<<"length of firstStr: "<<len;
    strcpy(secStr,"software testing");
    cout<<"\nResultant string(secStr):"<<secStr;
    cout<<"\nComparing firstStr and secStr :"<<strcmp(firstStr,secStr);
    strcat(secStr,"for you");
    cout<<"concatenated string with secStr"<<secStr<<endl;
    cout<<"first occurence of i  in firstStr is"<<strchr(firstStr,'i')<<endl;
    return 0;
}