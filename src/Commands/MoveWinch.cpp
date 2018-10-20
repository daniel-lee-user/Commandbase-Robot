/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "MoveWinch.h"
#include "../Robot.h"

MoveWinch::MoveWinch() {
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::winch_subsystem);
}

// Called just before this Command runs the first time
void MoveWinch::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void MoveWinch::Execute() {
	Robot::winch_subsystem->winchSpeed(Robot::m_oi->getWinchMotorStick()->GetY()); //get input from joystick continuosly
}

// Make this return true when this Command no longer needs to run execute()
bool MoveWinch::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void MoveWinch::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveWinch::Interrupted() {

}
