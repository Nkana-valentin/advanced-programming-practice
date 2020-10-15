#include <iostream>
#include <string>
using namespace std;

int x;
int get_int(int b){

    while (cin >> x )
    {
        if (x== b){
            
            cout<< "the number you are looking for is "<< x << endl;
            break;
        }
        else
        {
           cin.clear();
           cin.ignore();
        }
        
    }
}
    
    

int main(){

    get_int(4);
    return 0;
}