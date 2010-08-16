<!--landmark layer styles-->
<Style name="landmark">
<!--attraction-->
	<Rule>
		<Filter>[tourism] = 'attraction' or [tourism] = 'zoo'</Filter>
		&maxscale_zoom10;
		<PolygonSymbolizer>
			<CssParameter name="fill">#e8d1ba</CssParameter>
			<CssParameter name="fill-opacity">0.8</CssParameter>
		</PolygonSymbolizer>
	</Rule>
<!--cemetery fill-->
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom14;
		<Filter>[landuse] = 'cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard'</Filter>
		<PolygonSymbolizer>
			<CssParameter name="fill">#619e3a</CssParameter>
			<CssParameter name="fill-opacity">.15</CssParameter>
		</PolygonSymbolizer>
	</Rule>
	<Rule>
		&maxscale_zoom15;
		<Filter>[landuse] = 'cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard'</Filter>
		<PolygonSymbolizer>
			<CssParameter name="fill">#619e3a</CssParameter>
			<CssParameter name="fill-opacity">.25</CssParameter>
		</PolygonSymbolizer>
	</Rule>
<!--military fill-->
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom14;
		<Filter>[landuse]='military'</Filter>
		<PolygonSymbolizer>
			<CssParameter name="fill">#7a941e</CssParameter>
			<CssParameter name="fill-opacity">0.15</CssParameter>
		</PolygonSymbolizer>
	</Rule>
	<Rule>
		&maxscale_zoom15;
		<Filter>[landuse]='military'</Filter>
		<PolygonSymbolizer>
			<CssParameter name="fill">#7a941e</CssParameter>
			<CssParameter name="fill-opacity">0.25</CssParameter>
		</PolygonSymbolizer>
	</Rule>
<!--barracks-->
	<Rule>
		&maxscale_zoom10;
		<Filter>[military] = 'barracks'</Filter>
		<PolygonSymbolizer>
			<CssParameter name="fill">#d4d9c1</CssParameter>
		</PolygonSymbolizer>
	</Rule>
<!--park fill-->
	<Rule>
		<Filter>[leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [leisure] = 'nature_reserve' or [leisure] = 'common' or [leisure] = 'pitch'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<PolygonSymbolizer>
			<CssParameter name="fill">#28b844</CssParameter>
			<CssParameter name="fill-opacity">0.1</CssParameter>
		</PolygonSymbolizer>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [leisure] = 'nature_reserve' or [leisure] = 'common' or [leisure] = 'pitch'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<PolygonSymbolizer>
			<CssParameter name="fill">#28b844</CssParameter>
			<CssParameter name="fill-opacity">0.15</CssParameter>
		</PolygonSymbolizer>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [leisure] = 'nature_reserve' or [leisure] = 'common' or [leisure] = 'pitch'</Filter>
		&maxscale_zoom12;
		&minscale_zoom14;
		<PolygonSymbolizer>
			<CssParameter name="fill">#1ea938</CssParameter>
			<CssParameter name="fill-opacity">0.15</CssParameter>
		</PolygonSymbolizer>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [leisure] = 'nature_reserve' or [leisure] = 'common' or [leisure] = 'pitch'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<PolygonSymbolizer>
			<CssParameter name="fill">#009a2b</CssParameter>
			<CssParameter name="fill-opacity">0.15</CssParameter>
		</PolygonSymbolizer>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [leisure] = 'nature_reserve' or [leisure] = 'common' or [leisure] = 'pitch'</Filter>
		&maxscale_zoom17;
		<PolygonSymbolizer>
			<CssParameter name="fill">#00a635</CssParameter>
			<CssParameter name="fill-opacity">0.2</CssParameter>
		</PolygonSymbolizer>
	</Rule>
<!--golf course fill-->
	<Rule>
		<Filter>[leisure] = 'golf_course'</Filter>
		&maxscale_zoom12;
		&minscale_zoom14;
		<PolygonSymbolizer>
			<CssParameter name="fill">#88cc00</CssParameter>
			<CssParameter name="fill-opacity">.2</CssParameter>
		</PolygonSymbolizer>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'golf_course'</Filter>
		&maxscale_zoom15;
		<PolygonSymbolizer>
			<CssParameter name="fill">#88cc00</CssParameter>
			<CssParameter name="fill-opacity">.25</CssParameter>
		</PolygonSymbolizer>
	</Rule>	
<!--forest fill-->
	<Rule>
		<Filter>[landuse] = 'forest'</Filter>
		&maxscale_zoom9;
		&minscale_zoom11;
		<PolygonSymbolizer>
			<CssParameter name="fill">#00b844</CssParameter>
			<CssParameter name="fill-opacity">.25</CssParameter>
		</PolygonSymbolizer>
	</Rule>
	<Rule>
		<Filter>[landuse] = 'forest'</Filter>
		&maxscale_zoom12;
		&minscale_zoom14;
		<PolygonSymbolizer>
			<CssParameter name="fill">#59bf26</CssParameter>
			<CssParameter name="fill-opacity">.25</CssParameter>
		</PolygonSymbolizer>
	</Rule>
	<Rule>
		<Filter>[landuse] = 'forest'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<PolygonSymbolizer>
			<CssParameter name="fill">#009a2b</CssParameter>
			<CssParameter name="fill-opacity">.2</CssParameter>
		</PolygonSymbolizer>
	</Rule>
	<Rule>
		<Filter>[landuse] = 'forest'</Filter>
		&maxscale_zoom17;
		<PolygonSymbolizer>
			<CssParameter name="fill">#00a635</CssParameter>
			<CssParameter name="fill-opacity">.2</CssParameter>
		</PolygonSymbolizer>
	</Rule>
<!--beach fill-->
	<Rule>
		<Filter>[natural] = 'beach'</Filter>
		&maxscale_zoom12;
		<PolygonSymbolizer>
			<CssParameter name="fill">#f5efd7</CssParameter>
		</PolygonSymbolizer>
	</Rule>
<!--stadium fill-->
	<Rule>
		<Filter>[leisure] = 'stadium' or [leisure] = 'sports_centre'</Filter>
		&maxscale_zoom13;
		<PolygonSymbolizer>
			<CssParameter name="fill">#e8d1ba</CssParameter>
		</PolygonSymbolizer>
	</Rule>
<!--school fill-->
	<Rule>
		<Filter>[amenity] = 'university' or [amenity] = 'college' or [amenity] = 'school' or [amenity]='kindergarten'</Filter>
		&maxscale_zoom13;
		<PolygonSymbolizer>
			<CssParameter name="fill">#e0dbc6</CssParameter>
		</PolygonSymbolizer>
	</Rule>
<!--hospital fill-->
	<Rule>
		<Filter>[amenity]='hospital'</Filter>
		&maxscale_zoom12;
		<PolygonSymbolizer>
			<CssParameter name="fill">#c6e0e0</CssParameter>
		</PolygonSymbolizer>
	</Rule>
<!--shopping center fill-->
	<Rule>
		<Filter>[landuse] = 'retail'</Filter>
		&maxscale_zoom13;
		<PolygonSymbolizer>
			<CssParameter name="fill">#e6e3c3</CssParameter>
		</PolygonSymbolizer>
	</Rule>
<!--airport-->
	<Rule>
		<Filter>[aeroway] = 'apron' or [aeroway] = 'aerodrome'</Filter>
		&maxscale_zoom10;
		<PolygonSymbolizer>
			<CssParameter name="fill">#d1d2e0</CssParameter>
		</PolygonSymbolizer>
	</Rule>
<!--residential-->
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom18;
		<Filter>[landuse] = 'residential'</Filter>
		<PolygonSymbolizer>
			<CssParameter name="fill">#f0eee4</CssParameter>
		</PolygonSymbolizer>
	</Rule>
</Style>
<Style name="military-lowzoom">
	<Rule>
		&maxscale_zoom7;
		&minscale_zoom9;
		<Filter>[landuse]='military'</Filter>
		<PolygonSymbolizer>
			<CssParameter name="fill">#7a941e</CssParameter>
			<CssParameter name="fill-opacity">0.1</CssParameter>
		</PolygonSymbolizer>
	</Rule>
</Style>
<Style name="barriers">
	<Rule>
		&maxscale_zoom16;
		<LineSymbolizer>
			<CssParameter name="stroke">#b4b4b4</CssParameter>
			<CssParameter name="stroke-width">0.5</CssParameter>
		</LineSymbolizer>
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
          or aeroway in ('apron','aerodrome','taxiway','runway')
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