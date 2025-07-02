#define LED 13    //Define LED Pin
#define SWITCH 2  //Define Push button Switch Pin

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);                 //Set LED as an Output device
  pinMode(SWITCH, INPUT_PULLUP);        //Set Switch as an Input device with Internally Pull-Up to 5 Volts  
}

void loop() {
  // put your main code here, to run repeatedly:
  if( digitalRead(SWITCH) == 0 ) { //If Switch is pressed
    digitalWrite(LED, 1);            //Turn ON the LED
  } else {                         //If Switch is not pressed
    digitalWrite(LED, 0);            //Turn OFF the LED
  }
}
