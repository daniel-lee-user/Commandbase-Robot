/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <Commands/TankDrive.h>
#include "../Robot.h"

TankDrive::TankDrive() {
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::t_subsystem);
}

// Called just before this Command runs the first time
void TankDrive::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TankDrive::Execute() {
	Robot::t_subsystem->tankDrive(Robot::m_oi->getLeftMotorStick()->GetY(), Robot::m_oi->getRightMotorStick()->GetY()); //get input from joystick continuosly
}

// Make this return true when this Command no longer needs to run execute()
bool TankDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TankDrive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TankDrive::Interrupted() {

}
