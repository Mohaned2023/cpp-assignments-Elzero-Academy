#include <iostream>
using namespace std;

int num = 50; // 1

int read()
{
    int num = 100; // 2
    cout << num;
    return 0;
}

int play()
{
    int num = 200;
    read();
    return 0;
}

int main()
{
    play();
    return 0;
}