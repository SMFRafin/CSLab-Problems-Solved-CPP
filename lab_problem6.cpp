#include <iostream> 
using namespace std;

int main(){

    char char1,char2;
    cout << "Enter a character: ";
    cin >> char1;
    char2 = tolower(char1);
    if (char2 == 'a' || char2 == 'e' || char2 == 'i' || char2 == 'o' || char2 == 'u')
    {
        cout << "Entered character is vowel";
    }
    else
    {
        cout << "Entered charater is not vowel";
    }
    return 0;
}