select count(a.id) as FISH_COUNT, b.FISH_NAME
from FISH_INFO as a join FISH_NAME_INFO as b
on a.FISH_TYPE = b.FISH_TYPE
group by 2
order by 1 desc