<!-- Direction arrows -->
<Style name="direction-arrows">
	<Rule>
		<Filter>[oneway] = 'yes'</Filter>
		&maxscale_zoom16;
		<LineSymbolizer stroke-linejoin="bevel" stroke="#aaaaaa" stroke-width="1" stroke-dasharray="0,12,10,152"/><LineSymbolizer stroke-linejoin="bevel" stroke="#aaaaaa" stroke-width="2" stroke-dasharray="0,12,9,153"/><LineSymbolizer stroke-linejoin="bevel" stroke="#aaaaaa" stroke-width="3" stroke-dasharray="0,18,2,154"/><LineSymbolizer stroke-linejoin="bevel" stroke="#aaaaaa" stroke-width="4" stroke-dasharray="0,18,1,155"/>
	</Rule>
	<Rule>
		<Filter>[oneway] = '-1'</Filter>
		&maxscale_zoom16;
		<LineSymbolizer stroke-linejoin="bevel" stroke="#aaaaaa" stroke-width="1" stroke-dasharray="0,12,10,152"/><LineSymbolizer stroke-linejoin="bevel" stroke="#aaaaaa" stroke-width="2" stroke-dasharray="0,13,9,152"/><LineSymbolizer stroke-linejoin="bevel" stroke="#aaaaaa" stroke-width="3" stroke-dasharray="0,14,2,158"/><LineSymbolizer stroke-linejoin="bevel" stroke="#aaaaaa" stroke-width="4" stroke-dasharray="0,15,1,158"/>
	</Rule>
</Style>
<!-- Other symbols -->
<Style name="symbols">
	<!--summit-->
	<Rule>
		&maxscale_zoom12;
		<Filter>[natural]='peak'</Filter>
		<PointSymbolizer file="&symbols;/peak.png"/>
	</Rule>
	<!--freeway exits-->
	<Rule>
		&maxscale_zoom12;
		<Filter>[highway]='motorway_junction'</Filter>
		<PointSymbolizer file="&symbols;/exit-freeway.png"/>
	</Rule>
	<!--golf-->
	<Rule>
		&maxscale_zoom13;
		&minscale_zoom13;
		<Filter>[leisure]='golf_course'</Filter>
		<PointSymbolizer file="&symbols;/golf_small.png"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		<Filter>[leisure]='golf_course'</Filter>
		<PointSymbolizer file="&symbols;/golf.png"/>
	</Rule>
	<!--skiing-->
	<Rule>
		&maxscale_zoom13;
		<Filter>[sport]='skiing'</Filter>
		<PointSymbolizer file="&symbols;/skiing.png"/>
	</Rule>
	<!--ferry terminal-->
	<Rule>
		&maxscale_zoom14;
		<Filter>[amenity]='ferry_terminal'</Filter>
		<PointSymbolizer file="&symbols;/ferry.png"/>
	</Rule>
	<!--train station-->
	<Rule>
		&maxscale_zoom16;
		<Filter>[railway]='station'</Filter>
		<PointSymbolizer file="&symbols;/station-train.png"/>
	</Rule>
	<!--hospital-->
	<Rule>
		&maxscale_zoom15;
		<Filter>[amenity]='hospital'</Filter>
		<PointSymbolizer file="&symbols;/hospital.png"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		<Filter>[leisure]='marina'</Filter>
		<PointSymbolizer file="&symbols;/marina.png"/>
	</Rule>
	<!--POI-->
	<Rule>
		&maxscale_zoom17;
		<Filter>[tourism]='museum' or [tourism] = 'attraction' or [tourism] = 'theme_park' or [tourism] = 'zoo'</Filter>
		<PointSymbolizer file="&symbols;/POI.png"/>
	</Rule>
	<!--mine-->
	<Rule>
		&maxscale_zoom17;
		<Filter>[man_made]='mineshaft'</Filter>
		<PointSymbolizer file="&symbols;/mine.png"/>
	</Rule>
</Style>

<Layer name="direction-arrows" status="on" srs="&osm2pgsql_projection;">
	<StyleName>direction-arrows</StyleName>
<!--StyleName>directions-mapnik2</StyleName-->
	<Datasource>
		<Parameter name="table">
      (select way,
       case when oneway in ('yes','true','1') then 'yes'::text else oneway end as oneway
       from &prefix;_line
       where oneway is not null
         and (highway is not null or railway is not null or waterway is not null)
      ) as directions
      </Parameter>
      &datasource-settings;
	</Datasource>
</Layer>
<Layer name="amenity-symbols" status="on" srs="&osm2pgsql_projection;">
	<StyleName>symbols</StyleName>
	<Datasource>
		<Parameter name="table">
      (select *
      from &prefix;_point
      where aeroway in ('airport','aerodrome')
         or "natural" in ('peak')
         or "leisure" in ('golf_course','water_park','marina','sports_centre')
         or "amenity" in ('hospital')
		or "tourism" in ('museum','attraction')
		or "man_made" in ('mineshaft')
		or "sport" in ('skiing')
		or "amenity" in ('ferry_terminal')
		or "highway" in ('motorway_junction')
		or "railway" in ('station')
      ) as symbols</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="amenity-symbols-poly" status="on" srs="&osm2pgsql_projection;">
	<StyleName>symbols</StyleName>
	<Datasource>
		<Parameter name="table">
      (select *
      from &prefix;_polygon
      where aeroway in ('airport','aerodrome')
         or "natural" in ('peak')
		or "leisure" in ('golf_course','water_park','marina')
		or "amenity" in ('hospital')
		or "tourism" in ('museum')
		or "man_made" in ('mineshaft')
		or "sport" in ('skiing')
		or "amenity" in ('ferry_terminal')
		or "highway" in ('motorway_junction')
		or "railway" in ('station')
      ) as symbols</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
