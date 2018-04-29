#include <iostream>
#include <string>

using namespace std;

bool autor(string cad)
{
    if (cad[7] == '1' || cad[7] == '6' || cad[7] == '9')
        return true;

    return false;
}

bool fecha(string cad)
{
    //Mes o día es 0
    string dia = cad.substr(0,2);
    string mes = cad.substr(2,2);
    string ano = cad.substr(4,3);
    if (dia == "00" || mes == "00")
        return false;

    int diaI = stoi(dia);
    //Casos de Febrero
    if (mes == "02")
    {
        int anoI = stoi(ano);

        if (anoI < 600)
            anoI += 2000;
        else
            anoI += 1000;

        //Es año bisiesto?
        if ((anoI%4 == 0) || (anoI%100 == 0 && anoI%400 != 0))
        {
            if (diaI > 29)
                return false;
        }
        else
        {
            if (diaI > 28)
                return false;
        }
    }

    //Meses de 30 y 31
    int mesI = stoi(mes);
    if ((mesI%2==0 && mesI<8) || (mesI&2!=0 && mesI>=8))
    {
        //Meses de 30
        if (diaI>30)
            return false;
    }
    else
    {
        if (diaI>31)
            return false;
    }

    return true;
}

bool control(string cad)
{
    int a = cad[0] - '0';
    int b = cad[1] - '0';
    int c = cad[2] - '0';
    int d = cad[3] - '0';
    int e = cad[4] - '0';
    int f = cad[5] - '0';
    int g = cad[6] - '0';
    int h = cad[7] - '0';
    int i = cad[8] - '0';

    int cuadrados = a*a + b*b + c*c + d*d + e*e + f*f + g*g + h*h;

    if (cuadrados%7 == i)
        return true;
    else
        return false;
}

int main()
{
    int N;
    cin>>N;

    int resultados[N];
    for (int i = 0; i < N; i++)
    {
        string id;
        cin>>id;

        bool autorB = autor(id);
        if (!autorB)
        {
            resultados[i] = 0;
            continue;
        }

        bool fechaB = fecha(id);
        if (!fechaB)
        {
            resultados[i] = 0;
            continue;
        }

        bool controlB = control(id);
        if (!controlB)
        {
            resultados[i] = 0;
            continue;
        }

        resultados[i] = 1;
    }

    for (int i = 0; i<N; i++)
    {
        cout<<resultados[i]<<endl;
    }

    return 0;
}
