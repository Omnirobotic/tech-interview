# Written Questions
**Please answer the questions below by writing directly in this README file under each question. When you're done, commit and push your modifications in a branch of the name of you choosing.**


## ------------------- Development -----------------------------------------------------------------------------------------
**No matter the position you're applying for, please answer the following questions.**


### Question 1
Explain what is the problem in this code snippet!
```cpp
    const int& return_eight()
    {
        int a = 8;
        return a;
    }
```

**Answser**:


### Question 2
Explain what is the problem in this code snippet!
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

**Answser**:


### Question 3
In Scrum, what would be your criteria to put a User Story to Done?

**Answser**:

### Question 4
Explain what this code is for

void do_something(int* array, int n)
{
	for(int x=0; x<n; x++)
	{
	   for(int y=0; y<n-1; y++)
	   {
		   if(array[y]>array[y+1])
		   {
			   int temp = array[y+1];
			   array[y+1] = array[y];
			   array[y] = temp;
		   }
	   }
	}
}
**Answser**:


### Question 5
in which context "smarts pointer" are useful?

**Answser**:


### Question 6
Give one specific characteristics for each std container

std::vector :
std::list   :
std::deque  :
std::map    :


## ------------------- 3D Mathematics -----------------------------------------------------------------------------------------
**If you're familiar with 3D mathematics and/or you're applying for a 3D Developer position, please answer the following questions.**


### Question 1
Give a use case example for the dot product and the cross product between two vectors.

**Answser**:

 
### Question 2
Given a 3D geometry at (0,0,0) of his frame of reference, and 3 transform.
```
Rot -> Rotation
Tr -> Translation
Sc -> Scaling
```
Assuming that the operators are properly implemented, explain the difference between the results of the following multiplications:

```cpp
Mat A = Sc * Tr * Rot;
Mat B = Tr * Rot * Sc;
```

**Answser**:


### Question 3
Given 2 arbitrary 3D vectors, how can I know if the angle between them is exactly 90deg?

**Answser**:


### Question 4
You have a list of 1000000 3d points "point_list" and a specific point "p1". You want to calculate the number of points near this points (nearer than 0.01)
could you improve the speed of this code without compromizing the result.

float near_distance = 0.01f
int count = 0
for( auto p2 : point_list)
{
	if(sqrtf((p1.X - p2.X)*(p1.X - p2.X) + (p1.Y - p2.Y)*(p1.Y - p2.Y) + (p1.Z - p2.Z)*(p1.Z - p2.Z)) <= distance))
	{
		count++;
	}
}

**Answser**:


### Question 5
How can you know that a point is located on a plane (not under, not over)?

**Answser**:





## ------------------- Linux -----------------------------------------------------------------------------------------
**If you're familiar with Linux and/or you're applying for a DevOps position, please answer the following questions.**


### Question 1
Imagine you need to modify a file on a remote Linux server, how would you proceed? Please describe your procedure step by step.

**Answser**:


### Question 2
If you were asked to host a full stack application (e.g. HTML/JavaScript frontend + Python backend) on the cloud, how would you do that? Please describe the infrastructure you would put in place (high level, no need to go in details).

**Answser**:


### Question 3
Imagine you have a cluster of 3 servers on the same local network. How would you go about load balancing HTTP traffic between these servers?

**Answser**:


### Question 4
In a multi-site deployment, where you have servers in different locations in the world, how would you securely connect them together so they all appear to be in the same local network?

**Answser**:


### Question 5
If you had to deploy and configure 1000 servers in the cloud, how would you do that?

**Answser**:


### Question 6
Describe in your own words what continuous integration/continuous delivery (CI/CD) is.

**Answser**:


### Question 7
If you had to put a CI/CD system in place, what would be your tool of choice?

**Answser**:


### Question 8
In 1 short sentence, what is DevOps?

**Answser**:


### Question 9
What is the difference between containerization and virtualization?

**Answser**:

