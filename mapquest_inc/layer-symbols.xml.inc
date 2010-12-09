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
		<PointSymbolizer file="&symbols;/station-train.svg" transform="scale(0.6)"/>
	</Rule>
	<!--hospital-->
	<Rule>
		&maxscale_zoom15;
		<Filter>[amenity]='hospital'</Filter>
		<PointSymbolizer file="&symbols;/hospital.svg" transform="scale(0.6)"/>
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
		<PointSymbolizer file="&symbols;/parking.svg" allow_overlap="true" transform="scale(0.6)"/>
	</Rule>
	<!--mine-->
	<Rule>
		&maxscale_zoom17;
		<Filter>[man_made]='mineshaft'</Filter>
		<PointSymbolizer file="&symbols;/mine.svg"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		<Filter>[amenity]='restaurant'</Filter>
		<PointSymbolizer file="&symbols;/restaurant.svg" transform="scale(0.6)"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		<Filter>[tourism]='hotel'</Filter>
		<PointSymbolizer file="&symbols;/hotel.svg" transform="scale(0.6)"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		<Filter>[amenity]='atm'</Filter>
		<PointSymbolizer file="&symbols;/atm.svg" transform="scale(0.6)"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		<Filter>[amenity]='bank'</Filter>
		<PointSymbolizer file="&symbols;/bank.svg" transform="scale(0.6)"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		<Filter>[amenity]='fast_food'</Filter>
		<PointSymbolizer file="&symbols;/fast-food.svg" transform="scale(0.6)"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		<Filter>[shop]='supermarket'</Filter>
		<PointSymbolizer file="&symbols;/grocery.svg" transform="scale(0.6)"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		<Filter>[amenity]='post_office'</Filter>
		<PointSymbolizer file="&symbols;/post-office.svg" transform="scale(0.6)"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		<Filter>[amenity]='cinema'</Filter>
		<PointSymbolizer file="&symbols;/cinema.svg" transform="scale(0.6)"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		<Filter>[amenity]='bus_station'</Filter>
		<PointSymbolizer file="&symbols;/bus-station.svg" transform="scale(0.6)"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		<Filter>[tourism]='camp_site'</Filter>
		<PointSymbolizer file="&symbols;/campsite.svg" transform="scale(0.6)"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		<Filter>[amenity]='fuel'</Filter>
		<PointSymbolizer file="&symbols;/gas-station.svg" transform="scale(0.6)"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		<Filter>[tourism]='information'</Filter>
		<PointSymbolizer file="&symbols;/information.svg" transform="scale(0.6)"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		<Filter>[shop]='laundry' or [shop]='dry_cleaning'</Filter>
		<PointSymbolizer file="&symbols;/laundry.svg" transform="scale(0.6)"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		<Filter>[amenity]='pharmacy'</Filter>
		<PointSymbolizer file="&symbols;/pharmacy.svg" transform="scale(0.6)"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		<Filter>[amenity]='pub' or [amenity]='bar'</Filter>
		<PointSymbolizer file="&symbols;/pub-bar.svg" transform="scale(0.6)"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		<Filter>[amenity]='wifi'</Filter>
		<PointSymbolizer file="&symbols;/wifi.svg" transform="scale(0.6)"/>
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
<Layer name="symbols" status="on" srs="&osm2pgsql_projection;">
	<StyleName>symbols</StyleName>
	<Datasource>
		<Parameter name="table">
      (select *
      from &prefix;_point
      where aeroway in ('airport','aerodrome')
         or "natural" in ('peak')
         or "leisure" in ('golf_course','water_park','marina','sports_centre')
         or "amenity" in ('hospital','parking','atm','bank','fast_food',
						  'post_office','cinema','bus_station','fuel','pharmacy',
						  'pub','bar')
		or "tourism" in ('museum','attraction','hotel','camp_site','information')
		or "man_made" in ('mineshaft')
		or "sport" in ('skiing')
		or "amenity" in ('ferry_terminal','restaurant')
		or "highway" in ('motorway_junction')
		or "railway" in ('station')
		or "shop" in ('supermarket','laundry','dry_cleaning')
      ) as symbols
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="symbols-poly" status="on" srs="&osm2pgsql_projection;">
	<StyleName>symbols</StyleName>
	<Datasource>
		<Parameter name="table">
      (select *
      from &prefix;_polygon
      where aeroway in ('airport','aerodrome')
         or "natural" in ('peak')
         or "leisure" in ('golf_course','water_park','marina','sports_centre')
         or "amenity" in ('hospital','atm','bank','fast_food',
						  'post_office','cinema','bus_station','fuel','pharmacy',
						  'pub','bar')
		or "tourism" in ('museum','attraction','hotel','camp_site','information')
		or "man_made" in ('mineshaft')
		or "sport" in ('skiing')
		or "amenity" in ('ferry_terminal','restaurant')
		or "highway" in ('motorway_junction')
		or "railway" in ('station')
		or "shop" in ('supermarket','laundry','dry_cleaning')
      ) as symbols
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
