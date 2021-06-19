#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
fstream file( "Palindromy.txt",ios::in);
fstream outfile( "Ymordnilap.txt",ios::out);
  
string line;

char tmp;
while(getline(file,line)){  //dopoki nie napotka na flage konca pliku

if(line[0] == '"')

for(int i=0; i<line.length()/2; i++){
    tmp=line[i];
    line[i]=line[line.length()-1-i];
    line[line.length()-1-i]=tmp;
}

outfile <<line;
outfile <<endl;
}
file.close();
outfile.close();

return 0;
}
