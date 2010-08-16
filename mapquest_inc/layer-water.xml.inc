<Style name="water_lines">
<!--river and canal-->
	<Rule>
		<Filter>[waterway]='river' or [waterway]='weir' or ([waterway]='canal' and not [disused]='yes')</Filter>
		&maxscale_zoom11;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#cce7ff</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[waterway]='river' or ([waterway]='canal' and not [disused]='yes')</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#cce7ff</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[waterway]='river' or ([waterway]='canal' and not [disused]='yes')</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#cce7ff</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
<!--Intermittant river or canal-->
	<Rule>
    	<Filter>[waterway]='derelict_canal' or ([waterway]='canal' and [disused]='yes')</Filter>
		&maxscale_zoom11;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#98c4eb</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-dasharray">2,2</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[waterway]='derelict_canal' or ([waterway]='canal' and [disused]='yes')</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#98c4eb</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-dasharray">2,2</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[waterway]='derelict_canal' or ([waterway]='canal' and [disused]='yes')</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#98c4eb</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-dasharray">2,2</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
<!--stream-->
	<Rule>
		<Filter>[waterway]='stream' or [waterway]='drain' or [waterway]='ditch'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#98c4eb</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[waterway]='stream' or [waterway]='drain' or [waterway]='ditch'</Filter>
		&maxscale_zoom16;
		<LineSymbolizer>
			<CssParameter name="stroke">#98c4eb</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<Style name="water_areas_lowzoom">
<!--glacier-->
	<Rule>
		<Filter>[natural] = 'glacier'</Filter>
		&maxscale_zoom6;
		&minscale_zoom9;
		<PolygonSymbolizer>
			<CssParameter name="fill">#ffffff</CssParameter>
		</PolygonSymbolizer>
	</Rule>
<!--pond and canal-->
	<Rule>
		<Filter>[waterway] = 'dock' or [waterway] = 'mill_pond' or [waterway]='canal'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<PolygonPatternSymbolizer file="&symbols;/water.png" type="png" width="256" height="256"/>
	</Rule>
<!--basin-->
	<Rule>
		<Filter>[landuse] = 'basin'</Filter>
		&maxscale_zoom7;
		&minscale_zoom9;
		<PolygonPatternSymbolizer file="&symbols;/water.png" type="png" width="256" height="256"/>
	</Rule>
<!--lake, reservoir, and riverbank -->
	<Rule>
		<Filter>[natural] = 'lake' or [natural] = 'water' or [landuse] = 'reservoir' or [waterway] = 'riverbank' or [landuse] = 'water'</Filter>
		&maxscale_zoom6;
		&minscale_zoom9;
		<PolygonPatternSymbolizer file="&symbols;/water.png" type="png" width="256" height="256"/>
	</Rule>

</Style>
<Style name="water_areas">
<!--glacier-->
	<Rule>
		<Filter>[natural] = 'glacier'</Filter>
		&maxscale_zoom10;
		<PolygonSymbolizer>
			<CssParameter name="fill">#ffffff</CssParameter>
		</PolygonSymbolizer>
	</Rule>
<!--pond and canal-->
	<Rule>
		<Filter>[waterway] = 'dock' or [waterway] = 'mill_pond' or [waterway]='canal'</Filter>
		&maxscale_zoom10;
		<PolygonPatternSymbolizer file="&symbols;/water.png" type="png" width="256" height="256"/>
	</Rule>
<!--basin-->
	<Rule>
		<Filter>[landuse] = 'basin'</Filter>
		&maxscale_zoom10;
		<PolygonPatternSymbolizer file="&symbols;/water.png" type="png" width="256" height="256"/>
	</Rule>
<!--lake, reservoir, and riverbank -->
	<Rule>
		<Filter>[natural] = 'lake' or [natural] = 'water' or [landuse] = 'reservoir' or [waterway] = 'riverbank' or [landuse] = 'water'</Filter>
		&maxscale_zoom10;
		<PolygonPatternSymbolizer file="&symbols;/water.png" type="png" width="256" height="256"/>
	</Rule>

</Style>
<Layer name="water_lines" status="on" srs="&osm2pgsql_projection;">
    <StyleName>water_lines</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,waterway,disused,lock,name,
      case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
      from &prefix;_line
      where waterway in ('weir','river','canal','derelict_canal','stream','drain','ditch')
        and (bridge is null or bridge not in ('yes','true','1','aqueduct'))
      order by z_order
      ) as water_lines</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="water_areas_lowzoom" status="on" srs="&osm2pgsql_projection;">
    <StyleName>water_areas_lowzoom</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,"natural",waterway,landuse,name
     from &prefix;_polygon
      where (waterway in ('dock','mill_pond','riverbank','canal')
         or landuse in ('reservoir','water','basin')
         or "natural" in ('lake','water','land','marsh','scrub','wetland','glacier'))
	and way_area > 200000
      order by z_order,way_area desc
      ) as water_areas</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="water_areas" status="on" srs="&osm2pgsql_projection;">
    <StyleName>water_areas</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,"natural",waterway,landuse,name
      from &prefix;_polygon
      where waterway in ('dock','mill_pond','riverbank','canal')
         or landuse in ('reservoir','water','basin')
         or "natural" in ('lake','water','land','marsh','scrub','wetland','glacier')
      order by z_order,way_area desc
      ) as water_areas</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

