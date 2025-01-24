WITH ScoreTable AS (
select sum(g.score) as SCORE, h.EMP_NO,h.EMP_NAME,h.POSITION,h.EMAIL,
RANK() OVER (ORDER BY SUM(g.score) DESC) AS RankScore
from HR_EMPLOYEES as h join HR_GRADE as g
on h.EMP_NO = g.EMP_NO
group by 2
)
SELECT SCORE, EMP_NO, EMP_NAME, POSITION, EMAIL
FROM ScoreTable
WHERE RankScore = 1;