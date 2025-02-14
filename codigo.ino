#define ON_BUTTON_PIN 9
#define ALARM_PIN 8
#define BAR_SENSOR_PIN 1
#define WINDOW1_SENSOR_PIN 2
#define WINDOW2_SENSOR_PIN 3 
#define HALL_SENSOR_PIN 4
#define KITCHEN_SENSOR_PIN 5
#define GARDEN_SENSOR_PIN 6
#define GARAGE_SENSOR_PIN 7

// variaveis
bool button = 0;
bool sensor_bar = 0;
bool sensor_window1 = 0;
bool sensor_window2 = 0;
bool sensor_kitchen = 0;
bool sensor_garden = 0;
bool sensor_garage = 0;
bool sensor_hall = 0;
bool alarm = 0;
 

// config
void setup()
{
    pinMode(ON_BUTTON_PIN, INPUT_PULLUP);
    pinMode(BAR_SENSOR_PIN, INPUT_PULLUP);
    pinMode(WINDOW1_SENSOR_PIN, INPUT_PULLUP);
    pinMode(WINDOW2_SENSOR_PIN, INPUT_PULLUP);
    pinMode(HALL_SENSOR_PIN, INPUT_PULLUP);
    pinMode(KITCHEN_SENSOR_PIN, INPUT_PULLUP);
    pinMode(GARAGE_SENSOR_PIN, INPUT_PULLUP);
    pinMode(GARDEN_SENSOR_PIN, INPUT_PULLUP);
    pinMode(ALARM_PIN, OUTPUT);
}
// lógica
void loop()
{
  //  I/o's:
  button = !digitalRead(ON_BUTTON_PIN);
  sensor_bar = !digitalRead(BAR_SENSOR_PIN);
  sensor_window1 = !digitalRead(WINDOW1_SENSOR_PIN);
  sensor_window2 = !digitalRead(WINDOW2_SENSOR_PIN);
  sensor_hall = !digitalRead(HALL_SENSOR_PIN);
  sensor_kitchen = !digitalRead(KITCHEN_SENSOR_PIN);
  sensor_garage = !digitalRead(GARAGE_SENSOR_PIN);
  sensor_garden = !digitalRead(GARDEN_SENSOR_PIN);
  digitalWrite(ALARM_PIN, alarm);

  if (button == true){
    if(sensor_bar == 0 || sensor_window1 == 0 || sensor_window2 == 0 || sensor_hall == 1 || sensor_kitchen == 1 || sensor_garden == 1 || sensor_hall == 1){
      alarm = 1;
    }
  }
  else{
    alarm = 0;
  }
}