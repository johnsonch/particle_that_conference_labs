int yellowLED = A0;
int blueLED = A1;
int greenLED = A2;
int redLED = A3;

bool isBlueOn = false;
bool isGreenOn = false;


int toggleBlue(String command)
{
  if (isBlueOn)
  {
    digitalWrite(blueLED, LOW);
  }
  else
  {
    digitalWrite(blueLED, HIGH);
  }
  isBlueOn = !isBlueOn;
  return 1;
}

void toggle(bool isOn, int led) {
  if (isOn)
  {
    digitalWrite(led, LOW);
  }
  else
  {
    digitalWrite(led, HIGH);
  }
}

void setup() {
  pinMode(yellowLED, OUTPUT); // Yellow
  pinMode(blueLED, OUTPUT); // Blue
  pinMode(greenLED, OUTPUT); // Green
  pinMode(redLED, OUTPUT); // Red
  Particle.function("toggleBlue", toggleBlue);
  Particle.variable("greenOn", isGreenOn);
}

void loop() {
  digitalWrite(redLED, HIGH);
  delay(1000);
  digitalWrite(redLED, LOW);
  delay(1000);
}
