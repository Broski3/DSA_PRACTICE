# Write your MySQL query statement below
SELECT unique_id,name
fROM Employees
LEFT JOIN EmployeeUNI
ON EmployeeUNI.id=Employees.id;