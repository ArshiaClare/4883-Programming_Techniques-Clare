### 10060 - A hole to catch a man
#### Arshia Clare

#### Project Description:
Trying to cover up manhole with different polygon sheets of varies thicknesses. The input gives us N, the number of polygonal steel sheets, T_i, thickness for i sheets. X_i, Y_i coordinates of the corner points, R for manhole cover radius, and T for manhole cover thickness.
The input ends with N=0

|   #   | File                       | Description                                                |
| :---: | -------------------------- | ---------------------------------------------------------- |
|   1   | https://github.com/ArshiaClare/4883-Programming_Techniques-Clare/blob/master/Assignments/A06/10060/10060.pdf | pdf|     

#### Process
Using the determinant matrix given in page 285 (https://cs.msutexas.edu/~griffin/cp3.pdf) 
![10060](https://user-images.githubusercontent.com/35582387/96746974-5efeb780-138d-11eb-863d-e94260083339.PNG)
This will give you A_i (ignore the sign), then multiply A_i by the T_i.
You have to add all T_i*A-i together. 
Using the given thickness, T, and radius, R. Find S = (πR^2)*T. 
(Sum of T_i*A-i)/S will give you the approximate number of manholes covered with the sheets.
