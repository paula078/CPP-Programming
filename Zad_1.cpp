#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
int cnt=0;
fstream file;
file.open( "Jabberwocky.txt",ios::in);
if( file.good() == true )
{
    cout << "Uzyskano dostep do pliku" << endl;
    string word;

while(!file.eof()){
    file >> word;  //odczytanie slowa z pliku
    cnt++;
}
}
else
cout << "Brak dostepu do pliku" << endl;
cout << cnt;

return 0;
}
