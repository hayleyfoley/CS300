# CS300

# What was the problem you were solving in the projects for this course?
The main problem addressed in this project was organizing and displaying course information efficiently. The system needed to read data from an input file, store it in an appropriate data structure, and allow users to retrieve and display course information interactively.
# How did you approach the problem? Consider why data structures are important to understand.
To tackle this problem, I carefully considered different data structures and their benefits. A hash table was chosen as the primary storage structure because it allows for efficient course lookups. By storing course objects using their course numbers as keys, the program could quickly access and retrieve course details.
Understanding data structures was critical to ensuring efficiency, scalability, and ease of access when handling course data.
# How did you overcome any roadblocks you encountered while going through the activities or project?
Several challenges arose during development. Initially, the program failed to locate the input file. This was resolved by verifying the working directory and explicitly specifying the file path when needed. Errors related to the Course struct were fixed by ensuring the struct was properly defined before being used and by including the necessary header files. Ensuring the courses printed in alphanumeric order required careful use of maps and iteration. Each roadblock reinforced the importance of debugging strategies, proper structuring of C++ programs, and verifying input/output operations.

# How has your work on this project expanded your approach to designing software and developing programs?
Working on this project improved my understanding of software design principles, particularly the importance of choosing the right data structure for efficiency, how to break down a problem into manageable components, such as file reading, data storage, and user interaction and the value of user-friendly design, ensuring meaningful error messages and clear prompts.

# How has your work on this project evolved the way you write programs that are maintainable, readable, and adaptable?
Through this project, I adopted best practices that make programs more maintainable, readable, and adaptable such as using descriptive variable and function names improved readability, separating concerns and implementing checks for invalid input and missing files enhanced robustness.
