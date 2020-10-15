#include<iostream>
#include<string>
using namespace std;


double number;
string si_unit;
int main(){
cin >> number;
cin >> si_unit;
if (si_unit == "inch" or si_unit == "m")
{
    cout<<number<<" "<< si_unit << endl;
}

    return 0;
}