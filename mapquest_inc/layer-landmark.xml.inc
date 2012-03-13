<!--landmark layer zl 10+ -->
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
		&minscale_zoom12;
		<Filter>[way_area] &gt; 500000 and ([landuse] = 'cemetery' or [amenity]='cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard')</Filter>
		<PolygonSymbolizer fill-opacity=".25" fill="rgb(97,158,58)"/>
	</Rule>
	<Rule>
		&maxscale_zoom13;
		<Filter>[landuse] = 'cemetery' or [amenity]='cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard'</Filter>
		<PolygonSymbolizer fill-opacity=".25" fill="rgb(97,158,58)"/>
	</Rule>
<!--military fill-->
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom14;
		<Filter>[landuse]='military'</Filter>
		<PolygonSymbolizer fill-opacity="0.15" fill="#7a941e"/>
	</Rule><Rule>
		&maxscale_zoom15;
		<Filter>[landuse]='military'</Filter>
		<PolygonSymbolizer fill-opacity="0.25" fill="#7a941e"/>
	</Rule>
<!--barracks-->
	<Rule>
		&maxscale_zoom10;
		<Filter>[military] = 'barracks'</Filter>
		<PolygonSymbolizer fill-opacity="0.15" fill="#7a941e"/>
	</Rule>
<!--park fill-->
	<Rule>
		<Filter>[leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [leisure] = 'recreation_ground' or [leisure] = 'nature_reserve' or [leisure] = 'common' or [leisure] = 'pitch' or [landuse]='grass'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<PolygonSymbolizer fill-opacity="0.1" fill="#00a635"/>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [leisure] = 'recreation_ground' or [leisure] = 'nature_reserve' or [leisure] = 'common' or [leisure] = 'pitch' or [landuse]='grass'</Filter>
		&maxscale_zoom12;
		&minscale_zoom14;
		<PolygonSymbolizer fill-opacity="0.15" fill="#00a635"/>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [leisure] = 'recreation_ground' or [leisure] = 'nature_reserve' or [leisure] = 'common' or [leisure] = 'pitch' or [landuse]='grass'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<PolygonSymbolizer fill-opacity="0.2" fill="#00a635"/>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [leisure] = 'recreation_ground' or [leisure] = 'nature_reserve' or [leisure] = 'common' or [leisure] = 'pitch' or [landuse]='grass'</Filter>
		&maxscale_zoom17;
		<PolygonSymbolizer fill-opacity="0.25" fill="#00a635"/>
	</Rule>
<!--golf course fill-->
	<Rule>
		<Filter>[leisure] = 'golf_course'</Filter>
		&maxscale_zoom12;
		&minscale_zoom14;
		<PolygonSymbolizer fill-opacity=".2" fill="#88cc00"/>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'golf_course'</Filter>
		&maxscale_zoom15;
		<PolygonSymbolizer fill-opacity=".25" fill="#88cc00"/>
	</Rule>
<!--forest fill-->
	<Rule>
		<Filter>[landuse] = 'forest' or [leisure] = 'recreation_ground' or [landuse] = 'recreation_ground' or [landuse] = 'conservation' or [natural] = 'wood' or [landuse] = 'wood' or [natural]='scrub'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<PolygonSymbolizer fill-opacity=".15" fill="#009a2b"/>
	</Rule>
	<Rule>
		<Filter>[landuse] = 'forest' or [leisure] = 'recreation_ground' or [landuse] = 'recreation_ground' or [landuse] = 'conservation' or [natural] = 'wood' or [landuse] = 'wood' or [natural]='scrub'</Filter>
		&maxscale_zoom12;
		&minscale_zoom14;
		<PolygonSymbolizer fill-opacity=".2" fill="#009a2b"/>
	</Rule>
	<Rule>
		<Filter>[landuse] = 'forest' or [leisure] = 'recreation_ground' or [landuse] = 'recreation_ground' or [landuse] = 'conservation' or [natural] = 'wood' or [landuse] = 'wood' or [natural]='scrub'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<PolygonSymbolizer fill-opacity=".25" fill="#009a2b"/>
	</Rule>
	<Rule>
		<Filter>[landuse] = 'forest' or [leisure] = 'recreation_ground' or [landuse] = 'recreation_ground' or [landuse] = 'conservation' or [natural] = 'wood' or [landuse] = 'wood' or [natural]='scrub'</Filter>
		&maxscale_zoom17;
		<PolygonSymbolizer fill-opacity=".3" fill="#009a2b"/>
	</Rule>
<!--beach fill-->
	<Rule>
		<Filter>[natural] = 'beach'</Filter>
		&maxscale_zoom12;
		<PolygonSymbolizer fill-opacity="0.35" fill="#f5efd7"/>
	</Rule>
<!--parking lot fill-->
	<Rule>
		<Filter>[amenity] = 'parking'</Filter>
		&maxscale_zoom10;
		<PolygonSymbolizer fill-opacity="0.5" fill="#f0de99"/>
	</Rule>
<!--stadium fill-->
	<Rule>
		<Filter>[leisure] = 'stadium' or [leisure] = 'sports_centre'</Filter>
		&maxscale_zoom13;
		<PolygonSymbolizer fill-opacity="0.5" fill="#ffc4a6"/>
	</Rule>
<!--school fill-->
	<Rule>
		<Filter>[amenity] = 'university' or [amenity] = 'college' or [amenity] = 'school' or [amenity]='kindergarten'</Filter>
		&maxscale_zoom13;
		<PolygonSymbolizer fill-opacity="0.5" fill="#d8d2b1"/>
	</Rule>
<!--hospital fill-->
	<Rule>
		<Filter>[amenity]='hospital'</Filter>
		&maxscale_zoom12;
		<PolygonSymbolizer fill-opacity="0.5" fill="#b4d6d6"/>
	</Rule>
<!--shopping center fill-->
	<Rule>
		<Filter>[landuse] = 'retail'</Filter>
		&maxscale_zoom13;
		<PolygonSymbolizer fill-opacity="0.5" fill="#dedbb1"/>
	</Rule>
<!--airport-->
	<Rule>
		<Filter>[aeroway] = 'apron' or [aeroway] = 'aerodrome'</Filter>
		&maxscale_zoom10;
		<PolygonSymbolizer fill-opacity="0.5" fill="#d1d2e0"/>
	</Rule>
<!--airport runway-->
	<Rule>
		<Filter>[aeroway] = 'runway'</Filter>
		&maxscale_zoom10;
		<PolygonSymbolizer fill-opacity="0.75" fill="#b4b4b4"/>
	</Rule>
<!--residential-->
	<Rule>
		&maxscale_zoom10;
		<Filter>[landuse] = 'residential'</Filter>
		<PolygonSymbolizer fill-opacity="0.5" fill="#f0eee4"/>
	</Rule>
</Style>

<!--landmark layer zl 9- -->
<Style name="landmark-lowzoom">
	<Rule>
		<Filter>[leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [leisure] = 'nature_reserve' or [leisure] = 'common' or [leisure] = 'pitch' or [landuse]='grass'</Filter>
		&maxscale_zoom7;
		&minscale_zoom9;
		<PolygonSymbolizer fill-opacity="0.1" fill="#00a635"/>
	</Rule>
	<Rule>
		<Filter>[landuse] = 'forest' or [landuse] = 'recreation_ground' or [landuse] = 'conservation' or [natural] = 'wood' or [landuse] = 'wood' or [natural]='scrub'</Filter>
		&maxscale_zoom7;
		&minscale_zoom9;
		<PolygonSymbolizer fill-opacity=".1" fill="#009a2b"/>
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
		&minscale_zoom16;
		<Filter>[barrier] = 'hedge'</Filter>
		<LineSymbolizer stroke="#90c290" stroke-width="1.5"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		<Filter>[barrier] = 'hedge'</Filter>
		<LineSymbolizer stroke="#90c290" stroke-width="2.5"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		<ElseFilter/>
		<LineSymbolizer stroke="#b4b4b4" stroke-width="0.5"/>
	</Rule>
</Style>

<!--landmark layer zl 10 + -->
<Layer name="landmark" status="on" srs="&osm2pgsql_projection;">
  <StyleName>landmark</StyleName>
  <Datasource>
    <Parameter name="table">
      (select way,aeroway,amenity,landuse,leisure,military,"natural",tourism,way_area
       from &prefix;_polygon
       where 
         aeroway in ('aerodrome','apron','runway') or
         amenity in ('college','grave_yard','hospital','kindergarten','parking',
                     'school','university') or
         landuse in ('cemetery','conservation','forest','grass','grave_yard',
                     'military','recreation_ground','residential','retail','wood') or
         leisure in ('common','golf_course','nature_reserve','park','pitch',
                     'playground','recreation_ground','sports_centre','stadium') or
         military in ('barracks') or
         "natural" in ('beach','scrub','wood') or
         tourism in ('attraction','zoo')
       order by z_order,way_area desc
      ) as leisure
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>

<Layer name="landmark-9" status="on" maxzoom="&max_zoom9;" minzoom="&min_zoom9;" srs="&osm2pgsql_projection;">
	<StyleName>landmark-lowzoom</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,landuse,leisure,"natural",name
       from &prefix;_polygon
       where (landuse in ('recreation_ground','grass','forest','conservation','wood')
              or leisure in ('park','playground','nature_reserve','common','pitch')
	      or "natural" in ('wood','scrub'))
	    and way_area &gt; 200000
       order by z_order,way_area desc
      ) as leisure
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>

<Layer name="landmark-8" status="on" maxzoom="&max_zoom8;" minzoom="&min_zoom8;" srs="&osm2pgsql_projection;">
        <StyleName>landmark-lowzoom</StyleName>
        <Datasource>
                <Parameter name="table">
      (select way,landuse,leisure,"natural",name
       from &prefix;_polygon
       where (landuse in ('recreation_ground','grass','forest','conservation','wood')
              or leisure in ('park','playground','nature_reserve','common','pitch')
              or "natural" in ('wood','scrub'))
            and way_area &gt; 1000000
       order by z_order,way_area desc
      ) as leisure
                </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>

<Layer name="landmark-7" status="on" maxzoom="&max_zoom7;" minzoom="&min_zoom7;" srs="&osm2pgsql_projection;">
        <StyleName>landmark-lowzoom</StyleName>
        <Datasource>
                <Parameter name="table">
      (select way,landuse,leisure,"natural",name
       from &prefix;_polygon
       where (landuse in ('recreation_ground','grass','forest','conservation','wood')
              or leisure in ('park','playground','nature_reserve','common','pitch')
              or "natural" in ('wood','scrub'))
            and way_area &gt; 100000000
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
        where landuse in ('military') and way_area > 200000
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
