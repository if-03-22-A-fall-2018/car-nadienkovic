/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: 22AHIF
* ---------------------------------------------------------
* Exercise Number: 8
* Title:			car.h
* Author:			N. Bajim
* Due Date:		November 20, 2018
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

enum CarType{AIXAM, FIAT_MULTIPLA, JEEP};
enum Color{RED, GREEN, BLUE, ORANGE, SILVER, BLACK};

typedef struct CarImplementation* Car;

Car get_car(enum CarType type);
enum CarType get_type(Car car);
enum Color get_color(Car car);
int get_speed(Car car);
double get_fill_level(Car car);
double get_acceleration_rate(Car car);
void init();
void accelerate(Car car);
void set_acceleration_rate(Car car, double acceleration_rate);

#endif
