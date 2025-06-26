// Made for Arduino UNO R3

#define LED 13

void setup() {
  // initialize digital pin 13 as an output
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}

/*
  CODE FUNCTIONS EXPLAINATION:

  //This is comment part, which is not going to compile and upload into the board!

  setup() function: 
  - the setup function runs once when you press reset or power the board

  loop() function:
  - the loop function runs over and over again forever

  pinMode() function:
  - defines the Gpio pin Mode
  - e.g. pinMode(PIN_NUMBER, GPIO_MODE);
  - PIN_NUMBER indicates GPIO Number which can be 0 to 13 or A0 to A5 
  - GPIO_MODE indicates GPIO Mode which can be applied on a pin as Digital Input/Output or Analog Input/Output

  digitalWrite() Function:
  - Changes the status of a pin
  - e.g. digitalWrite(PIN_NUMBER, STATE);
  - PIN_NUMBER indicates GPIO pin which can be 0 to 13 or A0 to A5 
  - STATE can be 0 (LOW) or 1 (HIGH) 

  delay() Function:
  - Used to wait for defined time
  - e.g. delay(time_in_miliseconds)
  - It waits for 1 second if written delay(1000); where 1000 miliseconds = 1 second
*/
