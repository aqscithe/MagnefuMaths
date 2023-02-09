#pragma once

#include "Vectors.h"


struct Vertex
{
    Maths::vec3  Position;     
    Maths::vec3  Normal;
    Maths::vec4  Color;        
    Maths::vec2  TextureCoords;
    unsigned int TextureID;    
};

struct BasicVertex
{
    Maths::vec3  Position;
    Maths::vec3  Normal;
    Maths::vec4  Color;   
};
