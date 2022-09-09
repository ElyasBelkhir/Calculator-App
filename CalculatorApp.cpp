#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1, num2;
    char sign;
    char loop;
    
    
    do  {
        
        cout << "Input 2 numbers seperated by spaces and an operation in between to calculate a truncated integer" << endl;
    
        cin >> num1 >> sign >> num2;

        if (sign == '+')
    
        {
            cout << num1 + num2;
        
        } 
        
        else if (sign == '-')
        {
            cout << num1 - num2;
        
        } 
        
        else if (sign == '*')
        {
            cout << num1 * num2;
            
        } 
        
        else if (sign == '/')
        {
            cout << num1 / num2;
            
        } 
        
        else 
        {
            cout << "Invalid computation" << endl;
        }
    
        cout << "\nPress 'Y' to continue or 'N' to end" << endl;
        cin >> loop;

    } while (loop == 'Y' );
   
}


