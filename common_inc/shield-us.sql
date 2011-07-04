select 
  way,highway,ref,
  case when name ilike ref then null else name end as name,
  case when bridge in ('yes','true','1') then 'yes'::text else bridge end as bridge,
  char_length(regexp_replace(replace(ref,';','/'),E'^([A-Z]{1,2})\\s*([0-9]{1,3})((/)([A-Z]{1,2})\\s*([0-9]{1,3}))*',E'\\2\\4\\6')) as length,
  regexp_replace(replace(ref,';','/'),E'^([A-Z]{1,2})\\s*([0-9]{1,3})((/)([A-Z]{1,2})\\s*([0-9]{1,3}))*',E'\\2\\4\\6') as shield_name
from &prefix;_roads
where 
  highway in ('motorway', 'trunk', 'primary', 'secondary')
  and (name is not null or ref is not null)
