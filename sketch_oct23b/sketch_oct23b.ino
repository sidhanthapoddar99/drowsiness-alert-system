//Motor A
const int inputPin1  = 1;    // Pin 15 of L293D IC
const int inputPin2  = 2;    // Pin 10 of L293D IC
//Motor B
const int inputPin3  = 4;   // Pin  7 of L293D IC
const int inputPin4  = 3;   // Pin  2 of L293D IC


void setup() 
{
    pinMode(inputPin1, OUTPUT);
    pinMode(inputPin2, OUTPUT);
    pinMode(inputPin3, OUTPUT);
    pinMode(inputPin4, OUTPUT);  
}

void loop() 
{
    digitalWrite(inputPin1, HIGH);
    digitalWrite(inputPin2, LOW);
    digitalWrite(inputPin3, HIGH);
    digitalWrite(inputPin4, LOW);  
}
