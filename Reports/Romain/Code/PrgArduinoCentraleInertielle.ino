void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while (!Serial){};//wait for serial to initialize
}

const char TERMINATOR = '|';

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    String commandFromJetson = Serial.readStringUntil(TERMINATOR);

    String ackMsg = "Hello Jetson! This is what I got from you : " + commandFromJetson; //String(messageBuffer);
    Serial.print(ackMsg);
  }
  delay(500);

}
