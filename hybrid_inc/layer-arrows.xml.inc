<!-- Direction arrows -->
<Style name="direction-arrows" filter-mode="first">
<!-- Forward Arrows -->
	<!--standard roads-->
	<Rule>
		<Filter>[direction] = '1' and ([highway] = 'trunk' or [highway] = 'primary' or [highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'residential' or [highway] = 'road')</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<MarkersSymbolizer fill="rgb(10,10,10)" opacity="0.9" stroke-width="0" max-error="0.5" allow-overlap="false" transform="scale(0.7)"/>
	</Rule>
	<Rule>
		<Filter>[direction] = '1' and ([highway] = 'trunk' or [highway] = 'primary' or [highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'residential' or [highway] = 'road')</Filter>
		&maxscale_zoom18;
		<MarkersSymbolizer fill="rgb(10,10,10)" opacity="0.9" stroke-width="0" max-error="0.5" allow-overlap="false"/>
	</Rule>
	<!--motorways and interchanges-->
	<Rule>
		<Filter>[direction] = '1'</Filter>
		&maxscale_zoom17;
                &minscale_zoom17;
                <MarkersSymbolizer fill="rgb(10,10,10)" opacity="0.9" stroke-width="0" max-error="0.5" allow-overlap="false" transform="scale(0.6)"/>
	</Rule>
        <Rule>
		<Filter>[direction] = '1'</Filter>
                &maxscale_zoom18;
                <MarkersSymbolizer fill="rgb(10,10,10)" opacity="0.9" stroke-width="0" max-error="0.5" allow-overlap="false" transform="scale(0.8)"/>
        </Rule>
<!-- Reverse Arrows -->
	<!--standard roads-->
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'residential' or [highway] = 'road'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<MarkersSymbolizer fill="rgb(10,10,10)" opacity="0.9" stroke-width="0" max-error="0.5" allow-overlap="false" transform="scale(0.7) rotate(180)"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'residential' or [highway] = 'road'</Filter>
		&maxscale_zoom18;
		<MarkersSymbolizer fill="rgb(10,10,10)" opacity="0.9" stroke-width="0" max-error="0.5" allow-overlap="false" transform="rotate(180)"/>
	</Rule>
	<!--motorways and interchanges-->
	<Rule>
		&maxscale_zoom17;
                &minscale_zoom17;
                <MarkersSymbolizer fill="rgb(10,10,10)" opacity="0.9" stroke-width="0" max-error="0.5" allow-overlap="false" transform="scale(0.6) rotate(180)"/>
	</Rule>
        <Rule>
                &maxscale_zoom18;
                <MarkersSymbolizer fill="rgb(10,10,10)" opacity="0.9" stroke-width="0" max-error="0.5" allow-overlap="false" transform="scale(0.8) rotate(180)"/>
        </Rule>
</Style>

<Layer name="direction-arrows" status="on" srs="&osm2pgsql_projection;">
	<StyleName>direction-arrows</StyleName>
	<Datasource>
		<Parameter name="table">
			(select way, highway, case when oneway = '-1' then '-1' else '1' end as direction
			 from &prefix;_line
			 where oneway in ('yes', 'true', '1', '-1')
			   and highway in ('motorway_link','trunk','trunk_link','primary','primary_link', 'secondary',
			                   'secondary_link','tertiary','unclassified', 'residential', 'road', 'service','track')
			) as directions
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
