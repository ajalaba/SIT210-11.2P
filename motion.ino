int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(ledPin, OUTPUT);//setting led as output
}

void loop() {
if (digitalRead(3) == HIGH) //If motion detected
{
  //Sends signal to system.
  //Pedestrian requires crossing
    Serial.println("Motion has been detected. Please standby.");
    digitalWrite(13, HIGH); //Indicates motion has been detected. Notifies pedestrian.
    delay(10000); //Waiting for traffic to stop

    //LED BLINK 
    //Indicates it is safe to cross!
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);

    //SLOW BLINK
    //Indicates pedestrian finish crossing. Others should not cross
    digitalWrite(13, HIGH);
    delay(1500);
    digitalWrite(13, LOW);
    delay(1500);
    digitalWrite(13, HIGH);
    delay(1500);
    digitalWrite(13, LOW);
    delay(1500);
    digitalWrite(13, HIGH);
    delay(1500);
    digitalWrite(13, LOW);
    delay(1500);
    digitalWrite(13, HIGH);
    delay(1500);
    digitalWrite(13, LOW);
    delay(1500);
  } 
  else {
    Serial.println("Inactive");
    digitalWrite(13, LOW);
  }
    delay(1000);
}
