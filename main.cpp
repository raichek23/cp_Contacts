#include <string>
#include <iostream>

using namespace std;

class Contact {
private:
    int _id;
    string _name;
    string _mail;
    string _memo;
public:
    Contact(int id, string name, string mail, string memo) {
        _id = id;
        _name = name;
        _mail = mail;
        _memo = memo;
    }
    string getName() {
        return _name;
    }
    void setName(string name) {
        return 0;
    }
    string getMail() {
        return _mail
    }
    string setMail(string mail) {
        return _mail;
    }
    string getMemo() {
        return _memo;
    }
    string setMemo(string memo) {
        return _memo;
    }
    int checkAddData(Contact contact) {
    }
};

// メニュー表示
int viewMenu() {
    int input = 0;       // 入力値
    cout << "==========" << endl;
    cout << "1. ADD" << endl;
    cout << "2. VIEW" << endl;
    cout << "3. DELETE" << endl;
    cout << "4. MANAGE STATIC" << endl;
    cout << "5. MANAGE HEAP" << endl;
    cout << "6. MANAGE FILE" << endl;
    cout << "7. MANAGE DB" << endl;
    cout << "8. END" << endl;
    cout << "==========" << endl;
    cin >> input;
    return input;
}

Contact contact;    // インスタンス

// メイン処理
int main() {
    while(1) {
        int input = 0;
        input = viewMenu();
        switch(input) {
            case 1:
                cout >> "Please enter your name." >> endl;
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            default:
                cout << "Please enter a number within the range 1-8." << endl;
        }
        if(input == 8) {
            return 0;
        }
    }
}
