
#include"highscoretable.h"
#include"merge.h"
#include<iostream>





int main() 
{
	
	HighScoreTable fuckery ("highscores.txt");

	std::cout << (fuckery.hsVector.at(0).name).c_str() << "   " << fuckery.hsVector.at(0).score << std::endl;
	std::cout << (fuckery.hsVector.at(1).name).c_str() << "   " << fuckery.hsVector.at(1).score << std::endl;
	std::cout << (fuckery.hsVector.at(2).name).c_str() << "   " << fuckery.hsVector.at(2).score << std::endl;
	std::cout << (fuckery.hsVector.at(3).name).c_str() << "   " << fuckery.hsVector.at(3).score << std::endl;
	std::cout << (fuckery.hsVector.at(4).name).c_str() << "   " << fuckery.hsVector.at(4).score << std::endl;
	std::cout << (fuckery.hsVector.at(5).name).c_str() << "   " << fuckery.hsVector.at(5).score << std::endl;
	std::cout << (fuckery.hsVector.at(6).name).c_str() << "   " << fuckery.hsVector.at(6).score << std::endl;
	std::cout << (fuckery.hsVector.at(7).name).c_str() << "   " << fuckery.hsVector.at(7).score << std::endl;
	std::cout << (fuckery.hsVector.at(8).name).c_str() << "   " << fuckery.hsVector.at(8).score << std::endl;
	std::cout << (fuckery.hsVector.at(9).name).c_str() << "   " << fuckery.hsVector.at(9).score << std::endl;
	std::cout << (fuckery.hsVector.at(10).name).c_str() << "   " << fuckery.hsVector.at(10).score << std::endl;
	std::cout << "" << std::endl;

	//fuckery.bubblesort();
	//fuckery.insertionSort();
	
	std::cout << (fuckery.hsVector.at(0).name).c_str() << "   " << fuckery.hsVector.at(0).score << std::endl;
	std::cout << (fuckery.hsVector.at(1).name).c_str() << "   " << fuckery.hsVector.at(1).score << std::endl;
	std::cout << (fuckery.hsVector.at(2).name).c_str() << "   " << fuckery.hsVector.at(2).score << std::endl;
	std::cout << (fuckery.hsVector.at(3).name).c_str() << "   " << fuckery.hsVector.at(3).score << std::endl;
	std::cout << (fuckery.hsVector.at(4).name).c_str() << "   " << fuckery.hsVector.at(4).score << std::endl;
	std::cout << (fuckery.hsVector.at(5).name).c_str() << "   " << fuckery.hsVector.at(5).score << std::endl;
	std::cout << (fuckery.hsVector.at(6).name).c_str() << "   " << fuckery.hsVector.at(6).score << std::endl;
	std::cout << (fuckery.hsVector.at(7).name).c_str() << "   " << fuckery.hsVector.at(7).score << std::endl;
	std::cout << (fuckery.hsVector.at(8).name).c_str() << "   " << fuckery.hsVector.at(8).score << std::endl;
	std::cout << (fuckery.hsVector.at(9).name).c_str() << "   " << fuckery.hsVector.at(9).score << std::endl;
	std::cout << (fuckery.hsVector.at(10).name).c_str() << "   " << fuckery.hsVector.at(10).score << std::endl;
	
	int arr[] = { 82, 5, 4, 69, 7, 8 };
	mergeSort(arr, 0, 5);
	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	return 0;
}