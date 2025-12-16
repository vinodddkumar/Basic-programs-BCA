CREATE TABLE Student (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    marks INT
);

-- Insert student records
INSERT INTO student VALUES (1, 'Ravi', 'BCA', 78);
INSERT INTO student VALUES (2, 'Anita', 'BCA', 85);
INSERT INTO student VALUES (3, 'Kiran', 'BCA', 62);

-- Display all students
SELECT * FROM student;

-- Students scoring more than 70
SELECT name, marks FROM student WHERE marks > 70;

-- Update marks of a student
UPDATE student SET marks = 90 WHERE student_id = 1;

-- Delete a student record
DELETE FROM student WHERE student_id = 3;

-- Remove table
DROP TABLE student;