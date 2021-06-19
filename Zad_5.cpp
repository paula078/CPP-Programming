#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
fstream outfile( "election.txt",ios::out);

int n;
int m;
int tmp;
cout <<"Podaj liczbe wyborcow: "<<endl;
cin >> n;

cout <<"Podaj liczbe kandydatow: "<<endl;
cin >> m;

int tab[n][m];

srand(time(NULL));
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        tmp=rand()%m;
        outfile <<tmp;
        outfile <<" ";
        cout<<tmp<<" ";
    }
    outfile <<endl;
    cout <<endl;
}
outfile.close();
return 0;
}
