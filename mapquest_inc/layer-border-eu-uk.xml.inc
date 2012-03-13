<!--County boundary-->
<Style name="county border">
	<Rule>
		&maxscale_zoom9;
		&minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="#d2d2d2" stroke-width="0.5" stroke-opacity="1"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#a0a0a0" stroke-width="0.5" stroke-opacity="1.0"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                <LineSymbolizer stroke-linejoin="round" stroke="#d2d2d2" stroke-width="1" stroke-opacity="1"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#a0a0a0" stroke-width="1" stroke-opacity="1.0"/>
        </Rule>
</Style>

<!--state border-->
<Style name="state border">
        <Rule>
                &maxscale_zoom4;
                &minscale_zoom4;
                <LineSymbolizer stroke-linejoin="round" stroke="#829682" stroke-width=".5" stroke-opacity="1"/>
        </Rule>
        <Rule>
                &maxscale_zoom5;
                &minscale_zoom5;
                <LineSymbolizer stroke-linejoin="round" stroke="#646464" stroke-width=".5" stroke-opacity="1"/>
        </Rule>
        <Rule>
                &maxscale_zoom6;
                &minscale_zoom7;
                <LineSymbolizer stroke-linejoin="round" stroke="#a0a0a0" stroke-width=".5" stroke-opacity="1"/>
        </Rule>
        <Rule>
                &maxscale_zoom8;
                &minscale_zoom8;
                <LineSymbolizer stroke-linejoin="round" stroke="#e3e0da" stroke-width="1" stroke-opacity="1"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#a0a0a0" stroke-width="1" stroke-opacity="1.0"/>
        </Rule>
        <Rule>
                &maxscale_zoom9;
                <LineSymbolizer stroke-linejoin="round" stroke="#e3e0da" stroke-width="1" stroke-opacity="1"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#696969" stroke-width="1" stroke-opacity="1.0"/>
        </Rule>

</Style>

<!--country border-->
<Style name="country border">
        <Rule>
                &maxscale_zoom4;
                &minscale_zoom5;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,222,140)" stroke-width="2" stroke-opacity="1.0"/>
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(76,100,76)" stroke-width="1"  stroke-opacity="1.0"/>
        </Rule>
        <Rule>
                &maxscale_zoom6;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(190,222,140)" stroke-width="1" stroke-opacity="1.0"/>
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(76,100,76)" stroke-width="1" stroke-opacity="1.0"/>
        </Rule>
</Style>

<!-- county border 13- -->
<Layer name="county border 13" status="on" minzoom="&min_zoom13;" srs="&osm2pgsql_projection;">
	<StyleName>county border</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('6')
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>

<!-- county border 14+ -->
<Layer name="county border 14" status="on" maxzoom="&max_zoom14;" srs="&osm2pgsql_projection;">
        <StyleName>county border</StyleName>
        <Datasource>
                <Parameter name="table">
   (select way
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('6')
    ) as admin</Parameter>
        &datasource-settings;
        </Datasource>
</Layer>

<!-- state layer 5- -->
<Layer name="state border 5" status="on" minzoom="&min_zoom5;" srs="&osm2pgsql_projection;">
        <StyleName>state border</StyleName>
        <Datasource>
                <Parameter name="table">
   (select st_simplify(way, 300) as way
    from &prefix;_roads
    where
     &prefix;_roads.way &amp;&amp; !bbox! and
     "boundary"='administrative'
     and admin_level = '4'
    ) as admin</Parameter>
        &datasource-settings;
        </Datasource>
</Layer>

<!-- state layer 6-7 -->
<Layer name="state border 7" status="on" maxzoom="&max_zoom6;" minzoom="&min_zoom7;" srs="&osm2pgsql_projection;">
	<StyleName>state border</StyleName>
	<Datasource>
		<Parameter name="table">
   (select st_simplify(way, 300) as way
    from &prefix;_roads
    where 
     &prefix;_roads.way &amp;&amp; !bbox! and
     "boundary"='administrative'
     and admin_level = '4'
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>

<!-- state layer 8-13 -->
<Layer name="state border 8" status="on" maxzoom="&max_zoom8;" minzoom="&min_zoom13;" srs="&osm2pgsql_projection;">
        <StyleName>state border</StyleName>
        <Datasource>
                <Parameter name="table">
   (select way
    from &prefix;_roads
    where 
     &prefix;_roads.way &amp;&amp; !bbox! and
     "boundary"='administrative'
     and admin_level = '4'
    ) as admin</Parameter>
        &datasource-settings;
        </Datasource>
</Layer>

<!-- state layer 14+ -->
<Layer name="state border 14" status="on" maxzoom="&max_zoom14;" srs="&osm2pgsql_projection;">
	<StyleName>state border</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('4')
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>

<!-- country layer 13- -->
<Layer name="country border 13" status="on" minzoom="&min_zoom13;" srs="&osm2pgsql_projection;">
	<StyleName>country border</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('2')
     ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>

<!-- country layer 14+ -->
<Layer name="country border 14" status="on" maxzoom="&max_zoom14;" srs="&osm2pgsql_projection;">
        <StyleName>country border</StyleName>
        <Datasource>
                <Parameter name="table">
   (select way,admin_level
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('2')) as admin</Parameter>
        &datasource-settings;
        </Datasource>
</Layer>

