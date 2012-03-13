<Style name="addressing">
  <Rule>
    &maxscale_zoom17;
    &minscale_zoom18;
    <TextSymbolizer fontset-name="oblique-fonts" size="8" fill="#606060" halo-radius="1" halo-fill="rgba(255,255,255,0.25)" minimum-distance="2">[addr:housenumber]</TextSymbolizer>
  </Rule>
  <Rule>
    &maxscale_zoom19;
    <TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#606060" halo-radius="1" halo-fill="rgba(255,255,255,0.25)" minimum-distance="2">[addr:housenumber]</TextSymbolizer>
  </Rule>
</Style>

<Style name="interpolation">
  <Rule>
    &maxscale_zoom17;
    <LineSymbolizer stroke-width="1.2" stroke="#ffffff" stroke-opacity="0.25" />
    <LineSymbolizer stroke-width="0.3" stroke="#606060" stroke-dasharray="4,2"/>
  </Rule>
</Style>

<Layer name="interpolation" srs="&osm2pgsql_projection;">
  <StyleName>interpolation</StyleName>
  <Datasource>
    <Parameter name="table">
    (select way, "addr:interpolation" from &prefix;_line where "addr:interpolation" is not null) as interpolation
    </Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
<Layer name="point-addressing" srs="&osm2pgsql_projection;">
  <StyleName>addressing</StyleName>
  <Datasource>
    <Parameter name="table">
    (select way, "addr:housenumber" from &prefix;_point where "addr:housenumber" is not null) as housenumbers
    </Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
<Layer name="building-addressing" srs="&osm2pgsql_projection;">
  <StyleName>addressing</StyleName>
  <Datasource>
    <Parameter name="table">
    (select way, "addr:housenumber" from &prefix;_polygon where "addr:housenumber" is not null and building is not null) as housenumbers
    </Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
