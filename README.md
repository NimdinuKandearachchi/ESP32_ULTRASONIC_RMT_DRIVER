
# ESP32 RMT Ultrasonic Sensor Driver (NON-BLOCKING)

A lightweight and non-blocking ultrasonic distance sensor driver for the ESP32. built using the ESP-IDF framework and leveraging the RMT (Remote Control) peripheral for precise timing. Ideal for applications involving real-time constraints. Compatible with the Arduino framework.

🟡 Only compatible with ESP32-based MCUs 🟡

## 🚀 Features

- ✅ Non-blocking distance measurements using RMT, ISR and FreeRTOS
- ✅ Accurate pulse timing (in microseconds)
- ✅ Lightweight and easy to integrate
- ✅ It is especially useful when performing continuous distance measurements.
  
## 🧰 Requirements

- ESP32 Development Board
- ESP-IDF (v5.0+ recommended)
- Ultrasonic Sensor (e.g., HC-SR04 or compatible)
- Properly wired GPIOs for trigger and echo pins

## 🛠️ How It Works

- Uses **RMT TX** to send a 10µs trigger pulse.
- Uses **RMT RX** to measure the echo duration accurately in us.
- Calculates the distance using the speed of sound.
- Uses FreeRTOS ISR notifiers and a dedicated task for thread-safe processing.

## 📦 Installation

1. Clone this repository into your ESP-IDF project:
   ```bash
   git clone https://github.com/yourusername/esp32-ultrasonic-rmt.git
   ```

2. Add the `esp32_ultrasonic_rmt_driver` folder into your project's `components/` directory.

3. Include the driver in your application:
   ```c
   #include "ultrasonic_rmt.h"
   ```

## 🧪 Example Usage

  See `example` folder

## 🛠️ To-Do
- Supports multiple ultrasonic sensors
- 

## 🔗 References

- ESP-IDF RMT Peripheral Documentation: https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/rmt.html
- Ultrasonic Sensor (HC-SR04) Datasheet: https://cdn.sparkfun.com/datasheets/Sensors/Proximity/HCSR04.pdf
