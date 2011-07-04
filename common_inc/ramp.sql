select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
from &prefix;_roads
where highway in ('motorway_link')
order by z_order
