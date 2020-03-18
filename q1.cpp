#include<iostream>

using namespace std;

class students {
    char names[10][20];
    float th1[10],th2[10],pr1[10],pr2[10],total[10],avg[10];
    int i;
    public: 

    void input() {
        for(i = 0; i < 10; i++) {
            cout <<"--STUDENT " << i + 1 << " Record ---- \n";
            cout << "Name: ";
            cin >> names[i];
            cout << "Marks in Theory sub 1: ";
            cin >> th1[i];
            cout << "Marks in Theory sub 2: ";
            cin >> th2[i];
            cout << "Marks in Practical sub 1: ";
            cin >> pr1[i];
            cout << "Marks in Practical sub 2: ";
            cin >> pr2[i];
            total[i] = th1[i] + th2[i] + pr1[i] + pr2[i];
            avg[i] = total[i] / 4;
        }
    }
    void display() {
        cout << "\n-----------------------\n";
        for(i = 0; i < 10; i++) {
            cout <<"--STUDENT " << i + 1 << " Record ---- \n";
            cout << "Name: " << names[i] << endl;
            cout << "Marks in Theory sub 1: " << th1[i] << endl;
            cout << "Marks in Theory sub 2: " << th2[i] << endl;
            cout << "Marks in Practical sub 1: " << pr1[i] << endl;
            cout << "Marks in Practical sub 2: " << pr2[i] << endl;
            cout << "Total marks: " << total[i] << endl;
            cout << "Average: " << avg[i] << endl;
        }
        cout << "\n-----------------------\n";
    }

};

int main() {
    students s;
    s.input();
    s.display();
}