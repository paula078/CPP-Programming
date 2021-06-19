#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;

  int main(){
  fstream file( "Jabberwocky.txt",ios::in);

  char letter;
  int tab_sum[26]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    while(!file.eof()){
        file>>letter;
        if(letter>=65 && letter<=90)
            tab_sum[letter-65]++;
        if(letter>=97 && letter<=122)
            tab_sum[letter-97]++;
    }

    file.close();

    for(int f=0; f<26; f++){
        cout <<tab_sum[f]<<endl;
    }
    return 0;
    }
