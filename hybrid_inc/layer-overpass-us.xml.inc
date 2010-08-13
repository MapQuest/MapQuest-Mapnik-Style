<Style name="road-bridges-casing">
<!--street 1 casing-->
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#495f8c</CssParameter>
			<CssParameter name="stroke-width">8</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#495f8c</CssParameter>
			<CssParameter name="stroke-width">10</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#495f8c</CssParameter>
			<CssParameter name="stroke-width">12</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
<!--interchange casing-->
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer>
			<CssParameter name="stroke">#b89e7d</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#b89e7d</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#b89e7d</CssParameter>
			<CssParameter name="stroke-width">10</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
<!--street 2 casing-->
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#d0a14a</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#d0a14a</CssParameter>
			<CssParameter name="stroke-width">10</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#d0a14a</CssParameter>
			<CssParameter name="stroke-width">12</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
<!--street 3 casing-->
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#ccad70</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#ccad70</CssParameter>
			<CssParameter name="stroke-width">10</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#ccad70</CssParameter>
			<CssParameter name="stroke-width">12</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
<!--street 4 casing-->
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#b3b1b2</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#b3b1b2</CssParameter>
			<CssParameter name="stroke-width">8</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#b3b1b2</CssParameter>
			<CssParameter name="stroke-width">10</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>

</Style>
<Style name="road-bridges-fill">
<!--street 1-->
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#6c91d9</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
		<LineSymbolizer>
			<CssParameter name="stroke">#d3dbeb</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#6c91d9</CssParameter>
			<CssParameter name="stroke-width">7</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
		<LineSymbolizer>
			<CssParameter name="stroke">#d3dbeb</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#6c91d9</CssParameter>
			<CssParameter name="stroke-width">10</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
		<LineSymbolizer>
			<CssParameter name="stroke">#d3dbeb</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
<!--interchange-->
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer>
			<CssParameter name="stroke">#dcbf95</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#dcbf95</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#dcbf95</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
<!--street 2-->
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#f5d290</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#f5d290</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#f5d290</CssParameter>
			<CssParameter name="stroke-width">8</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
<!--street 3-->
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#f6f0a3</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#f6f0a3</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#f6f0a3</CssParameter>
			<CssParameter name="stroke-width">8</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
<!--street 4-->
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#ffffff</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#ffffff</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#ffffff</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
<!--pedestrian-->
	<Rule>
		<Filter>[highway] = 'pedestrian' or [highway]='service' or [highway]='footway' or [highway]='path'</Filter>
		&maxscale_zoom16;
		&minscale_zoom16;
		<LineSymbolizer>
			<CssParameter name="stroke">#808040</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-opacity">.3</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'pedestrian' or [highway]='service' or [highway]='footway' or [highway]='path'</Filter>
		&maxscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#808040</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-opacity">.3</CssParameter>
		</LineSymbolizer>
	</Rule>
<!--rail-->
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'monorail'</Filter>
		&maxscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#afafaf</CssParameter>
			<CssParameter name="stroke-width">2.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'monorail'</Filter>
		&maxscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#ffffff</CssParameter>
			<CssParameter name="stroke-width">1.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-dasharray">5,4</CssParameter>
		</LineSymbolizer>
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
