#include "car.h"
#include <stdlib.h>

struct ModelData
struct CarImplementation{
  enum CarType type;
  enum Color color;
  double fill;
  double acceleration_rate;
  int speed;
  bool is_rented;
  int max_speed;
};

struct CarImplementation aixam1 = {AIXAM, RED, 16, 0 , 0,false45};
struct CarImplementation fiat_multipla1 = {FIAT_MULTIPLA, GREEN, 65, 0 , 0,false};
struct CarImplementation fiat_multipla2 = {FIAT_MULTIPLA, BLUE, 65, 0 , 0,false};
struct CarImplementation fiat_multipla3 = {FIAT_MULTIPLA, ORANGE, 65, 0 , 0,false};
struct CarImplementation jeep1 = {JEEP, SILVER, 80, 0 , 0,false};
struct CarImplementation jeep2 = {JEEP, BLACK, 80, 0 , 0,false};

Car cars[] = {&aixam1,&fiat_multipla1, &fiat_multipla2, &fiat_multipla3, &jeep1, &jeep2};

Car get_car(enum CarType type){
  Car car = (CarImplementation*)malloc(sizeof(CarImplementation));
  car->type = type;
  return car;
}
enum CarType get_type(Car car){
  return FIAT_MULTIPLA;
}
enum Color get_color(Car car){
  return BLACK;
}
int get_speed(Car car){
  return car->speed;
}
double get_fill_level(Car car){
  return car->fill;
}
double get_acceleration_rate(Car car){
  return car->acceleration_rate;
}
void init(){

}
void accelerate(Car car){
car->speed += car->acceleration_rate;
}
void set_acceleration_rate(Car car, double acceleration_rate){
  car->acceleration_rate = acceleration_rate;
}
