#include <bits/stdc++.h>
using namespace std;
void out(){
    string str;
    fstream outf;
    outf.open("res.txt",ios::in);
    set<string> s;
    int i=0;
    int cnt=0;
    while(getline(outf,str)){
        if(i%2==1){
            s.insert(str);
            cnt++;
        }
        i++;
    }
    cout<<cnt<<" people "<<s.size()<<" different books";
}
signed main(){
    string cmd;
    cout<<"Enter 1 if you want to answer the questions of the survey or enter 2 if you want to see the results of the survey"<<endl;
    getline(cin,cmd);
    cout<<endl;
    if(cmd=="1"){
    string name,surname;
    cout<<"Your name: ";
    getline(cin,name);
    cout<<"Your surname: ";
    getline(cin,surname);
    fstream outf;
    outf.open("res.txt",ios::app);
    outf<<name<<" "<<surname<<endl;
    string str;
    cout<<"What book do you recommend to read?"<<endl;
    getline(cin,str);
    outf<<str<<" ";
    outf<<endl;
    }else if(cmd=="2"){
        out();
    }
    return 0;
}
