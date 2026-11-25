# Profile Summary Program

## Overview

A C++17 console program that collects a user's first and last name, email
address, age, marketing opt-in preference, height in centimeters, and weight in
kilograms. It then displays the information in a profile summary.

## Requirements

- A C++17-compatible compiler, such as GCC, Clang, or Microsoft Visual C++.

## Build and run

### Windows (PowerShell, with GCC or MinGW installed)

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o profile_summary.exe
.\profile_summary.exe
```

### Linux or macOS

```sh
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o profile_summary
./profile_summary
```

## Example

```text
Enter your first name: Jane
Enter your last name: Doe
Enter your email: jane@example.com
Enter your age: 29
Opt-in for marketing? (true/false): true
Enter your height in cm: 170.5
Enter your weight in kg: 65.2

Profile Summary:
Name: Jane Doe
Email: jane@example.com
Age: 29
Marketing Opt-in: true
Height: 170.5 cm
Weight: 65.2 kg
```

## Project files

- `main.cpp` — program source code.
- `README.md` — project description and build/run instructions.
