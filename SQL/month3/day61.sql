SELECT
    car_id,
    ROUND(AVG(DATEDIFF(end_date, start_date)+1),1) average_duration
    -- DATEDIFF(end_date, start_date): end_date - start_date 를 계산해 대여 기간을 구함.
    -- DATEDIFF(end_date, start_date) + 1: 대여 첫날도 포함하려고 +1 함.
FROM
    car_rental_company_rental_history
GROUP BY
    1
HAVING
    average_duration >= 7
ORDER BY
    2 DESC,
    1 DESC;