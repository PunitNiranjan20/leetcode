# Write your MySQL query statement below
select e1.name as employee from employee e join employee e1 where e.id = e1.managerId and e.salary < e1.salary;