#include <iostream>    /* cout              */
#include <chrono>      /* time functions    */
#include <ctime>       /* time_t, localtime */
#include <thread>      /* sleep_for         */
using namespace std;


int main()
{
    for (int i = 1; i <= 5; i++)
    {
        auto now = chrono::system_clock::now();
        time_t timeNow = chrono::system_clock::to_time_t(now);

        tm *localTime = localtime(&timeNow);

        cout << "Current Time: "
             << localTime->tm_hour << ":"
             << localTime->tm_min  << ":"
             << localTime->tm_sec  << endl;

        this_thread::sleep_for(chrono::seconds(2));
    }

    return 0;
}