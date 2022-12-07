
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "youre lenght \n";
    int a;
    cin >> a;
    int b;
    cout << "youre age \n"; 
    cin >> b;
    float d;
    string c;
    cout << "you man or woman? \n";
    cin >> c;

    if (c == "man")
    {
        d = 50+(a-150) * 0.52 +(b-21)/4;
    }
    else {
       
        d = 50+(a - 150) * 0.75 + (b - 21) / 5;
    }
    cout << d;
}
