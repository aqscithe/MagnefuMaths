#pragma once
#include "Unions.h"


namespace Maths
{
	class Quaternion
	{
	private:
		vec4 m_Quat;
		vec4 m_UnitQuat;
		mat4 m_RotationMatrix;

	public:
		Quaternion(float rotationAngle, const vec3& rotationAxis);
		void SetQuaternion(const vec3& rotationAxis, float rotationAngle);
		~Quaternion();

		vec4 MultiplyQuat(const vec4& q1, const vec4& q2);

		static vec4 CreateQuatConjugate(const vec4& q1);

		vec4 quat_from_axis_angle(vec3 axis, float angle);

		mat4& UpdateRotMatrix(float rotationAngle, const vec3& rotationAxis);

		inline const mat4& GetRotMatrix() const { return m_RotationMatrix; }
		inline const vec4 GetInverseQuat() const { return { -m_UnitQuat.x, -m_UnitQuat.y, -m_UnitQuat.z, m_UnitQuat.w }; }

	private:
		void CreateQuatRotMatrix();
	};
}
