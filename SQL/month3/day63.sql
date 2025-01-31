select concat(quarter(DIFFERENTIATION_DATE),'Q') as QUARTER, count(ID) as ECOLI_COUNT
from ECOLI_DATA
group by 1
order by 1