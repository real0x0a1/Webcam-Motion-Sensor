# Webcam Motion Detector

This simple C++ program uses OpenCV to perform motion detection using a webcam or IP camera stream. It captures consecutive frames, calculates the absolute difference between them, and applies a threshold to identify motion.

## Prerequisites

- OpenCV library installed. You can install it using the following command:
  ```bash
  sudo apt-get install libopencv-dev
  ```

## Usage

1. Clone the repository:

   ```bash
   git clone https://github.com/real0x0a1/Webcam-Motion-Sensor.git
   ```

2. Navigate to the project directory:

   ```bash
   cd Webcam-Motion-Sensor
   ```

3. Compile the code:

   ```bash
   g++ WebcamMotionSensor.cpp -o WebcamMotionSensor `pkg-config --cflags --libs opencv`
   ```

4. Run the executable:

   ```bash
   ./WebcamMotionSensor
   ```

   **Note:** If you're using an IP camera, replace the URL in the `cv::VideoCapture` constructor with your camera's IP address.

5. Press the 'ESC' key to exit the application.

## Features

- Real-time motion detection using OpenCV.
- Supports both webcam and IP camera streams.

## Troubleshooting

- If the program fails to connect to the camera, check the camera's IP address or ensure it is correctly connected.
- Make sure the OpenCV library is properly installed.

## How to Run

To run this program:

1. Make sure you have a C compiler installed on your computer.
2. Copy the code into a file with a `.cpp` extension, for example, `WebcamMotionSensor.cpp`.
3. Open a terminal or command prompt and navigate to the directory where your file is located.
4. Compile the program by entering: `g++ WebcamMotionSensor.cpp -o WebcamMotionSensor`
5. Run the compiled program: `./WebcamMotionSensor`

Or you can run this program also using:

```bash
   make WebcamMotionSensor
```

---
