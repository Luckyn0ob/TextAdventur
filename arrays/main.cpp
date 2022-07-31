#include <iostream>
#include <string.h>



using namespace std;

void chapter2();
char GameMenu();
void gameStart();
void RunMenu();
void chapter3();

void clearConsole()
{
	system("cls");
}


void gameOver()
{
	clearConsole();
	cout << "GameOver\n\nUm wieder in das Menue zu kommen druecke R oder Q und bestaetige dies." << endl;
	char input = ' ';
	cout << "Input: ";
	cin >> input;

	while (true)
	{
		if (input == 'r' || input == 'R')
		{
			clearConsole();
			RunMenu();
		}
		
		else if (input == 'q' || input == 'Q')
		{
			clearConsole();
			RunMenu();
		}

		else { cout << "\nInvalid Input"; }
	}
}

char GameMenu()

{
	char input = ' ';

	cout << "Willkommen in meinem kleinen Test-Spiel" << endl << endl;

	cout << "Druecke (S)tart um das Spiel zu starten" << endl << endl;

	cout << "Input: ";
	cin >> input;
	system("CLS");
	return input;

}

void RunMenu()
{
	while (true)

	{
		char input = GameMenu();
		if (input == 's' || input == 'S')
		{
			gameStart();

		}

		else
		{
			cout << input << (" damit kann ich leider nichts anfangen") << endl << endl;
		}
	}
}



void gameStart()
{
	
	cout << "Du startest in einen kleinen staubigen Raum, hinter dir scheint nur eine alte Tuer zu sein, was tust du ?" << endl << endl;
	cout << "\n1: Gruendlicher umschauen";
	cout << "\n2: Tuer versuchen zu oeffnen\n";
	
	
	cout << "\nInput: ";
	char input = ' ';
	cin >> input;

	while (true)
	{
	
		if (input == '1')
		{
			chapter2();
		}

		else if (input == '2')
		{
			cout << "Du versuchst die Tuer zu oeffnen die du anfangs garnicht bemerkt hast, aber nichts passiert." << endl;
		}
		
		else { cout << "Invalid Input." << endl; }
		
			
		
		
		cout << "Input: ";
		cin >> input;
	}
}

void chapter2()
{
	while (true)
	{
		system("cls");
		cout << "Du schaust dich um, kannst aber im ersten moment nur eine kleine silberne Schatuelle entdecken.\nWas tust du ?" << endl;
		cout << "\n1: Silberne Schatulle genauer anschauen.";
		cout << "\n2: Tuer genauer untersuchen ";
		cout << "\n3: Silberne Schatulle oeffnen.";

		cout << "\n\nInput: ";
		char input = ' ';
		cin >> input;

		if (input == '1')
		{
			chapter3();
		}

		else if (input == '2')
		{
			cout << "Du versuchst die Tuer zu oeffnen die du anfangs garnicht bemerkt hast, aber nichts passiert." << endl;
		}
		else if (input == '3')
		{
			gameOver();
		}
		else { cout << "\nInvalid Input."; }
	}
}

void chapter3()
{
	clearConsole();
	cout << "Du schaust dir die Schatulle genauer an und entdeckst komische Runen darauf" << endl;
	cout << "----------------------------------" << endl;
	cout << "|      /  _____      |      /    |" << endl;
	cout << "|     /       /      |     /     |" << endl;
	cout << "|     /   @   /      |    /      |" << endl;
	cout << "|      /   /        /   /        |" << endl;
	cout << "|       /             /		 |" << endl;
	cout << "----------------------------------" << endl << endl;
	cout << "Input: ";
	char input = ' ';
	cin >> input;

}

int main()
{

	RunMenu();

	system("Pause");

	return 0;
}




