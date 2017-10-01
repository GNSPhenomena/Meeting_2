//------------ DEFINE PIN VARS ------------
int ledPin1 = 0;
int ledPin2 = 1;
int ledPin3 = 2;

void setup(){
	pinMode(ledPin1, OUTPUT);
	pinMode(ledPin2, OUTPUT);
	pinMode(ledPin3, OUTPUT);
}

void loop(){
  	//------------ RED ------------
	for(int i=0; i<3; i++) // repeat 3 times
	{
		// Turn on LED1, and turn off others
		digitalWrite(ledPin1, HIGH);
		digitalWrite(ledPin2, LOW);
		digitalWrite(ledPin3, LOW);
		delay(1000);
		// Turn off all LEDs
		digitalWrite(ledPin1, LOW);
		digitalWrite(ledPin2, LOW);
		digitalWrite(ledPin3, LOW);
		delay(1000);
	}
	//------------ GREEN ------------
	for(int j=0; j<3; j++) // repeat 3 times
	{
		// Turn on LED2, and turn off others
		digitalWrite(ledPin1, LOW);
		digitalWrite(ledPin2, HIGH);
		digitalWrite(ledPin3, LOW);
		delay(2000);
		// Turn off all LEDs
		digitalWrite(ledPin1, LOW);
		digitalWrite(ledPin2, LOW);
		digitalWrite(ledPin3, LOW);
		delay(2000);
	}
	//------------ BLUE ------------
	for(int k=0; k<3; k++) // repeat 3 times
	{
		// Turn on LED3, and turn off others
		digitalWrite(ledPin1, LOW);
		digitalWrite(ledPin2, LOW);
		digitalWrite(ledPin3, HIGH);
		delay(1000);
		// Turn off all LEDs
		digitalWrite(ledPin1, LOW);
		digitalWrite(ledPin2, LOW);
		digitalWrite(ledPin3, LOW);
		delay(1000);
	}
}
