#### 11473 - Campus Roads
## Arshia Clare

### Project Description
The beautification project includes planting trees, the problem for us to solve is the spacing of these trees planted on the road. The road is described by points. They need to be spaced evenly (constant intervals). The first and last trees are planted on the first and last points. \
The input N -number of roads, K - number of points (road), T, number of trees to be planted.

### Files
|   #   | File                       | Description                                                |
| :---: | -------------------------- | ---------------------------------------------------------- |
|   1   | https://github.com/ArshiaClare/4883-Programming_Techniques-Clare/blob/master/Assignments/A06/11473/11473.pdf| pdf|     


### Process
![go the distance](https://user-images.githubusercontent.com/35582387/96756151-45fc0380-1399-11eb-81f9-ef051eca14d8.PNG)
Find the distance between each point and adding them together. \
P_1P_2 = \sqrt{(x_2 - x_1)^2 + (y_2-y_1)^2}\
P_2P_3 = \sqrt{(x_3 - x_2)^2 + (y_3-y_2)^2}\
and so on until last point.\

Divide the sum by the number of spaces between the trees so (T-1). \
If the distance between Point a and b is less than the answer
Using the distance formula, let the number found by dividing be d. Then x_1, y_1 be the first point, you can find x_2,y_2. 
Otherwise, subtract and do the process above
Continue to do so
