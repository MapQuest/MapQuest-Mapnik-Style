<!--County boundary-->
<Style name="county border">
	<Rule>
		<Filter>[admin_level]='6'</Filter>
		&maxscale_zoom9;
		&minscale_zoom11;
		<LineSymbolizer>
			<CssParameter name="stroke">#8c8c8c</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-dasharray">6,2,2,2</CssParameter>
			<CssParameter name="stroke-opacity">.25</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[admin_level]='6'</Filter>
		&maxscale_zoom12;
		<LineSymbolizer>
			<CssParameter name="stroke">#aaaaaa</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-dasharray">6,2,2,2</CssParameter>
			<CssParameter name="stroke-opacity">.25</CssParameter>
		</LineSymbolizer>
	</Rule>	
</Style>
<!--County boundary casing-->
<Style name="county border casing">
	<Rule>
		<Filter>[admin_level]='6'</Filter>
		&maxscale_zoom9;
		&minscale_zoom11;
		<LineSymbolizer>
			<CssParameter name="stroke">#bfbfbf</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-opacity">.05</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[admin_level]='6'</Filter>
		&maxscale_zoom12;
		&minscale_zoom14;
		<LineSymbolizer>
			<CssParameter name="stroke">#bfbfbf</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-opacity">.2</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[admin_level]='6'</Filter>
		&maxscale_zoom15;
		<LineSymbolizer>
			<CssParameter name="stroke">#bfbfbf</CssParameter>
			<CssParameter name="stroke-width">8</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-opacity">.2</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>

<!--State boundary-->
<Style name="state border">
	<Rule>
		<Filter>[admin_level]='4'</Filter>
		&maxscale_zoom4;
		&minscale_zoom4;
		<LineSymbolizer>
			<CssParameter name="stroke">#6d804c</CssParameter>
			<CssParameter name="stroke-width">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-opacity">.1</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[admin_level]='4'</Filter>
		&maxscale_zoom5;
		&minscale_zoom7;
		<LineSymbolizer>
			<CssParameter name="stroke">#3c5030</CssParameter>
			<CssParameter name="stroke-width">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-dasharray">6,1,1,1</CssParameter>
			<CssParameter name="stroke-opacity">.15</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[admin_level]='4'</Filter>
		&maxscale_zoom8;
		<LineSymbolizer>
			<CssParameter name="stroke">#000</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-dasharray">12,2,2,2</CssParameter>
			<CssParameter name="stroke-opacity">.5</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--State boundary casing-->
<Style name="state border casing">
	<Rule>
		<Filter>[admin_level]='4'</Filter>
		&maxscale_zoom5;
		&minscale_zoom7;
		<LineSymbolizer>
			<CssParameter name="stroke">#524f50</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-opacity">.01</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[admin_level]='4'</Filter>
		&maxscale_zoom8;
		<LineSymbolizer>
			<CssParameter name="stroke">#ffffff</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-opacity">.5</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>

<!--Country boundary-->
<Style name="country border">
	<Rule>
		<Filter>[admin_level]='2'</Filter>
		&maxscale_zoom2;
		&minscale_zoom2;
		<LineSymbolizer>
			<CssParameter name="stroke">#6d804c</CssParameter>
			<CssParameter name="stroke-width">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-opacity">.1</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[admin_level]='2'</Filter>
		&maxscale_zoom3;
		&minscale_zoom4;
		<LineSymbolizer>
			<CssParameter name="stroke">#6d804c</CssParameter>
			<CssParameter name="stroke-width">.5</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-opacity">.25</CssParameter>
		</LineSymbolizer>
	</Rule>
	<Rule>
		<Filter>[admin_level]='2'</Filter>
		&maxscale_zoom5;
		<LineSymbolizer>
			<CssParameter name="stroke">#6d804c</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-dasharray">6,2,2,2</CssParameter>
			<CssParameter name="stroke-opacity">.35</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>
<!--Country boundary casing-->
<Style name="country border casing">
	<Rule>
		<Filter>[admin_level]='2'</Filter>
		&maxscale_zoom5;
		<LineSymbolizer>
			<CssParameter name="stroke">#bfbf00</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linejoin">round</CssParameter>
			<CssParameter name="stroke-opacity">.1</CssParameter>
		</LineSymbolizer>
	</Rule>
</Style>

<Layer name="county border casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>county border casing</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way,admin_level
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('6')
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="county border" status="on" srs="&osm2pgsql_projection;">
	<StyleName>county border</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way,admin_level
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('6')
    ) as admin
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="state border casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>state border casing</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way,admin_level
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('4')
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="state border" status="on" srs="&osm2pgsql_projection;">
	<StyleName>state border</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way,admin_level
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
   (select way,admin_level
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('2')
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="country border" status="on" srs="&osm2pgsql_projection;">
	<StyleName>country border</StyleName>
	<Datasource>
		<Parameter name="table">
   (select way,admin_level
    from &prefix;_roads
    where "boundary"='administrative' and not "boundary"='maritime'
     and admin_level in ('2')
    ) as admin</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
