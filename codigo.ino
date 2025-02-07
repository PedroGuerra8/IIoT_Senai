// variaveis
bool button = 0;
bool sirene = 0;
bool sensor_bar = 1;
bool sensor_window1 = 1;
bool sensor_window2 = 1;
bool sensor_living_room = 0;
bool sensor_kitchen = 0;
bool sensor_garden = 0;
bool sensor_runner = 0;

// config
void setup()
{
    pinMode(BUTTON_PIN, INPUT_PULLUP);
    pinMode(LED_PIN, OUTPUT);
}
// lógica
void loop()
{
  if (button == 1_){
    sensor_bar == 1 || sensor_window1 == 0 || sensor_window2 == 0 || sensor_living_room == 1 || sensor_kitchen == 1 || sensor_garden == 1 || sensor_runner == 1, sirene == 1;
  }
  else{
    sirene == 0;
  }
}