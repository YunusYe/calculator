#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "turkish");

    char islem;

    int sayi1, sayi2;
    cout << "İşlem (+,-,*,/)";
    cin >> islem;
    cout << "İki sayı gir alçak";
    cin >> sayi1 >> sayi2;
    if (islem == '+')
        cout << "Toplam" << sayi1 + sayi2 << endl;
    else if (islem == '-')
        cout << "Fark" << sayi1 - sayi2 << endl;
    else if (islem == '*')
        cout << "çarpım" << sayi1 * sayi2 << endl;
    else if (islem == '/')
        cout << "Bölüm" << float(sayi1) / float(sayi2) << endl;
    else
        cout << "hatalı seçim yaptın";
}