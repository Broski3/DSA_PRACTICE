# Write your MySQL query statement below
select contest_id,
ROUND(count(r.user_id)/(select count(*) from users) *100,2) AS percentage
from Register AS r
Group by contest_id 
order by percentage DESC,
r.contest_id ASC;