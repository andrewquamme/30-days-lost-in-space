int const time = 1000;

void setup()
{
	pinMode(LED_BUILTIN, OUTPUT);
    int time = 1000;
}

void loop()
{
	digitalWrite(LED_BUILTIN, 1);
    delay(time);
    digitalWrite(LED_BUILTIN, 0);
    delay(time);
}
