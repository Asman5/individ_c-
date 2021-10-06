#include <iostream>

using namespace std;

int main(){
    int number1, number2;
    cin >> number1;
    cin >> number2;
    cout << "What is command?" << endl;
    char symbol;
    cin >> symbol;
    if(symbol == '+'){
        cout << number1 + number2;
    }
    

    return 0;
}
