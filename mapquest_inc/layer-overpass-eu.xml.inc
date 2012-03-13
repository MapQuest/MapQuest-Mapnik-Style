<!-- - - - - - - - - - -->
<!--  OUTER CASING     -->
<!-- - - - - - - - - - -->

<Style name="overpass-outer-casing" filter-mode="first">
<!--standard interchange-->
	<Rule>
		<Filter>[highway] = 'trunk_link' or [highway] = 'primary_link' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="6" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk_link' or [highway] = 'primary_link' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
<!--motorway interchange-->
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="6" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
<!--alley-->
	<Rule>
		<Filter>[highway] = 'service'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'service'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="6.5" stroke-linecap="butt"/>
	</Rule>
<!--tertiary-->
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
<!--secondary-->
	<Rule>
		<Filter>[highway] = 'secondary'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
<!--primary -->
	<Rule>
		<Filter>[highway] = 'primary'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="12" stroke-linecap="butt"/>
	</Rule>
<!--street 2 -->
	<Rule>
		<Filter>[highway] = 'trunk'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="12" stroke-linecap="butt"/>
	</Rule>
<!--motorway-->
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="12" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="16" stroke-linecap="butt"/>
	</Rule>
<!--path-->
	<Rule>
		<Filter>[highway] = 'path' or [highway] = 'pedestrian' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="5" stroke-opacity="0.6" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'path' or [highway] = 'pedestrian' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="6" stroke-opacity="0.6" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'path' or [highway] = 'pedestrian' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="7" stroke-opacity="0.8" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'path' or [highway] = 'pedestrian' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="10" stroke-opacity="0.8" stroke-linecap="butt"/>
	</Rule>
<!--steps-->
        <Rule>
                <Filter>[highway] = 'steps'</Filter>
                &maxscale_zoom16;
                &minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="5.5" stroke-opacity="0.6" stroke-linecap="butt"/>
        </Rule>
        <Rule>
                <Filter>[highway] = 'steps'</Filter>
                &maxscale_zoom17;
                &minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="7" stroke-opacity="0.6" stroke-linecap="butt"/>
        </Rule>
        <Rule>
                <Filter>[highway] = 'steps'</Filter>
                &maxscale_zoom18;
                &minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="8" stroke-opacity="0.8" stroke-linecap="butt"/>
        </Rule>
<!--rail-->
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'narrow_gauge'</Filter>
		&maxscale_zoom16;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="6" stroke-opacity="0.8" stroke-linecap="butt"/>
	</Rule>
<!--monorail-->
        <Rule>
                <Filter>[railway] = 'monorail'</Filter>
                &maxscale_zoom16;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="5" stroke-opacity="0.8" stroke-linecap="butt"/>
        </Rule>
        <Rule>
                <Filter>[railway] = 'monorail'</Filter>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="6" stroke-opacity="0.8" stroke-linecap="butt"/>
        </Rule>
</Style>

<!-- - - - - - - - - - -->
<!--  INNER CASING     -->
<!-- - - - - - - - - - -->

<Style name="overpass-inner-casing" filter-mode="first">
<!--standard interchange-->
	<Rule>
		<Filter>[highway] = 'trunk_link' or [highway] = 'primary_link' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(184,158,125)" stroke-width="3" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk_link' or [highway] = 'primary_link' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(184,158,125)" stroke-width="6" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk_link' or [highway] = 'primary_link' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(184,158,125)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
<!--motorway interchange-->
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(171,84,104)" stroke-width="4" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(171,84,104)" stroke-width="4" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(171,84,104)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
<!--alley-->
	<Rule>
		<Filter>[highway] = 'service'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="2" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'service'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="3" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'service'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="4.5" stroke-linecap="butt"/>
	</Rule>
<!--tertiary-->
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="3.5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="6" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
<!--secondary-->
	<Rule>
		<Filter>[highway] = 'secondary'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="6" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
<!--primary -->
	<Rule>
		<Filter>[highway] = 'primary'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(207,147,33)" stroke-width="5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(207,147,33)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(207,147,33)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
<!--street 2 -->
	<Rule>
		<Filter>[highway] = 'trunk'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(175,89,89)" stroke-width="5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(175,89,89)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(175,89,89)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
<!--motorway-->
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(171,84,104)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(171,84,104)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(171,84,104)" stroke-width="14" stroke-linecap="butt"/>
	</Rule>
<!--path-->
	<Rule>
		<Filter>[highway] = 'path' or [highway] = 'pedestrian' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(235,235,235)" stroke-width="3" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'path' or [highway] = 'pedestrian' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(235,235,235)" stroke-width="4" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'path' or [highway] = 'pedestrian' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(235,235,235)" stroke-width="5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'path' or [highway] = 'pedestrian' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(235,235,235)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
<!--steps-->
        <Rule>
                <Filter>[highway] = 'steps'</Filter>
                &maxscale_zoom16;
                &minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(235,235,235)" stroke-width="3.5" stroke-linecap="butt"/>
        </Rule>
        <Rule>
                <Filter>[highway] = 'steps'</Filter>
                &maxscale_zoom17;
                &minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(235,235,235)" stroke-width="5" stroke-linecap="butt"/>
        </Rule>
        <Rule>
                <Filter>[highway] = 'steps'</Filter>
                &maxscale_zoom18;
                &minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(235,235,235)" stroke-width="6" stroke-linecap="butt"/>
        </Rule>
<!--rail-->
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'narrow_gauge'</Filter>
		&maxscale_zoom15;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(235,235,235)" stroke-width="4" stroke-linecap="butt"/>
	</Rule>
</Style>

<!-- - - - - - - - - - -->
<!--  INNER FILL       -->
<!-- - - - - - - - - - -->

<Style name="overpass-inner-fill" filter-mode="first">
<!--standard interchange-->
	<Rule>
		<Filter>[highway] = 'trunk_link' or [highway] = 'primary_link' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(220,191,149)" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk_link' or [highway] = 'primary_link' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(220,191,149)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk_link' or [highway] = 'primary_link' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(220,191,149)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk_link' or [highway] = 'primary_link' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(220,191,149)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
<!--motorway interchange-->
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(229,80,80)" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(229,80,80)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(229,80,80)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
<!--alley-->
	<Rule>
		<Filter>[highway] = 'service'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'service'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'service'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="4.5" stroke-linecap="round"/>
	</Rule>
<!--tertiary-->
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="1.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="5.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="6.5" stroke-linecap="round"/>
	</Rule>
<!--secondary-->
	<Rule>
		<Filter>[highway] = 'secondary'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
<!--primary-->
	<Rule>
		<Filter>[highway] = 'primary'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(251,226,151)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(251,226,151)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'primary'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(251,226,151)" stroke-width="8" stroke-linecap="round"/>
	</Rule>
<!--trunk-->
	<Rule>
		<Filter>[highway] = 'trunk'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(226,169,169)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(226,169,169)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(226,169,169)" stroke-width="8" stroke-linecap="round"/>
	</Rule>
<!--motorway-->
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(229,80,80)" stroke-width="5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(229,80,80)" stroke-width="7" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(229,80,80)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
<!--cycleway-->
	<Rule>
		<Filter>[highway] = 'cycleway' or [highway] = 'bridleway' or ([highway] = 'path' and [bicycle] = 'designated')</Filter>
		&maxscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="#35c" stroke-width="1.5" stroke-dasharray="1,3" stroke-linecap="round"/>
	</Rule>
<!--walkway-->
	<Rule>
		<Filter>[highway] = 'pedestrian' or [highway] = 'footway' or [highway] = 'path'</Filter>
		&maxscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="salmon" stroke-width="1.5" stroke-dasharray="1,3" stroke-linecap="round"/>
	</Rule>
<!--steps-->
        <Rule>
                <Filter>[highway] = 'steps'</Filter>
                &maxscale_zoom16;
                &minscale_zoom16;
		<LineSymbolizer stroke="salmon" stroke-width="3" stroke-dasharray="1,1"/>
        </Rule>
        <Rule>
                <Filter>[highway] = 'steps'</Filter>
                &maxscale_zoom17;
                &minscale_zoom17;
		<LineSymbolizer stroke="salmon" stroke-width="4" stroke-dasharray="2,1"/>
        </Rule>
        <Rule>
                <Filter>[highway] = 'steps'</Filter>
                &maxscale_zoom18;
                &minscale_zoom18;
		<LineSymbolizer stroke="salmon" stroke-width="6" stroke-dasharray="2,2"/>
        </Rule>
	<Rule>
                <Filter>[highway] = 'steps'</Filter>
                &maxscale_zoom19;
                &minscale_zoom19;
		<LineSymbolizer stroke="salmon" stroke-width="8" stroke-dasharray="3,2"/>
        </Rule>
<!--rail-->
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'narrow_gauge'</Filter>
		&maxscale_zoom15;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#afafaf" stroke-width="2.5"/>
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="1.5" stroke-dasharray="5,4"/>
	</Rule>
<!--monorail-->
        <Rule>
                <Filter>[railway] = 'monorail'</Filter>
                &maxscale_zoom16;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="#464661" stroke-width="5"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#d2edff" stroke-width="4"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#00004f" stroke-width=".5"/>
        </Rule>
        <Rule>
                <Filter>[railway] = 'monorail'</Filter>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="#464661" stroke-width="6"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#d2edff" stroke-width="5"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#00004f" stroke-width="1"/>
        </Rule>
</Style>

<!-- - - - - - - - - - -->
<!--  CENTER LINE      -->
<!-- - - - - - - - - - -->

<Style name="overpass-centerline" filter-mode="first">
<!--motorway-->
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,225,76)" stroke-width="2" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(255,225,76)" stroke-width="3" stroke-linecap="square"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(255,225,76)" stroke-width="4" stroke-linecap="square"/>
	</Rule>
</Style>

<Layer name="overpass-0" status="on" cache-features="on" srs="&osm2pgsql_projection;">
	<StyleName>overpass-outer-casing</StyleName>
	<StyleName>overpass-inner-casing</StyleName>
	<StyleName>overpass-inner-fill</StyleName>
	<StyleName>overpass-centerline</StyleName>
	<Datasource>
		<Parameter name="table">
		      (select way,highway,aeroway,railway,layer,horse,bicycle,foot,bridge
		       from &prefix;_line
		       where (layer is null or layer = '0')
		         and (highway is not null
		              or railway in ('rail', 'light_rail', 'subway', 'narrow_gauge', 'monorail'))
		         and bridge not in ('no','false','0')
			 and (service is null or service not in ('alley', 'emergency_access', 'parking_aisle', 'driveway', 'drive-through'))
		       order by (case when highway like '%_link' then z_order - 10 else z_order end)
		      ) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="overpass-1" status="on" cache-features="on" srs="&osm2pgsql_projection;">
	<StyleName>overpass-outer-casing</StyleName>
	<StyleName>overpass-inner-casing</StyleName>
	<StyleName>overpass-inner-fill</StyleName>
	<StyleName>overpass-centerline</StyleName>
	<Datasource>
		<Parameter name="table">
		      (select way,highway,aeroway,railway,layer,horse,bicycle,foot,bridge
		       from &prefix;_line
		       where layer = '1'
		         and (highway is not null
		              or railway in ('rail', 'light_rail', 'subway', 'narrow_gauge', 'monorail'))
		         and bridge not in ('no','false','0')
			 and (service is null or service not in ('alley', 'emergency_access', 'parking_aisle', 'driveway', 'drive-through'))
		       order by (case when highway like '%_link' then z_order - 10 else z_order end)
		      ) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="overpass-2" status="on" cache-features="on" srs="&osm2pgsql_projection;">
	<StyleName>overpass-outer-casing</StyleName>
	<StyleName>overpass-inner-casing</StyleName>
	<StyleName>overpass-inner-fill</StyleName>
	<StyleName>overpass-centerline</StyleName>
	<Datasource>
		<Parameter name="table">
		      (select way,highway,aeroway,railway,layer,horse,bicycle,foot,bridge
		       from &prefix;_line
		       where layer = '2' 
		         and (highway is not null
		              or railway in ('rail', 'light_rail', 'subway', 'narrow_gauge', 'monorail'))
		         and bridge not in ('no','false','0')
			 and (service is null or service not in ('alley', 'emergency_access', 'parking_aisle', 'driveway', 'drive-through'))
		       order by (case when highway like '%_link' then z_order - 10 else z_order end)
		      ) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="overpass-3" status="on" cache-features="on" srs="&osm2pgsql_projection;">
	<StyleName>overpass-outer-casing</StyleName>
	<StyleName>overpass-inner-casing</StyleName>
	<StyleName>overpass-inner-fill</StyleName>
	<StyleName>overpass-centerline</StyleName>
	<Datasource>
		<Parameter name="table">
		      (select way,highway,toll,aeroway,railway,layer,horse,bicycle,foot,bridge
		       from &prefix;_line
		       where layer = '3'
		         and (highway is not null
		              or railway in ('rail', 'light_rail', 'subway', 'narrow_gauge', 'monorail'))
		         and bridge not in ('no','false','0')
			 and (service is null or service not in ('alley', 'emergency_access', 'parking_aisle', 'driveway', 'drive-through'))
		       order by (case when highway like '%_link' then z_order - 10 else z_order end)
		      ) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="overpass-4" status="on" cache-features="on" srs="&osm2pgsql_projection;">
	<StyleName>overpass-outer-casing</StyleName>
	<StyleName>overpass-inner-casing</StyleName>
	<StyleName>overpass-inner-fill</StyleName>
	<StyleName>overpass-centerline</StyleName>
	<Datasource>
		<Parameter name="table">
		      (select way,highway,aeroway,railway,layer,horse,bicycle,foot,bridge
		       from &prefix;_line
		       where layer = '4'
		         and (highway is not null
		              or railway in ('rail', 'light_rail', 'subway', 'narrow_gauge', 'monorail'))
		         and bridge not in ('no','false','0')
			 and (service is null or service not in ('alley', 'emergency_access', 'parking_aisle', 'driveway', 'drive-through'))
		       order by (case when highway like '%_link' then z_order - 10 else z_order end)
		      ) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="overpass-5" status="on" cache-features="on" srs="&osm2pgsql_projection;">
	<StyleName>overpass-outer-casing</StyleName>
	<StyleName>overpass-inner-casing</StyleName>
	<StyleName>overpass-inner-fill</StyleName>
	<StyleName>overpass-centerline</StyleName>
	<Datasource>
		<Parameter name="table">
		      (select way,highway,aeroway,railway,layer,horse,bicycle,foot,bridge
		       from &prefix;_line
		       where layer = '5'
		         and (highway is not null
		              or railway in ('rail', 'light_rail', 'subway', 'narrow_gauge', 'monorail'))
		         and bridge not in ('no','false','0')
			 and (service is null or service not in ('alley', 'emergency_access', 'parking_aisle', 'driveway', 'drive-through'))
		       order by (case when highway like '%_link' then z_order - 10 else z_order end)
		      ) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
