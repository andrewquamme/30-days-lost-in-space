int SW1 = 2;
int LED = 12;

void setup()
{
    pinMode(SW1, INPUT);
    pinMode(LED, OUTPUT);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED, digitalRead(SW1));
    indicateReady();
}

void indicateReady()
{
    int i;
    for (i = 0; i <= 1; i++)
    {
        digitalWrite(LED_BUILTIN, 1);
        delay(100);
        digitalWrite(LED_BUILTIN, 0);
        delay(100);
    }
    delay(1000);
}
