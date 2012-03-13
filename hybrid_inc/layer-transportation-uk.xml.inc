<!--high-level road network: zooms 6-7-->
<Style name="roads-lowzoom" filter-mode="first">
	<Rule>
		&maxscale_zoom6;
                &minscale_zoom6;
		<Filter>[highway] = 'trunk'</Filter>
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(130,217,158)" stroke-width="1" stroke-opacity="0.6"/>
        </Rule>
	<Rule>
		&maxscale_zoom6;
		&minscale_zoom6;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(61,109,204)" stroke-width="1.25" stroke-opacity="0.6"/>
	</Rule>
	<Rule>
		&maxscale_zoom7;
                &minscale_zoom7;
		<Filter>[highway] = 'trunk'</Filter>
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(130,217,158)" stroke-width="1.25" stroke-opacity="0.75"/>
        </Rule>
	<Rule>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(61,109,204)" stroke-width="1.5" stroke-opacity="0.75"/>
	</Rule>
</Style>
<!--motorway interchange casing-->
<Style name="motorway-ramp-casing">
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(45,72,128)" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="8" stroke-linecap="round"/>
	</Rule>
</Style>
<!--secondary casing-->
<Style name="secondary-casing">
	<Rule>
                &maxscale_zoom11;
                &minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(216,187,120)" stroke-width="1.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(204,170,102)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(195,159,96)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(195,159,96)" stroke-width="5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(195,159,96)" stroke-width="9" stroke-linecap="round"/>
        </Rule>
</Style>
<!--primary casing-->
<Style name="primary-casing">
        <Rule>
                &maxscale_zoom8;
                &minscale_zoom8;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(205,148,148)" stroke-width="0.8" stroke-opacity="0.9" stroke-linecap="round"/>
        </Rule>
	<Rule>
                &maxscale_zoom9;
                &minscale_zoom9;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(205,148,148)" stroke-width="1" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom10;
                &minscale_zoom10;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(205,148,148)" stroke-width="1.25" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom11;
                &minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(177,138,138)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(171,89,89)" stroke-width="2.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(204,122,122)" stroke-width="3.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(204,122,122)" stroke-width="5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(204,122,122)" stroke-width="9" stroke-linecap="round"/>
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
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(87,130,217)" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(87,130,217)" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(98,135,217)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(98,135,217)" stroke-width="6" stroke-linecap="round"/>
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
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(250,237,175)" stroke-width="1" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(250,235,162)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(250,235,162)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(250,235,162)" stroke-width="6" stroke-linecap="round"/>
        </Rule>
</Style>
<!--primary-->
<Style name="primary">
        <Rule>
                &maxscale_zoom11;
                &minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(228,178,178)" stroke-width="1" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(228,171,171)" stroke-width="1.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(228,171,171)" stroke-width="2.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(228,171,171)" stroke-width="3.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(228,171,171)" stroke-width="6.5" stroke-linecap="round"/>
        </Rule>
</Style>
<!--trunk casing-->
<Style name="trunk-casing">
	<Rule>
		&maxscale_zoom8;
		&minscale_zoom8;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(80,166,118)" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom9;
		&minscale_zoom9;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(80,166,118)" stroke-width="2.5" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom10;
                &minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(64,128,93)" stroke-width="4" stroke-linecap="round"/>
        </Rule>
	<Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(64,128,93)" stroke-width="5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(51,128,79)" stroke-width="7" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(51,128,79)" stroke-width="10" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(51,128,79)" stroke-width="12" stroke-linecap="round"/>
        </Rule>
</Style>
<!--trunk-->
<Style name="trunk">
        <Rule>
                &maxscale_zoom8;
                &minscale_zoom8;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(130,217,158)" stroke-width="0.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom9;
                &minscale_zoom9;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(130,217,158)" stroke-width="1" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom10;
                &minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(64,198,120)" stroke-width="2.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(64,198,120)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(86,191,125)" stroke-width="5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(86,191,125)" stroke-width="6" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(86,191,125)" stroke-width="8" stroke-linecap="round"/>
        </Rule>
</Style>
<!--trunk centerline-->
<Style name="trunk-centerline">
        <Rule>
                &maxscale_zoom10;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(243,253,200)" stroke-width="0.5"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(243,253,220)" stroke-width="2"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(243,253,220)" stroke-width="3"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(243,253,220)" stroke-width="4"/>
        </Rule>
</Style>
<!--street 1 casing-->
<Style name="motorway-casing">
        <Rule>
                &maxscale_zoom8;
                &minscale_zoom8;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(66,101,163)" stroke-width="4" stroke-linecap="round"/>
        </Rule>
	<Rule>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(45,72,128)" stroke-width="5" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom10;
                &minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(45,72,128)" stroke-width="6" stroke-linecap="round"/>
        </Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="8" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="12" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="16" stroke-linecap="round"/>
	</Rule>
</Style>
<!--motorway-->
<Style name="motorway">
	<Rule>
		&maxscale_zoom8;
		&minscale_zoom8;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(141,170,230)" stroke-width="1"/>
	</Rule>
        <Rule>
                &maxscale_zoom9;
                &minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(87,130,217)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(87,130,217)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(87,130,217)" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(98,135,217)" stroke-width="7" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(98,135,217)" stroke-width="10" stroke-linecap="round"/>
	</Rule>
</Style>
<!--motorway centerline-->
<Style name="motorway-centerline">
	<Rule>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(194,210,242)" stroke-width="0.75"/>
	</Rule>
        <Rule>
                &maxscale_zoom10;
                &minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(194,210,242)" stroke-width="1"/>
        </Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="1.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="4" stroke-linecap="round"/>
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
<Layer name="secondary-casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>secondary-casing</StyleName>
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
                 from &prefix;_roads
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
<Layer name="trunk" cache-features="on" status="on" srs="&osm2pgsql_projection;">
	<StyleName>trunk-casing</StyleName>
	<StyleName>trunk</StyleName>
	<StyleName>trunk-centerline</StyleName>
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
