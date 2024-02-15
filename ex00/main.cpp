#include "Convert.hpp"

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <number>" << std::endl;
        return 1;
    }

    std::string args = argv[1];
    int number = std::stoi(args);

    Convert tmp = Convert(number);
    tmp.printInt();
    return (0);
}
