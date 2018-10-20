/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Winch.h"
#include "../RobotMap.h"
#include "ctre/Phoenix.h"
#include "../Commands/MoveWinch.h"


Winch::Winch() : Subsystem("WinchSubsystem"), winchMotor(new TalonSRX(kWinchPort)) {

}

void Winch::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new MoveWinch());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void Winch::winchSpeed(double motorSpeed) {
	winchMotor->SetInverted(false);
	winchMotor->Set(ControlMode::PercentOutput, motorSpeed);
}

