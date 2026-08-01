#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
/*Вы — руководитель экспедиции, и вам нужно точно рассчитать среднюю скорость 
вашей группы на сложном двухэтапном маршруте,
а также спрогнозировать время спуска. */

int main() {
    float h1, d1, t1, h2, d2, t2, path1, path2, v, t;
    cin >>  h1 >> d1 >> t1 >> h2 >> d2 >> t2;
    path1 = sqrt((h1 * h1) + (d1 * d1)); //считаем 1 часть пути 
    path2 = sqrt((h2 * h2) + (d2 * d2)); //считаем 2 часть пути 
    t2 = t2/60; //время на спуск переводим в часы
    v = (path1 + path2) / (t1 + t2);
    t = (path1 + path2)/ (v*1.4);
    cout << fixed << setprecision(2);
    cout << "Средняя скорость восхождения: " << v <<" м/ч. ";
    cout << "Прогноз времени спуска: " << t << " ч." << endl;
    return 0;
}
