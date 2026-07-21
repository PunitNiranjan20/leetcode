# Write your MySQL query statement below
select c.customer_id, count(c.customer_id) as count_no_trans from visits c left join transactions t on t.visit_id = c.visit_id
where t.transaction_id is null group by c.customer_id ;