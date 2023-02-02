#include "Common.h"
#include "Vectors.h"
#include "Matrices.h"

#include <iostream>


int main()
{
	Maths::mat4 moi = Maths::identity();
	std::cout << "Identity matrix: \n" << moi << std::endl;

	Maths::vec3 translation{ -0.2f, 0.3f, -0.5f };
	moi = Maths::translate(translation);

	std::cout << "\nTranslated matrix: \n" << moi << std::endl;

	Maths::vec4 color{ 0.8f, 0.1f, 1.f, 1.f };
	std::cout << "\nColors RGBA: " << color << std::endl;

	Maths::vec4 translatedColor = moi * color;

	std::cout << "\nTranslation applied to color: \n" << translatedColor << std::endl;

	int num = 5, count = 3;
	std::cout << "Max Int: " << Maths::max(num, count) << std::endl;

	float massA = 2.21044f, massB = 2.21045f;
	std::cout << "Min float: " << Maths::min(massA, massB) << std::endl;

	float factor, start = 3.f, end = 8.f;
	{
		factor = 0.2f;
		std::cout << "\n Lerp of " << factor << " between " << start << " and " << end << ": " << Maths::lerp(start, end, factor);
	}
	
	{
		factor = 0.5f;

		Maths::vec4 pointA{ 0.2f, 1.f, 0.6f, 1.f };
		Maths::vec4 pointB{ 0.7f, 1.f, 0.2f, 1.f };

		std::cout << "\n Lerp of " << factor << " between " << pointA << " and " << pointB << ": " << Maths::lerp(pointA, pointB, factor);

	}

	Maths::vec3 one{ 1, 1, 0 };
	Maths::vec3 two{ 0, 1, 1 };
	Maths::slerp(one, two, 0.2f);
	

}