#include <iostream>
#include <algorithm>
#include <vector>
#include "Bus.h";
#include "Pupil.h"

using namespace std;

//void Length(double z, double w)
//{
//	Bus a;
//	vector<int> length;
//	for (auto i : a.bus)
//	{
//		length.push_back(pow(pow(i.x-z,2)+pow(i.y-w,2),0.5));
//	}
//	sort(length.begin(), length.end());
//	for (int i = 0; i < length.size(); i++)
//	{
//		cout << length[i] << endl;
//	}
//}

void main()
{
	Pupil a;
	a.sort();
	/*for (auto i : a.pupil)
	{
		cout << i.age << endl;
	}
*/
	system("pause");
}