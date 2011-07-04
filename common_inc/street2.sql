select way,highway,aeroway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel,
	   case when bridge in ('yes','true','1') then 'yes'::text else bridge end as bridge,
	   case when name ilike ref then null else name end as name,
	   ref,char_length(ref) as length
from &prefix;_roads
where highway in ('trunk', 'trunk_link', 'primary', 'primary_link')
order by z_order

