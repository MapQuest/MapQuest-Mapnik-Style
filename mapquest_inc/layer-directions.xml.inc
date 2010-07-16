<!-- Direction arrows -->

<Style name="directions-mapnik">
    <Rule>
      <Filter>[oneway] = 'yes'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#828282</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,12,10,152</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#828282</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,12,9,153</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#828282</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,18,2,154</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#828282</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,18,1,155</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[oneway] = '-1'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#6c70d5</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,12,10,152</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6c70d5</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,13,9,152</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6c70d5</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,14,2,158</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6c70d5</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,15,1,158</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>


<Layer name="directions" status="on" srs="&osm2pgsql_projection;">
     <StyleName>directions-mapnik</StyleName>
     <!--StyleName>directions-mapnik2</StyleName-->
     <Datasource>
      <Parameter name="table">
      (select way,
       case when oneway in ('yes','true','1') then 'yes'::text else oneway end as oneway
       from &prefix;_line
       where oneway is not null
         and (highway is not null or railway is not null or waterway is not null)
      ) as directions
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>