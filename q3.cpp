#include<iostream>

using namespace std;
class Rpee;
class Dollar;
class Dollar {
    float val;
    public: 
    Dollar() {
        val = 0;
    }
    Dollar(float a) {
        val = a;
    }
    float get() {return val;}
    void print() {
        cout << "Dollar: " << val << endl;
    }
    Dollar operator=(Rpee);
};
class Rpee {
    float val;
    public:
    Rpee() {
        val = 0;
    }
    Rpee(float a) {
        val = a;
    }
    float get() {return val;}
    void print() {
        cout << "Rupee: " << val << endl;
    }
    Rpee operator=(Dollar);
};

Dollar Dollar::operator=(Rpee ob) {
    val = ob.get() / 70;
    return *this;
}

Rpee Rpee::operator=(Dollar ob) {
    val = ob.get() * 70;
    return *this;
}

int main() {
    Dollar d1(10), d2;
    Rpee r1;
    r1 = d1;
    d2 = r1;
    r1.print();
    d2.print();
}