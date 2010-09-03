<Style name="road-bridges-casing">
	<!--motorway casing-->
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="12"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="16"/>
	</Rule>
	<!--interchange casing-->
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="5"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="10"/>
	</Rule>
	<!--trunk casing-->
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#33804f" stroke-width="6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#33804f" stroke-width="10"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#33804f" stroke-width="12"/>
	</Rule>
	<!--primary casing-->
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#cc4747" stroke-width="6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#cc4747" stroke-width="8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#cc4747" stroke-width="10"/>
	</Rule>
	<!--secondary casing-->
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#bf9f60" stroke-width="6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#bf9f60" stroke-width="8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#bf9f60" stroke-width="10"/>
	</Rule>
	<!--tertiary casing-->
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#999999" stroke-width="5"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#999999" stroke-width="7"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#999999" stroke-width="8"/>
	</Rule>
</Style>
<Style name="road-bridges-fill">
	<!--motorway-->
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="5"/><LineSymbolizer stroke-linejoin="round" stroke="#d3dbeb" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="7"/><LineSymbolizer stroke-linejoin="round" stroke="#d3dbeb" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="10"/><LineSymbolizer stroke-linejoin="round" stroke="#d3dbeb" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<!--interchange-->
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<!--trunk-->
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#56bf7d" stroke-width="4"/><LineSymbolizer stroke-linejoin="round" stroke="#f3fda8" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#56bf7d" stroke-width="6"/><LineSymbolizer stroke-linejoin="round" stroke="#f3fda8" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#56bf7d" stroke-width="8"/><LineSymbolizer stroke-linejoin="round" stroke="#f3fda8" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<!--primary-->
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#ff9999" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#ff9999" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#ff9999" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<!--secondary-->
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#faeba2" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#faeba2" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#faeba2" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<!--tertiary and residential-->
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<!--pedestrian-->
	<Rule>
		<Filter>[highway] = 'pedestrian' or [highway]='service' or [highway]='footway' or [highway]='path'</Filter>
		&maxscale_zoom16;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="#808040" stroke-width="1" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'pedestrian' or [highway]='service' or [highway]='footway' or [highway]='path'</Filter>
		&maxscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#808040" stroke-width="2" stroke-opacity=".3"/>
	</Rule>
	<!--rail-->
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'monorail'</Filter>
		&maxscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#afafaf" stroke-width="2.5"/>
	</Rule>
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'monorail'</Filter>
		&maxscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="1.5" stroke-dasharray="5,4"/>
	</Rule>
</Style>
<Layer name="bridges" status="on" srs="&osm2pgsql_projection;">
	<StyleName>road-bridges-casing</StyleName>
	<StyleName>road-bridges-fill</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,aeroway,railway,layer,horse,bicycle,foot,bridge
       from &prefix;_line
       where (highway is not null
              or aeroway in ('runway','taxiway')
              or railway in ('light_rail','subway'))
         and bridge not in ('no','false','0')
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
	</Datasource>
</Layer>
