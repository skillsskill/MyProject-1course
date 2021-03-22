//Лаб.раб13..зд1
https://github.com/skillsskill/MyProject-1course

#include <iostream>
#include <stdring>

using namespace std;

int main(){
    float price;
    cout << "125:"; cin >> price;
    for(int i = 1; i <= 10; i++){
        cout << i*0.1 << "  _  " << 0.1*1*price << endl;
    }
}

//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    double pr = 1;
    cin >> n;
    for (double i = 1.1 i <= n; i += 0.1){
        pr *- 1;
    }
    cout << fixed << setpresion(4) << pr << endl;

    return 0;
}

//


#include <iostream>

using namespace std;


int main(){
    int n = 20;
    int s= 0;
      for(int i = 1; i < = n; i++){
          s + = 2 * i - 1;
          cout << s << "";
     }
      cin.get()""
}

//

#include <iostream>

using namespace std;

int main(){
    int N;
    double an = 1, s = 1, A;

    cout << "A = "; cin >> A;
    cout << "N = "; cin >> N;

    for(int i = 1; i <= N; i++){
        an * = -A;
        s +  = an;
    }
    cout << s << "\n";

    system("pause");
    return 0;
}