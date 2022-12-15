
int input1 = 9, input2 = 8, input3 = 7, input4 = 6;
int switch1 = 12;

int forward(int pin1, int pin2) {
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
}
int backward(int pin1, int pin2) {
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
}

void setup() {
    pinMode(input1, OUTPUT);
    pinMode(input2, OUTPUT);
    pinMode(input3, OUTPUT);
    pinMode(input4, OUTPUT);
    pinMode(switch1, INPUT_PULLUP);

}

void loop() {
    if (digitalRead(switch1)) {
        backward(input1, input2);
        backward(input3, input4);
    }
    else {
        forward(input1, input2);
        forward(input3, input4);
    }


}
