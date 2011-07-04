<!--cycleway-->
<Style name="cycleway">
	<Rule>
		<Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated') or [highway]='bridleway'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke="#a0a0c8" stroke-width="2.0" stroke-opacity="1" stroke-dasharray="0,1,6,6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated') or [highway]='bridleway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#a0a0c8" stroke-width="3.5" stroke-opacity="1" stroke-dasharray="0,1,12,10" stroke-linecap="round"/>
	</Rule>
</Style>
<!-- cycleway casing -->
<Style name="cycleway casing">
	<Rule>
		<Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated') or [highway]='bridleway'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke="#8080bd" stroke-width="1.3" stroke-opacity="1" stroke-dasharray="8,3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated') or [highway]='bridleway'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke="#8080bd" stroke-width="3.5" stroke-opacity="1" stroke-dasharray="8,5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated') or [highway]='bridleway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#8080bd" stroke-width="5.5" stroke-opacity="1" stroke-dasharray="14,9" stroke-linecap="round"/>
	</Rule>
</Style>
<Layer name="cycleway" status="on" srs="&osm2pgsql_projection;">
	<StyleName>cycleway casing</StyleName>
	<StyleName>cycleway</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-cycleway;) as data
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
