#include "calculator.h"
//include something else

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;

}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
    //first comment
}

int Calculator::Mul (double a, double b)
{
	//second comment
    return a * b + 0.5;
}
