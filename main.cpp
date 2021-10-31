#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

#define NAME_LENGTH 50

enum Gender
{
    MALE,
    FEMALE
};

struct Person
{
    char name[NAME_LENGTH];
    int  age;
    enum Gender gender;
};

void showPerson(Person[], int);
void showPerson(Person&);

void showPerson(Person p[], int len)
{
    for (int i = 0; i < len; i++)
    {
        // ポインタでなくそのまま渡す
        showPerson(p[i]);
        std::cout << std::endl;
    }
}

// 引数pは参照渡し
void showPerson(Person &p)
{
    std::cout << "name: " << p.name << "¥n";
    std::cout << "age : " << p.age  << "¥n";
    if (p.gender == MALE)
    {
        std::cout << "gender: 男" << std::endl;
    } else {
        std::cout << "gender: 女" << std::endl;
    }
}

// class Contact {
// private:
//     int _id;
//     string _name;
//     string _mail;
//     string _memo;
// public:
//     Contact(int id, string name, string mail, string memo) {
//         _id = id;
//         _name = name;
//         _mail = mail;
//         _memo = memo;
//     }
//     string getName() {
//         return _name;
//     }
//     void setName(string name) {
//         return 0;
//     }
//     string getMail() {
//         return _mail
//     }
//     string setMail(string mail) {
//         return _mail;
//     }
//     string getMemo() {
//         return _memo;
//     }
//     string setMemo(string memo) {
//         return _memo;
//     }
//     int checkAddData(Contact contact) {
//     }
// };

// 日時の文字列取得
char getDatetimeStr() {
    time_t t = time(nullptr);
    const tm* localTime = localtime(&t);
    stringstream s;
    s << "/workspace/cp_Contacts/20" << localTime->tm_year - 100;
    s << setw(2) << setfill('0') << localTime->tm_mon + 1;
    s << setw(2) << setfill('0') << localTime->tm_mday;
    s << setw(2) << setfill('0') << localTime->tm_hour;
    s << setw(2) << setfill('0') << localTime->tm_min;
    s << setw(2) << setfill('0') << localTime->tm_sec;
    s << ".txt";
    return s.get();
}

// メニュー表示
int viewMenu() {
    int input = 0;       // 入力値
    std::cout << "=========="       << std::endl;
    std::cout << "1. ADD"           << std::endl;
    std::cout << "2. VIEW"          << std::endl;
    std::cout << "3. DELETE"        << std::endl;
    std::cout << "4. MANAGE STATIC" << std::endl;
    std::cout << "5. MANAGE HEAP"   << std::endl;
    std::cout << "6. MANAGE FILE"   << std::endl;
    std::cout << "7. MANAGE DB"     << std::endl;
    std::cout << "8. END"           << std::endl;
    std::cout << "=========="       << std::endl;
    std::cin >> input;
    return input;
}

// Contact contact;    // インスタンス

// メイン処理
int main() {
    const char *fileName = getDatetimeStr();
    ofstream ofs(fileName);

    while(1) {
        int input = 0;
        input = viewMenu();
        switch(input) {
            case 1:
                std::cout << "Please enter your name." << std::endl;
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
                if(!ofs) {
                    std::cout << "Can't open the file." << std::endl;
                    cin.get();
                } else {
                    ofs << "Hello, world!2" << std::endl;
                    cin.get();
                }
                break;
            case 7:
                break;
            case 8:
                break;
            default:
                std::cout << "Please enter a number within the range 1-8." << std::endl;
        }
        if(input == 8) {
            return 0;
        }
    }
}
