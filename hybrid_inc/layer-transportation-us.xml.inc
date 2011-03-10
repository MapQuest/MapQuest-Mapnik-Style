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
<!--street 4 casing-->
<Style name="street 4 casing">
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke="#000000" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke="#000000" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#000000" stroke-width="4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#000000" stroke-width="6" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
</Style>
<!--street 3 casing-->
<Style name="street 3 casing">
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#000000" stroke-width="2" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#000000" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke="#000000" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke="#000000" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#000000" stroke-width="2" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#000000" stroke-width="6" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
</Style>
<!--street 2 casing-->
<Style name="street 2 casing">
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom8;
		<LineSymbolizer stroke="#000000" stroke-width="2" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer stroke="#000000" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#000000" stroke-width="3.5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#000000" stroke-width="4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke="#000000" stroke-width="5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke="#000000" stroke-width="5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#000000" stroke-width="6" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#000000" stroke-width="10" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
</Style>

<!--street 4-->
<Style name="street 4">
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom12;
		<LineSymbolizer stroke="#b4b4b4" stroke-width=".25" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road'  or [highway] = 'residential_link' or [highway] = 'unclassified_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom13;
		&minscale_zoom13;
		<LineSymbolizer stroke="#b4b4b4" stroke-width=".5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke="#ffffff" stroke-width=".5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke="#ffffff" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#ffffff" stroke-width="2" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#ffffff" stroke-width="4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
</Style>
<!--street 3-->
<Style name="street 3">
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' </Filter>
		&maxscale_zoom8;
		&minscale_zoom8;
		<LineSymbolizer stroke="#bfbfbf" stroke-width=".5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' </Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer stroke="#a99f85" stroke-width=".5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' </Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#f4faa0" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' </Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#f2f291" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' </Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke="#f6f0a3" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' </Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke="#f6f0a3" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' </Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#f6f0a3" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' </Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#f6f0a3" stroke-width="4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
</Style>
<!--street 2-->
<Style name="street 2">
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom6;
		&minscale_zoom6;
		<LineSymbolizer stroke="#646464" stroke-width=".5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".15"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer stroke="#e6b216" stroke-width=".75" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".2"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom8;
		<LineSymbolizer stroke="#f2c279" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer stroke="#f2c279" stroke-width="1" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".6"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#fac87d" stroke-width="1.5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#fac87d" stroke-width="2" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke="#f5d290" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke="#f5d290" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#f5d290" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".8"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#f5d290" stroke-width="6" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".8"/>
	</Rule>
</Style>
<!--interchange casing-->
<Style name="ramp casing">
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke="#000000" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke="#000000" stroke-width="5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke="#000000" stroke-width="5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#000000" stroke-width="7" stroke-linejoin="round" stroke-linecap="round" stroke-opacity=".3"/>
	</Rule>
</Style>
<!--street 1 casing-->
<Style name="street 1 casing">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#000000" stroke-width="5" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#000000" stroke-width="6" stroke-linejoin="round" stroke-opacity=".3"/>
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
		<LineSymbolizer stroke="#000000" stroke-width="10" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#000000" stroke-width="12" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
</Style>
<!--street 1 casing-->
<Style name="street 1 toll casing">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#000000" stroke-width="5" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#000000" stroke-width="6" stroke-linejoin="round" stroke-opacity=".3"/>
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
		<LineSymbolizer stroke="#000000" stroke-width="10" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#000000" stroke-width="12" stroke-linejoin="round" stroke-opacity=".3"/>
	</Rule>
</Style>
<!--interchange-->
<Style name="ramp">
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#6c91d9" stroke-width="1.5" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke="#6c91d9" stroke-width="1" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke="#6c91d9" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke="#6c91d9" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#6c91d9" stroke-width="4" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
</Style>
<!--street 1-->
<Style name="street 1">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom5;
		&minscale_zoom5;
		<LineSymbolizer stroke="#0040ff" stroke-width="1" stroke-opacity=".1" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom6;
		&minscale_zoom6;
		<LineSymbolizer stroke="#0040ff" stroke-width="1.5" stroke-opacity=".2" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer stroke="#406dcc" stroke-width="1.5" stroke-opacity=".5" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke="#476bb2" stroke-width="4" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#6c91d9" stroke-width="3" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#6c91d9" stroke-width="4" stroke-linejoin="round"/>
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
<!--street 1 centerline-->
<Style name="centerline">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke="#b6caf2" stroke-width="1" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#d3dbeb" stroke-width="1" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#d3dbeb" stroke-width="1.5" stroke-linejoin="round"/>
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
<!--street 1 toll-->
<Style name="street 1 toll">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom5;
		&minscale_zoom5;
		<LineSymbolizer stroke="#0040ff" stroke-width="1" stroke-opacity=".1" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom6;
		&minscale_zoom6;
		<LineSymbolizer stroke="#0040ff" stroke-width="1.5" stroke-opacity=".2" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer stroke="#77b383" stroke-width="1.5" stroke-opacity=".5" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke="#4d994d" stroke-width="4" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#88cc66" stroke-width="3" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#88cc66" stroke-width="4" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke="#86c269" stroke-width="5" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#86c269" stroke-width="7" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#86c269" stroke-width="10" stroke-linejoin="round"/>
	</Rule>
</Style>
<!--street 1 toll centerline-->
<Style name="centerline toll">
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke="#9ccc85" stroke-width="1" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke="#d9e5d3" stroke-width="1" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke="#d9e5d3" stroke-width="1.5" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke="#d5e8d8" stroke-width="2" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke="#d5e8d8" stroke-width="3" stroke-linejoin="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke="#d5e8d8" stroke-width="4" stroke-linejoin="round"/>
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
       where highway in ('secondary', 'secondary_link', 'tertiary', 'tertiary_link')
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
       where highway in ('secondary', 'secondary_link','tertiary','tertiary_link')
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
      (select way,highway,toll,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('motorway') and (toll is null or toll = 'no')
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 1 toll casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 1 toll casing</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,toll,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('motorway') and (toll = 'yes' or toll = 'true')
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
      (select way,highway,toll,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('motorway') and (toll is null or toll = 'no')
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
      (select way,highway,toll,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('motorway') and (toll is null or toll = 'no')
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 1 toll" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 1 toll</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,toll,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('motorway') and (toll = 'yes' or toll = 'true')
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="centerline toll" status="on" srs="&osm2pgsql_projection;">
	<StyleName>centerline toll</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,toll,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from &prefix;_roads
       where highway in ('motorway') and (toll = 'yes' or toll = 'true')
       order by z_order
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>