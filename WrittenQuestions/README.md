# Written Questions
Please answer all the questions below by writing directly in readme file under the question. And commit your modifications.


## 1 - Give a use case example for the dot product and the cross product between two vectors.
```cpp
string todo = "Write answer here";
```


## 2 - Explain what is the problem in this code snippet !
```cpp
    const int& return_eight()
    {
        int a = 8;
        return a;
    }

    string todo = "Write answer here";
```

## 3 - Explain what is the problem in this code snippet !
```cpp
    class A
    {
    public:
        A(){}
        ~A(){}
    };

    class B : public A
    {
    protected:
    int* _array;

    public:
        B(){
            _array = new int[5];
        }

        ~B(){
            delete [] _array;
        }
    };

    main()
    {
        A* a = new B();
        delete a;
    }

    string todo = "Write answer here";

```

 
## 4
Given a 3D geometry at (0,0,0) of his frame of reference, and 3 transform.
```
Rot -> Rotation
Tr -> Translation
Sc -> Scaling
```
Assuming that the operators are properly implemented, explain the difference between the results of the following multiplications (if assignation would be executed in a language like C# or C++):

```cpp
Mat A = Sc * Tr * Rot;
Mat B = Tr * Rot * Sc;
Mat C = Rot * Tr * Sc;
```

string todo = "Write answer here";


## 5
Given 2 arbitrary 3D vectors, how can I know if the angle between them is exactly 90deg?

string todo = "Write answer here";

## 6
Your function receives a list of 3D points and also a single 3D point, you need to keep only points within 0.1m of that single 3D point.
What is the most efficient way to do it knowing that doing a square root is very costy and you might receive a list of 1 million points ?

string todo = "Write answer here";

## 7
How can you know that a point is located on a plane (not under, not over)?

string todo = "Write answer here";

## 8
In Scrum, what would be your criteria to put a User Story to Done?

string todo = "Write answer here";
