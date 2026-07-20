# Write your MySQL query statement below
select class as class from (select class, count(*) as count from courses group by class order by count desc)as a where count>=5;