#include<iostream>
#include<math.h>

using namespace std;

int dzialanie, i, n, stopien;
float liczba1, liczba2, wynik;

int main()
{
  for(;;)
  {
    cout << "Podaj dzialanie " << endl;
    cout << "1 - dodawanie" << endl;
    cout << "2 - odejmowanie" << endl;
    cout << "3 - mnozenie" << endl;
    cout << "4 - dzielenie" << endl;
    cout << "5 - potegowanie" << endl;
    cout << "6 - silnia" << endl;
    cout << "0 - WYJSCIE z programu" << endl;
    cin >> dzialanie;
     switch(dzialanie)
     {
     case(0):
        return 0;
     case(1):
        cout << "Pierwszy skladnik = ";
        cin >> liczba1;
        cout << "Drugi skladnik = ";
        cin >> liczba2;
        wynik=liczba1+liczba2;
        cout << liczba1 << " + " << liczba2 << " = " << wynik << endl;
        cout << endl;
        break;
     case(2):
        cout << "Odjemna = ";
        cin >> liczba1;
        cout << "Odjemnik = ";
        cin >> liczba2;
        wynik=liczba1-liczba2;
        cout << liczba1 << " - " << liczba2 << " = " << wynik << endl;
        cout << endl;
        break;
     case(3):
        cout << "Pierwszy czynnik = ";
        cin >> liczba1;
        cout << "Drugi czynnik = ";
        cin >> liczba2;
        wynik=liczba1*liczba2;
        cout << liczba1 << " * " << liczba2 << " = " << wynik << endl;
        cout << endl;
        break;
     case(4):
        cout << "Dzielna = ";
        cin >> liczba1;
        cout << "Dzielnik = ";
        cin >> liczba2;
          if(liczba2!=0)
          {
          wynik=liczba1/liczba2;
          cout << liczba1 << " / " << liczba2 << " = " << wynik << endl;
          cout << endl;
          }
          else
          {
          cout << "Nie dzieli sie przez 0!" << endl;
          cout << endl;
          }
        break;
     case(5):
        cout << "Podstawa = ";
        cin >> liczba1;
        cout << "Wykladnik = ";
        cin >> liczba2;
        if(liczba2==0)
        {
           wynik=1;
        }
        else
        {
           wynik=liczba1;
           for(n=1; n<liczba2; n++)
           {
              wynik=wynik*liczba1;
           }
        } 
        cout << liczba1 << "^" << liczba2 << " = " << wynik << endl;
        cout << endl;
        break;
     case(6):
       cout << "Liczba ktorej ma byc policzona silnia = ";
       cin >> liczba1;
       wynik=1;
         for(n=1;n<=liczba1;n++)
         wynik=wynik*n;
       cout << liczba1 << "! = " << wynik << endl;
       cout << endl;
       break;
      default:
        cout << "Wybrales niepoprawny numer dzialania" << endl;
        cout << endl;
        break;
    };
  }
  system("PAUSE");
  return 0;   
}