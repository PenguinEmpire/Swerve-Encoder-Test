/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>

#include <frc/smartDashboard/SmartDashboard.h>
#include <frc/AnalogInput.h>
#include <frc/AnalogEncoder.h>
#include <frc/Joystick.h>
#include <rev/CANSparkMax.h>
#include <rev/SparkMax.h>

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;
  frc::AnalogInput analogInput0{0};
  frc::AnalogInput analogInput1{1};
  frc::AnalogInput analogInput2{2};
  frc::AnalogInput analogInput3{3};

  frc::AnalogEncoder analogEncoder0{analogInput0};
  frc::AnalogEncoder analogEncoder1{analogInput1};
  frc::AnalogEncoder analogEncoder2{analogInput2};
  frc::AnalogEncoder analogEncoder3{analogInput3};
  
  frc::Joystick joystick0{0};
  frc::Joystick joystick1{1};
  frc::Joystick joystick2{2};
  frc::Joystick joystick3{3};

  rev::CANSparkMax driveMotor1{2, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax driveMotor2{4, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax driveMotor3{6, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax driveMotor4{8, rev::CANSparkMax::MotorType::kBrushless};

  rev::SparkMax turnMotor1{1};
  rev::SparkMax turnMotor2{3};
  rev::SparkMax turnMotor3{5};
  rev::SparkMax turnMotor4{7};

   

 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;

};
