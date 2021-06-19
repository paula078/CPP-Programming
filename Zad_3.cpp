#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main(){
fstream file;
file.open( "time.txt",ios::out);

    if( file.good() == true ){

        time_t czas = 0;     //(Czas Unix)
        //ctime( & czas );  //czas zerowy

        time( & czas );
        file <<("Czas lokalny:", ctime( & czas ) );
   }
   else
    cout << "Brak dostepu do pliku" << endl;

file.close();
return 0;
    //ctime konwertuje czas zerowy na łańcuch znaków reprezentujący datę i czas
}
