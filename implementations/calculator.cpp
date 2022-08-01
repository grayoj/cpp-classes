#include <iostream>
using namespace std;

int main()
{
    char op;
    int num1, num2;

    cout << "enter in operators +, /, *, -:" cin >> op;

    cout << "enter in operands" cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
   
    default:
        cout << "Error! Wrong operator";
    }

    return 0;

}