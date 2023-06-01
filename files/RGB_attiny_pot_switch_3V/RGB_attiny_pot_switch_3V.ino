//Loes Bogers - ArtechLAB
//2023

#define red 0
#define blue 1
#define green 4

const int buttonPin = 2;
const int potPin = 3;
int potVal = 0;
int valBrightness = 0;

int buttonState = 0; // to switch between r, g and b mode
int colorMode = 0;
int prestate = 0;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); //all PB pins on attiny
  pinMode(potPin, INPUT);

}
void loop() {

  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW && prestate == 0) {
    colorMode++;

    if (colorMode > 2) {
      colorMode = 0;
    }
    prestate = 1;
  } else if (buttonState == HIGH) {
    prestate = 0;
  }

  potVal = analogRead(potPin);
  int mode = colorMode;    //mode 0 = R, 1 = G, 2 = B
  valBrightness = map(potVal, 0, 1023, 255, 0); //map pot values with inversion bcs RGB has common anode

  switch (mode) {
    case 0:
      analogWrite(red, valBrightness);
      break;
    case 1:
      analogWrite(blue, valBrightness);
      break;
    case 2:
      analogWrite(green, valBrightness);
      break;
  }
}
