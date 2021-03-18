///Лаб.раб 12
https://github.com/skillsskill/MyProject-1course

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(){
    setLocale(00,"");
    int N = 0;
    char S;
    enum way{ sever = 1; zapad; yogh; vostok = 4};

    switch (S){
        case 'C': {S = 'W'; break;}
        case 'P': {S = 'C'; break;}
        case 'X': {S = 'p'; break;}
        case 'W': {S = 'X'; break;}
    }
    {
        if (N == 1)
    }
    switch (S){
        case 'C': {S = 'P'; break;}
        case 'P': {S = 'W'; break;}
        case 'X': {S = 'C'; break;}
        case 'W': {S = 'X'; break;}
    }
    I = I + S;
   
   cout << "zapad:" << I << endl;
   system ("pause");
   return 0;

}
 
#include <bits/stdc++.h>
using namespace std;

int main(){
    cain >> n;
    if(n == 10)
    cout << "Десять Учебных заданий";
    if(n == 11)
    cout << "Одинадцать учебых заданий";
    if(n == 12)
    cout << "Двенадцать учебых заданий";
    if(n == 13)
    cout << "Тренадцать учебых заданий";
    if(n == 14)
    cout << "Четырнадцать учебых заданий";
    if(n == 15)
    cout << "Петнадцать учебых заданий";
    if(n == 16)
    cout << "Шестнадцать учебых заданий";
    if(n == 17)
    cout << "Семнадцать учебых заданий";
    if(n == 18)
    cout << "Восемнадцать учебых заданий";
    if(n == 19)
    cout << "Девятнадцать учебых заданий";
    if(n == 20)
    cout << "Двадцать учебых заданий";
    if(n == 21)
    cout << "Двацать одно учебное задание";
    if(n == 22)
    cout << "Двадцать два учебых заданий";
    if(n == 23)
    cout << "Двадцать три учебых заданий";
    if(n == 24)
    cout << "Двадцать четыре учебых заданий";
    if(n == 25)
    cout << "Двадцать пять учебых заданий";
    if(n == 26)
    cout << "Двадцать шесть учебых заданий";
    if(n == 27)
    cout << "Двадцать семь учебых заданий";
    if(n == 28)
    cout << "Двадцать восемь учебых заданий";
    if(n == 29)
    cout << "Двадцать девять учебых заданий";
    if(n == 30)
    cout << "Тридцать учебых заданий";
    if(n == 31)
    cout << "Тридцать одно учебное задание";
    if(n == 32)
    cout << "Тридцать два учебых заданий";
    if(n == 33)
    cout << "Тридцать три учебых заданий";
    if(n == 34)
    cout << "Тридцать четыре учебых заданий";
    if(n == 35)
    cout << "Тридцать пять учебых заданий";
    if(n == 36)
    cout << "Тридцать шесть учебых заданий";
    if(n == 37)
    cout << "Тридцать семь учебых заданий";
    if(n == 38)
    cout << "Тридцать восемь учебых заданий";
    if(n == 39)
    cout << "Тридцать девять учебых заданий";
    if(n == 40)
    cout << "Сорок учебных заданий";
}

#include <iostream>
#include <math.h>
#include <conio.h>

void main(){
    int x;
    switch (x/100){
        case 1: cout << "сто"; break;
        ///
        case 9: cout << "девятьсот"; break;
    }
    switch ((x/10)%10){
        case 1:
        switch (x/10){
            case 0: cout << "девять"; break;
            case 1: cout << "одиннадцать"; break;
            ///
            case 9: cout << "девятнадцать"; break;
        
        }
        break;
        case 2: cout << "двадцать"; break;
        ///
        case 90: cout << "девяносто"; break;{
            switch ((x/10)% 10)
        }
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            switch (x % 10){
                case 1: cout << "один"; break;
                 ///
                case 9: cout << "девять"; break;
            }
            break;
    }
    
}



#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Год:";
    cin>>n;

    cout << "год ";

    switch ((n) % 10) {
    case 0:
    case 1:
        cout << "бел";
        break;
    case 2:
    case 3:
        cout << "черн";
        break;
    case 4:
    case 5:
        cout << "зелён";
        break;
    case 6:
    case 7:
        cout << "красн";
        break;
    case 8:
    case 9:
        cout << "жёлт";
        break;
    }

    switch ((n + 1) % 5) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
        cout << "ой ";
        break;
    case 6:
    case 7:
    case 8:
        cout << "ого ";
        break;
    }

    switch ((n + 8) % 12) {
    case 0:
        cout << "крысы";
        break;
    case 1:
        cout << "коровы";
        break;
    case 2:
        cout << "тигра";
        break;
    case 3:
        cout << "зайца";
        break;
    case 4:
        cout << "дракона";
        break;
    case 5:
        cout << "змеи";
        break;
    case 6:
        cout << "лошади";
        break;
    case 7:
        cout << "овцы";
        break;
    case 8:
        cout << "обезьяны";
        break;
    case 9:
        cout << "курицы";
        break;
    case 10:
        cout << "собаки";
        break;
    case 11:
        cout<<"свиньи";
        break;
    }

    return 0;
}