int ledpin = 13;
int redPin = 5;
int grePin = 6;
int bluPin = 7;
boolean red = false;
boolean green = false;
boolean blue = false;


void setup() {
	pinMode(ledpin, OUTPUT);
	pinMode(grePin, OUTPUT);
	pinMode(redPin, OUTPUT);
	pinMode(bluPin, OUTPUT);
	Serial.begin(9600); 
}

void loop() {
	
	char val = NULL;

	if(Serial.available()){
		val = Serial.read();
	}
	if( val != NULL ){
	  if(val == 'r' || val == 'R'){
	  	red ? digitalWrite(redPin, LOW) : digitalWrite(redPin, HIGH);
	  	red ? red = false : red = true;	  	
	  }else if(val == 'g' || val == 'G'){
		green ? digitalWrite(grePin, LOW) : digitalWrite(grePin, HIGH);
	  	green ? green = false : green = true;	
	  }else if(val == 'b' || val == 'B'){
	  	blue ? digitalWrite(bluPin, LOW) : digitalWrite(bluPin, HIGH);
	  	blue ? blue=false : blue = true;	
	  }
	}

	delay(100);
}
