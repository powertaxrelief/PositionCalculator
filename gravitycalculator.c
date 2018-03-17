#include <iostream>
using namespace std;
int main()
	{
	double gravity;
	int time;
	double initv;
	double initp;
	double finalp;

	gravity = -9.81;
	cout << "Enter the time in seconds \n";
	cin >> time;
	cout << "Enter the initial velocity in m/s^2 \n";
	cin >> initv;
	cout << "Enter the initial position in meters \n";
	cin >> initp;

	finalp = 0.5 * gravity * time * time + initv * time + initp;
	cout << "The final position of the object is " << finalp << "m \n";
	return 0;
	}
