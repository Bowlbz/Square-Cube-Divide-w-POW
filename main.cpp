//Bowlby, David Jason COSC1436
//Dr_Tyson_McMillan Oct 2019
#include<cmath>
#include <iostream>
using namespace std;


double Number1, Number2, Number3 = 0.0;
double n1 = 0.0;
char Exit = '\0';



int main() 
{

do
{
  cout << "\nWhat number would you like to Square, Cube, and Divide by 2.0?" << endl;
  cin >> n1;
  
  Number1 = pow (n1 , 2.0);
  Number2 = pow (n1 , 3.0);
  Number3 = n1/2.0;



  cout << "The Square of your number is: "<< Number1 << endl;
  cout << "The Cube of your number is: "<< Number2 << endl;
  cout << "Your number divided is: " << Number3 << endl;
  cout << "Would you like to divide again? (y/n)" << endl;
  cin >> Exit;

  }while (Exit == 'y' || Exit == 'Y');

  cout << "Have a Great Day !!" << endl;


 return 0;
}