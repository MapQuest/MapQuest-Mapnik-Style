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
<!--State boundary-->
<Style name="state border lowzoom">
	<Rule>
		<Filter>[admin_level]='4'</Filter>
		&maxscale_zoom4;
		&minscale_zoom4;
		<LineSymbolizer stroke-linejoin="round" stroke="#6d804c" stroke-width=".6" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[admin_level]='4'</Filter>
		&maxscale_zoom5;
		&minscale_zoom7;
		<LineSymbolizer stroke-linejoin="round" stroke="#3c5030" stroke-width=".8" stroke-dasharray="6,1,1,1" stroke-opacity=".5"/>
	</Rule>
</Style>
<Style name="state border">
	<Rule>
		<Filter>[admin_level]='4'</Filter>
		&maxscale_zoom8;
		<LineSymbolizer stroke-linejoin="round" stroke="#000" stroke-width="1" stroke-dasharray="12,2,2,2" stroke-opacity=".5"/>
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
<!--Country boundary-->
<Style name="country border lowzoom">
	<Rule>
		<Filter>[admin_level]='2'</Filter>
		&maxscale_zoom2;
		&minscale_zoom2;
		<LineSymbolizer stroke-linejoin="round" stroke="#6d804c" stroke-width=".5" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[admin_level]='2'</Filter>
		&maxscale_zoom3;
		&minscale_zoom4;
		<LineSymbolizer stroke-linejoin="round" stroke="#6d804c" stroke-width=".5" stroke-opacity=".25"/>
	</Rule>
	<Rule>
		<Filter>[admin_level]='2'</Filter>
		&maxscale_zoom5;
		&minscale_zoom7;
		<LineSymbolizer stroke-linejoin="round" stroke="#6d804c" stroke-width="1" stroke-dasharray="6,2,2,2" stroke-opacity=".35"/>
	</Rule>
</Style>
<Style name="country border">
	<Rule>
		<Filter>[admin_level]='2'</Filter>
		&maxscale_zoom8;
		<LineSymbolizer stroke-linejoin="round" stroke="#6d804c" stroke-width="1" stroke-dasharray="6,2,2,2" stroke-opacity=".35"/>
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
<Layer name="county border" status="on" srs="&osm2pgsql_projection;">
	<StyleName>county border</StyleName>
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

<!-- lowzoom variants with simplified geometries to not cause incredible
     amounts of load at low zoom. -->
<Layer name="state border lowzoom" status="on" srs="&osm2pgsql_projection;">
	<StyleName>state border lowzoom</StyleName>
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
<Layer name="country border lowzoom" status="on" srs="&osm2pgsql_projection;">
	<StyleName>country border lowzoom</StyleName>
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
