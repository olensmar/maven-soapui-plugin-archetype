package ${package};

import com.eviware.soapui.SoapUI;
import com.eviware.soapui.impl.wsdl.WsdlProject;
import com.eviware.soapui.plugins.ActionConfiguration;
import com.eviware.soapui.support.UISupport;
import com.eviware.soapui.support.action.support.AbstractSoapUIAction;

import javax.swing.*;

@ActionConfiguration(actionGroup = ActionGroups.OPEN_PROJECT_ACTIONS)
public class Plugin${type} extends AbstractSoapUIAction<WsdlProject> {

    public Plugin${type}() {
        super("Plugin Action", "A plugin action at the project level");
    }

    @Override
    public void perform(WsdlProject wsdlProject, Object o) {
        UISupport.showInfoMessage("Hello from [" + wsdlProject.getName() + "]!");
    }
}
