# Write your MySQL query statement below
select query_name,
ROUND(SUM(rating/position)/COUNT(query_name),2) AS quality,
round(SUM(
            case 
                when rating<3 then 1 
                else 0
    end
)/count(query_name)*100,2) AS poor_query_percentage
from Queries
group by query_name;
