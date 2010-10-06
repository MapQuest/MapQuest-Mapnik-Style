<!-- low zoom raster -->
<Style name="world-raster-1">
	<Rule>
		&maxscale_zoom0;
		&minscale_zoom2;
		<RasterSymbolizer opacity="1.0" scaling="bilinear"/>
	</Rule>
</Style>
<Style name="world-raster-2">
	<Rule>
		&maxscale_zoom3;
		&minscale_zoom3;
		<RasterSymbolizer opacity="1.0" scaling="bilinear"/>
	</Rule>
</Style>
<Style name="world-raster-3">
	<Rule>
		&maxscale_zoom4;
		&minscale_zoom4;
		<RasterSymbolizer opacity="1.0" scaling="bilinear" mode="normal"/>
	</Rule>
</Style>
<Style name="world-raster-4">
	<Rule>
		&maxscale_zoom5;
		&minscale_zoom5;
		<RasterSymbolizer opacity="1.0" scaling="bilinear" mode="normal"/>
	</Rule>
</Style>

<!--background admin polygons-->
<Style name="world">
	<Rule>
		&maxscale_zoom6;
		&minscale_zoom9;
		<PolygonSymbolizer fill="#faf8ed"/>
	</Rule>
</Style>
<Style name="coast-poly">
	<Rule>
		&maxscale_zoom10;
		<PolygonSymbolizer fill="#f6f3e9"/>
	</Rule>
</Style>

<!-- Urban area -->
<Style name="builtup">
	<Rule>
		&maxscale_zoom7;
		&minscale_zoom8;
		<PolygonSymbolizer fill-opacity=".5" fill="#ccc7b8" />
	</Rule>
</Style>

<Layer name="world-raster-1" status="on" srs="&srs900913;">
	<StyleName>world-raster-1</StyleName>
	<Datasource>
		<Parameter name="type">raster</Parameter>
		<Parameter name="lox">-20037508.3428</Parameter>
		<Parameter name="loy">-20037508.3428</Parameter>
		<Parameter name="hix">20037508.3428</Parameter>
		<Parameter name="hiy">20037508.3428</Parameter>
		<Parameter name="file">&world_boundaries;/mq_world_mercator_1.tif</Parameter>
	</Datasource>
</Layer>
<Layer name="world-raster-2" status="on" srs="&srs900913;">
	<StyleName>world-raster-2</StyleName>
	<Datasource>
		<Parameter name="type">raster</Parameter>    
		<Parameter name="lox">-20037508.343</Parameter>
		<Parameter name="loy">-19945591.563</Parameter>
		<Parameter name="hix">20037506.220</Parameter>
		<Parameter name="hiy">19875040.583</Parameter>   
		<Parameter name="file">&world_boundaries;/mq_world_mercator_2.tif</Parameter>
	</Datasource>
</Layer>
<Layer name="world-raster-3" status="on" srs="&srs900913;">
	<StyleName>world-raster-3</StyleName>
	<Datasource>
		<Parameter name="type">raster</Parameter>    
		<Parameter name="lox">-20037507.067</Parameter>
		<Parameter name="loy">-19907483.437</Parameter>
		<Parameter name="hix">20037507.031</Parameter>
		<Parameter name="hiy">19903364.309</Parameter> 
		<Parameter name="file">&world_boundaries;/mq_world_mercator_3.tif</Parameter>
	</Datasource>
</Layer>
<Layer name="world-raster-4" status="on" srs="&srs900913;">
	<StyleName>world-raster-4</StyleName>
	<Datasource>
		<Parameter name="type">raster</Parameter>    
		<Parameter name="lox">-20037507.067</Parameter>
		<Parameter name="loy">-19907483.437</Parameter>
		<Parameter name="hix">20037507.031</Parameter>
		<Parameter name="hiy">19903364.309</Parameter> 
		<Parameter name="file">&world_boundaries;/mq_world_mercator_4.tif</Parameter>
	</Datasource>
</Layer>

<Layer name="world" status="on" srs="&srs900913;">
	<StyleName>world</StyleName>
	<Datasource>
		<Parameter name="type">shape</Parameter>
		<Parameter name="file">&world_boundaries;/shoreline_300</Parameter>
	</Datasource>
</Layer>
<Layer name="coast-poly" status="on" srs="&srs900913;">
	<StyleName>coast-poly</StyleName>
	<Datasource>
		<Parameter name="type">shape</Parameter>
		<Parameter name="file">&world_boundaries;/processed_p</Parameter>
	</Datasource>
</Layer>
<Layer name="builtup" status="on" srs="&srsmercator;">
	<StyleName>builtup</StyleName>
	<Datasource>
		<Parameter name="type">shape</Parameter>
		<Parameter name="file">&world_boundaries;/builtup_area</Parameter>
	</Datasource>
</Layer>
