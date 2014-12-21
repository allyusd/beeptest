#include <windows.h>
#include <iostream>

int scaleTable[] = { 523, 587, 659, 698, 784, 880, 988 };

void sound(int scale, int beat)
{
	if (scale < 1 || scale > 7)
	{
		return;
	}

	const int BPM = 240; //76;
	const int SPB = 60 * 1000 / BPM;
	Beep(scaleTable[scale - 1], SPB * beat);

	std::cout << SPB * beat << std::endl;
}

// ¤p»e¸Á
int musicTable1[][2] =
{ { 5, 1 }, { 3, 1 }, { 3, 2 }, { 4, 1 }, { 2, 1 }, { 2, 2 }, { 1, 1 }, { 2, 1 }, { 3, 1 }, { 4, 1 }, { 5, 1 }, { 5, 1 }, { 5, 2 }
, { 5, 1 }, { 3, 1 }, { 3, 2 }, { 4, 1 }, { 2, 1 }, { 2, 2 }, { 1, 1 }, { 3, 1 }, { 5, 1 }, { 5, 1 }, { 3, 4 }
, { 2, 1 }, { 2, 1 }, { 2, 1 }, { 2, 1 }, { 2, 1 }, { 3, 1 }, { 4, 2 }, { 3, 1 }, { 3, 1 }, { 3, 1 }, { 3, 1 }, { 3, 1 }, { 4, 1 }, { 5, 2 }
, { 5, 1 }, { 3, 1 }, { 3, 2 }, { 4, 1 }, { 2, 1 }, { 2, 2 }, { 1, 1 }, { 3, 1 }, { 5, 1 }, { 5, 1 }, { 1, 4 }
};

// ¸t½Ï¹aÁn
int musicTable2[][2] =
{ { 3, 1 }, { 3, 1 }, { 3, 2 }, { 3, 1 }, { 3, 1 }, { 3, 2 }, { 3, 1 }, { 5, 1 }, { 1, 1 }, { 2, 1 }, { 3, 4 }
, { 4, 1 }, { 4, 1 }, { 4, 2 }, { 4, 1 }, { 3, 1 }, { 3, 2 }, { 3, 1 }, { 2, 1 }, { 2, 1 }, { 3, 1 }, { 2, 2 }, { 5, 2 }
, { 3, 1 }, { 3, 1 }, { 3, 2 }, { 3, 1 }, { 3, 1 }, { 3, 2 }, { 3, 1 }, { 5, 1 }, { 1, 1 }, { 2, 1 }, { 3, 4 }
, { 4, 1 }, { 4, 1 }, { 4, 1 }, { 4, 1 }, { 4, 1 }, { 3, 1 }, { 3, 1 }, { 3, 1 }, { 5, 1 }, { 5, 1 }, { 4, 1 }, { 2, 1 }, { 1, 4 }
};

int main(int argc, char* argv[])
{
	//int beat = 4;

	//sound(1, beat);
	//sound(2, beat);
	//sound(3, beat);
	//sound(4, beat);
	//sound(5, beat);
	//sound(6, beat);
	//sound(7, beat);

	int soundCount = sizeof(musicTable2) / sizeof(musicTable2[0]);

	for (int i = 0; i < soundCount; i++)
	{
		std::cout << musicTable2[i][0] << " - " << musicTable2[i][1] << std::endl;
		sound(musicTable2[i][0], musicTable2[i][1]);
	}

	char i;
	std::cin >> i;

	//Beep(523, 500);
	//Beep(587, 500);
	//Beep(659, 500);
	//Beep(698, 500);
	//Beep(784, 500);
	//Beep(880, 500);
	//Beep(988, 500);
}
