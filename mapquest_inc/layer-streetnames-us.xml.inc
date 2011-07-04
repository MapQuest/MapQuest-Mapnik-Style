<Style name="shield-text">
<!--Interstate shield-->
  <!-- zoom 7-9 -->
	<Rule>
		<Filter>[ref].match('^I .*') and [length] &lt; 3</Filter>
		&maxscale_zoom7;
		&minscale_zoom9;
		<ShieldSymbolizer name="[shield_name]" fontset-name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_fwy_us2.svg" minimum-distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^I .*') and [length] &gt; 2 and [length] &lt; 5</Filter>
		&maxscale_zoom7;
		&minscale_zoom9;
		<ShieldSymbolizer name="[shield_name]" fontset-name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_fwy_us3.svg" minimum-distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^I .*') and [length] &gt; 4 and [length] &lt; 6</Filter>
		&maxscale_zoom7;
		&minscale_zoom9;
		<ShieldSymbolizer name="[shield_name]" fontset-name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_fwy_us5.svg" minimum-distance="30" spacing="750"/>
	</Rule>
  <!-- zoom 10-12 -->
	<Rule>
		<Filter>[ref].match('^I .*') and [length] &lt; 3</Filter>
		&maxscale_zoom10;
		&minscale_zoom12;
		<ShieldSymbolizer name="[shield_name]" fontset-name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_fwy_us2.svg" minimum-distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^I .*') and [length] &gt; 2 and [length] &lt; 5</Filter>
		&maxscale_zoom10;
		&minscale_zoom12;
		<ShieldSymbolizer name="[shield_name]" fontset-name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_fwy_us3.svg" minimum-distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^I .*') and [length] &gt; 4 and [length] &lt; 6</Filter>
		&maxscale_zoom10;
		&minscale_zoom12;
		<ShieldSymbolizer name="[shield_name]" fontset-name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_fwy_us5.svg" minimum-distance="30" spacing="750"/>
	</Rule>
  <!-- zoom 13+ -->
	<Rule>
		<Filter>[ref].match('^I .*') and [length] &lt; 3</Filter>
		&maxscale_zoom13;
		<ShieldSymbolizer name="[shield_name]" fontset-name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_fwy_us2.svg" minimum-distance="50" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^I .*') and [length] &gt; 2 and [length] &lt; 5</Filter>
		&maxscale_zoom13;
		<ShieldSymbolizer name="[shield_name]" fontset-name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_fwy_us3.svg" minimum-distance="50" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^I .*') and [length] &gt; 4 and [length] &lt; 6</Filter>
		&maxscale_zoom13;
		<ShieldSymbolizer name="[shield_name]" fontset-name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_fwy_us5.svg" minimum-distance="50" spacing="750"/>
	</Rule>
<!--US Highway shield-->
	<Rule>
		<Filter>[ref].match('^US.*') and [length] &lt; 4</Filter>
		&maxscale_zoom8;
		<ShieldSymbolizer name="[shield_name]" fontset-name="book-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_hwy_us3.svg" minimum-distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^US.*') and [length] = 4</Filter>
		&maxscale_zoom8;
		<ShieldSymbolizer name="[shield_name]" fontset-name="book-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_hwy_us4.svg" minimum-distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^US.*') and [length] = 5</Filter>
		&maxscale_zoom8;
		<ShieldSymbolizer name="[shield_name]" fontset-name="book-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us5.svg" minimum-distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^US.*') and [length] = 6</Filter>
		&maxscale_zoom8;
		<ShieldSymbolizer name="[shield_name]" fontset-name="book-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us6.svg" minimum-distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^US.*') and [length] = 7</Filter>
		&maxscale_zoom8;
		<ShieldSymbolizer name="[shield_name]" fontset-name="book-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us7.svg" minimum-distance="30" spacing="750"/>
	</Rule>
<!--State Highway shield-->
	<Rule>
		<Filter>not [ref].match('^US .*') and not [ref].match('^I .*') and [length] &lt; 3</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="[shield_name]" fontset-name="book-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us2.svg" minimum-distance="40" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>not [ref].match('^US .*') and not [ref].match('^I .*') and [length] = 3</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="[shield_name]" fontset-name="book-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us3.svg" minimum-distance="40" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>not [ref].match('^US .*') and not [ref].match('^I .*') and [length] = 4</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="[shield_name]" fontset-name="book-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us4.svg" minimum-distance="40" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>not [ref].match('^US .*') and not [ref].match('^I .*') and [length] = 5</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="[shield_name]" fontset-name="book-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us5.svg" minimum-distance="40" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>not [ref].match('^US .*') and not [ref].match('^I .*') and [length] = 6</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="[shield_name]" fontset-name="book-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us6.svg" minimum-distance="40" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>not [ref].match('^US .*') and not [ref].match('^I .*') and [length] = 7</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="[shield_name]" fontset-name="book-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us7.svg" minimum-distance="40" spacing="750"/>
	</Rule>
</Style>
<Style name="street-text">
<!--motorway text-->
	<Rule>
		<Filter>[highway] = 'motorway' and not [name].match('^Interstate.*') and not [name].match('^I-.*') and not [name].match('^State.*')</Filter>
		&maxscale_zoom12;
		<TextSymbolizer name="[name]" fontset-name="bold-fonts" size="12" fill="#2b2b2b" halo-fill="rgba(255,255,255,0.25)" halo-radius="2" dy="0" placement="line" max-char-angle-delta="40" avoid-edges="true" text-transform="uppercase"/>
	</Rule>
<!--trunk/primary text-->
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
		&maxscale_zoom12;
		<TextSymbolizer name="[name]" fontset-name="book-fonts" size="12" fill="#2b2b2b" halo-fill="rgba(255,255,255,0.25)" halo-radius="2" placement="line" max-char-angle-delta="40" avoid-edges="true"/>
	</Rule>
<!--secondary text-->
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'proposed' or [highway]='construction'</Filter>
		&maxscale_zoom12;
		<TextSymbolizer name="[name]" fontset-name="book-fonts" size="12" fill="#2b2b2b" halo-fill="rgba(255,255,255,0.25)" halo-radius="2" placement="line" max-char-angle-delta="40" avoid-edges="true"/>
	</Rule>
<!--tertiary text-->
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<TextSymbolizer name="[name]" fontset-name="book-fonts" size="11" fill="#2b2b2b" halo-fill="rgba(255,255,255,0.25)" halo-radius="2" placement="line" max-char-angle-delta="40"  avoid-edges="true"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<TextSymbolizer name="[name]" fontset-name="book-fonts" size="12" fill="#2b2b2b" halo-fill="rgba(255,255,255,0.25)" halo-radius="2" placement="line" max-char-angle-delta="40"  avoid-edges="true"/>
	</Rule>
</Style>

<Layer name="shield-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>shield-text</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,
      case when name ilike ref then null else name end as name,
      ref,char_length(regexp_replace(replace(ref,';','/'),E'^([A-Z]{1,2})\\s*([0-9]{1,3})((/)([A-Z]{1,2})\\s*([0-9]{1,3}))*',E'\\2\\4\\6')) as length,
      regexp_replace(replace(ref,';','/'),E'^([A-Z]{1,2})\\s*([0-9]{1,3})((/)([A-Z]{1,2})\\s*([0-9]{1,3}))*',E'\\2\\4\\6') as shield_name,
      case when bridge in ('yes','true','1') then 'yes'::text else bridge end as bridge
      from &prefix;_roads
      where highway in ('motorway', 'trunk', 'primary', 'secondary')
        and (name is not null or ref is not null)
      ) as roads
		</Parameter>
    &datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-text</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,aeroway,
      case when name ilike ref then null else name end as name,
      ref,char_length(ref) as length,
       case when bridge in ('yes','true','1') then 'yes'::text else bridge end as bridge
       from &prefix;_line
       where waterway IS NULL
         and leisure IS NULL
         and landuse IS NULL
         and (name is not null or ref is not null)
      ) as roads
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
