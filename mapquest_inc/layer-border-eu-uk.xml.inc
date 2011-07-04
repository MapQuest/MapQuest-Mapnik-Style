<!--County boundary-->
<Style name="county border">
	<Rule>
		<Filter>[admin_level]='6'</Filter>
		&maxscale_zoom9;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#8c8c8c" stroke-width="1" stroke-dasharray="6,2,2,2" stroke-opacity=".25"/>
	</Rule>
	<Rule>
		<Filter>[admin_level]='6'</Filter>
		&maxscale_zoom12;
		<LineSymbolizer stroke-linejoin="round" stroke="#aaaaaa" stroke-width="1" stroke-dasharray="6,2,2,2" stroke-opacity=".25"/>
	</Rule>
</Style>
<!--State boundary-->
<Style name="state border">
	<Rule>
		<Filter>[admin_level]='4'</Filter>
		&maxscale_zoom6;
		&minscale_zoom7;
		<LineSymbolizer stroke-linejoin="round" stroke="#3c5030" stroke-width=".5" stroke-dasharray="6,1,1,1" stroke-opacity=".15"/>
	</Rule>
	<Rule>
		<Filter>[admin_level]='4'</Filter>
		&maxscale_zoom8;
		<LineSymbolizer stroke-linejoin="round" stroke="#000" stroke-width="1" stroke-dasharray="12,2,2,2" stroke-opacity=".5"/>
	</Rule>
</Style>
<!--Country boundary-->
<Style name="country border">
	<Rule>
		<Filter>[admin_level]='2'</Filter>
		&maxscale_zoom4;
		<LineSymbolizer stroke-linejoin="round" stroke="#6d804c" stroke-width=".5" stroke-opacity=".25"/>
	</Rule>
	<Rule>
		<Filter>[admin_level]='2'</Filter>
		&maxscale_zoom5;
		<LineSymbolizer stroke-linejoin="round" stroke="#6d804c" stroke-width="1" stroke-dasharray="6,2,2,2" stroke-opacity=".35"/>
	</Rule>
</Style>
<Layer name="county border" status="on" srs="&osm2pgsql_projection;">
	<StyleName>county border</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way,admin_level
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('6')
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="state border" status="on" srs="&osm2pgsql_projection;">
	<StyleName>state border</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way,admin_level
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('4')
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="country border" status="on" srs="&osm2pgsql_projection;">
	<StyleName>country border</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way,admin_level
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('2')
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
