#include <iostream>
#include "Dim1ArrayProcess.h"
//using namespace std;


int main()
{
    elemType num[LEN] = {2, 7, 6, 5, 10, 9, 11, 8, 17,};
    int i;
    cout << "Normal numbers:";
    for (i = 0; i < LEN; i++)
        cout << num[i] << ",";
    cout << "\b " << endl;

    BubbleRange(num);

    cout << "Ranged numbers:";
    for (i = 0; i < LEN; i++)
        cout << num[i] << ",";
    cout << "\b " << endl;

    int position;
    elemType target;
    cout << "input your target number:";
    cin >> target;
    position = HalfLookup(num, target);
    if (position == -1)
        cout << "not found target number " << target << endl;
    else
        cout << "target number " << target << " position:" << position << endl;
    return 0;
}
//int main()
//{
//    int num;
//    cin>>num;
//    if(PrimeJudge(num))
//        cout<<"yes";
//    else
//        cout<<"no";
//    return 0;
//}
