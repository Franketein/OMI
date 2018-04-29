#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> gruposTres;

string menores30[30] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve", "diez", "once", "doce",
"trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve", "veinte", "veintiuno", "veintidos",
"veintitres", "veinticuatro", "veinticinco", "veintiseis", "veintisiete", "veintiocho", "veintinueve"};

string centenas[10] = {"", "cien", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

string decenas[7] = {"treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};

string apendices[7] = {"", "mil", "millones", "mil", "billones", "mil", "trillones"};
string apendicesUno[7] = {"", "mil", "millon", "mil", "billon", "mil", "trillon"};

string GenerarValor(string numStr, long long indice)
{
    int num = stoi(numStr);
    if (num <= 0)
        return "";

    if (numStr.size() == 1)
    {
        if (indice > 0 && num==1)
            return "";

        return menores30[num];
    }

    string palabras = "";
    int c = stoi(numStr.substr(0, 1));
    int menosC = stoi(numStr.substr(numStr.size()-2));

    palabras += centenas[c];
    if ((c == 1 && menosC == 1) || (num>=101 && num<200))
        palabras+="to";

    palabras += " ";

    if (numStr.size() == 2 || c == 0)
    {
        palabras = "";
    }

    if (menosC < 30)
        palabras+=menores30[menosC];
    else
    {
        int d = numStr[1] - '0';
        int u = numStr[2] - '0';
        palabras+=decenas[d-3];
        if (u>0)
            palabras+=" y " + menores30[u];
    }

    if (palabras != centenas[c] + " ")
        palabras+=" ";

    return palabras;
}

string GenerarPeso(string numStr, long long indice)
{
    string palabras = "";
    int num = stoi(numStr);
    if (num == 1 && indice>1)
    {
        palabras = "un " + apendicesUno[indice] + " ";
        return palabras;
    }

    if (num > 0 || indice > 1)
    {
        palabras = apendices[indice];
        palabras+=" ";
    }
    return palabras;
}

int main()
{
    string n;
    cin >> n;
    //Dividir el número en grupos de tres
    while (n.size() > 3)
    {
        string prim3 = n.substr(n.size()-3);
        gruposTres.push_back(prim3);
        n.erase(n.size()-3);
    }
    gruposTres.push_back(n);
    /*for (long long i = gruposTres.size()-1; i>=0; i-=1)
    {
        cout<<gruposTres[i]<<endl;
    }*/

    string texto = "";
    for (long long i = gruposTres.size()-1; i>=0; i-=1)
    {
        texto += GenerarValor(gruposTres[i], i);
        texto += GenerarPeso(gruposTres[i], i);
    }

    cout<<texto<<endl;
    return 0;
}
