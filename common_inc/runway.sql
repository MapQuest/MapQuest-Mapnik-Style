select way,aeroway
from &prefix;_line
where aeroway in ('runway','taxiway')
order by z_order
