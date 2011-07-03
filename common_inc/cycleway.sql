select way,highway,horse,foot,bicycle from &prefix;_line 
			where highway in ('bridleway','footway','cycleway','path') 
			order by z_order
