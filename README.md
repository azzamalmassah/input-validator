
# InputValidation (C++)

A simple and reusable **C++ input validation library** for validating user input such as numbers, dates, ranges, and formatted values in console or desktop applications.

This project is designed to be:
- ✅ Easy to integrate
- ✅ Lightweight
- ✅ Reusable across multiple C++ projects
- ✅ Perfect for learning and utility projects

---

## 📁 Project Structure

```

InputValidation/
├── InputValidation.sln
├── InputValidation.cpp
├── InputValidation.vcxproj
├── InputValidation.vcxproj.filters
├── clsInputValidation.h
├── clsDate.h
└── README.md

````

> Build folders like `.vs/` and `x64/` are intentionally ignored.

---

## ✨ Features

- Read and validate integers with automatic retry on invalid input
- Read and validate double (floating-point) numbers with input safety
- Handles cin fail states (clears buffer and asks again)
- Prevents invalid user input
- Validate if a number is within a given range
- Read an integer within a specific range (min / max)
- Read a double within a specific range (min / max)
- Custom error messages for invalid input
- Date validation using clsDate (IsValidDate)
- Fully static utility class (no object creation needed)
- Designed for console applications and reusable projects

---

## 🚀 How to Use

1. Clone the repository:
```
git clone <https://github.com/azzamalmassah/input-validato>
````

2. Open `InputValidation.sln` in Visual Studio

3. Include the header in your project:

```
#include "clsInputValidation.h"
```

4. Use the validation functions in your code (example):

```
int number = clsInputValidation::ReadIntNumber("Enter a number: ");
```


---

## 🛠 Requirements

* Visual Studio (recommended)
* C++17 or later

---


## 📄 License

This project is open-source and free to use for learning and personal projects.




