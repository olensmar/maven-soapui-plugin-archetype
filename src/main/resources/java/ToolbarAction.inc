package ${package};

import com.eviware.soapui.model.workspace.Workspace;
import com.eviware.soapui.plugins.ActionConfiguration;
import com.eviware.soapui.plugins.ToolbarPosition;
import com.eviware.soapui.support.UISupport;
import com.eviware.soapui.support.action.support.AbstractSoapUIAction;

/**
 * Example of a plugin action that will be inserted into the SoapUI main toolbar.
 */

@ActionConfiguration(actionGroup = "EnabledWsdlProjectActions", toolbarPosition = ToolbarPosition.FUNCTIONAL_TESTING,
        toolbarIcon = "/favicon.png", description = "Says Hello")
public class Plugin${type} extends AbstractSoapUIAction<Workspace> {

    public Plugin${type}() {
        super("Plugin Toolbar Action", "A sample Toolbar action");
    }

    @Override
    public void perform(Workspace workspace, Object o) {
        UISupport.showInfoMessage("Hello from toolbar action in workspace " + workspace.getName() + "!");
    }
}
