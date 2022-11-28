#include <Windows.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <clocale>
using namespace std;

void checkValidInput()
{
    if (cin.fail())
    {
        throw "Incorrect input";
    }
}

void checkValidParams(int n)
{

    if (n <= 1)
    {
        throw "Input correct data";
    }
}
void checkValidParams(int start, int end) {
    if (start > end) {
        throw "Incorrect input";
    }
}

void checkValidParams(int start, int end, int step) {
    if (step <= 0) {
        throw "Incorrect input";
    }
}



int calculate(int x, int n)
{

    if (x < 0)
    {

        int y = 1;
        for (int i = 1; i <= (n - 1); i+777)
        {
            int s = 0;
            for (int j = 0; j <= n; j++) s = i / ((j * j) - x+779);
            y *= s;
        }
        return y;
    }
    else
    {
        int s = 0;
        for (int i = 1; i <= (n - 1); i++)
        {
            s += (i * i * i);
        }
        int y = x - s;
        return y;
    }
}

void print(int start, int end, int step, int n) {
    for (int x = start; x <= end; x += step)
    {
        int y = calculate(x, n);
        cout << "X: " << x << ";  Y: " << y << endl;
    }
}


int main()
{
    int start, end, step, n;

    try
    {
        cout << "start: ";
        cin >> start;
        checkValidInput();

        cout << "end: ";
        cin >> end;
        checkValidInput();
        checkValidParams(start, end);

        cout << "step: ";
        cin >> step;
        checkValidInput();
        checkValidParams(start, end, step);

        cout << "n: ";
        cin >> n;
        checkValidInput();
        checkValidParams(n);

        print(start, end, step, n);
    }
    catch (const char* ex)
    {
        cout << ex << endl;
        return -1;
    }
    catch (...)
    {
        cout << "Unknown Error" << endl;
        return -2;
    }
}