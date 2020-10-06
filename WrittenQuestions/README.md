# Written Questions
**Please answer the questions below by writing directly in this README file under each question. When you're done, commit and push your modifications in a branch of the name of you choosing.**


## Development
**No matter the position you're applying for, please answer the following questions.**


### 1
Q: Explain what is the problem in this code snippet!
```cpp
    const int& return_eight()
    {
        int a = 8;
        return a;
    }
```

A:


### 2 
Q: Explain what is the problem in this code snippet!
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
```

A:


### 3
Q: In Scrum, what would be your criteria to put a User Story to Done?

A:


## 3D Mathematics
**If you're familiar with 3D mathematics and/or you're applying for a 3D Developer position, please answer the following questions.**


### 1 
Q: Give a use case example for the dot product and the cross product between two vectors.

A:

 
### 2
Q: Given a 3D geometry at (0,0,0) of his frame of reference, and 3 transform.
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

A:


### 3
Q: Given 2 arbitrary 3D vectors, how can I know if the angle between them is exactly 90deg?

A:


### 4
Q: Your function receives a list of 3D points and also a single 3D point, you need to keep only points within 0.1m of that single 3D point.
What is the most efficient way to do it knowing that doing a square root is very costy and you might receive a list of 1 million points ?

A:


### 5
Q: How can you know that a point is located on a plane (not under, not over)?

A:


## Linux
**If you're familiar with Linux and/or you're applying for a DevOps position, please answer the following questions.**


### 1
Q: Imagine you need to modify a file on a remote Linux server, how would you proceed? Please describe your procedure step by step.

A:


### 2
Q: If you were asked to host a full stack application (e.g. HTML/JavaScript frontend + Python backend) on the cloud, how would you do that? Please describe the infrastructure you would put in place (high level, no need to go in details).

A:


### 3
Q: Imagine you have a cluster of 3 servers on the same local network. How would you go about load balancing HTTP traffic between these servers?

A:


### 4
Q: In a multi-site deployment, where you have servers in different locations in the world, how would you securely connect them together so they all appear to be in the same local network?

A:


### 5
Q: If you had to deploy and configure 1000 servers in the cloud, how would you do that?

A:


### 6
Q: Describe in your own words what continuous integration/continuous delivery (CI/CD) is.

A:


### 7
Q: If you had to put a CI/CD system in place, what would be your tool of choice?

A:


### 8
Q: In 1 short sentence, what is DevOps?

A:


### 9
Q: What is the difference between containerization and virtualization?

A:

