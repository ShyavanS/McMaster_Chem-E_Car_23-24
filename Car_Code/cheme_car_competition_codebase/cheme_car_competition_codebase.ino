// TODO:
// Temeperature Sensor - Needs to be initialized, periodically poll sensor, store temperature in variable, if reaches threshold of 3 deg increase from what it first read, stop the drive motors, look into kalman filters for reducing sensor noise.
// IMU - Needs to be initialized, periodically poll sensor, store Z-axis angle in variable, take initial value as 0 deg, if veering off by more than 5 deg, adjust using a PID loop to get back on track, look into kalman filters for reducing sensor noise.
// Drive Motors - Need to be initialized, take input from the IMU as necessary and move, otherwise start off moving straight, and keep moving straight, move at about 80% max speed for now, we will change as needed.
// Servo Motor - Needs to be initialized, turn 180 deg clockwise once at start to dump reactants, wait 1 sec to finish dumping, turn back 180 deg counter-clockwise to return to upright position, set speed to 100% for now, tune later.

// Define the PWM pins for the stir bar motor
const int stirPin1 = 5;
const int stirPin2 = 6;

void setup() {
  // Initialize the motor pins as outputs
  pinMode(stirPin1, OUTPUT);
  pinMode(stirPin2, OUTPUT);

  // Set the initial speed to 80%
  analogWrite(stirPin1, 204); // 80% of 255
  digitalWrite(stirPin2, LOW); //for fast decay
}

void loop() {

}
