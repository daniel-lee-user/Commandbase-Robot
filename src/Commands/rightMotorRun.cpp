/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "rightMotorRun.h"
#include "../Robot.h"

rightMotorRun::rightMotorRun() {
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::t_subsystem);
}

// Called just before this Command runs the first time
void rightMotorRun::Initialize() {
	SetTimeout(5); //set five second timeout
}

// Called repeatedly when this Command is scheduled to run
void rightMotorRun::Execute() {
	Robot::t_subsystem->tankDrive(1,0);
}

// Make this return true when this Command no longer needs to run execute()
bool rightMotorRun::IsFinished() {
    return IsTimedOut();
}

// Called once after isFinished returns true
void rightMotorRun::End() {
    Robot::t_subsystem->tankDrive(0,0);  // stop moving
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void rightMotorRun::Interrupted() {
	End();
}
