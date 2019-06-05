using System;

namespace Q1
{
    public struct Vect3
    {
        public double x;
        public double y;
        public double z;

        public Vect3(double _x, double _y, double _z)
        {
            x = _x;
            y = _y;
            z = _z;
        }

        public Vect3(Vect3 p1, Vect3 p2)
        {
            x = p2.x - p1.x;
            y = p2.y - p1.y;
            z = p2.z - p1.z;
        }

        public bool IsLengthZero()
        {
            return (Math.Abs(x) < Double.Epsilon) && (Math.Abs(y) < Double.Epsilon) && (Math.Abs(z) < Double.Epsilon);
        }

        public double Dist2(Vect3 p2)
        {
            return (p2.x - x) * (p2.x - x) + (p2.y - y) * (p2.y - y) + (p2.z - z) * (p2.z - z);
        }

        public double Length()
        {
            return System.Math.Sqrt(x * x + y * y + z * z);
        }

        public double Dot(Vect3 v)
        {
            return x * v.x + y * v.y + z * v.z;
        }

        public Vect3 GetNorm()
        {            
            var length = Length();
            return System.Math.Abs(length) < double.Epsilon ? new Vect3() : new Vect3 { x = x / length, y = y / length, z = z / length };
        }

        public static Vect3 operator +(Vect3 v0, Vect3 v1)
        {
            return new Vect3(v0.x + v1.x, v0.y + v1.y, v0.z + v1.z);
        }

        public static Vect3 operator *(Vect3 v0, double f)
        {
            return new Vect3(v0.x * f, v0.y * f, v0.z * f);
        }
    }
}