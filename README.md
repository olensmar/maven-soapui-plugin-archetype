maven-soapui-plugin-archetype
=============================

A maven archetype for creating SoapUI 5.1 plugins - supports creation of the following types of plugins:
- Action: creates a custom action, by default at the Project level

Usage
-----

Create an empty directory and run the following command inside it:

```
mvn archetype:generate -DarchetypeGroupId=com.smartbear.maven.archetypes -DarchetypeArtifactId=soapui-plugin-archetype 
  -Dmaven.repo.remote=http://www.eviware.com/repository/maven2
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
plugin by simply running

```
mvn install
```

in the directory you are already in, this will generate a plugin jar file in the target folder of your project. Simply
open the open the Plugin Manager in SoapUI and choose to install a plugin from a local file.

Good Luck!

Release History
---------------

- 20140720 : initial release - groovy support is lacking.
  
  




