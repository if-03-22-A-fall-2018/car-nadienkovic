/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: 2AHIF
* ---------------------------------------------------------
* Exercise Number: 08
* Title:			car.cpp
* Author:			N. BAJIM
* Due Date:		Nov. 20 2018
* ----------------------------------------------------------
*/
#include "car.h"
#include <stdlib.h>

#define NUMBER_OF_CARS 6

struct CarData{
  enum CarType type;
  int max_speed;
  double fill_level;
  double acceleration_rate;
  int speed;
  double lowest_acceleration_rate;
  double highest_acceleration_rate;
};

struct CarImplementation{
  enum Color color;
  struct CarData car_data;
  bool is_rented;
};

struct CarData aixam={AIXAM,45,16.0,0.0,0,-8.0,1.0};
struct CarData fiat_multipla={FIAT_MULTIPLA,170,65.0,0.0,0,-8.0,2.26};
struct CarData jeep={JEEP,196,80.0,0.0,0,-8.0,3.14};

struct CarImplementation aixam1={RED,aixam,false};
struct CarImplementation fiat_multipla1={GREEN,fiat_multipla,false};
struct CarImplementation fiat_multipla2={BLUE,fiat_multipla,false};
struct CarImplementation fiat_multipla3={ORANGE,fiat_multipla,false};
struct CarImplementation jeep1={SILVER,jeep,false};
struct CarImplementation jeep2={BLACK,jeep,false};

Car cars[]={&aixam1,&fiat_multipla1,&fiat_multipla2,&fiat_multipla3,&jeep1,&jeep2};

Car get_car(enum CarType type)
{
  for (int i = 0; i < NUMBER_OF_CARS; i++) {
    if((cars[i]->car_data.type==type)&&(!cars[i]->is_rented))
    {
        cars[i]->is_rented = true;
        return cars[i];
    }
  }
  return 0;
}
CarType get_type(Car car)
{
  return car->car_data.type;
}
Color get_color(Car car)
{
  return car->color;
}
double get_fill_level(Car car)
{
  return car->car_data.fill_level;
}
double get_acceleration_rate(Car car)
{
  return car->car_data.acceleration_rate;
}
int get_speed(Car car)
{
  return car->car_data.speed;
}
void init(){
  for (int i = 0; i < NUMBER_OF_CARS; i++) {
    cars[i]->is_rented = false;
    cars[i]->car_data.speed= 0;
    cars[i]->car_data.acceleration_rate= 0;
  }
}
void set_acceleration_rate(Car car, double acceleration_rate){
    if(acceleration_rate>=car->car_data.lowest_acceleration_rate && acceleration_rate<=car->car_data.highest_acceleration_rate)
    {
        car->car_data.acceleration_rate=acceleration_rate;
    }
    else if(acceleration_rate<car->car_data.lowest_acceleration_rate)
    {
        car->car_data.acceleration_rate=car->car_data.lowest_acceleration_rate;
    }
    else{
        car->car_data.acceleration_rate=car->car_data.highest_acceleration_rate;
    }
}
void accelerate(Car car){
    if(car->car_data.speed+car->car_data.acceleration_rate<=car->car_data.max_speed)
    {
        car->car_data.speed+=car->car_data.acceleration_rate*4;
    }
    else{
        car->car_data.speed=car->car_data.max_speed;
    }
}
