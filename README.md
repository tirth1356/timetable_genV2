# 🕘 Timetable Generator V2 in C 📅

A simple and fun project written in C that generates a **weekly school timetable** based on user input for the number of subjects. The program ensures:

✅ No subject is repeated more than twice per day  
✅ Every subject is used throughout the week  
✅ 30-minute break after 4th lecture  
✅ School starts at 8:00 AM with 8 lectures per day  
✅ Clean tabular timetable output  

---

## 🚀 Features

- ⏱️ Automatic time calculation for each period (starting from 8:00 AM)
- 📚 Dynamic subject input (up to 10)
- 📆 Weekly schedule (Monday to Friday)
- 🔄 Random but valid timetable every run
- 🧾 Tabular format output for easy readability

---

## 🛠️ How to Use

1. 🧠 Understand the constraints:
   - Max 10 subjects
   - 8 lectures per day, break after 4
2. 💻 Compile and run the program:
   ```bash
   gcc timetable.c -o timetable
   ./timetable
   ```
3. 📝 Input subject count and names when prompted
4. 📊 View your generated timetable in the terminal!

---

## 🧪 Sample Input

```
Enter the number of subjects (max 10): 5
Enter name of subject 1: Math
Enter name of subject 2: English
Enter name of subject 3: Physics
Enter name of subject 4: Chemistry
Enter name of subject 5: CS
```

---

## 📊 Sample Output

```
-------------------- Weekly Timetable --------------------
Time      Monday         Tuesday        Wednesday      Thursday       Friday         
----------------------------------------------------------
08:00     Math           English        Chemistry       Physics        CS             
08:45     CS             Math           English         Chemistry      Physics        
09:30     English        CS             CS              Math           Chemistry      
10:15     Chemistry      Physics        Physics         CS             English        
11:00     BREAK          BREAK          BREAK           BREAK          BREAK          
11:30     Physics        Chemistry      Math            English        Math           
12:15     Math           Chemistry      English         Physics        Chemistry      
13:00     English        Math           CS              Chemistry      CS             
13:45     CS             Physics        Math            Math           English        
```

---

## 📂 Files

- `timetable.c` – Main program source file
- `README.md` – You're here! 😊

---

## 🧑‍💻 Author

Made with ❤️ by [Your Name]

---

## 📜 License

MIT License – feel free to use and modify!

---

## 🌟 Show some love

If you found this useful, feel free to ⭐️ the repo!

