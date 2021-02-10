// Занятие 5 
// Зд 1

#include <iostream>
#include <cmatch>

    using namespace std;
    double Len(int x1, int y1, int x2, int y2);{
        return sqrt ((double)(x1 - x2)*(x1-x2)+(double)(y1 - y2)*(y1 - y2));
    }
    int main(){
        int x1, y1, x2, y2,;
        cin >> x1 >> y1 >> x2 >> y2;
        double len = Len (x1,y1,x1,y2);
        cout << len << endl;
        return 0;
    }

    // Зд 2

    #include <iostream>
    #include <cmath>
    #include <iomanip>
    
    using namespce std;
    double funct (double x1, double y1, double x2, double y2){
        return sqrt(pow(x2 - x1,2)+pow(y2 - u1,2));
    }
    int main(){
        doble x1,x1,y2,y2
        cin >> x1 >> y1 >> x2 >> y2;
        doble AC = funct(x1,y1,x2,y2);
        cin >> x1 >> y1;
        doble BC = fucnt(x1,y1,x2,y2);
        cout << setprecision(2) << fixet;
        cout << "AC=" << AC <<endl << "BC=" << BC << endl << "SUM=" << AC + BC;
        return 0;
    }

    // ЗД 3

    #include <stdio.h>
    #include <stdlib.h>

    int main(){
        float a, b, c;
        printf("A:");
        scanf("%f",&a);
        printf("B:");
        scanf("%f",&b);
        printf("C:");
        scanf("%f", &c);

        if (abc(a-b)<abc(a-c)) printf("B\n");
        else printf("C\n");

        return 0;

    }