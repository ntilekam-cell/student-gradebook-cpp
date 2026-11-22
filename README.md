# Student Gradebook Benchmark Filter (C++)

A console-based C++ application that reads student records from a text file and filters students who meet or exceed a user-defined target score and grade level using custom operator overloading.

---

## 🚀 Key C++ Concepts Demonstrated

* **Object-Oriented Programming (OOP):** Encapsulates student data (`name`, `score`, `gradeLevel`) inside a custom `Gradebook` class with overloaded constructors.
* **Operator Overloading:**
  * Stream extraction (`>>`) to read `Gradebook` objects directly from a file stream.
  * Stream insertion (`<<`) to format and print matching student records to the console.
  * Relational comparison (`>=`) to evaluate student objects against a target benchmark.
* **File Handling (`<fstream>`):** Reads structured records from `Students.txt` with stream error checking.

---

## 📂 Project Files

* `main.cpp` — Entry point that prompts for benchmark criteria, reads `Students.txt`, and displays qualifying students.
* `gradebook.h` — Header file defining the `Gradebook` class interface and overloaded operators.
* `gradebook.cpp` — Implementation of `Gradebook` constructors and operator functions.
* `Students.txt` — Sample input dataset of student records.

---

## 🛠️ How to Compile & Run

Using `g++` in your terminal:

```bash
g++ main.cpp gradebook.cpp -o gradebook
./gradebook
```

### Example Run
```text
Enter Target Score: 75
Enter Target Grade Level: 10

Students meeting or exceeding the benchmark:
...
```
