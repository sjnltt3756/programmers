SELECT USER_ID,PRODUCT_ID
from ONLINE_SALE
group by 1,2
having count(SALES_AMOUNT) >=2
order by 1,2 desc