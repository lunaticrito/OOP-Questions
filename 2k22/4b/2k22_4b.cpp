//File handling
//reads a txt file, creates another
//identical except every sequence of consecutive blank
//replaced by single space
#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string line;
    while(getline(fin,line)){
        bool space=false;

        for(char ch:line){
            if(ch!=' '){
                fout<<ch;
                space=false;
            }
            else if(!space){
                fout<<' ';
                space=true;
            }
        }
        cout<<endl;
    }

    fin.close();
    fout.close();
    return 0;
}