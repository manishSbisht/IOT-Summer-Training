//REmove rx and tx pins before flashing
//then cross connect them after that

char data;
void setup()
{
    Serial.begin(9600);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
}

void loop()
{
    if (Serial.available())
    {
        data = Serial.read();
        Serial.print("Serial Data is: ");
        Serial.println(data);
        if (data == 'W' || data == 'w')
        {
            Serial.println("MOving fwd");
            digitalWrite(2, HIGH);
            digitalWrite(3, LOW);
            digitalWrite(4, LOW);
            digitalWrite(5, HIGH);
        }
        if (data == 'D' || data == 'd')
        {
            Serial.println("MOving bkwd");
            digitalWrite(2, LOW);
            digitalWrite(3, HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(5, LOW);
        }
        if (data == 'A' || data == 'a')
        {

            Serial.println("MOving Left");
            digitalWrite(2, LOW);
            digitalWrite(3, LOW);
            digitalWrite(4, LOW);
            digitalWrite(5, HIGH);
        }
        if (data == 'S' || data == 's')
        {

            Serial.println("MOving riht");
            digitalWrite(2, HIGH);
            digitalWrite(3, LOW);
            digitalWrite(4, LOW);
            digitalWrite(5, LOW);
        }
        if (data == 'z' || data == 'Z')
        {
            Serial.println("stop");
            digitalWrite(2, LOW);
            digitalWrite(3, LOW);
            digitalWrite(4, LOW);
            digitalWrite(5, LOW);
        }
    }
}
