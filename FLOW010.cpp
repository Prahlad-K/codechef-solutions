#include <iostream>

using namespace std;

int main()
{

    int T;
    char code;
    cin>>T;

    while(T>0)
    {
        cin>>code;

        switch(code)
        {
            case 'B':
            case 'b': cout<<"BattleShip\n"; break;
            case 'C':
            case 'c': cout<<"Cruiser\n"; break;
            case 'D':
            case 'd': cout<<"Destroyer\n"; break;
            case 'F':
            case 'f': cout<<"Frigate\n"; break;
        }


        T--;

    }
    return 0;
}
