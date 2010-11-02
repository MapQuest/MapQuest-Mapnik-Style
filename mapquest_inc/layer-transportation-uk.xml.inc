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
		<LineSymbolizer stroke="#e52540" stroke-width="1.5" stroke-opacity=".4" stroke-dasharray="1,3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'pedestrian' or [highway]='footway' or ([highway]='path' and [bicycle]!='designated') or [highway]='track'</Filter>
		&maxscale_zoom17;
		<LineSymbolizer stroke="#e52540" stroke-width="2" stroke-opacity=".4" stroke-dasharray="2,4"/>
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
<Style name="pedestrian-polygon">
	<Rule>
		<Filter>[highway] = 'living_street' or [highway] = 'pedestrian' or [highway]='service' or [highway]='footway' or [highway]='path' or [highway] = 'residential' or [highway]='unclassified' or [highway]='service' or [highway] = 'track'</Filter>
		&maxscale_zoom14;
		<PolygonSymbolizer fill="#c8c8c8"/>
	</Rule>
</Style>
<!--cycleway-->
<Style name="cycleway">
	<Rule>
		<Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated') or [highway]='bridleway'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke="#8080bd" stroke-width="1" stroke-opacity=".4" stroke-dasharray="4,4"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated') or [highway]='bridleway'</Filter>
		&maxscale_zoom17;
		<LineSymbolizer stroke="#8080bd" stroke-width="2" stroke-opacity=".4" stroke-dasharray="6,4"/>
	</Rule>
</Style>
<!--runway-->
<Style name="runway">
	<Rule>
		<Filter>[aeroway] = 'runway'</Filter>
		&maxscale_zoom12;
		&maxscale_zoom12;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="3"/>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'runway'</Filter>
		&maxscale_zoom13;
		&maxscale_zoom14;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="5"/>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'runway'</Filter>
		&maxscale_zoom15;
		&maxscale_zoom16;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="15"/>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'runway'</Filter>
		&maxscale_zoom17;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="45"/>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'taxiway'</Filter>
		&maxscale_zoom12;
		&maxscale_zoom12;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="1"/>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'taxiway'</Filter>
		&maxscale_zoom13;
		&maxscale_zoom14;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="2"/>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'taxiway'</Filter>
		&maxscale_zoom15;
		&maxscale_zoom16;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="5"/>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'taxiway'</Filter>
		&maxscale_zoom17;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="10"/>
	</Rule>
</Style>
<!--rail-->
<Style name="rail">
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'monorail'</Filter>
		&maxscale_zoom11;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#a6a8aa" stroke-width="1" stroke-dasharray="1,1"/>
	</Rule>
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
<!--alley casing-->
<Style name="alley casing">
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#bfbfbf" stroke-width=".5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#b3b1b2" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#b3b1b2" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#b3b1b2" stroke-width="7" stroke-linecap="round"/>
	</Rule>
</Style>
<!--tertiary casing-->
<Style name="tertiary casing">
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#b4b4b4" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#999999" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#999999" stroke-width="8" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#999999" stroke-width="10" stroke-linecap="round"/>
	</Rule>
</Style>
<!--secondary casing-->
<Style name="secondary casing">
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom11;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#d4b169" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom12;
		<LineSymbolizer stroke-linejoin="round" stroke="#d4b169" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom13;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#ccaa66" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#bf9f60" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#bf9f60" stroke-width="8" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#bf9f60" stroke-width="10" stroke-linecap="round"/>
	</Rule>
</Style>
<!--primary casing-->
<Style name="primary casing">
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#b15959" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#b15959" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#cc4747" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#cc4747" stroke-width="8" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#cc4747" stroke-width="10" stroke-linecap="round"/>
	</Rule>
</Style>
<!--trunk casing-->
<Style name="trunk casing">
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="#50a676" stroke-width="2.5"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#4c805d" stroke-width="5"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#40805d" stroke-width="5"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom14;
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
</Style>
<!--cul-de-sac-->
<Style name="cul-de-sac">
	<Rule>
		&maxscale_zoom15;
		&minscale_zoom15;
		<MarkersSymbolizer fill="white" stroke="#999999" stroke-width="1.5" width="4" height="4" placement="point" marker_type="ellipse"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom16;
		<MarkersSymbolizer fill="white" stroke="#999999" stroke-width="1.5" width="5" height="5" placement="point" marker_type="ellipse"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		&minscale_zoom17;
		<MarkersSymbolizer fill="white" stroke="#999999" stroke-width="1.5" width="8" height="8" placement="point" marker_type="ellipse"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<MarkersSymbolizer fill="white" stroke="#999999" stroke-width="2" width="10" height="10" placement="point" marker_type="ellipse"/>
	</Rule>
</Style>
<!--alley-->
<Style name="alley">
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#bfbfbf" stroke-width=".5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="5" stroke-linecap="round"/>
	</Rule>
</Style>
<!--tertiary and residential-->
<Style name="tertiary">
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom12;
		<LineSymbolizer stroke-linejoin="round" stroke="#bfbfbf" stroke-width=".5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom13;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#bfbfbf" stroke-width=".65" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="6" stroke-linecap="round"/>
	</Rule>
</Style>
<!--secondary-->
<Style name="secondary">
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="#bebebe" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom10;
		<LineSymbolizer stroke-linejoin="round" stroke="#c8c8c8" stroke-width=".5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom11;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#faedaf" stroke-width=".5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom12;
		<LineSymbolizer stroke-linejoin="round" stroke="#faedaf" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom13;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#faedaf" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
		&maxscale_zoom14;
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
</Style>
<!--primary-->
<Style name="primary">
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer stroke-linejoin="round" stroke="#bebebe" stroke-width=".5" stroke-linecap="round" stroke-opacity=".5"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom8;
		<LineSymbolizer stroke-linejoin="round" stroke="#f26161" stroke-width="1" stroke-linecap="round" stroke-opacity=".5"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="#f26161" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#e4abab" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#e4abab" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom14;
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
		<LineSymbolizer stroke-linejoin="round" stroke="#ff9999" stroke-width="6" stroke-linecap="round"/>
	</Rule>
</Style>
<!--trunk-->
<Style name="trunk">
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom7;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="#82d99e" stroke-width="1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#66cc89" stroke-width="3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#6DC693" stroke-width="3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#56bf7d" stroke-width="4"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#56bf7d" stroke-width="6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#56bf7d" stroke-width="8"/>
	</Rule>
</Style>
<!--trunk centerline-->
<Style name="trunk centerline">
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#f3fda8" stroke-width=".5"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#f3fda8" stroke-width="2"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#f3fda8" stroke-width="3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#f3fda8" stroke-width="4"/>
	</Rule>
</Style>
<!--interchange casing-->
<Style name="interchange casing">
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom10;
		<LineSymbolizer stroke-linejoin="round" stroke="#2d4880" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom11;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#2d4880" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#2d4880" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="7" stroke-linecap="round"/>
	</Rule>
</Style>
<!--street 1 casing-->
<Style name="motorway casing">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="#6b7a99" stroke-width="5"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#2d4880" stroke-width="6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#2d4880" stroke-width="8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom14;
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
</Style>
<!--interchange-->
<Style name="interchange">
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom10;
		<LineSymbolizer stroke-linejoin="round" stroke="#6289d9" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom11;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#6289d9" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="5" stroke-linecap="round"/>
	</Rule>
</Style>
<!--motorway-->
<Style name="motorway">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom5;
		&minscale_zoom6;
		<LineSymbolizer stroke-linejoin="round" stroke="#2e4280" stroke-width="1" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer stroke-linejoin="round" stroke="#3d6dcc" stroke-width="2" stroke-opacity=".5"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c90d9" stroke-width="3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#5782d9" stroke-width="4"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#5782d9" stroke-width="5"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="5"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="7"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="10"/>
	</Rule>
</Style>
<!--motorway centerline-->
<Style name="motorway centerline">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="#d5dbe5" stroke-width="1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#c2d2f2" stroke-width="1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#c2d2f2" stroke-width="2"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#d3dbeb" stroke-width="2"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#d3dbeb" stroke-width="3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#d3dbeb" stroke-width="4"/>
	</Rule></Style><Layer name="ferry-routes" status="on" srs="&osm2pgsql_projection;">
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
			(select way,highway,horse,foot,bicycle from &prefix;_line where highway in ('bridleway','footway','cycleway','path')) as roads
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
<Layer name="alley casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>alley casing</StyleName>
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
<Layer name="secondary casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>secondary casing</StyleName>
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
<Layer name="primary casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>primary casing</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('primary', 'primary_link')
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
      (select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('trunk', 'trunk_link')
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
<Layer name="tertiary" status="on" srs="&osm2pgsql_projection;">
	<StyleName>tertiary</StyleName>
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
<Layer name="secondary" status="on" srs="&osm2pgsql_projection;">
	<StyleName>secondary</StyleName>
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
<Layer name="primary" status="on" srs="&osm2pgsql_projection;">
	<StyleName>primary</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('primary', 'primary_link')
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
      (select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('trunk', 'trunk_link')
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
      (select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('trunk', 'trunk_link')
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
<Layer name="motorway casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>motorway casing</StyleName>
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
<Layer name="interchange" status="on" srs="&osm2pgsql_projection;">
	<StyleName>interchange</StyleName>
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
<Layer name="motorway" status="on" srs="&osm2pgsql_projection;">
	<StyleName>motorway</StyleName>
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
<Layer name="motorway centerline" status="on" srs="&osm2pgsql_projection;">
	<StyleName>motorway centerline</StyleName>
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
