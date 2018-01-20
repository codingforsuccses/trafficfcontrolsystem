/*
  this code is desined and writen by yajat charpe
  
  this runs with the esp8266 wi-fi module to relay
  the traffic condition to the website

1234656556

*/

int lane_right = 0;

int lane_left = 0;

int lane_front = 0;

int time_of_lane_front = 0;

int time_of_lane_left = 0;

int time_of_lane_right = 0;

void setup()
{
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(3, INPUT);
  pinMode(6, INPUT);
  pinMode(2, INPUT);
  pinMode(7, INPUT);
  pinMode(4, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(5, INPUT);
  Serial.begin(9600);

  pinMode(A5, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A1, OUTPUT);
}

void loop()
{
  digitalRead(13);

  digitalRead(12);

  digitalRead(11);

  digitalRead(10);

  digitalRead(3);

  digitalRead(6);

  digitalRead(2);

  digitalRead(7);

  digitalRead(4);

  digitalRead(8);

  digitalRead(9);

  digitalRead(5);

  if (digitalRead(2) == 1) {
    delay(5000); // Wait for 5000 millisecond(s)
    lane_right = 1;
    Serial.println("traffic lane 1 on right");
  }
  if (digitalRead(3) == 1) {
    delay(5000); // Wait for 5000 millisecond(s)
    lane_right = 2;
    Serial.println("traffic lane 2 on right");
  }
  if (digitalRead(4) == 1) {
    delay(5000); // Wait for 5000 millisecond(s)
    lane_right = 3;
    Serial.println("traffic lane 3 on right");
  }
  if (digitalRead(5) == 1) {
    delay(5000); // Wait for 5000 millisecond(s)
    lane_right = 4;
    Serial.println("traffic lane 4 on right");
  }
  if (digitalRead(6) == 1) {
    delay(5000); // Wait for 5000 millisecond(s)
    lane_left = 1;
    Serial.println("traffic lane 1 on left");
  }
  if (digitalRead(7) == 1) {
    delay(5000); // Wait for 5000 millisecond(s)
    lane_left = 2;
    Serial.println("traffic lane 2 on left");
  }
  if (digitalRead(8) == 1) {
    delay(5000); // Wait for 5000 millisecond(s)
    lane_left = 3;
    Serial.println("traffic lane 3 on left");
  }
  if (digitalRead(9) == 1) {
    delay(5000); // Wait for 5000 millisecond(s)
    lane_left = 4;
    Serial.println("traffic lane 4 on left");
  }
  if (digitalRead(10) == 1) {
    delay(5000); // Wait for 5000 millisecond(s)
    lane_front = 1;
    Serial.println("traffic lane 1 on front");
  }
  if (digitalRead(11) == 1) {
    lane_front = 2;
    delay(5000); // Wait for 5000 millisecond(s)
    Serial.println("traffic lane 2 on front");
  }
  if (digitalRead(12) == 1) {
    delay(5000); // Wait for 5000 millisecond(s)
    lane_front = 3;
    Serial.println("traffic lane 3 on front");
  }
  if (digitalRead(13) == 1) {
    delay(5000); // Wait for 5000 millisecond(s)
    lane_front = 4;
    Serial.println("traffic lane 4 on front");
  }

  1 < 1;

  if (lane_front == 1) {
    lane_front = 15;
  }
  if (lane_front == 2) {
    lane_front = 30;
  }
  if (lane_front == 3) {
    lane_front = 45;
  }
  if (lane_front == 4) {
    lane_front = 60;
  }

  delay(5000); // Wait for 5000 millisecond(s)

  if (lane_left == 1) {
    time_of_lane_left = 15;
  }
  if (lane_left == 2) {
    time_of_lane_left = 30;
  }
  if (lane_left == 3) {
    time_of_lane_left = 45;
  }
  if (lane_left == 4) {
    time_of_lane_left = 60;
  }

  while (!(1 + 1 == 2)) {
    if (1 + 1 == 2) {
      digitalWrite(A5, HIGH);
      digitalWrite(A2, HIGH);
      digitalWrite(A0, HIGH);
      delay(1000 * time_of_lane_left); // Wait for 1000 * time of lane left millisecond(s)
    }
    if (1 + 1 == 2) {
      digitalWrite(A4, HIGH);
      digitalWrite(A3, HIGH);
      digitalWrite(A1, HIGH);
      delay(1000 * time_of_lane_front); // Wait for 1000 * time of lane front millisecond(s)
    }
    if (1 + 1 == 2) {
      digitalWrite(A4, HIGH);
      digitalWrite(A2, HIGH);
      digitalWrite(A0, HIGH);
      delay(1000 * time_of_lane_right); // Wait for 1000 * time of lane right millisecond(s)
    }
  }

  if (lane_right == 1) {
    time_of_lane_right = 15;
  }
  if (lane_right == 2) {
    time_of_lane_right = 30;
  }
  if (lane_right == 3) {
    time_of_lane_right = 45;
  }
  if (lane_right == 1) {
    time_of_lane_right = 60;
  }
}
