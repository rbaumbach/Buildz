#ifndef Turtle_hpp
#define Turtle_hpp

#include <stdio.h>
#include <string>

enum Color { green, yellow, brown, orange, black, blue, spotted };

class Turtle
{
private:
    std::string _name;
    std::string _species;
    Color _color;
    
public:
    Turtle();
    Turtle(std::string name, std::string species, Color color);
    
    std::string getName();
    void setName(std::string name);
    
    std::string getSpecies();
    void setSpecies(std::string species);
    
    Color getColor();
    void setColor(Color color);
};

#endif /* Turtle_hpp */
