// Die_Zahlen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

//enum Zahlen { zero = 0,one =1, two, three, four, five, six, seven, eight, nine, ten };

int main()
{
    int num;
	//Zahlen numbers = zero;
    std::cout << "Enter a number which you want to hear." << std::endl;
    std::cin >> num;
    //numbers = num;
    switch (num){
        case 0:
            PlaySound(TEXT("01.wav"), NULL, SND_SYNC);
            break;
		case 1:
			PlaySound(TEXT("02.wav"), NULL, SND_SYNC);
			break;
		case 2:
			PlaySound(TEXT("03.wav"), NULL, SND_SYNC);
			break;
		case 3:
			PlaySound(TEXT("04.wav"), NULL, SND_SYNC);
			break;
		case 4:
			PlaySound(TEXT("05.wav"), NULL, SND_SYNC);
			break;
		case 5:
			PlaySound(TEXT("06.wav"), NULL, SND_SYNC);
			break;
		case 6:
			PlaySound(TEXT("07.wav"), NULL, SND_SYNC);
			break;
		case 7:
			PlaySound(TEXT("08.wav"), NULL, SND_SYNC);
			break;
		case 8:
			PlaySound(TEXT("09.wav"), NULL, SND_SYNC);
			break;
		case 9:
			PlaySound(TEXT("10.wav"), NULL, SND_SYNC);
			break;
		case 10:
			PlaySound(TEXT("11.wav"), NULL, SND_SYNC);
			break;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
