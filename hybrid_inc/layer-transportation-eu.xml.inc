<!--high-level road network: zooms 6-7-->
<Style name="roads-lowzoom" filter-mode="first">
	<Rule>
		&maxscale_zoom6;
                &minscale_zoom6;
		<Filter>[highway] = 'trunk'</Filter>
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="0.5" stroke-opacity="0.5"/>
        </Rule>
	<Rule>
		&maxscale_zoom6;
		&minscale_zoom6;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(155,80,70)" stroke-width="1" stroke-opacity="0.4"/>
	</Rule>
	<Rule>
		&maxscale_zoom7;
                &minscale_zoom7;
		<Filter>[highway] = 'trunk'</Filter>
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="0.6" stroke-opacity="0.75"/>
        </Rule>
	<Rule>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(217,109,109)" stroke-width="1.25" stroke-opacity="0.75"/>
	</Rule>
</Style>
<!--motorway interchange casing-->
<Style name="motorway-ramp-casing">
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(171,84,104)" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(171,84,104)" stroke-width="3.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(171,84,104)" stroke-width="5.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(171,84,104)" stroke-width="7.5" stroke-linecap="round"/>
	</Rule>
</Style>
<!--primary casing-->
<Style name="primary-casing">
	<Rule>
                &maxscale_zoom10;
                &minscale_zoom10;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(225,190,110)" stroke-width="1.25" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom11;
                &minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(207,147,33)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(207,147,33)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(207,147,33)" stroke-width="4" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(207,147,33)" stroke-width="6" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(207,147,33)" stroke-width="11" stroke-linecap="round"/>
        </Rule>
</Style>
<!--trunk casing-->
<Style name="trunk-casing">
	<Rule>
                &maxscale_zoom8;
                &minscale_zoom8;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(225,190,110)" stroke-width="1.25" stroke-linecap="round"/>
        </Rule>
	<Rule>
		&maxscale_zoom9;
		&minscale_zoom9;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(207,147,33)" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom10;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(175,89,89)" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom11;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(175,89,89)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(175,89,89)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(175,89,89)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(175,89,89)" stroke-width="11" stroke-linecap="round"/>
	</Rule>
</Style>
<!--standard interchange-->
<Style name="standard-ramp">
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(220,191,149)" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(220,191,149)" stroke-width="1.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(220,191,149)" stroke-width="3.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(220,191,149)" stroke-width="5" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(220,191,149)" stroke-width="8" stroke-linecap="round"/>
        </Rule>
</Style>
<!--motorway interchange-->
<Style name="motorway-ramp">
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(229,80,80)" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(229,80,80)" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(229,80,80)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(229,80,80)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
</Style>
<!--tertiary-->
<Style name="tertiary-lowzoom-1" filter-mode="first">
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom14;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="0.5" stroke-opacity="0.5" stroke-linecap="round"/>
        </Rule>
</Style>
<Style name="tertiary-lowzoom-2" filter-mode="first">
        <Rule>
                <Filter>[highway] = 'service'</Filter>
                &maxscale_zoom15;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(178,178,178)" stroke-width="0.5" stroke-opacity="0.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom15;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="1" stroke-opacity="0.75" stroke-linecap="round"/>
        </Rule>
        <Rule>
                <Filter>[highway] = 'service'</Filter>
                &maxscale_zoom16;
                &minscale_zoom16;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="1" stroke-opacity="0.85" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom16;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="2" stroke-opacity="0.85" stroke-linecap="round"/>
        </Rule>
</Style>
<Style name="tertiary" filter-mode="first">
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'parking_aisle' or [service] = 'driveway' or [service] = 'drive-through')</Filter>
                &maxscale_zoom17;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(178,178,178)" stroke-width="0.75" stroke-opacity="0.75" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'alley' or [service] = 'emergency_access')</Filter>
                &maxscale_zoom17;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="1" stroke-opacity="0.85" stroke-linecap="round"/>
        </Rule>
        <Rule>
                <Filter>[highway] = 'service'</Filter>
                &maxscale_zoom17;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom17;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'parking_aisle' or [service] = 'driveway' or [service] = 'drive-through')</Filter>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="1.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'alley' or [service] = 'emergency_access')</Filter>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="2.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                <Filter>[highway] = 'service'</Filter>
                &maxscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="4" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="7" stroke-linecap="round"/>
        </Rule>
</Style>
<!--secondary-->
<Style name="secondary">
        <Rule>
                &maxscale_zoom10;
                &minscale_zoom10;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(200,200,200)" stroke-width="0.5" stroke-opacity="0.8" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom11;
                &minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="0.8" stroke-opacity="0.8" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="1" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="8" stroke-linecap="round"/>
        </Rule>
</Style>
<!--primary-->
<Style name="primary">
	<Rule>
                &maxscale_zoom11;
                &minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(251,226,151)" stroke-width="0.75" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(251,226,151)" stroke-width="1" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(251,226,151)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(251,226,151)" stroke-width="4" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(251,226,151)" stroke-width="8.5" stroke-linecap="round"/>
        </Rule>
</Style>
<!--trunk-->
<Style name="trunk">
	<Rule>
                &maxscale_zoom9;
                &minscale_zoom9;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(251,226,151)" stroke-width="0.75" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom10;
                &minscale_zoom10;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(226,169,169)" stroke-width="0.75" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom11;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(226,169,169)" stroke-width="1" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(226,169,169)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(226,169,169)" stroke-width="4" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(226,169,169)" stroke-width="8.5" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 1 casing-->
<Style name="motorway-casing">
	<Rule>
                &maxscale_zoom10;
                &minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(171,84,104)" stroke-width="6" stroke-linecap="round"/>
        </Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(171,84,104)" stroke-width="8" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(171,84,104)" stroke-width="12" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(171,84,104)" stroke-width="16" stroke-linecap="round"/>
	</Rule>
</Style>
<!--motorway-->
<Style name="motorway">
	<Rule>
                &maxscale_zoom8;
                &minscale_zoom8;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(217,109,109)" stroke-width="4" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom9;
                &minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(217,76,76)" stroke-width="4.5" stroke-linecap="round"/>
        </Rule>
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(229,80,80)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(229,80,80)" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(229,80,80)" stroke-width="7" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(229,80,80)" stroke-width="10" stroke-linecap="round"/>
	</Rule>
</Style>
<!--motorway centerline-->
<Style name="motorway-centerline">
	<Rule>
		&maxscale_zoom8;
		&minscale_zoom8;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(250,229,125)" stroke-width="1"/>
	</Rule>
	<Rule>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(250,229,125)" stroke-width="1.25"/>
	</Rule>
	<Rule>
                &maxscale_zoom10;
                &minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(255,225,76)" stroke-width="1"/>
        </Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(255,225,76)" stroke-width="1.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(255,225,76)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(255,225,76)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
</Style>

<Layer name="roads-lowzoom" status="on" srs="&osm2pgsql_projection;">
        <StyleName>roads-lowzoom</StyleName>
        <Datasource>
        <Parameter name="table">
                (select way, highway
                 from &prefix;_roads
                 where highway in ('motorway', 'trunk')
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
&layer-transportation-common;
<Layer name="motorway-ramp-casing" status="on" srs="&osm2pgsql_projection;">
        <StyleName>motorway-ramp-casing</StyleName>
        <Datasource>
        <Parameter name="table">
                (select way,highway
                 from &prefix;_roads
                 where highway = 'motorway_link'
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="primary-casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>primary-casing</StyleName>
	<Datasource>
	<Parameter name="table">
                (select way,highway
                 from &prefix;_roads
                 where highway = 'primary'
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="trunk-casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>trunk-casing</StyleName>
	<Datasource>
	<Parameter name="table">
                (select way,highway
                 from &prefix;_roads
                 where highway = 'trunk'
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="standard-ramp" status="on" srs="&osm2pgsql_projection;">
        <StyleName>standard-ramp</StyleName>
        <Datasource>
        <Parameter name="table">
                (select way,highway
                 from &prefix;_roads
                 where highway in ('trunk_link', 'primary_link', 'secondary_link', 'tertiary_link', 'residential_link', 'unclassified_link')
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="motorway-ramp" status="on" srs="&osm2pgsql_projection;">
        <StyleName>motorway-ramp</StyleName>
        <Datasource>
        <Parameter name="table">
                (select way,highway
                 from &prefix;_roads
                 where highway = 'motorway_link'
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="tertiary-lowzoom-1" status="on" srs="&osm2pgsql_projection;">
	<StyleName>tertiary-lowzoom-1</StyleName>
	<Datasource>
        <Parameter name="table">
                (select way,highway
                 from &prefix;_line
                 where highway in ('tertiary', 'residential', 'living_street', 'unclassified', 'road')
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="tertiary-lowzoom-2" status="on" srs="&osm2pgsql_projection;">
	<StyleName>tertiary-lowzoom-2</StyleName>
	<Datasource>
        <Parameter name="table">
		(select way,highway
		 from &prefix;_line
		 where highway in ('tertiary', 'residential', 'living_street', 'unclassified', 'road', 'service')	
		   and (service is null or service not in ('alley', 'emergency_access', 'driveway', 'drive-through', 'parking_aisle'))
		) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="tertiary" status="on" srs="&osm2pgsql_projection;">
	<StyleName>tertiary</StyleName>
	<Datasource>
        <Parameter name="table">
	      (select way,highway,service
	       from &prefix;_line
	       where highway in ('tertiary', 'residential', 'living_street', 'unclassified', 'road', 'service')
	      ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="secondary" status="on" srs="&osm2pgsql_projection;">
	<StyleName>secondary</StyleName>
	<Datasource>
        <Parameter name="table">
                (select way,highway
                 from &prefix;_line
                 where highway = 'secondary'
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="primary" status="on" srs="&osm2pgsql_projection;">
	<StyleName>primary</StyleName>
	<Datasource>
        <Parameter name="table">
                (select way,highway
                 from &prefix;_roads
                 where highway = 'primary'
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="trunk" status="on" srs="&osm2pgsql_projection;">
	<StyleName>trunk</StyleName>
	<Datasource>
        <Parameter name="table">
                (select way,highway
                 from &prefix;_roads
                 where highway = 'trunk'
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="motorway" cache-features="on" status="on" srs="&osm2pgsql_projection;">
	<StyleName>motorway-casing</StyleName>
	<StyleName>motorway</StyleName>
	<StyleName>motorway-centerline</StyleName>
	<Datasource>
        <Parameter name="table">
                (select way,highway
                 from &prefix;_roads
                 where highway = 'motorway'
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="tram" status="on" srs="&osm2pgsql_projection;">
        <StyleName>tram</StyleName>
        <Datasource>
        <Parameter name="table">
                (select way
                 from &prefix;_line
                 where railway = 'tram') as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="monorail" status="on" srs="&osm2pgsql_projection;">
        <StyleName>monorail</StyleName>
        <Datasource>
        <Parameter name="table">
                (select way
                 from &prefix;_line
                 where railway = 'monorail') as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
