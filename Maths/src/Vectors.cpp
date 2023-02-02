#include "Vectors.h"

namespace Maths
{
    vec3 normalize(const vec3& v)
    {
        float mag = magnitude(v);
        if (mag == 0.f)
        {
            return { 0.f, 0.f, 0.f };
        }

        return { v.x / mag, v.y / mag, v.z / mag };
    }

    vec4 normalize(const vec4& v)
    {
        float mag = magnitude(v);
        if (mag == 0.f)
        {
            return { 0.f, 0.f, 0.f, 0.f };
        }

        return { v.x / mag, v.y / mag, v.z / mag, v.w / mag };
    }

    vec3 crossProduct(const vec3& a, const vec3& b)
    {
        return {
            a.y * b.z - b.y * a.z,
            a.z * b.x - b.z * a.x,
            a.x * b.y - b.x * a.y
        };
    }
}