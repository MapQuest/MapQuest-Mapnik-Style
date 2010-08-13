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
		<Filter>[highway] = 'pedestrian' or [highway]='footway' or [highway]='path' or [highway]='track'</Filter>
		&maxscale_zoom16;
		&minscale_zoom16;
		<LineSymbolizer>
			<CssParameter name="stroke">#808040</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-opacity">.3</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'pedestrian' or [highway]='footway' or [highway]='path'</Filter>
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
		&maxscale_zoom10;
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

<!--street 4 casing-->
<Style name="street 4 casing">
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link' or [highway]='service'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer>
			<CssParameter name="stroke">#b3b1b2</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link' or [highway]='service'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#b3b1b2</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link' or [highway]='service'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer>
			<CssParameter name="stroke">#b3b1b2</CssParameter>
			<CssParameter name="stroke-width">8</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link' or [highway]='service'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#b3b1b2</CssParameter>
			<CssParameter name="stroke-width">10</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--street 3 casing-->
<Style name="street 3 casing">
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer>
			<CssParameter name="stroke">#bfb38f</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#ccad70</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer>
			<CssParameter name="stroke">#ccad70</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#ccad70</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
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
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#ccad70</CssParameter>
			<CssParameter name="stroke-width">12</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--street 2 casing-->
<Style name="street 2 casing">
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom8;
		<LineSymbolizer>
			<CssParameter name="stroke">#d99836</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer>
			<CssParameter name="stroke">#d99836</CssParameter>
			<CssParameter name="stroke-width">2.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer>
			<CssParameter name="stroke">#cc8f33</CssParameter>
			<CssParameter name="stroke-width">3.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#cc8f33</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer>
			<CssParameter name="stroke">#d0a14a</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#d0a14a</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
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
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#d0a14a</CssParameter>
			<CssParameter name="stroke-width">12</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>

<!--cul-de-sac-->
<Style name="cul-de-sac">
	<Rule>
		&maxscale_zoom15;
		&minscale_zoom15;
		<PointSymbolizer file="&symbols;/cul_de_sac.15.png" type="png" width="12" height="12" />
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom16;
		<PointSymbolizer file="&symbols;/cul_de_sac.16.png" type="png" width="14" height="14" />
	</Rule>
	<Rule>
		&maxscale_zoom17;
		&minscale_zoom17;
		<PointSymbolizer file="&symbols;/cul_de_sac.17.png" type="png" width="16" height="16" />
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<PointSymbolizer file="&symbols;/cul_de_sac.18.png" type="png" width="18" height="18" />
	</Rule>
</Style>

<!--street 4-->
<Style name="street 4">
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link' or [highway]='service'</Filter>
		&maxscale_zoom12;
		&minscale_zoom12;
		<LineSymbolizer>
			<CssParameter name="stroke">#b4b4b4</CssParameter>
			<CssParameter name="stroke-width">.3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link' or [highway]='service'</Filter>
		&maxscale_zoom13;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#b4b4b4</CssParameter>
			<CssParameter name="stroke-width">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link' or [highway]='service'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer>
			<CssParameter name="stroke">#ffffff</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link' or [highway]='service'</Filter>
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
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link' or [highway]='service'</Filter>
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
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link' or [highway]='service'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#ffffff</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--street 3-->
<Style name="street 3">
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom8;
		<LineSymbolizer>
			<CssParameter name="stroke">#bfbfbf</CssParameter>
			<CssParameter name="stroke-width">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer>
			<CssParameter name="stroke">#a99f85</CssParameter>
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
			<CssParameter name="stroke">#f4faa0</CssParameter>
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
			<CssParameter name="stroke">#f2f291</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer>
			<CssParameter name="stroke">#f6f0a3</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
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
</Style>
<!--street 2-->
<Style name="street 2">
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom6;
		&minscale_zoom6;
		<LineSymbolizer>
			<CssParameter name="stroke">#646464</CssParameter>
			<CssParameter name="stroke-width">.5</CssParameter>
			<CssParameter name="stroke-opacity">.15</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer>
			<CssParameter name="stroke">#e6b216</CssParameter>
			<CssParameter name="stroke-width">.75</CssParameter>
			<CssParameter name="stroke-opacity">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom8;
		<LineSymbolizer>
			<CssParameter name="stroke">#f2c279</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer>
			<CssParameter name="stroke">#f2c279</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer>
			<CssParameter name="stroke">#fac87d</CssParameter>
			<CssParameter name="stroke-width">1.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#fac87d</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer>
			<CssParameter name="stroke">#f5d290</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
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
</Style>

<!--interchange casing-->
<Style name="ramp casing">
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer>
			<CssParameter name="stroke">#b89e7d</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer>
			<CssParameter name="stroke">#b89e7d</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
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
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#b89e7d</CssParameter>
			<CssParameter name="stroke-width">10</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--street 1 casing-->
<Style name="street 1 casing">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer>
			<CssParameter name="stroke">#2e4880</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#2e4880</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom14;
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
</Style>
<!--interchange-->
<Style name="ramp">
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom11;
		<LineSymbolizer>
			<CssParameter name="stroke">#aaa096</CssParameter>
			<CssParameter name="stroke-width">1.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#aaa096</CssParameter>
			<CssParameter name="stroke-width">1.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer>
			<CssParameter name="stroke">#dcbf95</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		</LineSymbolizer>
	</Rule>
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
</Style>
<!--street 1-->
<Style name="street 1">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom5;
		&minscale_zoom5;
		<LineSymbolizer>
			<CssParameter name="stroke">#0040ff</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-opacity">.1</CssParameter>		
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom6;
		&minscale_zoom6;
		<LineSymbolizer>
			<CssParameter name="stroke">#0040ff</CssParameter>
			<CssParameter name="stroke-width">1.5</CssParameter>
			<CssParameter name="stroke-opacity">.2</CssParameter>		
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer>
			<CssParameter name="stroke">#406dcc</CssParameter>
			<CssParameter name="stroke-width">1.5</CssParameter>
			<CssParameter name="stroke-opacity">.5</CssParameter>		
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer>
			<CssParameter name="stroke">#476bb2</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer>
			<CssParameter name="stroke">#6c91d9</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#6c91d9</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#6c91d9</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
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
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#6c91d9</CssParameter>
			<CssParameter name="stroke-width">10</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--street 1 centerline-->
<Style name="centerline">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer>
			<CssParameter name="stroke">#b6caf2</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer>
			<CssParameter name="stroke">#d3dbeb</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer>
			<CssParameter name="stroke">#d3dbeb</CssParameter>
			<CssParameter name="stroke-width">1.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
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
			<CssParameter name="stroke">#d3dbeb</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer>
			<CssParameter name="stroke">#d3dbeb</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
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
      (select way,aeroway
       from &prefix;_line
       where aeroway in ('runway','taxiway')
       order by z_order) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="rail" status="on" srs="&osm2pgsql_projection;">
    <StyleName>rail</StyleName>
    <Datasource>
      <Parameter name="table">
	      (select way,railway,
	       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
	       from &prefix;_line
	       where railway is not null
	       order by z_order
	      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="ramp casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>ramp casing</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('motorway_link')
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 4 casing" status="on" srs="&osm2pgsql_projection;">
    <StyleName>street 4 casing</StyleName>
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
<Layer name="street 3 casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 3 casing</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('secondary', 'secondary_link')
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 2 casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 2 casing</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('trunk', 'trunk_link', 'primary', 'primary_link')
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="cul-de-sac" status="on" srs="&osm2pgsql_projection;">
	<StyleName>cul-de-sac</StyleName>    
	<Datasource>
		<Parameter name="table">(select way from &prefix;_point where highway='turning_circle') as turning_circle</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="ramp" status="on" srs="&osm2pgsql_projection;">
	<StyleName>ramp</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('motorway_link')
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 4" status="on" srs="&osm2pgsql_projection;">
    <StyleName>street 4</StyleName>
    <Datasource>
      <Parameter name="table">
	      (select way,highway,
	       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
	       from &prefix;_line
	       where highway is not null
	       order by z_order
	      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="street 3" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 3</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('secondary', 'secondary_link')
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 2" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 2</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('trunk', 'trunk_link', 'primary', 'primary_link')
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 1 casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 1 casing</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('motorway')
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 1" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 1</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('motorway')
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="centerline" status="on" srs="&osm2pgsql_projection;">
	<StyleName>centerline</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('motorway')
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
