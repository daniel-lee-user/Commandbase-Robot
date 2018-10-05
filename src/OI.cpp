/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>

OI::OI(): rightMotorStick(new Joystick(0)), leftMotorStick(new Joystick(1)) {
	// Process operator interface input here.
}

Joystick* OI::getRightMotorStick() {
	return rightMotorStick;
}

Joystick* OI::getLeftMotorStick() {
	return leftMotorStick;
}

