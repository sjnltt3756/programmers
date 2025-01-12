SELECT p.PRODUCT_CODE,sum(p.PRICE*o.SALES_AMOUNT) as SALES
from product as p
join offline_sale as o
on p.product_id = o.product_id
group by 1
order by 2 desc,1 asc