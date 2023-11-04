#include<iostream>
using namespace std;

//factorial
int factorial (int n);
int fibonacci(int n);
int main(){
    int a;
    cout<<"enter the num whose factorial and fibonacci you want"<<endl;
    cin>>a;
    int choice;
    cout << "Enter your choice (1 for factorial, 2 for fibonacci): ";
    cin >> choice;

  switch(choice) {
        case 1:
            cout << "The factorial of " << a << " is: " << factorial(a) << endl;
            break;
        case 2:
            cout << "The fibonacci of " << a << " is: " << fibonacci(a) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

int factorial(int n)
{
    if(n<=1)
    {
        return 1;

    }
    else{
        return n*factorial(n-1);
    }
}
int fibonacci(int n)
{
    if(n<2)
    {
        return 1;

    }
    else
    {
        return fibonacci(n-2)+fibonacci(n-1);
    }
}