#include <iostream> 
struct BadExpression{};
class Calculator
{
    enum { MINUS = '-', PLUS = '+' };
    double number;
    char operation;
    double result;
 
public:
    void parse(const std::string&);
    double getResult() const ;
    inline bool isDigitOrDot(const char);
    inline bool isValidSymbol(const char);
};
 
int main(int argc, char *argv[])
{
    std::string line;
    
    std::cout << "Enter expression.." << std::endl;
    std::getline(std::cin, line);
    
    try
    {
        Calculator calc;
        calc.parse(line);
        std::cout << std::endl << "Result: " << calc.getResult() << std::endl;
    }
    catch(BadExpression)
    {
        std::cout << "Bad expression" << std::endl;
    }
}
 
void Calculator::parse(const std::string& expression)
{
    result = 0.;
    bool first = true;
    
    for(std::size_t i = 0, cnt = expression.size(); i < cnt; ++i)
    {
        if(!isValidSymbol(expression[i]))
            throw BadExpression();
        if(!isDigitOrDot(expression[i]))
            operation = expression[i++];
        if(!isDigitOrDot(expression[i]))
            throw BadExpression();
        std::string tmp = "";
        while(i < cnt && isDigitOrDot(expression[i]))
            tmp += expression[i++];
        --i;
        number = std::atof(tmp.c_str());
        if(first)
        {
            first = false;
            result = number;
            continue;
        }
        if(operation == MINUS)
            result -= number;
        else if(operation == PLUS)
            result += number;
    }
} 
double Calculator::getResult() const
{
return result;
} 
inline bool Calculator::isDigitOrDot(const char c)
{
return c == '.' || isdigit(c);
} 
inline bool Calculator::isValidSymbol(const char c)
{
return isDigitOrDot(c) || c == MINUS || c == PLUS;
}