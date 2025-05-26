# Capacitor Discharge Analysis (Real-World vs Theoretical)

This project investigates the exponential discharge behavior of capacitors in real circuits using Arduino and Python.

##  Objective

To compare real capacitor discharge data (with and without an LED) against the theoretical RC exponential decay model.

##  What I Did

- Built a physical RC circuit using a 470μF capacitor and 220Ω resistor.
- Logged real-time voltage data using Arduino.
- Collected two datasets:
  - **With LED:** distorted decay due to voltage clamping.
  - **Without LED:** clean, smooth exponential decay.
- Analyzed and visualized the data using Python (Pandas, Matplotlib).
- Verified the match between theory and real-world data.

##  Key Concepts

- RC Time Constant: τ = R × C  
- Exponential decay: V(t) = V₀ * e(-t / τ)  
- The impact of non-ideal components (like LEDs) on circuit behavior

## 🧩 Simulation

You can explore the original LED-based circuit in Tinkercad here:

🔗 [View Tinkercad Simulation (with LED)](https://www.tinkercad.com/things/eRJ4ptYFPkt-capacitordischargevisuallization)

This shows the LED interfering with the capacitor’s discharge, visually confirming the distortion seen in the data.

##  View the Notebook in Google Colab

👉 [Open in Google Colab](https://colab.research.google.com/drive/1gceJznZp-lVOAX7cc3AA7nvOOjstvAdV?usp=sharing)

## 🛠️ Tools Used

- Arduino Uno
- 470μF capacitor, 220Ω resistor, LED (for the first test)
- Python (Google Colab)
- Matplotlib, Pandas
- Tinkercad

##  Author

**Mahmod Kirresh** 
