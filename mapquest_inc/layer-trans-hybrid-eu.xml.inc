<!--ferry routes-->
<Style name="ferry-routes">
	<Rule>
		<Filter>[route] = 'ferry'</Filter>
		&maxscale_zoom8;
		&minscale_zoom11;
		<LineSymbolizer>
			<CssParameter name="stroke">#ffffff</CssParameter>
			<CssParameter name="stroke-width">1.5</CssParameter>
			<CssParameter name="stroke-dasharray">2,3</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[route] = 'ferry'</Filter>
		&maxscale_zoom12;
		<LineSymbolizer>
			<CssParameter name="stroke">#ffffff</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-dasharray">2,3</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>

<!--pedestrian walkways-->
<Style name="pedestrian-walkways">
	<Rule>
		<Filter>[highway] = 'pedestrian' or [highway]='service' or [highway]='footway' or [highway]='path' or [highway]='track'</Filter>
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
</Style>
<Style name="pedestrian-polygon">
	<Rule>
		<Filter>[highway] = 'living_street' or [highway] = 'pedestrian' or [highway]='service' or [highway]='footway' or [highway]='path' or [highway] = 'residential' or [highway]='unclassified' or [highway]='service' or [highway] = 'track'</Filter>
		&maxscale_zoom14;
		<PolygonSymbolizer>
			<CssParameter name="fill">#c8c8c8</CssParameter>
		</PolygonSymbolizer>
	</Rule>
</Style>

<!--cycleway-->
<Style name="cycleway">
	<Rule>
		<Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated')</Filter>
		&maxscale_zoom16;
		&minscale_zoom16;
		<LineSymbolizer>
			<CssParameter name="stroke">#808040</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-opacity">.3</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated')</Filter>
		&maxscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#808040</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-opacity">.3</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>

<!--runway-->
<Style name="runway">
	<Rule>
		<Filter>[aeroway] = 'runway'</Filter>
		&maxscale_zoom12;
		&maxscale_zoom12;
		<LineSymbolizer>
			<CssParameter name="stroke">#b4b4b4</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'runway'</Filter>
		&maxscale_zoom13;
		&maxscale_zoom14;
		<LineSymbolizer>
			<CssParameter name="stroke">#b4b4b4</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'runway'</Filter>
		&maxscale_zoom15;
		&maxscale_zoom16;
		<LineSymbolizer>
			<CssParameter name="stroke">#b4b4b4</CssParameter>
			<CssParameter name="stroke-width">15</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'runway'</Filter>
		&maxscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#b4b4b4</CssParameter>
			<CssParameter name="stroke-width">45</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'taxiway'</Filter>
		&maxscale_zoom12;
		&maxscale_zoom12;
		<LineSymbolizer>
			<CssParameter name="stroke">#b4b4b4</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'taxiway'</Filter>
		&maxscale_zoom13;
		&maxscale_zoom14;
		<LineSymbolizer>
			<CssParameter name="stroke">#b4b4b4</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'taxiway'</Filter>
		&maxscale_zoom15;
		&maxscale_zoom16;
		<LineSymbolizer>
			<CssParameter name="stroke">#b4b4b4</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'taxiway'</Filter>
		&maxscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#b4b4b4</CssParameter>
			<CssParameter name="stroke-width">10</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>

<!--rail-->
<Style name="rail">
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'monorail'</Filter>
		&maxscale_zoom11;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#a6a8aa</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-dasharray">1,1</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'monorail'</Filter>
		&maxscale_zoom14;
		<LineSymbolizer>
			<CssParameter name="stroke">#afafaf</CssParameter>
			<CssParameter name="stroke-width">2.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'monorail'</Filter>
		&maxscale_zoom14;
		<LineSymbolizer>
			<CssParameter name="stroke">#ffffff</CssParameter>
			<CssParameter name="stroke-width">1.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-dasharray">5,4</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>

<!--tertiary casing-->
<Style name="tertiary casing">
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#b4b4b4</CssParameter>
			<CssParameter name="stroke-width">3.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#bebebe</CssParameter>
			<CssParameter name="stroke-width">8</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#bebebe</CssParameter>
			<CssParameter name="stroke-width">10</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--secondary casing-->
<Style name="secondary casing">
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#bebebe</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#bebebe</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#bebebe</CssParameter>
			<CssParameter name="stroke-width">8</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#bebebe</CssParameter>
			<CssParameter name="stroke-width">10</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--primary casing-->
<Style name="primary casing">
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer>
			<CssParameter name="stroke">#d19f54</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer>
			<CssParameter name="stroke">#cf9321</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#cf9321</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer>
			<CssParameter name="stroke">#cf9321</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#cf9321</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#cf9321</CssParameter>
			<CssParameter name="stroke-width">10</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#cf9321</CssParameter>
			<CssParameter name="stroke-width">12</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--trunk casing-->
<Style name="trunk casing">
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer>
			<CssParameter name="stroke">#ab4453</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom10;
		<LineSymbolizer>
			<CssParameter name="stroke">#af5959</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom11;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#af5959</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#af5959</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#af5959</CssParameter>
			<CssParameter name="stroke-width">10</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#af5959</CssParameter>
			<CssParameter name="stroke-width">12</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>

<!--tertiary and residential-->
<Style name="tertiary">
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom12;
		<LineSymbolizer>
			<CssParameter name="stroke">#b2b2b2</CssParameter>
			<CssParameter name="stroke-width">.5</CssParameter>
			<CssParameter name="stroke-opacity">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom13;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#bebebe</CssParameter>
			<CssParameter name="stroke-width">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#ffffff</CssParameter>
			<CssParameter name="stroke-width">1.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
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
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#ffffff</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--secondary-->
<Style name="secondary">
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer>
			<CssParameter name="stroke">#bebebe</CssParameter>
			<CssParameter name="stroke-width">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer>
			<CssParameter name="stroke">#bebebe</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#ffffff</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#ffffff</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
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
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#ffffff</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--primary-->
<Style name="primary">
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer>
			<CssParameter name="stroke">#bebebe</CssParameter>
			<CssParameter name="stroke-width">.5</CssParameter>
			<CssParameter name="stroke-opacity">.75</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom8;
		<LineSymbolizer>
			<CssParameter name="stroke">#e6d373</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer>
			<CssParameter name="stroke">#fdeb8c</CssParameter>
			<CssParameter name="stroke-width">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer>
			<CssParameter name="stroke">#fbe297</CssParameter>
			<CssParameter name="stroke-width">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#fbe297</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer>
			<CssParameter name="stroke">#fbe297</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#fbe297</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#fbe297</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#fbe297</CssParameter>
			<CssParameter name="stroke-width">8</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--trunk-->
<Style name="trunk">
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer>
			<CssParameter name="stroke">#d96d6d</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-opacity">.75</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom8;
		<LineSymbolizer>
			<CssParameter name="stroke">#faafbb</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer>
			<CssParameter name="stroke">#faafbb</CssParameter>
			<CssParameter name="stroke-width">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom10;
		<LineSymbolizer>
			<CssParameter name="stroke">#e2a9a9</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom11;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#e2a9a9</CssParameter>
			<CssParameter name="stroke-width">1.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#e2a9a9</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#e2a9a9</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#e2a9a9</CssParameter>
			<CssParameter name="stroke-width">8</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>

<!--interchange casing-->
<Style name="interchange casing">
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom11;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#ab5468</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#ab5468</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#ab5468</CssParameter>
			<CssParameter name="stroke-width">8</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#ab5468</CssParameter>
			<CssParameter name="stroke-width">10</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--street 1 casing-->
<Style name="motorway casing">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#ab5468</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#ab5468</CssParameter>
			<CssParameter name="stroke-width">8</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#ab5468</CssParameter>
			<CssParameter name="stroke-width">12</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#ab5468</CssParameter>
			<CssParameter name="stroke-width">16</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--interchange-->
<Style name="interchange">
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom11;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#e55050</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-opacity">.6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--motorway-->
<Style name="motorway">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom5;
		&minscale_zoom6;
		<LineSymbolizer>
			<CssParameter name="stroke">white</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-opacity">.2</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer>
			<CssParameter name="stroke">white</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-opacity">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom8;
		&minscale_zoom10;
		<LineSymbolizer>
			<CssParameter name="stroke">#d94c4c</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-opacity">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom11;
		<LineSymbolizer>
			<CssParameter name="stroke">#e55050</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-opacity">.8</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--motorway centerline-->
<Style name="motorway centerline">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom8;
		&minscale_zoom10;
		<LineSymbolizer>
			<CssParameter name="stroke">#white</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-opacity">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom11;
		<LineSymbolizer>
			<CssParameter name="stroke">#white</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-opacity">.8</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>

<Layer name="ferry-routes" status="on" srs="&osm2pgsql_projection;">
	<StyleName>ferry-routes</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,route
      from &prefix;_line
      where route is not null
      ) as routes
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="pedestrian-walkways" status="on" srs="&osm2pgsql_projection;">
	<StyleName>pedestrian-walkways</StyleName>
	<Datasource>
		<Parameter name="table">
			(select way,highway from &prefix;_line
			where highway in ('residential','unclassified','pedestrian','service','footway','track','path')
			order by z_order,way_area desc) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="pedestrian-polygon" status="on" srs="&osm2pgsql_projection;">
    <StyleName>pedestrian-polygon</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway from &prefix;_polygon
       where highway in ('residential','unclassified','pedestrian','service','footway','living_street','track','path')
       order by z_order,way_area desc) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="cycleway" status="on" srs="&osm2pgsql_projection;">
	<StyleName>cycleway</StyleName>
	<Datasource>
		<Parameter name="table">
			(select way,highway,horse,foot,bicycle from &prefix;_line where highway in ('bridleway','footway','cycleway','path') and tunnel in ('yes','true','1') order by z_order) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="runway" status="on" srs="&osm2pgsql_projection;">
    <StyleName>runway</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway,horse,bicycle,foot,construction,aeroway,service,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel,
       case when bridge in ('yes','true','1') then 'yes'::text else bridge end as bridge,
       case when railway in ('spur','siding')
              or (railway='rail' and service in ('spur','siding','yard'))
            then 'spur-siding-yard'::text else railway end as railway
       from &prefix;_line
       where highway is not null
          or aeroway in ('runway','taxiway')
          or railway in ('light_rail','narrow_gauge','funicular','rail','subway','tram','spur','siding','platform','disused','abandoned','construction')
       order by z_order) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="rail" status="on" srs="&osm2pgsql_projection;">
    <StyleName>rail</StyleName>
    <Datasource>
      <Parameter name="table">
	      (select way,highway,railway,
	       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
	       from &prefix;_line
	       where highway is not null
	          or railway is not null
	       order by z_order
	      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="tertiary casing" status="on" srs="&osm2pgsql_projection;">
    <StyleName>tertiary casing</StyleName>
    <Datasource>
      <Parameter name="table">
	      (select way,highway,railway,
	       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
	       from &prefix;_line
	       where highway is not null
	          or railway is not null
	       order by z_order
	      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="secondary casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>secondary casing</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,railway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway is not null
          or railway is not null
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="primary casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>primary casing</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,railway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway is not null
          or railway is not null
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="trunk casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>trunk casing</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,railway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway is not null
          or railway is not null
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="tertiary" status="on" srs="&osm2pgsql_projection;">
    <StyleName>tertiary</StyleName>
    <Datasource>
      <Parameter name="table">
	      (select way,highway,railway,
	       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
	       from &prefix;_line
	       where highway is not null
	          or railway is not null
	       order by z_order
	      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="secondary" status="on" srs="&osm2pgsql_projection;">
	<StyleName>secondary</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,railway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway is not null
          or railway is not null
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="primary" status="on" srs="&osm2pgsql_projection;">
	<StyleName>primary</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,railway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway is not null
          or railway is not null
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="trunk" status="on" srs="&osm2pgsql_projection;">
	<StyleName>trunk</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,railway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway is not null
          or railway is not null
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="interchange casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>interchange casing</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,railway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway is not null
          or railway is not null
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="motorway casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>motorway casing</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,railway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway is not null
          or railway is not null
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="interchange" status="on" srs="&osm2pgsql_projection;">
	<StyleName>interchange</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,railway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway is not null
          or railway is not null
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="motorway" status="on" srs="&osm2pgsql_projection;">
	<StyleName>motorway</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,railway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway is not null
          or railway is not null
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="motorway centerline" status="on" srs="&osm2pgsql_projection;">
	<StyleName>motorway centerline</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,railway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway is not null
          or railway is not null
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
