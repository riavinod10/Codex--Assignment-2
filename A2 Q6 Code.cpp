#include <iostream>
using namespace std;
int main() {
    int count = 0;
    int num = 2;

    while (count < 5) {
        bool is_prime = true;
        
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
        
        if (is_prime) {
            cout << num <<endl;
            ++count;
        }
        
        ++num;
    }

    cout <<endl;

    return 0;
}