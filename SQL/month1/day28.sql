SELECT
    HISTORY_ID,
    CAR_ID,
    date_format(START_DATE,'%Y-%m-%d') as START_DATE,
    date_format(END_DATE,'%Y-%m-%d') as END_DATE,
    CASE
        when DATEDIFF(end_date,start_date) >= 29 then '장기 대여'
        else '단기 대여'
    end as RENT_TYPE
from CAR_RENTAL_COMPANY_RENTAL_HISTORY
where  DATE_FORMAT(START_DATE, '%Y-%m') = '2022-09'
order by HISTORY_ID desc