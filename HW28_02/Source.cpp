#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
using namespace std;




//1.**Ïîäñ÷èòàòü ñðåäíþþ äëèíó ñëîâà âî ââåäåííîì ïðåäëîæåíèè.
/*int main()
{
string s = "one two three";
string word;
istringstream str(s);
while (str >> word)
{
cout << word << endl;
}
system("pause");
}*/




//2.**Íàïèñàòü ôóíêöèþ, êîòîðàÿ ïðåîáðàçóåò ñòðîêó â öåëîå ÷èñëî.Åñëè ñòðîêà ñîäåðæèò íå öèôðîâûå ñèìâîëû – ïîäñ÷åò îñòàíàâëèâàåòñÿ
/*int my_atoi(string s)
{
int res = 0;
int n = s.length();
for (int i = 0; i < n; i++)
{
res *= 10;
res += s[i] - '0';
}
return res;
}
int main()
{
char str[10];
cin.get(str,10);
cout << my_atoi(str)*2<< endl;
system("pause");
}*/




//3.*Çàìåíèòü â ñòðîêå  âñå ãëàñíûå áóêâû íà èõ íîìåð ïî àëôàâèòó.
/*int alf(char s)
{
int j = 0;
for (int i = 'a'; i <= 'z'; i++)
{
j++;
if (s == i)

return j;
}
}
int main()
{
int gl = 0, i, j;
char gls[] = "aeiouy";
char str[100];
cin >> str;
for (i = 0; i < (strlen(str)); i++)
{
for (j = 0; j < strlen(gls); j++)
{
if (str[i] == gls[j])
{
cout << alf(str[i]) << " "<<endl;
}
}
}
system("pause");
}*/