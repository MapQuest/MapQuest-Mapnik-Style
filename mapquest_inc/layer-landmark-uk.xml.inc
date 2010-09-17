<!--landmark layer styles-->
<Style name="landmark">
	<!--attraction-->
	<Rule>
		<Filter>[tourism] = 'attraction' or [tourism] = 'zoo'</Filter>
		&maxscale_zoom10;
		<PolygonSymbolizer fill-opacity="0.8" fill="#e8d1ba"/>
	</Rule>
	<!--cemetery fill-->
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom14;
		<Filter>[landuse] = 'cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard'</Filter>
		<PolygonSymbolizer fill-opacity=".15" fill="#619e3a"/>
	</Rule>
	<Rule>
		&maxscale_zoom15;
		<Filter>[landuse] = 'cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard'</Filter>
		<PolygonSymbolizer fill-opacity=".25" fill="#619e3a"/>
	</Rule>
	<!--military fill-->
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom14;
		<Filter>[landuse]='military'</Filter>
		<PolygonSymbolizer fill-opacity="0.15" fill="#7a941e"/>
	</Rule>
	<Rule>
		&maxscale_zoom15;
		<Filter>[landuse]='military'</Filter>
		<PolygonSymbolizer fill-opacity="0.25" fill="#7a941e"/>
	</Rule>
	<!--barracks-->
	<Rule>
		&maxscale_zoom10;
		<Filter>[military] = 'barracks'</Filter>
		<PolygonSymbolizer fill="#d4d9c1"/>
	</Rule>
	<!--park fill-->
	<Rule>
		<Filter>[leisure] = 'park' or [leisure] = 'playground' or [leisure] = 'recreation_ground' or [leisure] = 'nature_reserve' or [leisure] = 'common' or [leisure] = 'pitch'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<PolygonSymbolizer fill-opacity="0.1" fill="#00ac42"/>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'park' or [leisure] = 'playground' or [leisure] = 'recreation_ground' or [leisure] = 'nature_reserve' or [leisure] = 'common' or [leisure] = 'pitch'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<PolygonSymbolizer fill-opacity="0.15" fill="#00ac42"/>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'park' or [leisure] = 'playground' or [leisure] = 'recreation_ground' or [leisure] = 'nature_reserve' or [leisure] = 'common' or [leisure] = 'pitch'</Filter>
		&maxscale_zoom12;
		&minscale_zoom14;
		<PolygonSymbolizer fill-opacity="0.15" fill="#0e982b"/>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'park' or [leisure] = 'playground' or [leisure] = 'recreation_ground' or [leisure] = 'nature_reserve' or [leisure] = 'common' or [leisure] = 'pitch'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<PolygonSymbolizer fill-opacity="0.3" fill="#009a2b"/>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'park' or [leisure] = 'playground' or [leisure] = 'recreation_ground' or [leisure] = 'nature_reserve' or [leisure] = 'common' or [leisure] = 'pitch'</Filter>
		&maxscale_zoom17;
		<PolygonSymbolizer fill-opacity="0.3" fill="#00a635"/>
	</Rule>
	<!--golf course fill-->
	<Rule>
		<Filter>[leisure] = 'golf_course'</Filter>
		&maxscale_zoom12;
		<PolygonSymbolizer fill-opacity=".7" fill="#b2dc81"/>
	</Rule>
	<!--forest fill-->
	<Rule>
		<Filter>[landuse] = 'forest' or [landuse] = 'recreation_ground' or [landuse] = 'conservation' or [natural] = 'wood' or [landuse] = 'wood'</Filter>
		&maxscale_zoom9;
		&minscale_zoom11;
		<PolygonSymbolizer fill-opacity=".25" fill="#00b844"/>
	</Rule>
	<Rule>
		<Filter>[landuse] = 'forest' or [landuse] = 'recreation_ground' or [landuse] = 'conservation' or [natural] = 'wood' or [landuse] = 'wood'</Filter>
		&maxscale_zoom12;
		&minscale_zoom14;
		<PolygonSymbolizer fill-opacity=".25" fill="#59bf26"/>
	</Rule>
	<Rule>
		<Filter>[landuse] = 'forest' or [landuse] = 'recreation_ground' or [landuse] = 'conservation' or [natural] = 'wood' or [landuse] = 'wood'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<PolygonSymbolizer fill-opacity=".2" fill="#009a2b"/>
	</Rule>
	<Rule>
		<Filter>[landuse] = 'forest' or [landuse] = 'recreation_ground' or [landuse] = 'conservation' or [natural] = 'wood' or [landuse] = 'wood'</Filter>
		&maxscale_zoom17;
		<PolygonSymbolizer fill-opacity=".2" fill="#00a635"/>
	</Rule>
	<!--beach fill-->
	<Rule>
		<Filter>[natural] = 'beach'</Filter>
		&maxscale_zoom12;
		<PolygonSymbolizer fill="#f5efd7"/>
	</Rule>
	<!--stadium fill-->
	<Rule>
		<Filter>[leisure] = 'stadium' or [leisure] = 'sports_centre'</Filter>
		&maxscale_zoom13;
		<PolygonSymbolizer fill="#e8d1ba"/>
	</Rule>
	<!--school fill-->
	<Rule>
		<Filter>[amenity] = 'university' or [amenity] = 'college' or [amenity] = 'school' or [amenity]='kindergarten'</Filter>
		&maxscale_zoom13;
		<PolygonSymbolizer fill="#e0dbc6"/>
	</Rule>
	<!--hospital fill-->
	<Rule>
		<Filter>[amenity]='hospital'</Filter>
		&maxscale_zoom12;
		<PolygonSymbolizer fill="#c6e0e0"/>
	</Rule>
	<!--shopping center fill-->
	<Rule>
		<Filter>[landuse] = 'retail'</Filter>
		&maxscale_zoom13;
		<PolygonSymbolizer fill="#e6e3c3"/>
	</Rule>
	<!--airport-->
	<Rule>
		<Filter>[aeroway] = 'apron' or [aeroway] = 'aerodrome'</Filter>
		&maxscale_zoom10;
		<PolygonSymbolizer fill="#d1d2e0"/>
	</Rule>
	<!--airport runway-->
	<Rule>
		<Filter>[aeroway] = 'runway'</Filter>
		&maxscale_zoom10;
		<PolygonSymbolizer fill="#b4b4b4"/>
	</Rule>
	<!--residential-->
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom18;
		<Filter>[landuse] = 'residential'</Filter>
		<PolygonSymbolizer fill="#f0eee4"/>
	</Rule>
</Style>
<Style name="military-lowzoom">
	<Rule>
		&maxscale_zoom7;
		&minscale_zoom9;
		<Filter>[landuse]='military'</Filter>
		<PolygonSymbolizer fill-opacity="0.1" fill="#7a941e"/>
	</Rule>
</Style>
<Style name="barriers">
	<Rule>
		&maxscale_zoom16;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="0.5"/>
	</Rule>
</Style>
<!--landmark layer data-->
<Layer name="landmark" status="on" srs="&osm2pgsql_projection;">
	<StyleName>landmark</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,aeroway,amenity,landuse,leisure,man_made,military,"natural",power,shop,tourism,name,religion
       from &prefix;_polygon
       where landuse is not null
          or leisure is not null
          or shop is not null
          or aeroway in ('apron','aerodrome')
          or amenity in ('parking','university','college','school','hospital','kindergarten','grave_yard')
          or military in ('barracks','danger_area')
          or "natural" in ('field','beach','heath','mud','wood')
          or power in ('station','sub_station')
          or tourism in ('attraction','camp_site','caravan_site','picnic_site','zoo')
       order by z_order,way_area desc
      ) as leisure
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="military-lowzoom" status="on" srs="&osm2pgsql_projection;">
	<StyleName>military-lowzoom</StyleName>
	<Datasource>
	<Parameter name="table">
       (select way,landuse
        from &prefix;_polygon
        where landuse in ('military')
        order by z_order,way_area desc
       ) as military
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="barriers" status="on" srs="&osm2pgsql_projection;">
	<StyleName>barriers</StyleName>
	<Datasource>
		<Parameter name="table">
          (select way,barrier,"natural",man_made from &prefix;_line where barrier is not null or "natural" in ('hedge','cliff') or man_made='embankment') as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
