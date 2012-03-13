<Style name="shield-text" filter-mode="first">
<!--Interstate shield-->
	<Rule>
		<Filter>[route_type] = 1 and [modifier] = null and [number_length] &lt; 3</Filter>
		&minscale_zoom9;
		<ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" dy="1" placement="line" file="&symbols;/shield_fwy_us2.png" avoid-edges="true" minimum-padding="265" minimum-distance="20" spacing="350">[number]</ShieldSymbolizer>
	</Rule>
	<Rule>
		<Filter>[route_type] = 1 and [modifier] = null and [number_length] &lt; 6</Filter>
		&minscale_zoom9;
		<ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" dy="1" placement="line" file="&symbols;/shield_fwy_us[number_length].png" avoid-edges="true" minimum-padding="265" minimum-distance="20" spacing="350">[number]</ShieldSymbolizer>
	</Rule>

	<Rule>
		<Filter>[route_type] = 1 and [modifier] = null and [number_length] &lt; 3</Filter>
                &maxscale_zoom10;
		<ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" dy="1" placement="line" file="&symbols;/shield_fwy_us2.png" avoid-edges="true" minimum-padding="265" minimum-distance="40" spacing="650">[number]</ShieldSymbolizer>
	</Rule>
	<Rule>
		<Filter>[route_type] = 1 and [modifier] = null and [number_length] &lt; 6</Filter>
                &maxscale_zoom10;
		<ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" dy="1" placement="line" file="&symbols;/shield_fwy_us[number_length].png" avoid-edges="true" minimum-padding="265" minimum-distance="40" spacing="650">[number]</ShieldSymbolizer>
	</Rule>

	<Rule>
		<Filter>[route_type] = 1 and [number_length] &lt; 3</Filter>
                &maxscale_zoom10;
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" dy="5" placement="line" file="&symbols;/shield_fwy_us2[modifier].png" avoid-edges="true" minimum-padding="256" minimum-distance="30" spacing="650" label-position-tolerance="0">[number]</ShieldSymbolizer>
        </Rule>
        <Rule>
		<Filter>[route_type] = 1 and [number_length] = 3</Filter>
                &maxscale_zoom10;
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" dy="5" placement="line" file="&symbols;/shield_fwy_us3[modifier].png" avoid-edges="true" minimum-padding="256" minimum-distance="30" spacing="650" label-position-tolerance="0">[number]</ShieldSymbolizer>
        </Rule>

<!--US Highway shield-->
	<Rule>
		<Filter>[route_type] = 2 and [modifier] = null and [number_length] &lt; 3</Filter>
		<ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" dy="1" placement="line" file="&symbols;/shield_hwy_us2.png" avoid-edges="true" minimum-padding="265" minimum-distance="40" spacing="750">[number]</ShieldSymbolizer>
	</Rule>
	<Rule>
		<Filter>[route_type] = 2 and [modifier] = null and [number_length] = 3</Filter>
		<ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" dy="1" placement="line" file="&symbols;/shield_hwy_us3.png" avoid-edges="true" minimum-padding="265" minimum-distance="40" spacing="750">[number]</ShieldSymbolizer>
	</Rule>

	<Rule>
		<Filter>[route_type] = 2 and [number_length] &lt; 3</Filter>
                &maxscale_zoom10;
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" placement="line" dx="0.5" dy="6" file="&symbols;/shield_hwy_us2[modifier].png" avoid-edges="true" minimum-padding="256" minimum-distance="30" spacing="650" label-position-tolerance="0">[number]</ShieldSymbolizer>
        </Rule>
        <Rule>
		<Filter>[route_type] = 2 and [number_length] = 3</Filter>
                &maxscale_zoom10;
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" dy="6" placement="line" file="&symbols;/shield_hwy_us3[modifier].png" avoid-edges="true" minimum-padding="256" minimum-distance="30" spacing="650" label-position-tolerance="0">[number]</ShieldSymbolizer>
        </Rule>

<!--State Highway shield-->
	<Rule>
		<Filter>[route_type] = 3 and [modifier] = null and [number_length] &lt; 3</Filter>
		<ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" dy="0.5" placement="line" file="&symbols;/shield_sr_us2.png" avoid-edges="true" minimum-padding="265" minimum-distance="40" spacing="750">[number]</ShieldSymbolizer>
	</Rule>

	<Rule>
		<Filter>[route_type] = 3 and [modifier] = null and [number_length] = 3</Filter>
		<ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" dy="0.5" placement="line" file="&symbols;/shield_sr_us3.png" avoid-edges="true" minimum-padding="265" minimum-distance="40" spacing="750">[number]</ShieldSymbolizer>
	</Rule>

	<Rule>
		<Filter>[route_type] = 3 and [number_length] &lt; 3</Filter>
                &maxscale_zoom10;
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" dy="5.5" placement="line" file="&symbols;/shield_sr_us2[modifier].png" avoid-edges="true" minimum-padding="256" minimum-distance="30" spacing="650" label-position-tolerance="0">[number]</ShieldSymbolizer>
        </Rule>
        <Rule>
		<Filter>[route_type] = 3 and [number_length] = 3</Filter>
                &maxscale_zoom10;
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" dy="5.5" placement="line" file="&symbols;/shield_sr_us3[modifier].png" avoid-edges="true" minimum-padding="256" minimum-distance="30" spacing="650" label-position-tolerance="0">[number]</ShieldSymbolizer>
        </Rule>

<!--Minor Route shield-->
        <Rule>
                <Filter>[route_type] > 3 and [number_length] &lt; 3</Filter>
                &maxscale_zoom10;
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_sec_uk2.svg" avoid-edges="true" minimum-padding="256" minimum-distance="50" spacing="750" label-position-tolerance="0">[number]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[route_type] > 3 and [number_length] = 3</Filter>
                &maxscale_zoom10;
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_sec_uk3.svg" avoid-edges="true" minimum-padding="256" minimum-distance="50" spacing="750" label-position-tolerance="0">[number]</ShieldSymbolizer>
        </Rule>
</Style>

<Style name="road-names-1">
<!--motorway text-->
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom17;
		<Filter>not [name].match('^Interstate.*') and not [name].match('^I-.*') and not [name].match('^State.*')</Filter>
		<TextSymbolizer fontset-name="book-fonts" size="12" fill="#272727" halo-fill="rgba(255,255,255,0.65)" halo-radius="2" dy="0" placement="line" max-char-angle-delta="30" text-transform="uppercase" allow-overlap="false" avoid-edges="true" minimum-distance="250" spacing="500"> [name] </TextSymbolizer>
	</Rule>
	<Rule>
                &maxscale_zoom18;
		<Filter>not [name].match('^Interstate.*') and not [name].match('^I-.*') and not [name].match('^State.*')</Filter>
                <TextSymbolizer fontset-name="book-fonts" size="13" fill="#272727" halo-fill="rgba(255,255,255,0.65)" halo-radius="2" dy="0" placement="line" max-char-angle-delta="30" text-transform="uppercase" allow-overlap="false" avoid-edges="true" minimum-distance="250" spacing="500"> [name] </TextSymbolizer>
        </Rule>
</Style>

<Style name="road-names-2-3">
<!--trunk/primary text-->
	<Rule>
		&maxscale_zoom11;
		&minscale_zoom11;
		<TextSymbolizer fontset-name="book-fonts" size="12" fill="#272727" halo-fill="rgba(255,255,255,0.65)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="500"> [name] </TextSymbolizer>
	</Rule>
	<Rule>
		&maxscale_zoom12;
		<TextSymbolizer fontset-name="book-fonts" size="12" fill="#272727" halo-fill="rgba(255,255,255,0.65)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="500"> [name] </TextSymbolizer>
	</Rule>
</Style>

<Style name="road-names-4">
<!--secondary/tertiary text-->
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom13;
		<TextSymbolizer fontset-name="book-fonts" size="10" fill="#272727" halo-fill="rgba(255,255,255,0.65)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="500"> [name] </TextSymbolizer>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		<TextSymbolizer fontset-name="book-fonts" size="12" fill="#272727" halo-fill="rgba(255,255,255,0.65)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="500"> [name] </TextSymbolizer>
	</Rule>
</Style>
<Style name="road-names-5-lowzoom">
<!--residential/unclassified text-->
	<Rule>
                &maxscale_zoom14;
                &minscale_zoom14;
                <TextSymbolizer fontset-name="book-fonts" size="9" fill="#404040" halo-fill="rgba(255,255,255,0.65)" halo-radius="1.5" placement="line" max-char-angle-delta="20" allow-overlap="false" avoid-edges="true" minimum-distance="350" spacing="350" label-position-tolerance="0"> [name] </TextSymbolizer>
        </Rule>
</Style>
<Style name="road-names-5">
<!--residential/unclassified/service text-->
	<Rule>
                &maxscale_zoom15;
                &minscale_zoom17;
                <TextSymbolizer fontset-name="book-fonts" size="10" fill="#272727" halo-fill="rgba(255,255,255,0.65)" halo-radius="2" placement="line" max-char-angle-delta="20" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="500"> [name] </TextSymbolizer>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                <TextSymbolizer fontset-name="book-fonts" size="12" fill="#272727" halo-fill="rgba(255,255,255,0.65)" halo-radius="2" placement="line" max-char-angle-delta="20" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="500"> [name] </TextSymbolizer>
        </Rule>
</Style>

<Style name="walkway-names">
<!--walkway text-->
        <Rule>
                &maxscale_zoom18;
                <TextSymbolizer fontset-name="book-fonts" size="10" fill="#272727" halo-fill="rgba(255,255,255,0.65)" halo-radius="1" placement="line" max-char-angle-delta="20" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250"> [name] </TextSymbolizer>
        </Rule>
</Style>
<Style name="rail-text">
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom18;
                <TextSymbolizer fontset-name="book-fonts" size="9" fill="#464646" halo-fill="rgba(255,255,255,0.30)" halo-radius="3" placement="line" max-char-angle-delta="45" avoid-edges="true" spacing="750" minimum-distance="400">[name]</TextSymbolizer>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <TextSymbolizer fontset-name="book-fonts" size="11" fill="#464646" halo-fill="rgba(255,255,255,0.30)" halo-radius="3" placement="line" max-char-angle-delta="45" avoid-edges="true" spacing="750" minimum-distance="400">[name]</TextSymbolizer>
        </Rule>
</Style>

<Layer name="shield-text-1" status="on" maxzoom="&max_zoom7;" minzoom="&min_zoom7;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text</StyleName>
	<Datasource>
		<Parameter name="table">
			(select (st_dump(st_linemerge(st_collect(way)))).geom AS way,
			   CASE
			     WHEN ref ~* E'^([A-Z]+ )?I[- ]' THEN 1
			     WHEN ref ~* E'^([A-Z]+ )?US[- ]' THEN 2
			     WHEN ref ~* E'^([A-Z]+ )?(CR|CH)[- 0-9]' OR ref ~* E'\\([^/;,]*\\)' THEN 4
			     ELSE 3
			   END AS route_type,
			   substring(ref,E'^[\\(]?(?:[^\(/;,0-9]*[- ])?(?:[A-Za-z]{2,})?([A-Za-z]?[0-9]+[A-Za-z0-9]*)') AS number,
			   char_length(substring(ref,E'^[\\(]?(?:[^\(/;,0-9]*[- ])?(?:[A-Za-z]{2,})?([A-Za-z]?[0-9]+[A-Za-z0-9]*)')) AS number_length,
			   CASE
			     WHEN ref ~* E'^BR[^A-Za-z]' THEN 'BR'
			     WHEN ref ~* E'^BL[^A-Za-z]' THEN 'BL'
			     ELSE substring(upper(ref), E'^[^/;,]*?(ALT|BUS|BYP|CONN|EXT|LINK|LOOP|SCENIC|SPUR|TOLL|TRUCK)')
			   END AS modifier
			 from &prefix;_roads
			 where way &amp;&amp; !bbox! and highway = 'motorway' and ref is not null
			 group by route_type, number, modifier
			 order by route_type
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="shield-text-2" status="on" maxzoom="&max_zoom8;" minzoom="&min_zoom9;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text</StyleName>
	<Datasource>
		<Parameter name="table">
			(select (st_dump(st_linemerge(st_collect(way)))).geom AS way,
			   CASE
			     WHEN ref ~* E'^([A-Z]+ )?I[- ]' THEN 1
			     WHEN ref ~* E'^([A-Z]+ )?US[- ]' THEN 2
			     WHEN ref ~* E'^([A-Z]+ )?(CR|CH)[- 0-9]' OR ref ~* E'\\([^/;,]*\\)' THEN 4
			     ELSE 3
			   END AS route_type,
			   substring(ref,E'^[\\(]?(?:[^\(/;,0-9]*[- ])?(?:[A-Za-z]{2,})?([A-Za-z]?[0-9]+[A-Za-z0-9]*)') AS number,
			   char_length(substring(ref,E'^[\\(]?(?:[^\(/;,0-9]*[- ])?(?:[A-Za-z]{2,})?([A-Za-z]?[0-9]+[A-Za-z0-9]*)')) AS number_length,
			   CASE
			     WHEN ref ~* E'^BR[^A-Za-z]' THEN 'BR'
			     WHEN ref ~* E'^BL[^A-Za-z]' THEN 'BL'
			     ELSE substring(upper(ref), E'^[^/;,]*?(ALT|BUS|BYP|CONN|EXT|LINK|LOOP|SCENIC|SPUR|TOLL|TRUCK)')
			   END AS modifier
			 from &prefix;_roads
			 where highway in ('motorway', 'trunk') and ref is not null
			 group by route_type, number, modifier
			 order by route_type
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="shield-text-3" status="on" maxzoom="&max_zoom10;" minzoom="&min_zoom10;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text</StyleName>
	<Datasource>
		<Parameter name="table">
			(select way,
			   CASE
			     WHEN ref ~* E'^([A-Z]+ )?I[- ]' THEN 1
			     WHEN ref ~* E'^([A-Z]+ )?US[- ]' THEN 2
			     WHEN ref ~* E'^([A-Z]+ )?(CR|CH)[- 0-9]' OR ref ~* E'\\([^/;,]*\\)' THEN 4
			     ELSE 3
			   END AS route_type,
			   substring(ref,E'^[\\(]?(?:[^\(/;,0-9]*[- ])?(?:[A-Za-z]{2,})?([A-Za-z]?[0-9]+[A-Za-z0-9]*)') AS number,
			   char_length(substring(ref,E'^[\\(]?(?:[^\(/;,0-9]*[- ])?(?:[A-Za-z]{2,})?([A-Za-z]?[0-9]+[A-Za-z0-9]*)')) AS number_length,
			   CASE
			     WHEN ref ~* E'^BR[^A-Za-z]' THEN 'BR'
			     WHEN ref ~* E'^BL[^A-Za-z]' THEN 'BL'
			     ELSE substring(upper(ref), E'^[^/;,]*?(ALT|BUS|BYP|CONN|EXT|LINK|LOOP|SCENIC|SPUR|TOLL|TRUCK)')
			   END AS modifier
			 from &prefix;_roads
			 where highway in ('motorway', 'trunk', 'primary') and ref is not null
			 order by route_type
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="shield-text-4" status="on" maxzoom="&max_zoom11;" minzoom="&min_zoom13;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text</StyleName>
	<Datasource>
		<Parameter name="table">
			(select way,
			   CASE
			     WHEN ref ~* E'^([A-Z]+ )?I[- ]' THEN 1
			     WHEN ref ~* E'^([A-Z]+ )?US[- ]' THEN 2
			     WHEN ref ~* E'^([A-Z]+ )?(CR|CH)[- 0-9]' OR ref ~* E'\\([^/;,]*\\)' THEN 4
			     ELSE 3
			   END AS route_type,
			   substring(ref,E'^[\\(]?(?:[^\(/;,0-9]*[- ])?(?:[A-Za-z]{2,})?([A-Za-z]?[0-9]+[A-Za-z0-9]*)') AS number,
			   char_length(substring(ref,E'^[\\(]?(?:[^\(/;,0-9]*[- ])?(?:[A-Za-z]{2,})?([A-Za-z]?[0-9]+[A-Za-z0-9]*)')) AS number_length,
			   CASE
			     WHEN ref ~* E'^BR[^A-Za-z]' THEN 'BR'
			     WHEN ref ~* E'^BL[^A-Za-z]' THEN 'BL'
			     ELSE substring(upper(ref), E'^[^/;,]*?(ALT|BUS|BYP|CONN|EXT|LINK|LOOP|SCENIC|SPUR|TOLL|TRUCK)')
			   END AS modifier
			 from &prefix;_line
			 where highway in ('motorway', 'trunk', 'primary', 'secondary', 'tertiary') and ref is not null
			 order by route_type
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="shield-text-5" status="on" maxzoom="&max_zoom14;" srs="&osm2pgsql_projection;">
        <StyleName>shield-text</StyleName>
        <Datasource>
                <Parameter name="table">
			(select way,
			   CASE
			     WHEN ref ~* E'^([A-Z]+ )?I[- ]' THEN 1
			     WHEN ref ~* E'^([A-Z]+ )?US[- ]' THEN 2
			     WHEN ref ~* E'^([A-Z]+ )?(CR|CH)[- 0-9]' OR ref ~* E'\\([^/;,]*\\)' THEN 4
			     ELSE 3
			   END AS route_type,
			   substring(ref,E'^[\\(]?(?:[^\(/;,0-9]*[- ])?(?:[A-Za-z]{2,})?([A-Za-z]?[0-9]+[A-Za-z0-9]*)') AS number,
			   char_length(substring(ref,E'^[\\(]?(?:[^\(/;,0-9]*[- ])?(?:[A-Za-z]{2,})?([A-Za-z]?[0-9]+[A-Za-z0-9]*)')) AS number_length,
			   CASE
			     WHEN ref ~* E'^BR[^A-Za-z]' THEN 'BR'
			     WHEN ref ~* E'^BL[^A-Za-z]' THEN 'BL'
			     ELSE substring(upper(ref), E'^[^/;,]*?(ALT|BUS|BYP|CONN|EXT|LINK|LOOP|SCENIC|SPUR|TOLL|TRUCK)')
			   END AS modifier
                         from &prefix;_line
                         where highway in ('motorway', 'trunk', 'primary', 'secondary', 'tertiary', 'residential', 'unclassified', 'road') and ref is not null
			 order by route_type
                        ) as roads
                </Parameter>
                &datasource-settings;
        </Datasource>
</Layer>
<Layer name="street-1-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>road-names-1</StyleName>
	<Datasource>
		<Parameter name="table">
			(select way,
			   replace(replace(replace(replace(replace(replace(replace(name,'Road','Rd'),'Street','St'),'Avenue','Ave'),'Drive','Dr'),'Lane','Ln'),'Parkway','Pkwy'),'Boulevard','Blvd') AS name
			 from &prefix;_roads
			 where highway = 'motorway' and name is not null and (ref is null or name != ref)
			   and (junction is null or junction != 'roundabout')
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-2-3-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>road-names-2-3</StyleName>
	<Datasource>
		<Parameter name="table">
			(select way,
			   replace(replace(replace(replace(replace(replace(replace(name,'Road','Rd'),'Street','St'),'Avenue','Ave'),'Drive','Dr'),'Lane','Ln'),'Parkway','Pkwy'),'Boulevard','Blvd') AS name
			 from &prefix;_roads
			 where highway in ('trunk', 'primary') and name is not null
			   and (ref is null or name != ref) and (junction is null or junction != 'roundabout')
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-4-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>road-names-4</StyleName>
	<Datasource>
		<Parameter name="table">
			(select way,
			   replace(replace(replace(replace(replace(replace(replace(name,'Road','Rd'),'Street','St'),'Avenue','Ave'),'Drive','Dr'),'Lane','Ln'),'Parkway','Pkwy'),'Boulevard','Blvd') AS name
			 from &prefix;_line
			 where highway in ('secondary', 'tertiary') and name is not null
			   and (ref is null or name != ref) and (junction is null or junction != 'roundabout')
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-5-text-lowzoom" status="on" srs="&osm2pgsql_projection;">
	<StyleName>road-names-5-lowzoom</StyleName>
	<Datasource>
		<Parameter name="table">
			(select way,
			   replace(replace(replace(replace(replace(replace(replace(name,'Road','Rd'),'Street','St'),'Avenue','Ave'),'Drive','Dr'),'Lane','Ln'),'Parkway','Pkwy'),'Boulevard','Blvd') AS name
			 from &prefix;_line
			 where highway in ('residential', 'unclassified', 'road')
			   and name is not null and (ref is null or name != ref)
			   and (junction is null or junction != 'roundabout')
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-5-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>road-names-5</StyleName>
	<Datasource>
		<Parameter name="table">
			(select way,
			   replace(replace(replace(replace(replace(replace(replace(name,'Road','Rd'),'Street','St'),'Avenue','Ave'),'Drive','Dr'),'Lane','Ln'),'Parkway','Pkwy'),'Boulevard','Blvd') AS name
			 from &prefix;_line
			 where highway in ('residential', 'unclassified', 'road', 'service')
			   and name is not null and (ref is null or name != ref)
			   and (junction is null or junction != 'roundabout')
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<!--rail text data-->
<Layer name="rail-text" status="on" srs="&osm2pgsql_projection;">
   <StyleName>rail-text</StyleName>
   <Datasource>
      <Parameter name="table">
             (select way,name
             from &prefix;_line
             where railway in ('rail', 'light_rail', 'subway', 'monorail', 'station')
             and name is not null) as roads
      </Parameter>
      &datasource-settings;
   </Datasource>
</Layer>
<Layer name="walkway-text" status="on" srs="&osm2pgsql_projection;">
        <StyleName>walkway-names</StyleName>
        <Datasource>
                <Parameter name="table">
			(select way, name from &prefix;_line
			 where highway in ('pedestrian', 'footway', 'path')
			   and name is not null and (ref is null or name != ref)
                        ) as roads
                </Parameter>
                &datasource-settings;
        </Datasource>
</Layer>
