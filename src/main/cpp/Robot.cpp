/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"

#include <iostream>

#include <frc/smartdashboard/SmartDashboard.h>

void Robot::RobotInit() {
  m_chooser.SetDefaultOption(kAutoNameDefault, kAutoNameDefault);
  m_chooser.AddOption(kAutoNameCustom, kAutoNameCustom);
  frc::SmartDashboard::PutData("Auto Modes", &m_chooser);
}

/**
 * This function is called every robot packet, no matter the mode. Use
 * this for items like diagnostics that you want ran during disabled,
 * autonomous, teleoperated and test.
 *
 * <p> This runs after the mode specific periodic functions, but before
 * LiveWindow and SmartDashboard integrated updating.
 */
void Robot::RobotPeriodic() {
  frc::SmartDashboard::PutNumber("AnalogInput 0 GetValue", analogInput0.GetValue());
  frc::SmartDashboard::PutNumber("AnalogInput 0 GetAverageValue", analogInput0.GetAverageValue());
  frc::SmartDashboard::PutNumber("Analog Input 0 GetVoltage", analogInput0.GetAverageVoltage());
  frc::SmartDashboard::PutNumber("Analog Input 0 ", analogInput0.GetOffset());
  frc::SmartDashboard::PutNumber("AnalogInput0 GetAccumulatorValue",analogInput0.GetAccumulatorValue() );
  frc::SmartDashboard::PutNumber("AnalogInput 0 GetAccumulatorCount", analogInput0.GetAccumulatorCount());
  frc::SmartDashboard::PutNumber("AnalogInput 0 PIDGet", analogInput0.PIDGet() );
  frc::SmartDashboard::PutNumber("AnalogInput 0 GetSampleRate", analogInput0.GetSampleRate());

  frc::SmartDashboard::PutNumber("AnalogInput 1 GetValue", analogInput1.GetValue());
  frc::SmartDashboard::PutNumber("AnalogInput 1 GetAverageValue", analogInput1.GetAverageValue());
  frc::SmartDashboard::PutNumber("Analog Input 1 GetVoltage", analogInput1.GetAverageVoltage());
  frc::SmartDashboard::PutNumber("Analog Input 1 ", analogInput1.GetOffset());
  frc::SmartDashboard::PutNumber("AnalogInput1 GetAccumulatorValue",analogInput1.GetAccumulatorValue() );
  frc::SmartDashboard::PutNumber("AnalogInput 1 GetAccumulatorCount", analogInput1.GetAccumulatorCount());
  frc::SmartDashboard::PutNumber("AnalogInput 1 PIDGet", analogInput1.PIDGet() );
  frc::SmartDashboard::PutNumber("AnalogInput 1 GetSampleRate", analogInput1.GetSampleRate());

  frc::SmartDashboard::PutNumber("AnalogInput 2 GetValue", analogInput2.GetValue());
  frc::SmartDashboard::PutNumber("AnalogInput 2 GetAverageValue", analogInput2.GetAverageValue());
  frc::SmartDashboard::PutNumber("Analog Input 2 GetVoltage", analogInput2.GetAverageVoltage());
  frc::SmartDashboard::PutNumber("Analog Input 2 ", analogInput2.GetOffset());
  frc::SmartDashboard::PutNumber("AnalogInput2 GetAccumulatorValue",analogInput2.GetAccumulatorValue() );
  frc::SmartDashboard::PutNumber("AnalogInput 2 GetAccumulatorCount", analogInput2.GetAccumulatorCount());
  frc::SmartDashboard::PutNumber("AnalogInput 2 PIDGet", analogInput2.PIDGet() );
  frc::SmartDashboard::PutNumber("AnalogInput 2 GetSampleRate", analogInput2.GetSampleRate());

  frc::SmartDashboard::PutNumber("AnalogInput 3 GetValue", analogInput3.GetValue());
  frc::SmartDashboard::PutNumber("AnalogInput 3 GetAverageValue", analogInput3.GetAverageValue());
  frc::SmartDashboard::PutNumber("Analog Input 3 GetVoltage", analogInput3.GetAverageVoltage());
  frc::SmartDashboard::PutNumber("Analog Input 3 ", analogInput3.GetOffset());
  frc::SmartDashboard::PutNumber("AnalogInput3 GetAccumulatorValue",analogInput3.GetAccumulatorValue() );
  frc::SmartDashboard::PutNumber("AnalogInput 3 GetAccumulatorCount", analogInput3.GetAccumulatorCount());
  frc::SmartDashboard::PutNumber("AnalogInput 3 PIDGet", analogInput3.PIDGet() );
  frc::SmartDashboard::PutNumber("AnalogInput 3 GetSampleRate", analogInput3.GetSampleRate());
  
  
  
  
  


  //analog encoder commands for encoder 0
  frc::SmartDashboard::PutNumber("AnalogEncoder0 Get", analogEncoder0.Get().to<double>());
  frc::SmartDashboard::PutNumber("AnalogEncoder0 GetPositionOffset", analogEncoder0.GetPositionOffset());
  frc::SmartDashboard::PutNumber("AnalogEncoder0 GetDistancePerRotation", analogEncoder0.GetDistancePerRotation());
  frc::SmartDashboard::PutNumber("AnalogEncoder0 GetDistance", analogEncoder0.GetDistance());

//analog encoder data for encoder 1
  frc::SmartDashboard::PutNumber("AnalogEncoder1 Get", analogEncoder1.Get().to<double>());
  frc::SmartDashboard::PutNumber("AnalogEncoder1 GetPositionOffset", analogEncoder1.GetPositionOffset());
  frc::SmartDashboard::PutNumber("AnalogEncoder1 GetDistancePerRotation", analogEncoder1.GetDistancePerRotation());
  frc::SmartDashboard::PutNumber("AnalogEncoder1 GetDistance", analogEncoder1.GetDistance());

  //analog encoder data for encoder 2
  frc::SmartDashboard::PutNumber("AnalogEncoder2 Get", analogEncoder2.Get().to<double>());
  frc::SmartDashboard::PutNumber("AnalogEncoder2 GetPositionOffset", analogEncoder2.GetPositionOffset());
  frc::SmartDashboard::PutNumber("AnalogEncoder2 GetDistancePerRotation", analogEncoder2.GetDistancePerRotation());
  frc::SmartDashboard::PutNumber("AnalogEncoder2 GetDistance", analogEncoder2.GetDistance());
  
  //analog encoder data for encoder 3
    frc::SmartDashboard::PutNumber("AnalogEncoder3 Get", analogEncoder3.Get().to<double>());
  frc::SmartDashboard::PutNumber("AnalogEncoder3 GetPositionOffset", analogEncoder3.GetPositionOffset());
  frc::SmartDashboard::PutNumber("AnalogEncoder3 GetDistancePerRotation", analogEncoder3.GetDistancePerRotation());
  frc::SmartDashboard::PutNumber("AnalogEncoder3 GetDistance", analogEncoder3.GetDistance());




}

/**
 * This autonomous (along with the chooser code above) shows how to select
 * between different autonomous modes using the dashboard. The sendable chooser
 * code works with the Java SmartDashboard. If you prefer the LabVIEW Dashboard,
 * remove all of the chooser code and uncomment the GetString line to get the
 * auto name from the text box below the Gyro.
 *
 * You can add additional auto modes by adding additional comparisons to the
 * if-else structure below with additional strings. If using the SendableChooser
 * make sure to add them to the chooser code above as well.
 */
void Robot::AutonomousInit() {
  m_autoSelected = m_chooser.GetSelected();
  // m_autoSelected = SmartDashboard::GetString("Auto Selector",
  //     kAutoNameDefault);
  std::cout << "Auto selected: " << m_autoSelected << std::endl;

  if (m_autoSelected == kAutoNameCustom) {
    // Custom Auto goes here
  } else {
    // Default Auto goes here
  }
}

void Robot::AutonomousPeriodic() {
  if (m_autoSelected == kAutoNameCustom) {
    // Custom Auto goes here
  } else {
    // Default Auto goes here
  }
}

void Robot::TeleopInit() {


}

void Robot::TeleopPeriodic() {
  turnMotor1.Set(joystick2.GetRawAxis(0) * 0.6);
  turnMotor2.Set(joystick2.GetRawAxis(1) * 0.6);
  turnMotor3.Set(joystick2.GetRawAxis(2) * 0.6);
  turnMotor4.Set(joystick2.GetRawAxis(4) * 0.6);

  driveMotor1.Set(joystick0.GetRawAxis(0) * 0.6);
  driveMotor2.Set(joystick0.GetRawAxis(1) * 0.6);
  driveMotor3.Set(joystick1.GetRawAxis(0) * 0.6);
  driveMotor4.Set(joystick1.GetRawAxis(1) * 0.6);




}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
