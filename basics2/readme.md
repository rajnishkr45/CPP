# CPP JOURNEY

## 📅 Chapter 2 - Loops in C++
## 📅 Date - 07/06/2025

### ✅ Topics Covered Today:

* **For Loop**
* **While Loop**
* **Do-While Loop**
* **Break and Continue**

---

## 📚 Loops Summary

### 📌 For Loop

Used when the number of iterations is known.

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
```

### 📌 While Loop

Used when the number of iterations is not known in advance.

```cpp
int i = 1;
while (i <= 5) {
    cout << i << " ";
    i++;
}
```

### 📌 Do-While Loop

Executes at least once, even if the condition is false.

```cpp
int i = 1;
do {
    cout << i << " ";
    i++;
} while (i <= 5);
```

### 📌 Break and Continue

* `break` exits the loop immediately
* `continue` skips the current iteration

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue;
    cout << i << " ";
}
```

---


