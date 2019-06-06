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