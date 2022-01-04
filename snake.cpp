nclude <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <windows.h>
#pragma comment(lib, "winmm.lib")
using std::cin;
using std::cout;
using std::flush;
using std::fstream;
using std::ifstream;
using std::ios;
using std::ofstream;
using std::string;

void SetConsoleSize(int Width, int Height)
{
	    HWND console = GetConsoleWindow();
	        RECT r;
		    GetWindowRect(console, &r);
		        MoveWindow(console, r.left, r.top, Width, Height, TRUE);
}

int SnakeBodyCount;
bool GameOver;

class MusicPlayer
{
	private:
		    bool Music;

