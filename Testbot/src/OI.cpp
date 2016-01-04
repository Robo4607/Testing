// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/Driving.h"
#include "Commands/DrivingCG.h"
#include "Commands/TestaMotor.h"
#include "Commands/TestbMotor.h"
#include "Commands/TestcMotor.h"

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	driver = new Joystick(0);
	
	cMotor = new JoystickButton(driver, 1);
	cMotor->WhileHeld(new TestcMotor());
	bMotor = new JoystickButton(driver, 2);
	bMotor->WhileHeld(new TestbMotor());
	aMotor = new JoystickButton(driver, 3);
	aMotor->WhileHeld(new TestaMotor());
     

        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

	SmartDashboard::PutData("Test aMotor", new TestaMotor());

	SmartDashboard::PutData("Test bMotor", new TestbMotor());

	SmartDashboard::PutData("Test cMotor", new TestcMotor());

        // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

Joystick* OI::getdriver() {
	return driver;
}

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
