#include<iostream>
#include<string.h>

using namespace std;

class myString {
    char abc[400];
    int UPR, LOW, SPC, WS, DIG, WD, CH;

    public:
    myString() {
        UPR = LOW = SPC = WS = DIG = WD = CH = 0;
    }
    void takeInput() {
        cout << "Enter any Text: ";
        cin.getline(abc, 400);
        print();
    }
    void print() {
        cout << "String: " << abc;
    }
    void merge() {
        char tmp[400];
        cout << "Enter new string: ";
        cin.getline(tmp, 400);
        strcat(abc, tmp);
        cout << "Merged String: " << abc;
    }
    void copyStr() {
        int p, n, i;
        char tmp[400] = "";
        cout << "\nEnter position: ";
        cin >> p;
        cout << "Enter length: ";
        cin >> n;
        for(i = 0; i < n; i++) {
            tmp[i] = abc[p + i];
        }
        cout << "Copied String: " << tmp;
    }
    void stringLen() {
        cout << "String have length of: " << strlen(abc);
    }
    void countOne() {
        UPR = LOW = SPC = WS = DIG = WD = CH = 0;
        int i = 0,tmp;
        char spp[1];
        for(i = 0; i < strlen(abc); i++) {
            tmp = (int)abc[i];
            if(58 > tmp && tmp > 47) {
                DIG++;
            } else if(91 > tmp && tmp > 64) {
                UPR++;
            } else if(123 > tmp && tmp > 96) {
                LOW++;
            } else if(tmp == 32) {
                WS++;
            } else {
                SPC++;
            }
        }
        cout << "\nDigits: " << DIG << endl;
        cout << "Uppercase: " << UPR << endl;
        cout << "Lowercase: " << LOW << endl;
        cout << "WhiteSpace: " << WS << endl;
        cout << "Spacial Symobols: " << SPC << endl;
    }
    void countTwo() {
        int i,d;
        char tmp[400] = "";
        CH--;
        strcat(tmp, abc);
        strcat(tmp, " ");
        for(i = 0; i < strlen(tmp); i++) {
            CH++;
            if(tmp[i] == ' ' && i != 0 && tmp[i-1] != ' ') {
                WD++;
            }
        }
        cout << "Words: " << WD << endl;
        cout << "Characters: " << CH << endl;
    }
    void replace() {
        int i;
        for(i = 0; i < strlen(abc); i++) {
            if(abc[i] == '.') abc[i] = ';';
        }
        cout << "String: " << abc;
    }

};

int main() {
    myString s;
    int ch = 1;
    while(ch > 0 && ch < 9) {
        cout << "1: Read a String\n";
        cout << "2: Display the string\n";
        cout << "3: Merge two strings\n";
        cout << "4: Copy n characters from mth position\n";
        cout << "5: calculate length of the string\n";
        cout << "6: count number of uppercase, lowercase, digits, special characters, and white spaces\n";
        cout << "7: count number of words and characters\n";
        cout << "8: Replace dot(.) with semicolon(;)\n";
        cout << "Enter your choice: ";
        cin >> ch;
        cin.ignore();
        switch(ch) {
            case 1:
                s.takeInput();
                break;
            case 2:
                s.print();
                break;
            case 3:
                s.merge();
                break;
            case 4:
                s.copyStr();
                break;
            case 5:
                s.stringLen();
                break;
            case 6:
                s.countOne();
                break;
            case 7:
                s.countTwo();
                break;
            case 8:
                s.replace();
                break;
            default: {
                cout << "Wrong choice :), come back and try again\n";
            }
        }
        cout << "\n\n---------------------------\n\n";
    }
}