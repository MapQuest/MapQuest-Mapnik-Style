select way,highway 
from &prefix;_polygon
where highway in ('residential','unclassified','pedestrian','service','footway','living_street','track','path')
order by z_order,way_area desc
