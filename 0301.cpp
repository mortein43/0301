#include <iostream>
#include <windows.h>

using namespace std;

void generateSound(double frequency, int duration) {
	Beep(frequency, duration);
}

int main()
{
	cout << "C";
	generateSound(261.63, 300);//До
	generateSound(293.66, 300);//Ре
	generateSound(329.63, 300);//Ми
	generateSound(349.23, 300);//Фа
	generateSound(392, 300);//Соль
	generateSound(440, 300);//Ля
	generateSound(493.88, 300);//Си
	generateSound(523.25, 500);//До ІІ
	generateSound(523.25, 300);//До ІІ
	generateSound(493.88, 300);//Си
	generateSound(440, 300);//Ля
	generateSound(392, 300);//Соль
	generateSound(349.23, 300);//Фа
	generateSound(329.63, 300);//Ми
	generateSound(293.66, 300);//Ре
	generateSound(261.63, 600);//До

	return 0;
}
