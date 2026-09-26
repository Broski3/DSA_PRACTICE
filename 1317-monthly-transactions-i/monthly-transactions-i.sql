# Write your MySQL query statement below
select date_format(trans_date ,'%Y-%m') AS month ,
country,
count(*) AS trans_count,
count(
    case when state = "approved" then 1
    end
) AS approved_count,
SUM(amount) AS trans_total_amount,
SUM(
    case when state="approved" then amount 
    else 0
    end
) AS approved_total_amount
from Transactions
group by month, country 
