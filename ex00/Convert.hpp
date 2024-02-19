#include<string>
#include<iostream>
#include <sstream>
#include <stdexcept>

enum Type {
    INT,
    DOUBLE,
    FLOAT,
    CHAR,
    UNKNOWN
};

class Convert
{
    private:
        // char    char_var;
        std::string args;
        Type _type;

        // float   float_var;
        // double  double_var;

    public:
        Convert(std::string arg);
        Convert(const Convert   &ConvertClass);
        Convert& operator=(const Convert &ConvertClass);
        ~Convert();
        Type  DetermineType(std::string& data);
        void printChar();
        // void printInt();
        // void printFloat();
        // void printDouble();
};
