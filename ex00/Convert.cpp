#include "Convert.hpp"

Convert::Convert(int num)
{
	this->int_var = num;
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

void Convert::printInt()
{
    std::cout << this->int_var << std::endl;
}

