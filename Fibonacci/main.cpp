#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool isFib(int N) {
    auto a = 0, b = 1;
    while(b < N) {
        auto c = a + b;
        a = b;
        b = c;
    }
    return (N == a) || (N == b);
}

int main() {
    string message("Which number you want to check is in Fibonacci ?");
    cout << message << endl;
    int N = 100;
    cout << N << " is"<< (isFib(N) ? "" : " not") << " in Fibonacci." << endl;
    return 0;
}
