# Sustainable Bio-Waste Management: Human Hair Based Heavy Metal Removal and Smart Water Quality Monitoring System

An eco-friendly, low-cost wastewater filtration and automation system that utilizes salon waste (human hair) as a natural bio-sorbent to remove heavy metals like Lead and Mercury, combined with real-time IoT monitoring using Arduino, TDS/pH sensors, and a GSM module.[span_2](start_span)[span_2](end_span)

---

## 📌 Project Overview
* **Institution:** Surya Engineering College.

* **Developer:** Sathiya S (ECE)

### 💡 The Problem
Industries discharge hazardous, non-biodegradable heavy metals (Lead & Mercury) into water bodies, damaging organs and aquatic life[span_5](start_span)[span_5](end_span). Existing chemical treatment methods are expensive for small-scale industries[span_6](start_span)[span_6](end_span). Concurrently, urban areas face massive landfill issues due to unutilized human hair waste from salons[span_7](start_span)[span_7](end_span).

### 🌱 Our Solution
This project creates a **Circular Economy** ("Waste into Wealth") by using human hair as a natural filter cartridge[span_8](start_span)[span_8](end_span). The hair's natural protein, **Keratin**, traps dangerous metal ions via **Chelation**[span_9](start_span)[span_9](end_span). The system is automated 24/7 to monitor water purity and trigger safety shutoffs[span_10](start_span)[span_10](end_span).

---

## 🛠️ System Architecture & Working Logic
1. **Source Wastewater:** Contaminated water containing heavy metals ($Pb$ and $Hg$) enters the system[span_11](start_span)[span_11](end_span).
2. **The Keratin Filter:** Water passes through a container packed with washed human hair[span_12](start_span)[span_12](end_span). Keratin proteins chemically trap the metal ions (Chemical-free absorption)[span_13](start_span)[span_13](end_span).
3. **Automation & Monitoring:** 
   * An **Arduino / ESP32** continuously reads data from **TDS and pH sensors**[span_14](start_span)[span_14](end_span).
   * If contamination is detected (e.g., TDS exceeds safe thresholds or pH drops), a **Relay Module** instantly cuts power to the water pump to stop unsafe discharge[span_15](start_span)[span_15](end_span).
4. **GSM Remote Alert:** The system transmits a real-time "Contamination Alert!" SMS notification to the user’s smartphone via a GSM module[span_16](start_span)[span_16](end_span).

---

## 🎛️ Components Used

### Hardware Components:
* **Human Hair Filter Cartridge** (Bio-sorbent)[span_17](start_span)[span_17](end_span)
* **TDS Sensor & pH Sensor** (Water quality evaluation)[span_18](start_span)[span_18](end_span)
* **Arduino Microcontroller** (Central processing unit)[span_19](start_span)[span_19](end_span)
* **Relay Module** (Pump control switch)[span_20](start_span)[span_20](end_span)
* **GSM Module** (Remote cellular alerting)[span_21](start_span)[span_21](end_span)
* **Water Pump & Power Supply / Solar Panel**[span_22](start_span)[span_22](end_span)

### Software & Simulation Tools:
* **Arduino IDE** (Embedded C Programming)[span_23](start_span)[span_23](end_span)
* **Wokwi** (Hardware Circuit Simulation Platform)[span_24](start_span)[span_24](end_span)

---

## 🚀 Simulation & Code Output
This project is fully simulated on Wokwi, demonstrating conditional sensor logic and continuous serial monitoring:

* **Simulation Demo Link:** [View Live on Wokwi](https://wokwi.com/projects/458008445850908673)[span_25](start_span)[span_25](end_span)

### Output Assertions Simulated:
* **Safe Status:** Displays standard water metrics (`TDS: 345 ppm | pH: 7.2`) -> Safe to Pump[span_26](start_span)[span_26](end_span).
* **Alert Status:** When heavy metals are simulated (`TDS: 1000 ppm`), the console prints `Status: Heavy Metals Detected!` and halts operations[span_27](start_span)[span_27](end_span).

---

## 🌟 Advantages & Future Scope

### Advantages:
* **Zero-Cost Raw Material:** Successfully recycles salon solid waste[span_28](start_span)[span_28](end_span).
* **High Efficiency:** Hair features a high surface-to-volume ratio, facilitating faster filtration[span_29](start_span)[span_29](end_span).
* **Eco-Friendly:** Complete chemical-free, biodegradable wastewater processing[span_30](start_span)[span_30](end_span).
* **Affordable:** Best suited for small-scale rural industries[span_31](start_span)[span_31](end_span).

### Future Scope:
* **Multi-layer Filtration:** Expanding the filter unit to trap broader industrial toxins[span_32](start_span)[span_32](end_span).
* **Hair Regeneration:** Researching chemical desorption methods to safely extract trapped metals and reuse the hair core[span_33](start_span)[span_33](end_span).
* **Predictive AI:** Integrating AI analytics to predict when the bio-waste filter approaches saturation based on continuous sensor trends[span_34](start_span)[span_34](end_span).
