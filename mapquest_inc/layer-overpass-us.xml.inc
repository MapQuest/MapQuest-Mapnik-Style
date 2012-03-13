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
	<Rule>
		<Filter>[highway] = 'trunk_link' or [highway] = 'primary_link' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="14" stroke-linecap="butt"/>
	</Rule>
<!--motorway/tollway interchange-->
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
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="14" stroke-linecap="butt"/>
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
	<Rule>
		<Filter>[highway] = 'service'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="11" stroke-linecap="butt"/>
	</Rule>
<!--street 5-->
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="8.5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="10.5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="14.5" stroke-linecap="butt"/>
	</Rule>
<!--street 4-->
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'tertiary'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'tertiary'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="12" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'tertiary'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="16.5" stroke-linecap="butt"/>
	</Rule>
<!--street 2-3 -->
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="10.5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="12.5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="16.5" stroke-linecap="butt"/>
	</Rule>
<!--street 1-->
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
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="17" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="22" stroke-linecap="butt"/>
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
        <Rule>
                <Filter>[highway] = 'steps'</Filter>
                &maxscale_zoom19;
                &minscale_zoom19;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="11" stroke-opacity="0.8" stroke-linecap="butt"/>
        </Rule>
<!--rail-->
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'narrow_gauge'</Filter>
		&maxscale_zoom16;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="6" stroke-opacity="0.8" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'narrow_gauge'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(50,50,50)" stroke-width="9" stroke-opacity="0.8" stroke-linecap="butt"/>
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
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(184,158,125)" stroke-width="3" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk_link' or [highway] = 'primary_link' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(184,158,125)" stroke-width="5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk_link' or [highway] = 'primary_link' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(184,158,125)" stroke-width="4" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk_link' or [highway] = 'primary_link' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(184,158,125)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk_link' or [highway] = 'primary_link' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(184,158,125)" stroke-width="12" stroke-linecap="butt"/>
	</Rule>
<!--tollway interchange-->
	<Rule>
		<Filter>[highway] = 'motorway_link' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="4" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom16;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="6" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="4" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="12" stroke-linecap="butt"/>
	</Rule>
<!--motorway interchange-->
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="4" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="6" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="4" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="12" stroke-linecap="butt"/>
	</Rule>
<!--alley-->
	<Rule>
		<Filter>[highway] = 'service'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(175,175,175)" stroke-width="2.75" stroke-linecap="butt"/>
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
	<Rule>
		<Filter>[highway] = 'service'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="9" stroke-linecap="butt"/>
	</Rule>
<!--street 5-->
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(175,175,175)" stroke-width="2.5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="6.5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="8.5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="12.5" stroke-linecap="butt"/>
	</Rule>
<!--street 4-->
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'tertiary'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(204,173,112)" stroke-width="5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'tertiary'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(204,173,112)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'tertiary'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(204,173,112)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'tertiary'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(204,173,112)" stroke-width="14.5" stroke-linecap="butt"/>
	</Rule>
<!--street 2-3 -->
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="8.5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="10.5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="14.5" stroke-linecap="butt"/>
	</Rule>
<!--street 1 toll-->
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="14" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="18" stroke-linecap="butt"/>
	</Rule>
<!--street 1-->
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="14" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="18" stroke-linecap="butt"/>
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
        <Rule>
                <Filter>[highway] = 'steps'</Filter>
                &maxscale_zoom19;
                &minscale_zoom19;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(235,235,235)" stroke-width="9" stroke-linecap="butt"/>
        </Rule>
<!--rail-->
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'narrow_gauge'</Filter>
		&maxscale_zoom15;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(235,235,235)" stroke-width="4" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'narrow_gauge'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(235,235,235)" stroke-width="7" stroke-linecap="butt"/>
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
	<Rule>
		<Filter>[highway] = 'trunk_link' or [highway] = 'primary_link' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(220,191,149)" stroke-width="10" stroke-linecap="round"/>
	</Rule>
<!--tollway interchange-->
	<Rule>
		<Filter>[highway] = 'motorway_link' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="10" stroke-linecap="round"/>
	</Rule>
<!--motorway interchange-->
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,144,227)" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,144,227)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,144,227)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(108,144,227)" stroke-width="10" stroke-linecap="round"/>
	</Rule>
<!--alley-->
	<Rule>
		<Filter>[highway] = 'service'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="1.75" stroke-linecap="round"/>
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
	<Rule>
		<Filter>[highway] = 'service'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="9" stroke-linecap="round"/>
	</Rule>
<!--street 5-->
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="2.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="5.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="7" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="11" stroke-linecap="round"/>
	</Rule>
<!--street 4-->
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'tertiary'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(246,240,163)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'tertiary'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(246,240,163)" stroke-width="7" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'tertiary'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(246,240,163)" stroke-width="9" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'tertiary'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(246,240,163)" stroke-width="13" stroke-linecap="round"/>
	</Rule>
<!--street 2-3-->
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,142)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,142)" stroke-width="7" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,142)" stroke-width="9" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,142)" stroke-width="13" stroke-linecap="round"/>
	</Rule>
<!--street 1 toll-->
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="8" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="14" stroke-linecap="butt"/>
	</Rule>
<!--street 1-->
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="7" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="10" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="14" stroke-linecap="butt"/>
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
        <Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'narrow_gauge'</Filter>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="#afafaf" stroke-width="4.5"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="3.5" stroke-dasharray="7,7"/>
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
<!--street 1 toll-->
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(213,232,216)" stroke-width="1.5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(213,232,216)" stroke-width="3" stroke-linecap="square"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(213,232,216)" stroke-width="4" stroke-linecap="square"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and ([toll] = 'yes' or [toll] = 'true' or [toll] = '1')</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(213,232,216)" stroke-width="6" stroke-linecap="square"/>
	</Rule>
<!--street 1-->
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="1.5" stroke-linecap="butt"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="3" stroke-linecap="square"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="4" stroke-linecap="square"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom19;
		&minscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="6" stroke-linecap="square"/>
	</Rule>
</Style>

<Layer name="overpass-0" status="on" cache-features="on" srs="&osm2pgsql_projection;">
	<StyleName>overpass-outer-casing</StyleName>
	<StyleName>overpass-inner-casing</StyleName>
	<StyleName>overpass-inner-fill</StyleName>
	<StyleName>overpass-centerline</StyleName>
	<Datasource>
		<Parameter name="table">
		      (select way,highway,toll,aeroway,railway,layer,horse,bicycle,foot,bridge
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
		      (select way,highway,toll,aeroway,railway,layer,horse,bicycle,foot,bridge
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
		      (select way,highway,toll,aeroway,railway,layer,horse,bicycle,foot,bridge
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
		      (select way,highway,toll,aeroway,railway,layer,horse,bicycle,foot,bridge
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
		      (select way,highway,toll,aeroway,railway,layer,horse,bicycle,foot,bridge
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
