# Alg-Level5: Advanced Data Structures and Applications in C++

## 📖 Overview
**Alg-Level5** is a C++ project showcasing advanced data structures and their real-world applications.  
It includes custom-built linked list and array-based implementations, plus practical use cases such as an **Undo/Redo system** and a **Queue Management system**.

---

## 🏗️ Data Structures

### Implementations
- **clsDblLinkedList** – Templated doubly linked list with CRUD operations  
- **clsDynamicArray** – Dynamic array with auto-resizing  
- **clsMyQueue** – Queue (linked list based)  
- **clsMyStack** – Stack (inherits from queue, LIFO behavior)  
- **clsMyQueueArr** – Array-based queue  
- **clsMyStackArr** – Array-based stack  

### Features
- Template-based, works with any type  
- Proper memory management with destructors  
- Full set of operations: insert, delete, search, reverse, etc.  
- Efficient time complexity where possible  

---

## 🚀 Applications

### Undo/Redo System (*clsMyString*)
- Tracks history with `_Undo` and `_Redo` stacks  
- Simple API: `SetValue()`, `Undo()`, `Redo()`  
- Real-world example of stack usage  

### Queue Management System (*clsQueueLine*)
- Ticketing system with auto-numbering and timestamps  
- Tracks served & waiting clients  
- Multiple display views  
- Uses `clsDate` for accurate timing  

---

## 📁 Project Structure

```
Alg-Level5/
├── Header Files/
│ ├── DS/ # Data structure implementations
│ │ ├── clsDblLinkedList.h # Doubly linked list
│ │ ├── clsDynamicArray.h # Dynamic array
│ │ ├── clsMyQueue.h # Linked list queue
│ │ ├── clsMyStack.h # Linked list stack
│ │ ├── clsMyQueueArr.h # Array-based queue
│ │ └── clsMyStackArr.h # Array-based stack
│ ├── Undo-Redo/
│ │ └── clsMyString.h # Undo/redo implementation
│ └── QueueLine/
│ └── clsQueueLine.h # Queue management system
├── main.cpp # Demonstration code
└── Additional dependencies/
└── clsDate/ # Date handling utility
```


---  


---

## 🛠️ Building the Project

### Requirements
- Visual Studio 2022  
- C++17 compiler  
- Windows SDK (10.0+)  

### Build
1. Open `Alg-Level5.vcxproj` in Visual Studio  
2. Select **x64** or **Win32**  
3. Build (**Ctrl+Shift+B**) and run the executable  

---

## 🧪 Testing
`main.cpp` demonstrates:  
- Data structure operations  
- Undo/redo functionality  
- Queue management system  
- Error handling and edge cases  

---

## 📊 Performance

| Data Structure       | Insert | Delete | Access | Search |
|----------------------|--------|--------|--------|--------|
| Doubly Linked List   | O(1)   | O(1)   | O(n)   | O(n)   |
| Dynamic Array        | O(n)   | O(n)   | O(1)   | O(n)   |
| Queue (LL-based)     | O(1)   | O(1)   | O(1)   | O(n)   |
| Stack (LL-based)     | O(1)   | O(1)   | O(1)   | O(n)   |

---

## 💻 Usage Examples

### Queue Management
```cpp
#include "clsQueueLine.h"

int main() {
    clsQueueLine BankQueue("B", 5); // 5-min avg service
    BankQueue.IssueTicket();
    BankQueue.IssueTicket();
    BankQueue.PrintInfo();
    BankQueue.PrintAllTickets();
}
```
### Undo/Redo  
```cpp
#include "clsMyString.h"

int main() {
    clsMyString text;
    text.Value = "Hello";
    text.Value = "Hello World";
    text.Undo(); // "Hello"
    text.Redo(); // "Hello World"
}
```  
## 🎯 Educational Value
- Advanced C++ data structures  
- Templates and inheritance  
- Real-world applications (Undo/Redo, Queue system)  
- Clean project organization  
- Professional coding practices  

---

## 🙏 Acknowledgment
Special thanks to **Dr. Abu-Hadhoud** for his invaluable guidance and expertise.  
Learn more from him at [programmingadvices.com](https://programmingadvices.com).  

---

## 👨‍💻 Author
**Mohamed Idrissi Alami** · [GitHub](https://github.com/mohamedidrissialami)  

This project reflects strong **C++ development practices** and demonstrates how advanced data structures can be applied to solve real problems efficiently.  


