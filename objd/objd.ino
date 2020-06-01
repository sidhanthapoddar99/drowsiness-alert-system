
//#include <ESP8266WiFi.h>
#include <Arduino.h>
const int motor1=3;
const int motor1a=4;
const int motor2=9;
const int motor2a=8;
const int irr=10;
const int irl=7;
int irrval;
int irlval;

void setup () {
  Serial.begin(9600);
pinMode(motor1, OUTPUT);
pinMode (motor2, OUTPUT);
pinMode(motor1a, OUTPUT);
pinMode (motor2a, OUTPUT);
pinMode (irr, INPUT);
pinMode (irl , INPUT);
}
void stri()
{
  digitalWrite (motor1, HIGH);
  digitalWrite (motor2, HIGH);
  digitalWrite (motor1a, LOW);
  digitalWrite (motor2a, LOW);
}
void stopp()
{
  digitalWrite (motor1, LOW);
  digitalWrite (motor2, LOW);
  digitalWrite (motor1a, LOW);
  digitalWrite (motor2a, LOW);
}
void back()
{
  digitalWrite (motor1a, LOW);
  digitalWrite (motor2a, LOW);
  digitalWrite (motor1, HIGH);
  digitalWrite (motor2, HIGH);
}
void left()
{
  digitalWrite (motor1a, HIGH);
  digitalWrite (motor2a, LOW);
  digitalWrite (motor1, LOW);
  digitalWrite (motor2, LOW);
}
void Right()
{
  digitalWrite (motor2a, HIGH);
  digitalWrite (motor1a, LOW);
  digitalWrite (motor1, LOW);
  digitalWrite (motor2, LOW);
}

void loop () {
irrval=digitalRead (irr);

irlval = digitalRead (irl);
Serial.print(irlval);
Serial.println();
if(irrval==1)
  {stri();}
else
{
  stopp();  
}
delay(50);
/*
if (irrval> 0) {
//digitalWrite (motor, LOW);
//digitalWrite(led, HGH);
//digitalWrite (buzz, HIGH);
Right();
delay (50);
}
else {
// replace low with high and high with low//
i}
if (irlval> 0) {
digitalWrite (motor2, LOW);
digitalWrite (led2, HIGH);
digitalWrite (buzz2, HIGJ);
delay (50);
else {//replace high with low and low with high//
*/
}
