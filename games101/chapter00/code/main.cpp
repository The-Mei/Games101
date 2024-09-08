#include <cmath>
#include <iostream>

#include "Dense"

int main()
{
    float a = 1.0f, b = 2.0f;
    std::cout << a << std::endl;
    std::cout << a / b << std::endl;
    std::cout << std::sqrt(a) << std::endl;
    std::cout << std::acos(-1) << std::endl;
    std::cout << std::sin(30.0 / 180.0 * acos(-1)) << std::endl;

    Eigen::Vector3f v(2.0f, 1.0f, 1.0f);

    Eigen::Matrix3f rotate;

    rotate << std::cos(45.0 / 180.0 * M_PI), -std::sin(45.0 / 180.0 * M_PI), 0, std::sin(45.0 / 180.0 * M_PI),
        std::cos(45.0 / 180.0 * M_PI), 0, 0, 0, 1;

    Eigen::Matrix3f translate;
    translate << 1, 0, 1, 0, 1, 2, 0, 0, 1;

    std::cout << translate * rotate * v << std::endl;
    std::cin.get();
}