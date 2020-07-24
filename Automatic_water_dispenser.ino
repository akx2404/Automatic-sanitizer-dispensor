const int trigPin = 9;
const int echoPin = 10;

#define pump 4

long duration;
int distance;




void setup() {
    pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
    pinMode(echoPin, INPUT); // Sets the echoPin as an Input
    pinMode(pump,OUTPUT);
    Serial.begin(9600); // For serial communication
    }



    
void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    //Distance calculation
    distance= duration*0.034/2;
    // Printinng the distance on the Serial Monitor
    Serial.print("Distance: ");
    Serial.println(distance);


    if (distance <25 )
{
 digitalWrite(pump,HIGH);
 Serial.println("DC Pump is ON Now!!");
 delay(500);
}
else
{
 digitalWrite(pump,LOW);
 Serial.println("DC Pump is OFF Now!!");
 delay(500);

}




    
    }
