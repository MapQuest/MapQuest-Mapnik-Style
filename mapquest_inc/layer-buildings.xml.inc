<Style name="building">
	<Rule>
		&maxscale_zoom13;
		<PolygonSymbolizer>
			<CssParameter name="fill">#999999</CssParameter>
			<CssParameter name="fill-opacity">.25</CssParameter>
		</PolygonSymbolizer>
	</Rule>
</Style>

<Layer name="building" status="on" srs="&osm2pgsql_projection;">
    <StyleName>building</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,building,leisure,railway,amenity,aeroway from &prefix;_polygon
       where building is not null
          or leisure in ('pitch','track')
          or railway='station'
          or amenity='place_of_worship'
          or aeroway='terminal'
       order by z_order,way_area desc) as buildings
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>