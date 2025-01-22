select count(id) as FISH_COUNT, month(time) as MONTH
from FISH_INFO
group by 2
order by 2