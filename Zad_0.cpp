#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

fstream file;
file.open( "Jabberwocky.txt",ios::in);
if( file.good() == true )
{
    cout << "Uzyskano dostep do pliku" << endl;
    string line;
int cnt=0;
while(!file.eof()){  //dopoki nie napotka na flage konca pliku
getline(file,line);
cnt++;
cout <<line<<endl;

}
cout <<cnt;
} else
cout << "Brak dostepu do pliku" << endl;

return 0;
}
