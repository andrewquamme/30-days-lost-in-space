int LED = 12;
int time = 1000;

void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
	pinMode(LED, OUTPUT);
}

void loop()
{
	digitalWrite(LED, 1);
    digitalWrite(LED_BUILTIN, 0);
    delay(time);
    digitalWrite(LED, 0);
    digitalWrite(LED_BUILTIN, 1);
    delay(time);
}
