<Style name="shield-text" filter-mode="first">
	<!--UK Motorway Shield-->
        <Rule>
                <Filter>[ref].match('^M.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="750">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[ref].match('^M.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="750">[ref]</ShieldSymbolizer>
        </Rule>

	<!--UK Secondary Road Shield-->
        <Rule>
                <Filter>[ref].match('^A.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="rgb(250,225,75)" dx="0.5" placement="line" file="&symbols;/shield_trk_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="750">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[ref].match('^A.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="rgb(250,225,75)" dx="0.5" placement="line" file="&symbols;/shield_trk_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="750">[ref]</ShieldSymbolizer>
        </Rule>

	<!--UK Standard White Road Shield-->
        <Rule>
                <Filter>[length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_sec_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="50" spacing="750">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_sec_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="50" spacing="750">[ref]</ShieldSymbolizer>
        </Rule>
</Style>

<Style name="road-names-1">
<!--motorway text-->
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom17;
		<TextSymbolizer fontset-name="bold-fonts" size="12" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" dy="0" placement="line" max-char-angle-delta="30" text-transform="uppercase" allow-overlap="false" avoid-edges="true" minimum-distance="250" spacing="500" label-position-tolerance="0"> [name] </TextSymbolizer>
	</Rule>
	<Rule>
                &maxscale_zoom18;
                <TextSymbolizer fontset-name="bold-fonts" size="13" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" dy="0" placement="line" max-char-angle-delta="30" text-transform="uppercase" allow-overlap="false" avoid-edges="true" minimum-distance="250" spacing="500" label-position-tolerance="0"> [name] </TextSymbolizer>
        </Rule>
</Style>

<Style name="road-names-2">
<!--trunk text-->
        <Rule>
                &maxscale_zoom11;
                &minscale_zoom13;
                <TextSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                <TextSymbolizer fontset-name="bold-fonts" size="12" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
        </Rule>
</Style>

<Style name="road-names-3">
<!--primary text-->
	<Rule>
		&maxscale_zoom13;
		&minscale_zoom15;
		<TextSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		<TextSymbolizer fontset-name="bold-fonts" size="12" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
	</Rule>
</Style>

<Style name="road-names-4">
<!--secondary text-->
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<TextSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		<TextSymbolizer fontset-name="bold-fonts" size="12" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
	</Rule>
</Style>

<Style name="road-names-5">
<!--tertiary/residential/unclassified/service text-->
	<Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <TextSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="20" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                <TextSymbolizer fontset-name="bold-fonts" size="12" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="20" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
        </Rule>
</Style>

<Style name="walkway-names">
<!--walkway text-->
        <Rule>
                &maxscale_zoom18;
                <TextSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="1" placement="line" max-char-angle-delta="20" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
        </Rule>
</Style>
<Style name="rail-text">
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom18;
                <TextSymbolizer fontset-name="book-fonts" size="9" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="45" avoid-edges="true" spacing="750" minimum-distance="400">[name]</TextSymbolizer>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <TextSymbolizer fontset-name="book-fonts" size="11" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="45" avoid-edges="true" spacing="750" minimum-distance="400">[name]</TextSymbolizer>
        </Rule>
</Style>

<Layer name="shield-text-1" status="on" maxzoom="&max_zoom8;" minzoom="&min_zoom9;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text</StyleName>
	<Datasource>
		<Parameter name="table">
			(select way, highway,
			   substring(ref,E'^([^/;,]*)') as ref,
                           char_length(substring(ref,E'^([^/;,]*)')) as length
			 from &prefix;_roads
			 where highway = 'motorway'
			   and ref is not null
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="shield-text-2" status="on" maxzoom="&max_zoom10;" minzoom="&min_zoom11;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text</StyleName>
	<Datasource>
		<Parameter name="table">
			(select way, highway,
			   substring(ref,E'^([^/;,]*)') as ref,
                           char_length(substring(ref,E'^([^/;,]*)')) as length
			 from &prefix;_roads
			 where highway in ('motorway', 'trunk')
			   and ref is not null
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="shield-text-3" status="on" maxzoom="&max_zoom12;" minzoom="&min_zoom12;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text</StyleName>
	<Datasource>
		<Parameter name="table">
			(select way, highway,
			   substring(ref,E'^([^/;,]*)') as ref,
                           char_length(substring(ref,E'^([^/;,]*)')) as length
			 from &prefix;_roads
			 where highway in ('motorway', 'trunk', 'primary')
			   and ref is not null
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="shield-text-4" status="on" maxzoom="&max_zoom13;" minzoom="&min_zoom15;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text</StyleName>
	<Datasource>
		<Parameter name="table">
			(select way, highway,
			   substring(ref,E'^([^/;,]*)') as ref,
                           char_length(substring(ref,E'^([^/;,]*)')) as length
			 from &prefix;_roads
			 where highway in ('motorway', 'trunk', 'primary', 'secondary')
			   and ref is not null
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="shield-text-5" status="on" maxzoom="&max_zoom16;" srs="&osm2pgsql_projection;">
        <StyleName>shield-text</StyleName>
        <Datasource>
                <Parameter name="table">
			(select way, highway,
			   substring(ref,E'^([^/;,]*)') as ref,
                           char_length(substring(ref,E'^([^/;,]*)')) as length
                         from &prefix;_line
                         where highway in ('motorway', 'trunk', 'primary', 'secondary', 'tertiary', 'residential', 'unclassified', 'road')
			   and ref is not null
                        ) as roads
                </Parameter>
                &datasource-settings;
        </Datasource>
</Layer>

<Layer name="street-1-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>road-names-1</StyleName>
	<Datasource>
		<Parameter name="table">
                        (select way, name from &prefix;_roads
			 where highway = 'motorway' and name is not null and (ref is null or name != ref)
			   and (junction is null or junction != 'roundabout')
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-2-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>road-names-2</StyleName>
	<Datasource>
		<Parameter name="table">
                        (select way, name from &prefix;_roads
			 where highway = 'trunk' and name is not null and (ref is null or name != ref)
			   and (junction is null or junction != 'roundabout')
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-3-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>road-names-3</StyleName>
	<Datasource>
		<Parameter name="table">
                        (select way, name from &prefix;_roads
			 where highway = 'primary' and name is not null and (ref is null or name != ref)
			   and (junction is null or junction != 'roundabout')
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-4-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>road-names-4</StyleName>
	<Datasource>
		<Parameter name="table">
                        (select way, name from &prefix;_roads
			 where highway = 'secondary' and name is not null and (ref is null or name != ref)
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
                        (select way, name from &prefix;_line
			 where highway in ('tertiary', 'residential', 'unclassified', 'road', 'service')
			   and (junction is null or junction != 'roundabout')
			   and name is not null and (ref is null or name != ref)
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
                         where highway in ('pedestrian', 'footway', 'path', 'steps')
			   and name is not null and (ref is null or name != ref)
                        ) as roads
                </Parameter>
                &datasource-settings;
        </Datasource>
</Layer>
