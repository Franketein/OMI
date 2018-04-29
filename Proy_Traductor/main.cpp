#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string cadena;
    //cadena = "a==b?x=1:x=0";
    cin >> cadena;
    int condicion = cadena.find('?');
    string str1 = cadena.substr(0, condicion);
    //cout<<str1<<endl;
    int dospuntos = cadena.find(':');
    string str2 = cadena.substr(condicion+1, dospuntos-condicion-1);
    //cout<<str2<<endl;
    string str3 = cadena.substr(dospuntos+1, cadena.length()-dospuntos);
    //cout<<str3<<endl;

    cout<<"if("<<str1<<")\n";
    cout<<"     "<<str2<<";\n";
    cout<<"else\n";
    cout<<"     "<<str3<<";";
    return 0;
}
