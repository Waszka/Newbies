#include<iostream>
using namespace std;
int wiek, podnies, wynik, porownaj, roznica;
void pkt_a()
{
    cout <<"Podaj swoj wiek:";
    cin >> wiek;
}
void pkt_c()
{
    cout <<"Masz " << wiek << " lat." << endl;
}
void pkt_b()
{
    cout <<"O ile chcesz podniesc swoj wiek:";
    cin >> podnies;
    wynik=wiek+podnies;
    cout <<"Po podniesieniu wieku masz:" << wynik << " lat." << endl;
}
void pkt_d()
{
    cout <<"Porownaj moj wiek z:";
    cin >> porownaj;
    if(porownaj>wiek)
    {
        cout <<"Jestes mlodszy." << endl;
    }
    else if(porownaj<wiek)
    {
        cout <<"Jestes starszy." << endl;
    }
    else
        cout <<"Masz tyle samo lat." << endl;
}
void pkt_e()
{
    roznica=2017-wiek;
    cout <<"Urodziles sie w "<< roznica << " roku." << endl;
}
void pkt_f()
{
        if(wiek >= 18)
    {
        cout <<"Jestes pelnoletni.";
    }
    else
        cout <<"Jestes niepelnoletni.";
}

int main()
{
    pkt_a();
    pkt_c();
    pkt_b();
    pkt_d();
    pkt_e();
    pkt_f();

    return 0;
}
