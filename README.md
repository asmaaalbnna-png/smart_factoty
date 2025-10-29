#  Smart Factory Counter System

# Project Summary

The **Smart Factory Counter System** is designed to simulate an industrial production line counter.  
It uses an **IR sensor** to detect objects passing by and keeps track of the total number of items produced.  
The system provides **visual feedback using LEDs** to indicate production status and includes a **reset button** to restart the count when needed.

---

## ⚙️ Project Overview

This project demonstrates how automation can be applied in industrial settings using simple electronics and Arduino.  
It helps track production in real time and provides immediate status indication.

---

## 🌟 Main Features

- **Automatic Counting:**  
  The IR sensor detects every object passing in front of it and increases the counter automatically.

- **Status Indicator:**  
  - 🟢 Green LED → ON when the count is below 10  
  - 🔴 Red LED → ON when the count reaches or exceeds 10

- **Manual Reset:**  
  A push button resets the counter back to zero.

- **Serial Monitoring:**  
  The current count is displayed on the Serial Monitor for easy tracking.

---

## 🧰 Components Used

| Component | Description |
|------------|-------------|
| Arduino Uno | Microcontroller board |
| IR Sensor Module | Detects objects passing by |
| Green & Red LEDs | Indicate production status |
| Push Button | Used to reset the counter |
| 220Ω Resistors | For current limiting on LEDs |
| Breadboard & Jumper Wires | For circuit connections |

---

## 🔬 Working Principle

1. When an object passes the IR sensor, it changes its output from **HIGH → LOW**.  
2. The Arduino detects this change and increases the counter value by one.  
3. If the counter is **less than 10**, the **green LED** turns ON.  
4. When the counter **reaches 10 or more**, the **red LED** turns ON instead.  
5. Pressing the **reset button** sets the count back to zero and switches the indicator back to green.

---

## 💡 Future Improvements

- Add an LCD display to show the count visually.  
- Integrate a buzzer alert when the target count is reached.  
- Store production data in EEPROM or send it to a web dashboard.

---

## 🪪 License

This project is open-source under the **MIT License**.  
Feel free to modify and use it for educational or personal purposes.
