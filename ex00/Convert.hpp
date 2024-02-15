#include<string>
#include<iostream>

class Convert
{
    private:
        // char    char_var;
        int     int_var; 
        // float   float_var;
        // double  double_var;

    public:
        Convert(int num);
        Convert(const Convert   &ConvertClass);
        Convert& operator=(const Convert &ConvertClass);
        ~Convert();
        void printInt();
};
