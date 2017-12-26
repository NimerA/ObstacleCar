int a_motor_pwm       = 3;
int a_motor_brake     = 9;
int a_motor_direction = 12;

int b_motor_pwm       = 11;
int b_motor_brake     = 8;
int b_motor_direction = 13;


void setup(){

    pinMode(a_motor_brake, OUTPUT);
    pinMode(a_motor_direction, OUTPUT);

    pinMode(b_motor_brake, OUTPUT);
    pinMode(b_motor_direction, OUTPUT);

}

void drive_forward() {
    digitalWrite(a_motor_direction, HIGH);
    digitalWrite(b_motor_direction, HIGH);

    digitalWrite(a_motor_brake, LOW);
    digitalWrite(b_motor_brake, LOW);

    analogWrite(a_motor_pwm, 255);
    analogWrite(b_motor_pwm, 255);
}

void drive_backward() {
}

void drive_left() {
}

void drive_right() {
}

void rotate_left() {
}

void rotate_right() {
}
void stop() {
    digitalWrite(a_motor_brake, HIGH);
    digitalWrite(b_motor_brake, HIGH);
}



void loop(){
    //drive_forward();
    //delay(5000);
    //stop();
    //delay(5000);
}