#include <iostream>
using namespace std;

class Figura
{
public:
    //  void   SetP(double P) { pole = P; };
    // double getP() { return pole; };
    void id() { cout << "figura::: :" << endl; }

protected:
    double pole;
};

class Kolo : public Figura
{
public:
    Kolo(double r) : Figura{}
    {
        pole = 2 * 3.14 * r;
        cout << "pole kola to: " << pole << endl;
    }
    void id() { cout << "kolo, pole to :" << pole << endl; }
};
class Kwadrat : public Figura
{};

int main()
{
    puts("zad 8");
    Kolo pierwsze(1);
    pierwsze.id();
}
