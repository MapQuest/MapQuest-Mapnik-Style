<!--County boundary casing-->
<Style name="county border casing">
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#d2d2d2" stroke-width="3" stroke-opacity="1"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="#d2d2d2" stroke-width="4" stroke-opacity="1"/>
	</Rule>
</Style>

<!--State boundary casing-->
<Style name="state border casing">
        <Rule>
                &maxscale_zoom9;
                &minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="3" stroke-opacity=".4"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="5" stroke-opacity=".4"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                <LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="7" stroke-opacity=".4"/>
        </Rule>
</Style>

<!--Country boundary casing-->
<Style name="country border casing">
        <Rule>
                &maxscale_zoom6;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,222,140)" stroke-width="2" stroke-opacity="1"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,222,140)" stroke-width="4" stroke-opacity="1"/>
        </Rule>
</Style>

<Layer name="county border casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>county border casing</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('6')
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>

<Layer name="state border casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>state border casing</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('4')
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>

<Layer name="country border casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>country border casing</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('2')
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
