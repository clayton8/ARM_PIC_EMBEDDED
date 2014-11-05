/* 
 * File:   messageDefs.h
 * Author: s45504
 *
 * Created on October 13, 2014, 3:51 PM
 */

#ifndef MESSAGEDEFS_H
#define	MESSAGEDEFS_H

#define START_BYTE          0XFF
#define STOP_BYTE           0XFE
#define SENSOR_BYTE         0XFD
#define MOTOR_COMMAND_BYTE  0XFC
#define MOTOR_REQUEST_BYTE  0XFB



#define SENSOR_REQUEST_LENGTH   4
#define SENSOR_RESPONSE_LENGTH 12

#define MOTOR_REQUEST_LENGTH    4
#define MOTOR_RESPONSE_LENGTH   6
#define MOTOR_COMMAND_LENGTH    6

#define SEQUENCE_NUM_POS 1;
#define COMMAND_POS      2;





#endif	/* MESSAGEDEFS_H */

