<!--County boundary casing-->
<Style name="county border casing">
	<Rule>
		<Filter>[admin_level]='6'</Filter>
		&maxscale_zoom9;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#bfbfbf" stroke-width="4" stroke-opacity=".05"/>
	</Rule>
	<Rule>
		<Filter>[admin_level]='6'</Filter>
		&maxscale_zoom12;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#bfbfbf" stroke-width="4" stroke-opacity=".2"/>
	</Rule>
	<Rule>
		<Filter>[admin_level]='6'</Filter>
		&maxscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#bfbfbf" stroke-width="8" stroke-opacity=".2"/>
	</Rule>
</Style>
<!--State boundary casing-->
<Style name="state border casing lowzoom">
	<Rule>
		<Filter>[admin_level]='4'</Filter>
		&maxscale_zoom5;
		&minscale_zoom7;
		<LineSymbolizer stroke-linejoin="round" stroke="#524f50" stroke-width="3" stroke-opacity=".01"/>
	</Rule>
</Style>
<Style name="state border casing">
	<Rule>
		<Filter>[admin_level]='4'</Filter>
		&maxscale_zoom8;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="3" stroke-opacity=".5"/>
	</Rule>
</Style>
<!--Country boundary casing-->
<Style name="country border casing lowzoom">
	<Rule>
		<Filter>[admin_level]='2'</Filter>
		&maxscale_zoom5;
		&minscale_zoom7;
		<LineSymbolizer stroke-linejoin="round" stroke="#bfbf00" stroke-width="3" stroke-opacity=".1"/>
	</Rule>
</Style>
<Style name="country border casing">
	<Rule>
		<Filter>[admin_level]='2'</Filter>
		&maxscale_zoom8;
		<LineSymbolizer stroke-linejoin="round" stroke="#bfbf00" stroke-width="3" stroke-opacity=".1"/>
	</Rule>
</Style>
<Layer name="county border casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>county border casing</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way,admin_level
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('6')
    ) as admin
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="state border casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>state border casing</StyleName>
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
<Layer name="country border casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>country border casing</StyleName>
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
<!-- lowzoom variants with simplified geometries to not cause incredible
     amounts of load at low zoom. -->
<Layer name="state border casing lowzoom" status="on" srs="&osm2pgsql_projection;">
	<StyleName>state border casing lowzoom</StyleName>
	<Datasource>
		<Parameter name="table">
   (select st_simplify(way,300) as way,admin_level
    from &prefix;_roads
    where "boundary"='administrative'
     and admin_level = '4'
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="country border casing lowzoom" status="on" srs="&osm2pgsql_projection;">
	<StyleName>country border casing lowzoom</StyleName>
	<Datasource>
		<Parameter name="table">
   (select st_simplify(way,300) as way,admin_level
    from &prefix;_roads
    where "boundary"='administrative'
     and admin_level = '2'
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
