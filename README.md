# Dual-Axis Solar Tracking System ☀️

![Certificate of award](SciAward2025.jpg)

Awarded **"Best Science Project (High School Level)"** at the Lumbini Academy Science Fair (November 2025).

## 📌 Project Overview
This project investigates the efficiency of solar energy capture by comparing a **Dual-Axis Tracking System** against a traditional stationary fixed-angle panel. By utilizing active sensors and motors, this system continuously adjusts the solar panel's position to maintain a perpendicular alignment with the sun, minimizing the incident angle and maximizing power output.

## ❓ Project Question
> **"How can we maximize solar power generation?"**

## 💡 The Science Behind It
The system is rooted in maximizing the **Photovoltaic (PV) Effect**. Solar panels generate maximum power when the sun’s rays strike the surface at a perfect 90-degree angle (zero-degree incident angle). 

Since the sun moves daily (Azimuth) and seasonally (Elevation), fixed panels lose significant efficiency in the morning and late afternoon. This dual-axis tracker solves the problem by using **Light-Dependent Resistors (LDRs)** to sense the brightest quadrant of the sky and **servomotors** to move the panel along both horizontal and vertical axes.

## 🛠️ Hardware Requirements
The project was built using the following components:
* **Microcontroller:** Keyestudio Uno Board (Arduino compatible)
* **Sensors:** 4x LDR (Photoresistor) Modules, BH1750FVI Digital Light Intensity Module, Temperature & Humidity Sensor
* **Actuators:** 2x Servo Motors (with Servo Mount Kit)
* **Power:** 1.5 W PET Solar Panel (137mm x 85mm), 18650 Battery Holder, Solar USB Charging Module
* **Display:** I2C 1602 LCD Module
* **Chassis:** Acrylic and 3mm Wooden boards

## 📊 Experimental Results
The experiment was conducted in **Mandalay, Myanmar**, during the winter season (Novemeber). 

### Key Findings:
* **Tracking Panel Average Energy:** 25.27 Wh
* **Fixed Panel Average Energy:** 19.01 Wh
* **Efficiency Gain:** The dual-axis tracker generated approximately **33% more total energy** than the fixed panel.

| Time | Tracking Power (W) | Fixed Power (W) | Difference (W) |
| :--- | :--- | :--- | :--- |
| 9:00 AM | 3.36 | 1.35 | 2.01 |
| Solar Noon | 5.40 | 5.04 | 0.36 |
| 3:00 PM | 2.20 | 0.45 | 1.75 |

The data confirms that while fixed panels perform well during "Solar Noon," the tracking system provides a much more consistent and higher power yield during the early and late hours of the day.

## 🚀 Future Improvements
* **Open-Loop Integration:** Incorporate time-based tracking to reduce motor jitter and save energy during heavy cloud cover.
* **Energy Conservation:** Optimize code to put motors in "sleep mode" at night to conserve the energy captured during the day.

## 👥 Team Members (Grade 12)
* Aye Chan Zay (Project Leader)
* Nyi Nyi Phyo
* Twal Tar Wint Hlaing
* May Myat Noe San
* Zue Yati Ko

---
*Developed for The Lumbini Mandalay Science Fair Competition.*