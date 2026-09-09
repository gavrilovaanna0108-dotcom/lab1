#include <stdio.h>
#include <locale.h>
void name();
void date();
void main()
{
	name();
	date();
}
void name()
{
	setlocale(LC_CTYPE, "RUS");
	puts("*****************************************");
	puts("*                                       *");
	puts("* тема: Разрабтка косольного приложения *");
	puts("*      Выполнила Гаврилова А.С.         *");
	puts("*                                       *");
	puts("*****************************************");

}
void date()
{
	puts(" _       _  _   _  _ ");
	puts("| | /|  | |  | | ||_| ");
	puts("|_|  |. |_|  |.|_||_| ");
}
