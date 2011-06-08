<!-- Direction arrows -->
<Style name="direction-arrows">
	<Rule>
		<Filter>[oneway] = 'yes'</Filter>
		&maxscale_zoom16;
		<MarkersSymbolizer fill="#999999" stroke="#606060" stroke-width="0.3" spacing="100" transform="scale(0.8)"/>
	</Rule>
	<Rule>
		<Filter>[oneway] = '-1'</Filter>
		&maxscale_zoom16;
		<MarkersSymbolizer fill="#999999" stroke="#606060" stroke-width="0.3" spacing="100" transform="scale(0.8) rotate(180)"/>
	</Rule>
</Style>
<!-- Other symbols -->
<Style name="symbols">
	<!--summit-->
	<Rule>
		&maxscale_zoom12;
		<Filter>[natural]='peak'</Filter>
		<PointSymbolizer file="&symbols;/peak.svg"/>
	</Rule>
	<!--freeway exits-->
	<Rule>
		&maxscale_zoom12;
		<Filter>[highway]='motorway_junction'</Filter>
		<PointSymbolizer file="&symbols;/exit-freeway.svg"/>
	</Rule>
	<!--golf-->
	<Rule>
		&maxscale_zoom13;
		&minscale_zoom13;
		<Filter>[leisure]='golf_course'</Filter>
		<PointSymbolizer file="&symbols;/golf_small.svg"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		<Filter>[leisure]='golf_course'</Filter>
		<PointSymbolizer file="&symbols;/golf.svg"/>
	</Rule>
	<!--skiing-->
	<Rule>
		&maxscale_zoom13;
		<Filter>[sport]='skiing'</Filter>
		<PointSymbolizer file="&symbols;/skiing.svg"/>
	</Rule>
	<!--ferry terminal-->
	<Rule>
		&maxscale_zoom14;
		<Filter>[amenity]='ferry_terminal'</Filter>
		<PointSymbolizer file="&symbols;/ferry.svg"/>
	</Rule>
	<!--train station-->
	<Rule>
		&maxscale_zoom16;
		<Filter>[railway]='station'</Filter>
		<PointSymbolizer file="&symbols;/station-train.svg"/>
	</Rule>
	<!--hospital-->
	<Rule>
		&maxscale_zoom15;
		<Filter>[amenity]='hospital'</Filter>
		<PointSymbolizer file="&symbols;/hospital.svg"/>
	</Rule>
	<!--marina-->
	<Rule>
		&maxscale_zoom16;
		<Filter>[leisure]='marina'</Filter>
		<PointSymbolizer file="&symbols;/marina.svg"/>
	</Rule>
	<!--POI-->
	<Rule>
		&maxscale_zoom17;
		<Filter>[tourism]='museum' or [tourism] = 'attraction' or [tourism] = 'theme_park' or [tourism] = 'zoo'</Filter>
		<PointSymbolizer file="&symbols;/POI.svg"/>
	</Rule>
	<!--parking-->
	<Rule>
		&maxscale_zoom16;
		<Filter>[amenity]='parking' and ([access] = 'public' or not [access] &lt;&gt; '')</Filter>
		<PointSymbolizer file="&symbols;/parking.svg" allow-overlap="true"/>
	</Rule>
	<!--mine-->
	<Rule>
		&maxscale_zoom17;
		<Filter>[man_made]='mineshaft'</Filter>
		<PointSymbolizer file="&symbols;/mine.svg"/>
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
         and highway in ('motorway','motorway_link','trunk','trunk_link','primary','primary_link',
                          'secondary','secondary_link','tertiary','unclassified', 'residential', 'living_street',
                          'service','track')
      ) as directions
      </Parameter>
      &datasource-settings;
	</Datasource>
</Layer>
<Layer name="symbols" status="on" srs="&osm2pgsql_projection;">
	<StyleName>symbols</StyleName>
	<Datasource>
		<Parameter name="table">
      (select *
      from &prefix;_point
      where aeroway in ('airport','aerodrome')
         or "natural" in ('peak')
         or "leisure" in ('golf_course','water_park','marina','sports_centre')
         or "amenity" in ('hospital','parking')
		or "tourism" in ('museum','attraction')
		or "man_made" in ('mineshaft')
		or "sport" in ('skiing')
		or "amenity" in ('ferry_terminal')
		or "highway" in ('motorway_junction')
		or "railway" in ('station')
      ) as symbols
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<!-- unusually, this is a polygon table that we actually want for the hybrid layers, since the
     style rules are just drawing symbols, not fills -->
<Layer name="symbols-poly" status="on" srs="&osm2pgsql_projection;">
	<StyleName>symbols</StyleName>
	<Datasource>
		<Parameter name="table">
      (select *
      from &prefix;_polygon
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
      ) as symbols
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
