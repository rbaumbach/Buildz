#ifndef Robot_hpp
#define Robot_hpp

#include <stdio.h>
#include <string>

enum Metal { chrome, aluminium, steel, copper };

class Robot
{
private:
    int _serialNumber;
    Metal _metal;
    std::string _name;
    
public:
    Robot();
    Robot(int serialNumber, Metal metal, std::string name);
    
    int getSerialNumber();
    void setSerialNumber(int serialNumber);
    
    Metal getMetal();
    void setMetal(Metal metal);
    
    std::string getName();
    void setName(std::string name);
};

#endif /* Robot_hpp */
