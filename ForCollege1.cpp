#include <iostream>
#include<string>
#include<cmath>

int main()
{
    int base;
    double num;

    std::string result = "";
    std::cout << "Enter the number: ";
    std::cin >> num;
    std::cout << "Enter the base: ";
    std::cin >> base;

    int inty = trunc(num);
    while (inty >= base) {
        result.insert(0, std::to_string(inty % base));
        inty /= base;
    }
    result.insert(0, std::to_string(inty));

    double frac = fmod(num, 1);
    if (fmod(num, 1) != 0.0) {
        result += ".";
        for (int i = 0; i < 5; i++) {
            frac *= base;
            int fract = static_cast<int>(frac);
            result += std::to_string(fract);
            frac -= fract;
        }
    }

    std::cout << result;
}
