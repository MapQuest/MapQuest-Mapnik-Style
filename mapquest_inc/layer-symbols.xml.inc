<!-- Direction arrows -->
<Style name="direction-arrows">
	<Rule>
		<Filter>[oneway] = 'yes'</Filter>
		&maxscale_zoom16;
		<LineSymbolizer>
			<CssParameter name="stroke">#aaaaaa</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">bevel</CssParameter>
			<CssParameter name="stroke-dasharray">0,12,10,152</CssParameter>
		</LineSymbolizer>
		<LineSymbolizer>
			<CssParameter name="stroke">#aaaaaa</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linejoin">bevel</CssParameter>
			<CssParameter name="stroke-dasharray">0,12,9,153</CssParameter>
		</LineSymbolizer>
		<LineSymbolizer>
			<CssParameter name="stroke">#aaaaaa</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">bevel</CssParameter>
			<CssParameter name="stroke-dasharray">0,18,2,154</CssParameter>
		</LineSymbolizer>
		<LineSymbolizer>
			<CssParameter name="stroke">#aaaaaa</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">bevel</CssParameter>
			<CssParameter name="stroke-dasharray">0,18,1,155</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[oneway] = '-1'</Filter>
		&maxscale_zoom16;
		<LineSymbolizer>
			<CssParameter name="stroke">#aaaaaa</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">bevel</CssParameter>
			<CssParameter name="stroke-dasharray">0,12,10,152</CssParameter>
		</LineSymbolizer>
		<LineSymbolizer>
			<CssParameter name="stroke">#aaaaaa</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linejoin">bevel</CssParameter>
			<CssParameter name="stroke-dasharray">0,13,9,152</CssParameter>
		</LineSymbolizer>
		<LineSymbolizer>
			<CssParameter name="stroke">#aaaaaa</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">bevel</CssParameter>
			<CssParameter name="stroke-dasharray">0,14,2,158</CssParameter>
		</LineSymbolizer>
		<LineSymbolizer>
			<CssParameter name="stroke">#aaaaaa</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">bevel</CssParameter>
			<CssParameter name="stroke-dasharray">0,15,1,158</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!-- Other symbols -->
<Style name="symbols">
<!--summit-->
	<Rule>
		&maxscale_zoom12;
		<Filter>[natural]='peak'</Filter>
		<PointSymbolizer file="&symbols;/peak.png" type="png" width="10" height="8" />
	</Rule>
<!--freeway exits-->
	<Rule>
		&maxscale_zoom12;
		<Filter>[highway]='motorway_junction'</Filter>
		<PointSymbolizer file="&symbols;/exit-freeway.png" type="png" width="8" height="8"/>
	</Rule>
<!--golf-->
	<Rule>
		&maxscale_zoom13;
		&minscale_zoom13;
		<Filter>[leisure]='golf_course'</Filter>
		<PointSymbolizer file="&symbols;/golf_small.png" type="png" width="10" height="14" />
	</Rule>
	<Rule>
		&maxscale_zoom14;
		<Filter>[leisure]='golf_course'</Filter>
		<PointSymbolizer file="&symbols;/golf.png" type="png" width="14" height="18" />
	</Rule>
<!--skiing-->
	<Rule>
		&maxscale_zoom13;
		<Filter>[sport]='skiing'</Filter>
		<PointSymbolizer file="&symbols;/skiing.png" type="png" width="14" height="16" />
	</Rule>
<!--ferry terminal-->
	<Rule>
		&maxscale_zoom14;
		<Filter>[amenity]='ferry_terminal'</Filter>
		<PointSymbolizer file="&symbols;/ferry.png" type="png" width="12" height="12" />
	</Rule>
<!--train station-->
	<Rule>
		&maxscale_zoom16;
		<Filter>[railway]='station'</Filter>
		<PointSymbolizer file="&symbols;/station-train.png" type="png" width="8" height="14" />
	</Rule>
<!--hospital-->
	<Rule>
		&maxscale_zoom15;
		<Filter>[amenity]='hospital'</Filter>
		<PointSymbolizer file="&symbols;/hospital.png" type="png" width="12" height="12" />
	</Rule>
	<Rule>
		&maxscale_zoom16;
		<Filter>[leisure]='marina'</Filter>
		<PointSymbolizer file="&symbols;/marina.png" type="png" width="16" height="18" />
	</Rule>
<!--POI-->
	<Rule>
		&maxscale_zoom17;
		<Filter>[tourism]='museum' or [tourism] = 'attraction' or [tourism] = 'theme_park' or [tourism] = 'zoo'</Filter>
		<PointSymbolizer file="&symbols;/POI.png" type="png" width="14" height="14" />
	</Rule>
<!--mine-->
	<Rule>
		&maxscale_zoom17;
		<Filter>[man_made]='mineshaft'</Filter>
		<PointSymbolizer file="&symbols;/mine.png" type="png" width="10" height="10" />
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
