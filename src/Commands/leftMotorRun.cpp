/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "leftMotorRun.h"
#include "../Robot.h"

leftMotorRun::leftMotorRun(): Command("runFor5Seconds") {
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::t_subsystem);

}

// Called just before this Command runs the first time
void leftMotorRun::Initialize() {
	SetTimeout(5); //set five second timeout
}

// Called repeatedly when this Command is scheduled to run
void leftMotorRun::Execute() {
	Robot::t_subsystem->tankDrive(1,0);
}

// Make this return true when this Command no longer needs to run execute()
bool leftMotorRun::IsFinished() {
    return IsTimedOut();
}

// Called once after isFinished returns true
void leftMotorRun::End() {
    Robot::t_subsystem->tankDrive(0,0);  // stop moving
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void leftMotorRun::Interrupted() {
	End();
}
