This program displays the current time in hours, minutes, and seconds. It continuously updates the time every 2 seconds in a loop, utilizing C++'s chrono library for time management and thread library for pauses between updates. This program is a simple example of how to work with time in C++.

Key Features:
Time Retrieval: The program uses chrono::system_clock::now() to get the current system time and converts it to a time_t object, which is then converted into local time using localtime().

Time Formatting: The current time is formatted and displayed in a readable format of hours, minutes, and seconds.

Looping: A loop runs 5 times, displaying the current time and then waiting for 2 seconds before updating the time.

Sleep Functionality: The program uses this_thread::sleep_for(chrono::seconds(2)) to pause the program for 2 seconds before displaying the updated time again.

Skills Demonstrated:
Working with Time: The program demonstrates how to retrieve and manipulate the current system time using the C++ chrono and ctime libraries.

Threading: The program introduces basic threading with sleep_for() to pause the execution of the program for a specified amount of time.

Input/Output: The program displays the current time repeatedly in a readable format, showing the usage of cout for output.

Loops: The program uses a loop to repeat an action multiple times, a common programming structure.

Files Included:
main.cpp – The main file that implements the logic to display the time in a loop with pauses.
