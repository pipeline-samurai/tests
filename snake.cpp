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

public:
    bool GetMusic() const
    {
        return Music;
    }
    void SetMusic(bool M)
    {
        Music = M;
    }
    void MuteSound()
    {
        sndPlaySound("Mute.wav", SND_ASYNC | SND_NODEFAULT | SND_LOOP);
    }
    void PlayMusic()
    {
        if (Music == true)
        {
            sndPlaySound("Music.wav", SND_ASYNC | SND_NODEFAULT | SND_LOOP);
        }
        else
        {
            MuteSound();
        }
    }
    MusicPlayer()
    {
        Music = true;
    }
};

class Display
{
public:
    void SetColorBlue()
    {
        system("Color 01");
    }
    void SetColorGreen()
    {
        system("Color 02");
    }
    void SetColorRed()
    {
        system("Color 04");
    }
    void SetColorYellow()
    {
        system("Color 06");
    }
    void SetColorWhite()
    {
        system("Color 07");
    }
    void SetColorPurple()
    {
        system("Color 05");
    }
    void DisplayMainMenu()
    {
        cout << " ===========================================================================\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                           *SNAKE GAME*                                ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                      __    __    __    __                             ||\n";
        cout << " ||                     /  \\  /  \\  /  \\  /  \\                            ||\n";
        cout << " ||____________________/  __\\/  __\\/  __\\/  __\\___________________________||\n";
        cout << " ||___________________/  /__/  /__/  /__/  /______________________________||\n";
        cout << " ||                   | / \\   / \\   / \\   / \\  \\____                      ||\n";
        cout << " ||                   |/   \\_/   \\_/   \\_/   \\    o \\                     ||\n";
        cout << " ||                                           \\_____/--<                  ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                              *Menu*                                   ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                         -> 1. Play Game                               ||\n";
        cout << " ||                         -> 2. High Score                              ||\n";
        cout << " ||                         -> 3. Instructions                            ||\n";
        cout << " ||                         -> 4. Credits                                 ||\n";
        cout << " ||                         -> 5. Settings                                ||\n";
        cout << " ||                         -> 6. Exit                                    ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ===========================================================================\n";
    }

void DisplayInstructions()
    {
        cout << " ===========================================================================\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                           *Instructions*                              ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                                           ____                        ||\n";
        cout << " ||                  ________________________/ O  \\___/                   ||\n";
        cout << " ||                 <_____________________________/   \\                   ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||             1. W,A,S,D to change direction of the Snake.              ||\n";
        cout << " ||             2. Eat the Fruit to Make the Snake Grow. With             ||\n";
        cout << " ||                each fruit 10 Points will be Added to the              ||\n";
        cout << " ||                score.                                                 ||\n";
        cout << " ||             3. If Snake eats itself, game will be over.               ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                  PRESS ANY KEY TO RETURN TO MENU                      ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ===========================================================================\n";
    }
void DisplaySettings()
    {
        cout << " ===========================================================================\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                             *Settings*                                ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                                           ____                        ||\n";
        cout << " ||                  ________________________/ O  \\___/                   ||\n";
        cout << " ||                 <_____________________________/   \\                   ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                         -> 1. Change Colors                           ||\n";
        cout << " ||                         -> 2. Music ON\\OFF                            ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                PRESS ANY OTHER KEY TO RETURN TO MENU                  ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ===========================================================================\n";
    }
void DisplayColorSettings()
    {
        cout << " ===========================================================================\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                              *Colors*                                 ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                                           ____                        ||\n";
        cout << " ||                  ________________________/ O  \\___/                   ||\n";
        cout << " ||                 <_____________________________/   \\                   ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                            -> 1. Blue                                 ||\n";
        cout << " ||                            -> 2. Green                                ||\n";
        cout << " ||                            -> 3. Red                                  ||\n";
        cout << " ||                            -> 4. Yellow                               ||\n";
        cout << " ||                            -> 5. White                                ||\n";
        cout << " ||                            -> 6. Purple                               ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ||                PRESS ANY OTHER KEY TO RETURN TO MENU                  ||\n";
        cout << " ||                                                                       ||\n";
        cout << " ===========================================================================\n";
    }