select way,railway,
	   case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
from &prefix;_line
where railway is not null
order by z_order
