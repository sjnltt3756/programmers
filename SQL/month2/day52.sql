SELECT TRUNCATE(price, -4) as PRICE_GROUP, count(PRODUCT_ID) as PRODUCTS
from PRODUCT
group by 1
order by 1