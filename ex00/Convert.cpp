#include "Convert.hpp"

Convert::Convert(std::string args)
{
	this->args = args;
}

Convert::~Convert()
{

}

Convert::Convert(const Convert  &ConvertClass)
{
    *this = ConvertClass;
}

Convert& Convert::operator=(const Convert &ConvertClass)
{
    if (this != &ConvertClass)
    {
        // this = ConvertClass._type;
    }
    return *this;
}

template<typename T>
bool IsConvertible(const std::string& s) {
    std::istringstream iss(s);
    T value;
    return (iss >> value) && iss.eof();
}

Type Convert::DetermineType(std::string& data) {
    if (IsConvertible<int>(data)) {
        return INT;
    } else if (IsConvertible<double>(data)) {
        return DOUBLE;
    } else {
        if (data.back() == 'f' || data.back() == 'F') {
            data.pop_back();
        }
        if (IsConvertible<float>(data)) {
            return FLOAT;
        }
        if (data.length() == 1) {
            return CHAR;
        }
        throw std::invalid_argument("Unsupported type");
    }
}

Convert::printChar()
{
    char myFloat = static_cast<char>(this->args);
}
