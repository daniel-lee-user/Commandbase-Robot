/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Command.h>
#include <SmartDashboard/SendableChooser.h>
#include <TimedRobot.h>
#include "Subsystems/Winch.h"


#include "Commands/ExampleCommand.h"
#include "Commands/MyAutoCommand.h"
#include "OI.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Subsystems/TankDriveSubsystem.h" //includes tank drive subsystem

class Robot : public frc::TimedRobot {
public:
	static ExampleSubsystem* m_subsystem;
	static OI* m_oi;
	static Winch* winch_subsystem;
	static TankDriveSubsystem* t_subsystem; //creates subsystem object

	void RobotInit() override;
	void DisabledInit() override;
	void DisabledPeriodic() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;

private:
	// Have it null by default so that if testing teleop it
	// doesn't have undefined behavior and potentially crash.
	frc::Command* m_autonomousCommand = nullptr;
	ExampleCommand m_defaultAuto;
	MyAutoCommand m_myAuto;
	frc::SendableChooser<frc::Command*> m_chooser;
};
