
#include <iostream>
int main()
{
    // Addition
    int num1(5), num2(7);
    int sum = (num1 + num2);

    std::cout << "additoin:" << sum << std::endl;
    // subttraction
    int subt, num_a(16), num_b(7);
    subt = num_a - num_b;

    std::cout << "subt:" << subt << std::endl;

    // multiplication
    int mul, num_3(2), num_4(8);
    mul = num_3 * num_4;

    std::cout << "mul:" << mul << std::endl;

    // Division
    int num5(42), num6(8);
    int div = num5 / num6;

    std::cout << "division:" << div << std::endl;

    // Modulus
    int num7(23), num8(5);
    int result = (num7 % num8);

    std::cout << "modulus:" << result << std::endl;

    return 0;
}