https://github.com/skillsskill/MyProject-1course
// ЗД 2 
#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
void main(){
    setlocale(0,"");
    int a, b, c, ;
    cin >> "a = ";
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    a = a + b + c;
    c =a - (b + c);
    b = a - (b + c);
    a = a - (b + c);
    cout << "a = " << a << endl;
    cout << "b  = " << b endl;
    cout << "c = " << c << endl;
    system("pause");
}

//ЗД 3 
#include
#include
#include
int main(){
    int a=1, b=2, c=3;
    b=a;
    b=c;
    a=b;
    printf("a=%d b=%d c=%d",a,b,c);
    system("pause");
}
//изменил значение переместив содержимое

int main(){
    int a, b, c,;
    a = 1;
    b = 2;
    c = 3;
    a = a^c;
    c = a^c;
    a = a^c;
    a = a^b;
    b = a^b;
    a = a^b;
    printf("a=%d b=%d c=%d\n", a,b,c);
    return 0;
}
// ЗД 5 
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double y;
    doyble x;
    cout << "      x:";
    cin >> x;
    y = (3 * pow(x,6)) - ( 6 * pow(x,2)) - 7;
    cout << "y = " << y;
    return 0;
}
// ЗД 7 
#include <iostream>
using namespace std;
int main(){
    long A, p1, p2;
    cout << "   val: "; cin >> A;
    cout << "A2 = "<<(p1 = A*A)<<endl;
    cout << "A3 = "<<(p2 = p1*A)<<endl;
    cout << "A5 = "<<(p1 = pw*A)<<endl;
    cout << "A10 = "<<(p2 = p1*p1)<<endl;
    cout << "A15 = "<<(p1 = p2*p1)<<endl;
    system("pause");
    return 0;

}