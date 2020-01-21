#include "Robot.hpp"

using namespace std;

Robot::Robot()
{
    _serialNumber = 12345;
    _metal = copper;
    _name = "Tik-Tok";
}

Robot::Robot(int serialNumber, Metal metal, std::string name)
{
    _serialNumber = serialNumber;
    _metal = metal;
    _name = name;
}

int Robot::getSerialNumber()
{
    return _serialNumber;
}

void Robot::setSerialNumber(int serialNumber)
{
    _serialNumber = serialNumber;
}

Metal Robot::getMetal()
{
    return _metal;
}

void Robot::setMetal(Metal metal)
{
    _metal = metal;
}

std::string Robot::getName()
{
    return _name;
}

void Robot::setName(std::string name)
{
    _name = name;
}
