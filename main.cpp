#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int second;
    cout << "秒数を入力してください。" << endl;
    cin >> second;
    
    int minute = second / 60;
    int minuteSecond = second % 60;
    
    cout << minute << ":" << setfill('0') << setw(2) << minuteSecond << endl;
}
