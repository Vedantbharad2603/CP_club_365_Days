// 0x136Day of 0x365Days challenge
// VEDANT BHARAD
// 03-03-2023
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
	while (t--){
        int size;
        cin >> size;
        int a=0,b=0;
        while (size--){
            string code;
            cin >> code;
            if(code=="START38") a++;
            else b++;
        }
        cout << a <<" "<< b <<endl;
	}
	return 0;
}
