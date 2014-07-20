package ${package};

import com.eviware.soapui.impl.WorkspaceImpl;
import com.eviware.soapui.plugins.auto.PluginImportMethod;
import com.eviware.soapui.support.UISupport;
import com.eviware.soapui.support.action.support.AbstractSoapUIAction;

@PluginImportMethod(label = "Sample Importer")
public class Plugin${type} extends AbstractSoapUIAction<WorkspaceImpl> {
    public Plugin${type}() {
        super("SampleImportMethod", "A sample importer", "A sample importer description");
    }

    @Override
    public void perform(WorkspaceImpl target, Object param) {
        UISupport.showInfoMessage("Importing...");
    }
}
