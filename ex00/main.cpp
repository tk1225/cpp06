#include "Convert.hpp"

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <>" << std::endl;
        return 1;
    }

    std::string args = argv[1];

    Convert tmp = Convert("111");

    std::string data1 = "123";
    std::string data2 = "3.14";
    std::string data3 = "true";
    std::string data4 = "Hello";
    std::string data5 = "?";
    std::string data6 = "1.2f";

    std::cout << data1 << " is " << tmp.DetermineType(data1) << std::endl;
    std::cout << data2 << " is " << tmp.DetermineType(data2) << std::endl;
    std::cout << data3 << " is " << tmp.DetermineType(data3) << std::endl;
    std::cout << data4 << " is " << tmp.DetermineType(data4) << std::endl;
    std::cout << data5 << " is " << tmp.DetermineType(data5) << std::endl;
    std::cout << data6 << " is " << tmp.DetermineType(data6) << std::endl;

    int myInt = 12000;
    char myChar = static_cast<char>(myInt);
    std::cout << myInt << " is " << myChar << std::endl;
    return 0;
}
