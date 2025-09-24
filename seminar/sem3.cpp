#include <iostream>
#include <cmath>

int main() {
    // int x = 7;
    // std::cout << ~x << std::endl;

    // auto a = 2000000000;
    // auto b = 2000000000;
    // std::cout << a + b << std::endl;

    // char a1 = 'a';
    // char b1 = 'b';
    // char c1 = 'c';
    // std::cout << a1 << " " << int(a1) << std::endl << b1 << " " << int(b1) << std::endl << c1 << " " << int(c1) << std::endl;

    // int a, b, c, d;
    // std::cin >> a >> b >> c >> d;
    // std::cout << (a + b) * c - d << std::endl;

    // int a, b;
    // std::cin >> a >> b;
    // std::cout << (a | b) << " " << (a & b) << " " << (a ^ b) << " " << (a >> 1) << " " << (a << 1) << " " << ~a << std::endl;

    int n;
    std::cin >> n;
    int sum = 0;
    // while (n != 0) {
    //     sum += n % 10;
    //     n /= 10;
    // }
    for (int i = 0; i < 4; i++) {
        sum += n % 10;
        n /= 10;
    }
    std::cout << sum;
     
    //  int n;
    //  std::cin >> n;
    //  std::cout << sqrt(n) << " " << sin(n) << cos(n) << " " << pow(n, 2);
}