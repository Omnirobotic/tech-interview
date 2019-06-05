using System;
using System.Collections.Generic;

namespace Q1
{
    public static class Q1Functions
    {
        public static List<Vect3> Simplify(this List<Vect3> polyline, double maxDeviation)
        {
            // TODO - ADD YOUR IMPLEMENTATION HERE
            throw new NotImplementedException();
        }

        /// <summary>
        /// Compute the shortest distance from a point and a segment
        /// </summary>
        /// <param name="p1">First point of the segment</param>
        /// <param name="p2">Second point of the segment</param>
        /// <param name="refPoint"></param>
        /// <returns></returns>
        public static double ShortestDistanceFromSegment(Vect3 p1, Vect3 p2, Vect3 refPoint)
        {
            var s1 = new Vect3(p1, refPoint);
            var s2 = new Vect3(p1, p2);

            if (s2.IsLengthZero())
                return refPoint.Dist2(p1);

            var scalar = s2.Dot(s1) / s2.Length();
            if (scalar <= 0)
                return refPoint.Dist2(p1);

            if (scalar >= s2.Length())
                return refPoint.Dist2(p2);

            var s2Dir = s2.GetNorm();
            return refPoint.Dist2(p1 + s2Dir * scalar);
        }
    }
}
