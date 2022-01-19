#include <iostream>
using namespace std;

int main() {
    int x;
    cout<<"Enter a month in integer how you write in date to make it in expanded form: ";
    cin>>x;
    switch (x){
        case 1:
        cout<<"The entered month is Januvary";
        break;
        case 2:
        cout<<"The entred month is February";
        break;
        case 3:
        cout<<"The entered month is March";
        break;
        case 4:
        cout<<"The entered month is April";
        break;
        case 5:
        cout<<"The entered month is May";
        break;
        case 6:
        cout<<"The entered month is June";
        break;
        case 7:
        cout<<"The entered month is July";
        break;
        case 8:
        cout<<"The entered month is August";
        break;
        case 9:
        cout<<"The entered month is September";
        break;
        case 10:
        cout<<"The entered month is October";
        break;
        case 11:
        cout<<"The entered month is Novomber";
        break;
        case 12:
        cout<<"The entered month is December";
        break;
        default:
        cout << "Enter valid month";
        
    }
    return 0;
}