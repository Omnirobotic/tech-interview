using System.Collections.Generic;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace Q1.Tests
{
    [TestClass]
    public class Q1Tests
    {
        [TestMethod]
        public void SimplifyStraitLine()
        {
            var p1 = new Vect3();
            var p2 = new Vect3(1, 1, 0);
            var p3 = new Vect3(2,2, 0);
            var p4 = new Vect3(3, 3, 0);

            var pointList = new List<Vect3>()
            {
                p1, p2, p3, p4
            };

            var res1 = pointList.Simplify(1);
            var res2 = pointList.Simplify(0.5);
            var res3 = pointList.Simplify(0.25);
            var res4 = pointList.Simplify(0.1);
            var res5 = pointList.Simplify(0.05);

            var expectedCount = 2;
            Assert.AreEqual(expectedCount, res1.Count);
            Assert.AreEqual(expectedCount, res2.Count);
            Assert.AreEqual(expectedCount, res3.Count);
            Assert.AreEqual(expectedCount, res4.Count);
            Assert.AreEqual(expectedCount, res5.Count);
        }

        [TestMethod]
        public void SimplifyNoisyPolyline()
        {
            var polyline = CreateNoisyPolyline();

            var res1 = polyline.Simplify(20).Count;
            var res2 = polyline.Simplify(11).Count;
            var res3 = polyline.Simplify(10).Count;
            var res4 = polyline.Simplify(0.5).Count;
            var res5 = polyline.Simplify(0.25).Count;
            var res6 = polyline.Simplify(0.15).Count;
            var res7 = polyline.Simplify(0.05).Count;

            Assert.AreEqual(2, res1);
            Assert.AreEqual(2, res2);
            Assert.AreEqual(53, res3);
            Assert.AreEqual(103, res4);
            Assert.AreEqual(153, res5);
            Assert.AreEqual(198, res6);
            Assert.AreEqual(200, res7);
        }

        private List<Vect3> CreateNoisyPolyline()
        {
            var polyline = new List<Vect3>();
            double x = 0, y = 1, z = 0;
            uint count = 0;
            for (var i = 0; i < 200; ++i)
            {
                count++;
                polyline.Add(new Vect3(x, y, z));
                
                if (count <= 50)
                {
                    if (count == 0)
                        y = 1;

                    x = x + 1;
                    y = -y;
                }
                else if (count > 50 && count <= 100)
                {
                    if (count == 51)
                        y = 10;

                    x = x + 10;
                    y = -y;
                }
                else if (count > 100 && count <= 150)
                {
                    if (count == 101)
                        y = 0.25;

                    x = x + 10;
                    y = -y;
                }
                else if (count > 150 && count <= 200)
                {
                    if (count == 151)
                        y = 0.1;

                    x = x + 10;
                    y = -y;
                }
            }

            return polyline;
        }
    }
}
