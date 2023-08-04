#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    char alf[33] = { 'а','б','в','г','д','е','ё','ж','з','и','й','к','л','м','н','о','п','р','с','т','у','ф','х','ц','ч','ш','щ','ъ','ы','ь','э','ю','я' };
    int j, nomer, d;
    string m, h;

    cout << "Введите сообщение для шифра" << endl;
    cin >> m;

    char bobik[1024];
    strcpy(bobik, m.c_str());

    for (int i = 0; i < strlen(bobik); i++)
    {

        for (j = 0; j < strlen(alf); j++)
        {
            if (bobik[i] == alf[j])
            {
                break;
            }
        }

        if (j != 33) {
            nomer = j;
            d = nomer + 3;

            if (d > 32)
            {
                d = d - 33;
            }
            bobik[i] = alf[d];


        }

        cout << string(bobik) << endl;
    }

    return 0;
}