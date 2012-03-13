<Style name="poly_only_symbols">
        <Rule>
                <Filter>[amenity] = 'parking' and [way_area] &gt; 10000</Filter>
                &maxscale_zoom16;
                &minscale_zoom16;
                <PointSymbolizer file="&symbols;/parking.svg"/>
        </Rule>
</Style>

<Style name="unnamed_symbols">
        <!-- golf -->
        <Rule>
		<Filter>[leisure] = 'golf_course'</Filter>
                &maxscale_zoom13;
                <PointSymbolizer file="&symbols;/golf_small.svg"/>
        </Rule>
        <!-- parking -->
        <Rule>
                <Filter>[amenity] = 'parking'</Filter>
                &maxscale_zoom17;
                <PointSymbolizer file="&symbols;/parking.svg"/>
        </Rule>

</Style>

<Style name="symbols">
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
	<!--mine-->
	<Rule>
		&maxscale_zoom17;
		<Filter>[man_made]='mineshaft'</Filter>
		<PointSymbolizer file="&symbols;/mine.svg"/>
	</Rule>
</Style>
<Style name="barrier-symbols">
<!-- note - no text rendered here, that's in the text layer -->
<!-- toll booths -->
  <Rule>
    &maxscale_zoom16;
    <Filter>[barrier]='toll_booth'</Filter>
    <PointSymbolizer file="&symbols;/tollbooth.svg"/>
  </Rule>
<!-- gates -->
  <Rule>
    &maxscale_zoom16;
    <Filter>[barrier]='gate'</Filter>
    <PointSymbolizer file="&symbols;/small-city.svg"/>
  </Rule>    
</Style>

<Layer name="barrier-symbols" status="on" srs="&osm2pgsql_projection;">
  <StyleName>barrier-symbols</StyleName>
  <Datasource>
    <Parameter name="table">
      (select way, barrier from &prefix;_point
       where barrier in ('gate','toll_booth')
       ) as symbols
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
         or "amenity" in ('hospital','ferry_terminal','parking')
		or "tourism" in ('museum','attraction')
		or "man_made" in ('mineshaft')
		or "sport" in ('skiing')
		or "highway" in ('motorway_junction')
		or "railway" in ('station')
      ) as symbols
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="symbols-poly" status="on" srs="&osm2pgsql_projection;">
	<StyleName>symbols</StyleName>
        <StyleName>poly_only_symbols</StyleName>
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
<Layer name="unnamed-symbols" status="on" srs="&osm2pgsql_projection;">
        <StyleName>unnamed_symbols</StyleName>
        <Datasource>
                <Parameter name="table">
            (select way,leisure,amenity
            from &prefix;_polygon
            where name is null
            and (leisure = 'golf_course' or amenity = 'parking')
            ) as golf
                </Parameter>
                &datasource-settings;
        </Datasource>
</Layer>
