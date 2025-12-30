//add two numbers
//store result using file

#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int a,b;
    while(fin>>a>>b){
        fout<<a+b<<endl;
    }
    fin.close();
    fout.close();
    return 0;
}