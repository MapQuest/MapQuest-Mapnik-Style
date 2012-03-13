<!--high-level road network: zooms 5-7-->
<Style name="roads-lowzoom" filter-mode="first">
        <Rule>
                &maxscale_zoom5;
                &minscale_zoom5;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(130,160,200)" stroke-width="0.65" stroke-opacity="0.48" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom6;
                &minscale_zoom6;
                <Filter>[highway] = 'trunk'</Filter>
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(166,159,133)" stroke-opacity="0.4" stroke-width="0.4" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom6;
                &minscale_zoom6;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(110,140,200)" stroke-width="1" stroke-opacity="0.6" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom7;
                &minscale_zoom7;
                <Filter>[highway] = 'trunk'</Filter>
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(242,194,121)" stroke-width=".6" stroke-opacity="0.75" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom7;
                &minscale_zoom7;
                <Filter>[toll] = 'yes'</Filter>
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(119,179,131)" stroke-width="1.75" stroke-opacity="0.75" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom7;
                &minscale_zoom7;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(61,109,204)" stroke-width="1.75" stroke-opacity="0.75" stroke-linecap="round"/>
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
<!--freeway interchange-->
<Style name="freeway-ramp">
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,144,227)" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,144,227)" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,144,227)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,144,227)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(108,144,227)" stroke-width="10" stroke-linecap="round"/>
        </Rule>
</Style>
<!--tollway interchange-->
<Style name="tollway-ramp">
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom14;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="1" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom15;
                &minscale_zoom16;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom17;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="4" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="6" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="10" stroke-linecap="round"/>
        </Rule>	
</Style>
<!--street 5-->
<Style name="street-5-lowzoom-1" filter-mode="first">
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom14;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="0.5" stroke-opacity="0.5" stroke-linecap="round"/>
        </Rule>
</Style>
<Style name="street-5-lowzoom-2" filter-mode="first">
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
<Style name="street-5" filter-mode="first">
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
<!--street 4-->
<Style name="street-4">
	<Rule>
                &maxscale_zoom10;
                &minscale_zoom10;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(244,250,160)" stroke-width="0.75" stroke-opacity="0.75" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom11;
                &minscale_zoom12;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(244,250,160)" stroke-width="1" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom13;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(242,242,145)" stroke-width="1.75" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(246,240,163)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(246,240,163)" stroke-width="5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(246,240,163)" stroke-width="9" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(246,240,163)" stroke-width="13" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 3-->
<Style name="street-3">
        <Rule>
                &maxscale_zoom8;
                &minscale_zoom9;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(220,220,220)" stroke-width="0.75" stroke-opacity="0.75" stroke-linecap="round"/>
        </Rule>
	<Rule>
                &maxscale_zoom10;
                &minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,112)" stroke-width="1.5" stroke-opacity="0.85" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,112)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,112)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,112)" stroke-width="5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,112)" stroke-width="9" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,112)" stroke-width="13" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 2-->
<Style name="street-2">
        <Rule>
                &maxscale_zoom8;
                &minscale_zoom9;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(242,194,121)" stroke-width="1.25" stroke-linecap="round"/>
        </Rule>
	<Rule>
                &maxscale_zoom10;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,112)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,112)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,112)" stroke-width="6" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,112)" stroke-width="10" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,112)" stroke-width="14" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 1 casing-->
<Style name="street-1-casing">
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(45,72,128)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(45,72,128)" stroke-width="5" stroke-linecap="round"/>
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
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="16" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="20" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 1-->
<Style name="street-1">
        <Rule>
                &maxscale_zoom8;
                &minscale_zoom9;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(71,107,178)" stroke-width="3.5" stroke-linecap="round"/>
        </Rule>
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="2.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="3.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="7" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="10" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="14" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 1 centerline-->
<Style name="street-1-centerline">
	<Rule>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(182,202,242)" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="0.75"/>
	</Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="1" stroke-linecap="round"/>
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
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="6" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 1 toll casing-->
<Style name="street-1-toll-casing">
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(38,128,38)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(38,128,38)" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="8" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="12" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="16" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="20" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 1 toll-->
<Style name="street-1-toll">
	<Rule>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(77,153,77)" stroke-width="3.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(136,204,102)" stroke-width="2.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(136,204,102)" stroke-width="3.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="8" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="10" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="14" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 1 toll centerline-->
<Style name="street-1-toll-centerline">
	<Rule>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(156,204,133)" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(217,229,211)" stroke-width="0.75"/>
	</Rule>
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(217,229,211)" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(213,232,216)" stroke-width="1.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(213,232,216)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(213,232,216)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(213,232,216)" stroke-width="6" stroke-linecap="round"/>
        </Rule> 
</Style>

<Layer name="roads-lowzoom" status="on" srs="&osm2pgsql_projection;">
        <StyleName>roads-lowzoom</StyleName>
        <Datasource>
        <Parameter name="table">
                (select way, highway,
                 case when toll in ('yes', 'true', '1') then 'yes'::text else 'no' end as toll
                 from &prefix;_roads
                 where highway in ('motorway', 'trunk')
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
&layer-transportation-common;
<Layer name="standard-ramp" status="on" srs="&osm2pgsql_projection;">
        <StyleName>standard-ramp</StyleName>
        <Datasource>
        <Parameter name="table">
                (select way,highway
                 from &prefix;_line
                 where highway in ('trunk_link', 'primary_link', 'secondary_link', 'tertiary_link', 'residential_link', 'unclassified_link')
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="freeway-ramp" status="on" srs="&osm2pgsql_projection;">
	<StyleName>freeway-ramp</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_roads
		 where highway = 'motorway_link' and (toll is null or toll not in ('yes', 'true', '1'))
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="tollway-ramp" status="on" srs="&osm2pgsql_projection;">
	<StyleName>tollway-ramp</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_roads
		 where highway = 'motorway_link' and toll in ('yes', 'true', '1')
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-5-lowzoom-1" status="on" srs="&osm2pgsql_projection;">
        <StyleName>street-5-lowzoom-1</StyleName>
        <Datasource>
        <Parameter name="table">
                (select way,highway
                 from &prefix;_line
                 where highway in ('residential', 'living_street', 'unclassified', 'road')
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="street-5-lowzoom-2" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-5-lowzoom-2</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_line
		 where highway in ('residential', 'living_street', 'unclassified', 'road', 'service')	
		   and (service is null or service not in ('alley', 'emergency_access', 'driveway', 'drive-through', 'parking_aisle'))
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-5" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-5</StyleName>
	<Datasource>
	<Parameter name="table">
	      (select way,highway,service
	       from &prefix;_line
	       where highway in ('residential', 'living_street', 'unclassified', 'road', 'service')
	      ) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-4" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-4</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_line
		 where highway in ('secondary', 'tertiary')
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-3" status="on" srs="&osm2pgsql_projection;">
        <StyleName>street-3</StyleName>
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
<Layer name="street-2" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-2</StyleName>
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
<Layer name="street-1" cache-features="on" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-1-casing</StyleName>
	<StyleName>street-1</StyleName>
	<StyleName>street-1-centerline</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway,toll
		 from &prefix;_roads
		 where highway = 'motorway' and (toll is null or toll not in ('yes', 'true', '1'))
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-1-toll" cache-features="on" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-1-toll-casing</StyleName>
	<StyleName>street-1-toll</StyleName>
	<StyleName>street-1-toll-centerline</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway,toll
		 from &prefix;_roads
		 where highway = 'motorway' and toll in ('yes', 'true', '1')
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

