//------------ DEFINE PIN VARS ------------
int ledPin1 = 9;
int ledPin2 = 10;
int ledPin3 =11;

void setup(){
	pinMode(ledPin1, OUTPUT);
	pinMode(ledPin2, OUTPUT);
	pinMode(ledPin3, OUTPUT);
}

void loop(){
  	//------------ RED ------------
	for(int i=0; i<3; i++)
	{
		digitalWrite(ledPin1, HIGH);
		digitalWrite(ledPin2, LOW);
		digitalWrite(ledPin3, LOW);
		delay(1000);
		digitalWrite(ledPin1, LOW);
		digitalWrite(ledPin2, LOW);
		digitalWrite(ledPin3, LOW);
		delay(1000);
	}
	//------------ GREEN ------------
	for(int j=0; j<3; j++)
	{
		digitalWrite(ledPin1, LOW);
		digitalWrite(ledPin2, HIGH);
		digitalWrite(ledPin3, LOW);
		delay(2000);
		digitalWrite(ledPin1, LOW);
		digitalWrite(ledPin2, LOW);
		digitalWrite(ledPin3, LOW);
		delay(2000);
	}
	//------------ BLUE ------------
	for(int k=0; k<3; k++)
	{
		digitalWrite(ledPin1, LOW);
		digitalWrite(ledPin2, LOW);
		digitalWrite(ledPin3, HIGH);
		delay(1000);
		digitalWrite(ledPin1, LOW);
		digitalWrite(ledPin2, LOW);
		digitalWrite(ledPin3, LOW);
		delay(1000);
	}
}