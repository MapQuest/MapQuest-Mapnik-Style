<!--background admin polygons-->
<Style name="world">
	<Rule>
		&maxscale_zoom0;
		&minscale_zoom9;
		<PolygonSymbolizer>
			<CssParameter name="fill">#faf8ed</CssParameter>
		</PolygonSymbolizer>
	</Rule>
</Style>
<Style name="coast-poly">
	<Rule>
		&maxscale_zoom10;
		<PolygonSymbolizer>
			<CssParameter name="fill">#f6f3e9</CssParameter>
		</PolygonSymbolizer>
	</Rule>
</Style>

<!-- Urban area -->
<Style name="builtup">
	<Rule>
		&maxscale_zoom7;
		&minscale_zoom8;
		<PolygonSymbolizer>
			<CssParameter name="fill">#ccc7b8</CssParameter>
			<CssParameter name="fill-opacity">.5</CssParameter>		
		</PolygonSymbolizer>
	</Rule>
</Style>

<!-- city polygon -->
<!--<Style name="admin-8">
	<Rule>
		<Filter>[admin_level]='8'</Filter>
		&maxscale_zoom9;
		&minscale_zoom11;
		<PolygonSymbolizer>
			<CssParameter name="fill">#f00</CssParameter>
		</PolygonSymbolizer>
	</Rule>
	<Rule>
		<Filter>[admin_level]='8'</Filter>
		&maxscale_zoom12;
		&minscale_zoom14;
		<PolygonSymbolizer>
			<CssParameter name="fill">#f0f0dd</CssParameter>
		</PolygonSymbolizer>
	</Rule>
	<Rule>
		<Filter>[admin_level]='8'</Filter>
		&maxscale_zoom15;
		<PolygonSymbolizer>
			<CssParameter name="fill">#f00</CssParameter>
		</PolygonSymbolizer>
	</Rule>
</Style>
-->

<Layer name="world" status="on" srs="&srs900913;">
	<StyleName>world</StyleName>
	<Datasource>
		<Parameter name="type">shape</Parameter>
		<Parameter name="file">&world_boundaries;/shoreline_300</Parameter>
	</Datasource>
</Layer>
<Layer name="coast-poly" status="on" srs="&srs900913;">
	<StyleName>coast-poly</StyleName>
	<Datasource>
		<Parameter name="type">shape</Parameter>
		<Parameter name="file">&world_boundaries;/processed_p</Parameter>
	</Datasource>
</Layer>
<Layer name="builtup" status="on" srs="&srsmercator;">
	<StyleName>builtup</StyleName>
	<Datasource>
		<Parameter name="type">shape</Parameter>
		<Parameter name="file">&world_boundaries;/builtup_area</Parameter>
	</Datasource>
</Layer>
<!--<Layer name="admin-8" status="on" srs="&osm2pgsql_projection;;">
	<StyleName>admin-8</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way,admin_level
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('8')
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
-->