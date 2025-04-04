
#include <iostream>
using namespace std;

int main()
{
    string nounOne;
    string nounTwo;
    int playerNumOne;
    int playerNumTwo;

    cout << "What is the first noun?" << endl;
    cin >> nounOne;

    cout << "What is the first number?" << endl;
    cin >> playerNumOne;

    cout << "What is the second noun?" << endl;
    cin >> nounTwo;

    cout << "What is the second number?" << endl;
    cin >> playerNumTwo;
    
    printf("%d %s's is definitly stronger than %d %s's", playerNumOne, nounOne.c_str(), playerNumTwo, nounTwo.c_str());
}

