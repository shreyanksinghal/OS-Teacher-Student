# OS-Teacher-Student

Q.No.1:
a) There are 3 student processes and 1 teacher process. Students are supposed to do their assignments and they need 3 things for that-pen, paper and question paper. The teacher has an infinite supply of all the three things. One student has pen, another has paper and another has question paper. The teacher places two things on a shared table and the student having the third complementary thing makes the assignment and tells the teacher on completion. The teacher then places another two things out of the three and again the student having the third thing makes the assignment and tells the teacher on completion. This cycle continues. WAP to synchronise the teacher and the students.

Answer : 

Firstly, I have made an array of resources where 0,1,2 represents pen,paper and question paper respectively. I have used rand() function so that teacher can put any 2 items randomly and of course, to make program more robust. To avoid printing any condition twice, I have used flag array . to exit, I have coded a condition when all elements of flag array are 1,then it will exit. 

Console:
Teacher Placed :-

1st Item = Question-Paper
2nd Item = Paper

User having Pen completed the work.

Teacher Placed :-

1st Item = Paper
2nd Item = Pen

Student having Question-Paper completed the work.

Teacher Placed :-

1st Item = Question-Paper
2nd Item = Pen

User having Paper completed the work.



b) Two types of people can enter into a library- students and teachers. After entering the library, the visitor searches for the required books and gets them. In order to get them issued, he goes to the single CPU which is there to process the issuing of books. Two types of queues are there at the counter-one for students and one for teachers. A student goes and stands at the tail of the queue for students and similarly the teacher goes and stands at the tail of the queue for teachers (FIFO). If a student is being serviced and a teacher arrives at the counter, he would be the next person to get service (PRIORITY-non preemptive). If two teachers arrive at the same time, they will stand in their queue to get service (FIFO). WAP to ensure that the system works in a non-chaotic manner.  If a teacher is being served and during the period when he is being served, another teacher comes, then that teacher would get the service next. This process might continue leading to increase in waiting time of students. Ensure in your program that the waiting time of students is minimized.

Answer : 

Firstly ,I came to know number of faculty and students who are there to issue book. Then I asked user to enter their arrival time and store it into arrays. If there are only students ,then we have different conditions . If there are only faculty ,then we have different conditions .If we have both students and faculties ,we have different condition as clearly mentioned in the program.

Console:
Enter number of students : 4
Enter Number of Teacher : 4

Enter arrival time of Student 1 = 0
Enter arrival time of Student 2 = 3
Enter arrival time of Student 3 = 4
Enter arrival time of Student 4 = 8
Enter arrival time of Faculty 1 = 0
Enter arrival time of Faculty 2 = 2
Enter arrival time of Faculty 3 = 3
Enter arrival time of Faculty 4 = 6

Faculty 1 will issue the book
Student 1 will issue the book
Faculty 2 will issue the book
Faculty 3 will issue the book
Student 2 will issue the book
Student 3 will issue the book
Faculty 4 will issue the book
Student 4 will issue the book

