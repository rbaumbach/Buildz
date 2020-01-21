#include "Turtle.hpp"

using namespace std;

Turtle::Turtle()
{
    _name = "Leonardo";
    _species = "Clemmys guttata";
    _color = spotted;
}

Turtle::Turtle(std::string name, std::string species, Color color)
{
    _name = name;
    _species = species;
    _color = color;
}

std::string Turtle::getName()
{
    return _name;
}

void Turtle::setName(std::string name)
{
    _name = name;
}

std::string Turtle::getSpecies()
{
    return _species;
}

void Turtle::setSpecies(std::string species)
{
    _species = species;
}

Color Turtle::getColor()
{
    return _color;
}

void Turtle::setColor(Color color)
{
    _color = color;
}
