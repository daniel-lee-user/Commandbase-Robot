/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "TankDriveSubsystem.h"
#include "../RobotMap.h"
#include "ctre/Phoenix.h"

TankDriveSubsystem::TankDriveSubsystem() : Subsystem("TankDriveSubsystem"), left(new TalonSRX(kLeftMotor)), right(new TalonSRX(kRightMotor)) {

}

void TankDriveSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new TankDriveSubsystem());
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void TankDriveSubsystem::tankDrive(double leftSpeed, double rightSpeed) {
	left->Set(ControlMode::PercentOutput, leftSpeed);
	right->Set(ControlMode::PercentOutput, rightSpeed);
}
