You are given a course prerequisites list in the form {(a,b),(c,d)...}. 
A semester is a unit where you can take one or multiple courses. 
To take a course in a semester, you must complete all the prerequisite courses of that course. 
Find the minimum number of semesters required to complete all the courses of the curriculum.

(a,b) → course a is prerequisite to take course b.
  
Example:

Given [(1,2),(1,5),(5,2),(2,3),(2,4),(4,6),(5,6)], the answer is 5. Which means you can complete the curriculum in 5 semesters.
  
Explanation:

Semester 1: course 1
Semester 2: course 5
Semester 3: course 2
Semester 4: course 3 and 4
Semester 5: course 6
  
               1
             ↙  ↘
            2←←←←5
           ↙ ↘   ↓
          3    4   ↓
                ↘ ↓
                  6
  
