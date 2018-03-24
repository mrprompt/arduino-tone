/**
 * Tone
 *
 * @author Thiago Paes <mrprompt@gmail.com>
 **/
int buzzer = 12;
int led = 13;
int button = 2;
int state = 0;
unsigned long tempo = 1000;
unsigned dog = 35000;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT);

  Serial.begin(9600);
}

void loop()
{
  state = digitalRead(button);

  if (state == HIGH) {
    digitalWrite(led, HIGH);

    Serial.println(state);

    tone(buzzer, dog);

    delay(tempo);
  } else {
    Serial.println(state);

    noTone(buzzer);

    digitalWrite(led, LOW);
  }
}
