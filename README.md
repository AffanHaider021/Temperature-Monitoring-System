 Temperature Reading Analyzer

A simple C++ console program that takes multiple temperature readings from the user, validates them, displays a status report, and calculates the average, highest, and lowest temperature.

Features
 Takes any number of temperature readings (user-defined),
 Validates input to stay within a valid range (-50°C to 100°C),
 Uses dynamic memory allocation (new / delete) to store readings,
 Displays a status for each reading (Too Cold / Normal / High / Critical),
 
  Calculates and displays:
   Average temperature,
   Highest temperature,
   Lowest temperature,

Concepts Used
 Functions (call by reference using pointers/arrays)
 Dynamic memory allocation (new[], delete[])
 Arrays and loops
 Conditional statements
 Input validation

How to Compile and Run
Using g++:
bash
g++ main.cpp -o temp_analyzer
./temp_analyzer

