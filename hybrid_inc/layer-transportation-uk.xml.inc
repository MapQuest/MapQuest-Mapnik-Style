<!--ferry routes-->
<Style name="ferry-routes">
	<Rule>
		<Filter>[route] = 'ferry'</Filter>
		&maxscale_zoom8;
		&minscale_zoom11;
		<LineSymbolizer stroke="#ffffff" stroke-width="1.5" stroke-dasharray="2,3"/>
	</Rule>
	<Rule>
		<Filter>[route] = 'ferry'</Filter>
		&maxscale_zoom12;
		<LineSymbolizer stroke="#ffffff" stroke-width="2" stroke-dasharray="2,3"/>
	</Rule>
</Style>
<!--pedestrian walkways-->
<Style name="pedestrian-walkways">
	<Rule>
		<Filter>[highway] = 'pedestrian' or [highway]='footway' or ([highway]='path' and [bicycle]!='designated') or [highway]='track'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke="#e52540" stroke-width="1" stroke-opacity=".4"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'pedestrian' or [highway]='footway' or ([highway]='path' and [bicycle]!='designated') or [highway]='track'</Filter>
		&maxscale_zoom17;
		<LineSymbolizer stroke="#e52540" stroke-width="2" stroke-opacity=".4"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'steps'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke="#e52540" stroke-width="3" stroke-opacity=".4" stroke-dasharray="1,2"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'steps'</Filter>
		&maxscale_zoom17;
		<LineSymbolizer stroke="#e52540" stroke-width="4" stroke-opacity=".4" stroke-dasharray="1,2"/>
	</Rule>
</Style>
<!--cycleway-->
<Style name="cycleway">
	<Rule>
		<Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated')</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke="#8080bd" stroke-width="1" stroke-opacity=".4"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated')</Filter>
		&maxscale_zoom17;
		<LineSymbolizer stroke="#8080bd" stroke-width="2" stroke-opacity=".4"/>
	</Rule>
</Style>
<!--alley-->
<Style name="alley">
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#b2b2b2" stroke-width=".5" stroke-linecap="round" stroke-opacity=".2"/>
	</Rule>
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#b2b2b2" stroke-width="1" stroke-linecap="round" stroke-opacity=".2"/>
	</Rule>
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#b2b2b2" stroke-width="4" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#b2b2b2" stroke-width="5" stroke-linecap="round" stroke-opacity=".2"/>
	</Rule>
</Style>
<!--tertiary casing-->
<Style name="tertiary casing">
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke="#000000" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke="#000000" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#000000" stroke-width="4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#000000" stroke-width="6" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
</Style>
<!--secondary casing-->
<Style name="secondary casing">
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom11;
		&minscale_zoom11;
		<LineSymbolizer stroke="#000000" stroke-width="2" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom12;
		<LineSymbolizer stroke="#000000" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom13;
		&minscale_zoom13;
		<LineSymbolizer stroke="#000000" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke="#000000" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#000000" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#000000" stroke-width="6" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
</Style>
<!--primary casing-->
<Style name="primary casing">
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#000000" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#000000" stroke-width="4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke="#000000" stroke-width="5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#000000" stroke-width="6" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#000000" stroke-width="10" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
</Style>
<!--trunk casing-->
<Style name="trunk casing">
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke="#000000" stroke-width="2.5" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#000000" stroke-width="5" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#000000" stroke-width="5" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke="#000000" stroke-width="6" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#000000" stroke-width="10" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#000000" stroke-width="12" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
</Style>

<!--tertiary and residential-->
<Style name="tertiary">
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom12;
		<LineSymbolizer stroke="#bfbfbf" stroke-width=".25" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom13;
		&minscale_zoom13;
		<LineSymbolizer stroke="#bfbfbf" stroke-width=".5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke="#ffffff" stroke-width=".5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke="#ffffff" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#ffffff" stroke-width="2" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#ffffff" stroke-width="4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
</Style>
<!--secondary-->
<Style name="secondary">
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer stroke="#bebebe" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom10;
		<LineSymbolizer stroke="#c8c8c8" stroke-width=".5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom11;
		&minscale_zoom11;
		<LineSymbolizer stroke="#faedaf" stroke-width=".5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom12;
		<LineSymbolizer stroke="#faedaf" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom13;
		&minscale_zoom13;
		<LineSymbolizer stroke="#faedaf" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke="#faeba2" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#faeba2" stroke-width="2" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#faeba2" stroke-width="4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
</Style>
<!--primary-->
<Style name="primary">
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer stroke="#bebebe" stroke-width=".5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".2"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom8;
		<LineSymbolizer stroke="#f26161" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer stroke="#f26161" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#e4abab" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#e4abab" stroke-width="2" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke="#ff9999" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#ff9999" stroke-width="4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#ff9999" stroke-width="6" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".8"/>
	</Rule>
</Style>
<!--trunk-->
<Style name="trunk">
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom7;
		&minscale_zoom9;
		<LineSymbolizer stroke="#82d99e" stroke-width="1" stroke-linejoin="round" stroke-opacity=".6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#66cc89" stroke-width="3" stroke-linejoin="round" stroke-opacity=".8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#6DC693" stroke-width="3" stroke-linejoin="round" stroke-opacity=".8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke="#56bf7d" stroke-width="4" stroke-linejoin="round" stroke-opacity=".8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#56bf7d" stroke-width="6" stroke-linejoin="round" stroke-opacity=".8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#56bf7d" stroke-width="8" stroke-linejoin="round" stroke-opacity=".8"/>
	</Rule>
</Style>
<!--trunk centerline-->
<Style name="trunk centerline">
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom13;
		<LineSymbolizer stroke="#f3fda8" stroke-width=".5" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke="#f3fda8" stroke-width="2" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#f3fda8" stroke-width="3" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#f3fda8" stroke-width="4" stroke-linejoin="round"/>
	</Rule>
</Style>

<!--interchange casing-->
<Style name="interchange casing">
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom11;
		&minscale_zoom11;
		<LineSymbolizer stroke="#000000" stroke-width="2" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#000000" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke="#000000" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#000000" stroke-width="8" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#000000" stroke-width="10" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
</Style>
<!--street 1 casing-->
<Style name="motorway casing">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke="#000000" stroke-width="5" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#000000" stroke-width="6" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#000000" stroke-width="8" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke="#000000" stroke-width="8" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#000000" stroke-width="11" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#000000" stroke-width="14" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
</Style>
<!--interchange-->
<Style name="interchange">
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom11;
		&minscale_zoom13;
		<LineSymbolizer stroke="#6289d9" stroke-width="1" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke="#6c91d9" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#6c91d9" stroke-width="4" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#6c91d9" stroke-width="6" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
</Style>
<!--motorway-->
<Style name="motorway">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom5;
		&minscale_zoom6;
		<LineSymbolizer stroke="#2e4280" stroke-width="1" stroke-opacity=".1" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer stroke="#3d6dcc" stroke-width="2" stroke-opacity=".5" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke="#6c90d9" stroke-width="3" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#5782d9" stroke-width="4" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#5782d9" stroke-width="5" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke="#6c91d9" stroke-width="5" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#6c91d9" stroke-width="7" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#6c91d9" stroke-width="10" stroke-linejoin="round"/>
	</Rule>
</Style>
<!--motorway centerline-->
<Style name="motorway centerline">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke="#d5dbe5" stroke-width="1" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#c2d2f2" stroke-width="1" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#c2d2f2" stroke-width="2" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke="#d3dbeb" stroke-width="2" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#d3dbeb" stroke-width="3" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#d3dbeb" stroke-width="4" stroke-linejoin="round"/>
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
			(select way,highway,bicycle from &prefix;_line
			where highway in ('pedestrian','footway','track','path','steps')
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
<Layer name="alley" status="on" srs="&osm2pgsql_projection;">
	<StyleName>alley</StyleName>
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
<Layer name="trunk centerline" status="on" srs="&osm2pgsql_projection;">
	<StyleName>trunk centerline</StyleName>
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
