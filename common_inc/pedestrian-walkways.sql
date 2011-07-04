select way,highway,bicycle from &prefix;_line
			where highway in ('pedestrian','footway','track','path','steps')
			order by z_order,way_area desc
