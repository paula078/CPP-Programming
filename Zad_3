#include <iostream>
#include <time.h>
using namespace std;

int main()
{
float W[7];
float K[7];
int sum=0;
int C[7][7];
srand(time(NULL));

for(int i=0; i<7; i++){
        for(int j=0; j<7; j++)
    C[i][j]=rand()%21-10;
}
for(int i=0; i<7; i++){
        for(int j=0; j<7; j++)
    cout << C[i][j] <<"\t";
    cout << "\n";
}
cout << "\tSrednia elementow w odpowiednich wierszach:"<<endl;
for(int i=0; i<7; i++){
        sum=0;
        for(int j=0; j<7; j++){
      sum+=C[i][j];
        }
        W[i]=(double)sum/7.;
        cout<< W[i] << "    ";
}
cout << endl;
cout << endl;
cout << "\tSrednia elementow w odpowiednich kolumnach:"<<endl;
for(int j=0; j<7; j++){
        sum=0;
        for(int i=0; i<7; i++){
      sum+=C[i][j];
        }
        K[j]=(double)sum/7.;
        cout<< K[j] << "    ";
}
return 0;
}
