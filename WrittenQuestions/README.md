# Written Questions
Please answer all the questions below by writting directly in readme file under the question. And commit your modifications.


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
            array = new int[5];
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

 
## 4 - Give a use case where this function will give an unexpected result.
```cpp

void inverse_vector(const std::vector<int> &in, std::vector<int> &out)
{
    out.clear();
    for(auto value:in)
    {
        out.insert(out.begin(), value);
    }        
}

string todo = "Write answer here";

```


## 5
Given a 3D geometry at (0,0,0) of his frame of reference, and 3 transform matrices.
```
Rot -> Rotation Matrix
Tr -> Translation Matrix
Sc -> Scaling Matrix
```
Explain the difference between the results of the following multiplications (if assignation would be executed in a language like C# or C++):

```cpp
Mat A = Sc * Tr * Rot;
Mat B = Tr * Rot * Sc;
Mat C = Rot * Tr * Sc;
```

Which one would give the correct result? Why? And why the others would not.

## 6
Given 3 points `p0, p1, p2`, what would be the steps to get the area of the triangle formed by these points?