maven-soapui-plugin-archetype
=============================

A maven archetype for creating SoapUI 5.1 plugins - supports creation of the following types of plugins:
- Action: creates an Action, by default at the Project level 
- Assertion: creates a custom assertion
- Discovery: creates a custom REST Discovery method
- Import: creates a custom Project Importer
- Listener: creates a TestRunListener (you can change to any of the other supported listeners)
- PanelBuilder: creates a PanelBuilder, use this if you create your own TestStep
- Prefs: creates a custom tab in the global Preferences
- RequestFilter: creates a custom Request filter, applied to all outgoing requests
- RequestEditor: creates a custom Request Editor view
- RequestInspector: creates a custom Request Inspector tab
- ResponseEditor: creates a custom Response Editor view
- ResponseInspector: creates a custom Response Inspector tab
- SubReport: creates a custom SubReport data source
- TestStep: creates a custom TestStep
- ToolbarAction: creates a custom Toolbar item
- ValueProvider: creates a custom property-expansion Value Provider

The archetype can be used for both creating a new and adding to an existing project.

Usage
-----

Run the following maven command from the command-line:

```
mvn archetype:generate -DarchetypeGroupId=com.smartbear.maven.archetypes 
 -DarchetypeArtifactId=soapui-plugin-archetype 
 -DarchetypeCatalog=http://www.eviware.com/repository/maven2
```

This will download the archetype from the SmartBear repository and start the project creation process. You will be prompted
for the following:
- groupId : the groupId to use in the generated pom.xml, for example "com.mycompany"
- artifactId : the artifact set in the generated pom.xml, for example "my-soapui-plugin"
- version : the intial version of your plugin, defaults to "1.0-SNAPSHOT"
- package : the package where your plugin code will be generated, defaults to the specified groupId
- language : the language to generate for, specify either "java" or "groovy"
- type : the type of plugin you want to generate, specify one of the values described above (for example "Action")

You will be prompted to confirm your values, do that and a skeleton plugin will be generated. You can build the 
plugin by simply changing to the generated plugin directory and running

```
mvn install
```

This will generate a plugin jar file in the target folder of your project. If you want to install the plugin in SoapUI
simply open the open the Plugin Manager in SoapUI and choose to load a plugin from file (if you get a complaint about
the version being invalid go into the generate PluginConfig class and change the version attribute of the PluginConfiguration
annotation to a valid value, for example "1.0.0" - and rebuild the plugin).

Adding to an existing project
-----------------------------

You can use the archetype to add to an existing project - in this case only new files will be added to the target
directory. If you add to a project that doesn't have any previous plugins make sure to add the following to your 
maven pom:

```
...
<repositories>
    <repository>
        <id>eviware</id>
        <name>Eviware Maven2 Repository</name>
        <url>http://www.eviware.com/repository/maven2</url>
    </repository>
    ...
</repositories>

<dependencies>

    <dependency>
        <groupId>com.smartbear.soapui</groupId>
        <artifactId>soapui-pro</artifactId>
        <version>5.1.0</version>
    </dependency>

    <dependency>
        <groupId>com.smartbear.soapui</groupId>
        <artifactId>soapui</artifactId>
        <version>5.1.0</version>
    </dependency>
    ...
</dependencies>
```

Good Luck!

Release History
---------------

- 20140720 : initial release - groovy support is lacking.
  
  




