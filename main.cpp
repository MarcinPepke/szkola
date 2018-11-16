#include <iostream>

using namespace std;

int main()
{
    int mini,n,cos;
    cout << "Podaj ile liczb" << endl;
    cin >> n;
    cout << "Podaj je" << endl;
    cin >> mini;
    for (int i=1;i<n;i++){
        cin >> cos;
        if(mini>cos)
            mini = cos;
    }
    cout << mini;

    return 0;
}
