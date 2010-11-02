<Style name="overpass-casing">
	<!--street 4 casing-->
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#b3b1b2" stroke-width="6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#b3b1b2" stroke-width="8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#b3b1b2" stroke-width="10"/>
	</Rule>
	<!--street 3 casing-->
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#ccad70" stroke-width="6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#ccad70" stroke-width="10"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#ccad70" stroke-width="12"/>
	</Rule>
	<!--street 2 casing-->
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#d0a14a" stroke-width="6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#d0a14a" stroke-width="10"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#d0a14a" stroke-width="12"/>
	</Rule>
	<!--interchange casing-->
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="#b89e7d" stroke-width="5"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#b89e7d" stroke-width="6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#b89e7d" stroke-width="10"/>
	</Rule>
	<!--street 1 casing-->
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = null or [toll] = 'no')</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = null or [toll] = 'no')</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="10"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = null or [toll] = 'no')</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="12"/>
	</Rule>
	<!--street 1 toll casing-->
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true')</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#487c48" stroke-width="8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true')</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#487c48" stroke-width="10"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true')</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#487c48" stroke-width="12"/>
	</Rule>
</Style>
<Style name="overpass">
<!--rail-->
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'monorail'</Filter>
		&maxscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#afafaf" stroke-width="2.5"/>
	</Rule>
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'monorail'</Filter>
		&maxscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="1.5" stroke-dasharray="5,4"/>
	</Rule>
<!--street 4-->
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="6" stroke-linecap="round"/>
	</Rule>
<!--street 3-->
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#f6f0a3" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#f6f0a3" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#f6f0a3" stroke-width="8" stroke-linecap="round"/>
	</Rule>
<!--street 2-->
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#f5d290" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#f5d290" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#f5d290" stroke-width="8" stroke-linecap="round"/>
	</Rule>
<!--interchange-->
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="#dcbf95" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#dcbf95" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#dcbf95" stroke-width="6" stroke-linecap="round"/>
	</Rule>
<!--street 1-->
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = null or [toll] = 'no')</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="5"/>
		<LineSymbolizer stroke-linejoin="round" stroke="#d3dbeb" stroke-width="2"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = null or [toll] = 'no')</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="7"/>
		<LineSymbolizer stroke-linejoin="round" stroke="#d3dbeb" stroke-width="3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = null or [toll] = 'no')</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="10"/>
		<LineSymbolizer stroke-linejoin="round" stroke="#d3dbeb" stroke-width="4"/>
	</Rule>
<!--street 1 toll-->
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true')</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#86c269" stroke-width="5"/>
		<LineSymbolizer stroke-linejoin="round" stroke="#d5e8d8" stroke-width="2"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true')</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#86c269" stroke-width="7"/>
		<LineSymbolizer stroke-linejoin="round" stroke="#d5e8d8" stroke-width="3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true')</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#86c269" stroke-width="10"/>
		<LineSymbolizer stroke-linejoin="round" stroke="#d5e8d8" stroke-width="4"/>
	</Rule>
</Style>

<Layer name="overpass" status="on" srs="&osm2pgsql_projection;">
	<StyleName>overpass-casing</StyleName>
	<StyleName>overpass</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,toll,aeroway,railway,layer,horse,bicycle,foot,bridge
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
