#pragma warning(disable:4996)

#include <stdio.h>
#include <locale.h>
#include <conio.h>

/*  Source by CPPReference
    Modified For Learn by Rizky Khapidsyah
    I.D.E : Visual Studio 2019
*/

int main(void) {
    setlocale(LC_ALL, "ja_JP.UTF-8");
    struct lconv* lc = localeconv();
    printf("Japanese currency symbol: %s(%s)\n", lc->currency_symbol, lc->int_curr_symbol);

    _getch();
    return 0;
}