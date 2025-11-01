/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class SuperKahraman {
public:
    string ad;
    int can;
    int hasar;
    int guc;
    void ozelGuc() {
        hasar = 10;
    }
    void SuperGuc() {
        hasar = 30;
    }
    SuperKahraman() {
        hasar = 20;
        can = 100;
    }
};

int main() {
    SuperKahraman spiderMan;
    spiderMan.ad = "Spiderman";

    SuperKahraman batman;
    batman.ad = "Batman";

    cout << "Süper kahramanlar kapışıyor!" << endl;

    bool savasDevamEdiyor = true;
    while (savasDevamEdiyor) {
        string secim;
        cout << "Hangi süper kahraman saldırsın? (s/b)" << endl;
        cout << "Özel güç kullanmak istersen 'ssg' (Spiderman özel güç) veya 'bsg' (Batman özel güç) yaz." << endl;
        cin >> secim;

        bool gecerliHamle = true; 

        if (secim == "s") {
            batman.can -= spiderMan.hasar;
        } 
        else if (secim == "b") {
            spiderMan.can -= batman.hasar;
        } 
        else if (secim == "ssg") {
            spiderMan.SuperGuc();
            batman.can -= spiderMan.hasar;
            cout << "Spiderman özel gücünü kullandı! (Hasar: " << spiderMan.hasar << ")" << endl;
        }
        else if (secim == "bsg") {
            batman.SuperGuc();
            spiderMan.can -= batman.hasar;
            cout << "Batman özel gücünü kullandı! (Hasar: " << batman.hasar << ")" << endl;
        }
        else {
            cout << "⚠️ Hatalı seçim! Saldırı gerçekleşmedi." << endl;
            gecerliHamle = false;
        }

        if (gecerliHamle) {
            cout << "Spiderman kalan can: " << spiderMan.can
                 << " | Batman kalan can: " << batman.can << endl;
        }

        if (spiderMan.can <= 0 || batman.can <= 0) {
            savasDevamEdiyor = false;
        }
    }

    cout << endl;
    if (spiderMan.can <= 0)
        cout << "Kazanan Batman!" << endl;
    else
        cout << "Kazanan Spiderman!" << endl;

    return 0;
}
