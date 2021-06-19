#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
fstream outfile( "election.txt",ios::out);

int n;
int m;
int tmp;
int cnt=0;
int maxi=0;

cout <<"Podaj liczbe wyborcow: "<<endl;
cin >> n;

cout <<"Podaj liczbe kandydatow: "<<endl;
cin >> m;

int tab[n][m];
int losowanie[m]{};
int wyniki[m]{};

srand(time(NULL));
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        tmp=rand()%m;
        tab[i][j]=tmp;
        outfile <<tab[i][j];
        outfile <<" ";
        cout<<tab[i][j]<<" ";

        if(j==0){
        wyniki[tmp]+=1;
        cnt++;
        }
    }
    outfile <<endl;
    cout <<endl;
}
outfile <<"Wyniki dla odpowiednich kandydatow";
outfile <<endl;
cout<<"Wyniki dla odpowiednich kandydatow"<<endl;
for(int k=0; k<m; k++){
    cout <<wyniki[k]<<" ";
    outfile <<wyniki[k];
    outfile <<" ";
}

for(int s=0; s<m; s++){
    if(wyniki[s]>maxi)
        maxi=wyniki[s];
}

int loscnt=0;
cnt=0;
for(int s=0; s<m; s++){
    if(wyniki[s]==maxi){
        losowanie[cnt]=s;
        loscnt++;
        cnt++;
    }
}
//Podawany jest numer kandydata od 0 do m
int winner;
winner=rand()%loscnt;
outfile <<"\nZwyciezca: "<<losowanie[winner];
cout <<"\nZwyciezca: "<<losowanie[winner];

outfile.close();
return 0;
}
