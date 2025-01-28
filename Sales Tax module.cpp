/*

File Name:SalesTaxModule.cpp
Github URL: https://github.com/MS3NSEI/Sales-Tax-module.git
Programmer: LaMar Brown
Date: January 2025
Requirement

Sales Tax  Write a program that will compute
the sales tax on a 95 purchase. Assume the
state sales tax is 4 percent, and the county 
sales tax is 2 percent.
answer. Display the answer.
*/
#include <iostream>
using namespace std;



int main()
{
    int number1 = 95; 
    int tax1 = 4;
    int tax2 = 2;
    int answer;
    answer = number1 + tax1 * tax2;
    cout << "the total of a " << number1 << " dollar purchase with " << tax1 << " percent state sales tax and " << tax2 << " percent county sales tax is " << answer << "\n";
    return answer; 


   
    
    
}


