# Write your MySQL query statement below
SELECT Signups.user_id,
ROUND (COALESCE(SUM(CASE WHEN action='confirmed' THEN 1 ELSE 0 END) / NULLIF(COUNT(confirmations.user_id),0),0),2) AS confirmation_rate
FROM Signups 
LEFT JOIN Confirmations
ON signups.user_id=confirmations.user_id
GROUP BY Signups.user_id;