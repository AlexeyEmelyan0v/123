#include <bits/stdc++.h>
using namespace std;
int qnum=0;
int q;
bool srt(vector<string> a,vector<string> b){
    int c;
    string astr=a[q-1];
    string bstr=b[q-1];
    c=min(astr.size(),bstr.size());
    for(int i=0;i<c;i++){
        if(astr[i]>='A' && astr[i]<='Z'){
            astr[i]+=32;
        }
        if(bstr[i]>='A' && bstr[i]<='Z'){
            bstr[i]+=32;
        }
        if((astr[i])<(bstr[i])){
            return true;
        }else if(astr[i]>bstr[i]){
            return false;
        }
    }
    if(astr.size()<bstr.size()){
        return true;
    }
    return false;
}
void out(){
    string str,name,surname,ans;
    fstream inf;
    inf.open("inputfile.txt",ios::in);
    while(getline(inf,str)){
        qnum++;
    }
    fstream outf;
    vector<vector<string>> s;
    outf.open("res.txt",ios::in);
    vector<string> b;
    while(getline(outf,name)){
        b.clear();
        b.push_back(name);
        getline(outf,surname);
        b.push_back(surname);
        for(int i=0;i<qnum;i++){
            getline(outf,ans);
            b.push_back(ans);
        }
        s.push_back(b);
    }
    sort(s.begin(),s.end(),srt);
    for(int j=0;j<s.size();j++){
        for(int i=0;i<s[j].size();i++){
            cout<<s[j][i]<<" ";
        }
        cout<<"\n";
    }
}

void change_q() {
    ofstream res;
    res.open("res.txt");
    ofstream in;
    in.open("inputfile.txt");
    cout << "Number of questions: ";
    cin>>qnum;
    string qt; getline(cin, qt);
    for (int i = 0; i < qnum; ++i) {
        getline(cin, qt);
        in << qt << "\n";
    }
}

signed main(){
    string cmd;
    cout<<"Enter 1 if you want to answer the questions of the survey or enter 2 if you want to see the results of the survey or enter 3 if you want to change questions"<<endl;
    getline(cin,cmd);
    cout<<endl;
    if(cmd=="1"){
        fstream qi;
        fstream res;
        string name,surname;
        qi.open("inputfile.txt",ios::in);
        res.open("res.txt", ios::app);
        string qr;
        cout<<"What is your name? ";
        cin>>name;
        res<<name<<"\n";
        cout<<"What is your surname? ";
        cin>>surname;
        res<<surname<<"\n";
        while(getline(qi, qr)){
            cout << qr << ' ';
            string ans;
            cin >> ans;
            res << ans << "\n";
        }
        cout << "\n";
    }else if(cmd=="2"){
        cin>>q;
        out();
    } else {
        change_q();
    }
    return 0;
}
