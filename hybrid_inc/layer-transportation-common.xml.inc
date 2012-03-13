<!--ferry routes-->
<Style name="ferry-route">
	<Rule>
                &maxscale_zoom9;
                <LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="1.5" stroke-dasharray="8,4"/>
        </Rule>
</Style>
<!--pedestrian walkway/cycleway-->
<Style name="pedestrian-paths" filter-mode="first">
	<Rule>
		<Filter>[highway] = 'steps'</Filter>
		&maxscale_zoom16;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="#000" stroke-width="4" stroke-linecap="round" stroke-opacity="0.35"/>
		<LineSymbolizer stroke="salmon" stroke-width="3" stroke-dasharray="1,1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'steps'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#000" stroke-width="5" stroke-linecap="round" stroke-opacity="0.35"/>
		<LineSymbolizer stroke="salmon" stroke-width="4" stroke-dasharray="2,1"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'steps'</Filter>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#000" stroke-width="7" stroke-linecap="round" stroke-opacity="0.35"/>
		<LineSymbolizer stroke="salmon" stroke-width="6" stroke-dasharray="2,2"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'steps'</Filter>
                &maxscale_zoom19;
                &minscale_zoom19;
		<LineSymbolizer stroke-linejoin="round" stroke="#000" stroke-width="9" stroke-linecap="round" stroke-opacity="0.35"/>
		<LineSymbolizer stroke="salmon" stroke-width="8" stroke-dasharray="3,2"/>
        </Rule>
	<Rule>
		<Filter>[highway] = 'bridleway' or [highway] = 'cycleway' or [bicycle] = 'designated'</Filter>
                &maxscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="white" stroke-width="3" stroke-linecap="round" stroke-opacity="0.35"/>
		<LineSymbolizer stroke-linejoin="round" stroke="#35c" stroke-width="1.5" stroke-dasharray="1,3" stroke-linecap="round"/>
        </Rule>
	<Rule>
                
		&maxscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="#000" stroke-width="4" stroke-linecap="round" stroke-opacity="0.35"/>
		<LineSymbolizer stroke-linejoin="round" stroke="salmon" stroke-width="1.5" stroke-dasharray="1,3" stroke-linecap="round"/>
	</Rule>
</Style>
<!--rail-->
<Style name="rail">
	<!--train-->
        <Rule>
		<Filter>[railway] = 'rail' or [railway] = 'station' or [railway] = 'light_rail' or [railway] = 'narrow_gauge'</Filter>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="#afafaf" stroke-width="1.5"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="1" stroke-dasharray="4,3"/>
        </Rule>
        <Rule>
                <Filter>[railway] = 'rail' or [railway] = 'station' or [railway] = 'light_rail' or [railway] = 'narrow_gauge'</Filter>
                &maxscale_zoom14;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="#afafaf" stroke-width="2.5"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="1.5" stroke-dasharray="5,4"/>
        </Rule>
        <Rule>
                <Filter>[railway] = 'rail' or [railway] = 'station' or [railway] = 'light_rail' or [railway] = 'narrow_gauge'</Filter>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="#afafaf" stroke-width="4.5"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="3.5" stroke-dasharray="7,7"/>
        </Rule>
        <!--subway-->
        <Rule>
                <Filter>[railway] = 'subway'</Filter>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="#c1c1c1" stroke-width="1.5" stroke-opacity=".5"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="1" stroke-dasharray="4,3"/>
        </Rule>
        <Rule>
                <Filter>[railway] = 'subway'</Filter>
                &maxscale_zoom14;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="#c1c1c1" stroke-width="2.5" stroke-opacity=".5"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="1.5" stroke-dasharray="5,4"/>
        </Rule>
        <Rule>
                <Filter>[railway] = 'subway'</Filter>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="#c1c1c1" stroke-width="4.5" stroke-opacity=".5"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="3.5" stroke-dasharray="7,7"/>
        </Rule>
</Style>
<Style name="monorail">
        <!--monorail-->
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom14;
                <LineSymbolizer stroke-linejoin="round" stroke="#464661" stroke-width="1.5"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#d2edff" stroke-width="0.5"/>
        </Rule>
        <Rule>
                &maxscale_zoom15;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="#464661" stroke-width="3.5"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#d2edff" stroke-width="2.5"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="#464661" stroke-width="5"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#d2edff" stroke-width="4"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#00004f" stroke-width=".5"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="#464661" stroke-width="6"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#d2edff" stroke-width="5"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#00004f" stroke-width="1"/>
        </Rule>
</Style>
<Style name="tram">
        <!--tram-->
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="#c8c8c8" stroke-width="1"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="#c8c8c8" stroke-width="2"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#c8c8c8" stroke-width="3.5" stroke-dasharray="2,5"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="#c8c8c8" stroke-width="3"/>
                <LineSymbolizer stroke-linejoin="round" stroke="#c8c8c8" stroke-width="4.5" stroke-dasharray="2,5"/>
        </Rule>
</Style>

<Layer name="ferry-routes" status="on" srs="&osm2pgsql_projection;">
	<StyleName>ferry-route</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way, route
		 from &prefix;_line
		 where route = 'ferry'
		) as routes
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="pedestrian-paths" status="on" srs="&osm2pgsql_projection;">
	<StyleName>pedestrian-paths</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way, highway, bicycle from &prefix;_line
		 where highway in ('pedestrian', 'footway', 'steps', 'bridleway', 'cycleway', 'path')
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="rail" status="on" srs="&osm2pgsql_projection;">
	<StyleName>rail</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way, railway
		 from &prefix;_line
		 where railway in ('rail', 'light_rail', 'subway', 'station', 'narrow_gauge')
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
