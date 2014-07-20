package ${package};

import com.eviware.soapui.model.ModelItem;
import com.eviware.soapui.plugins.auto.PluginResponseInspector;
import com.eviware.soapui.support.editor.Editor;
import com.eviware.soapui.support.editor.EditorView;
import com.eviware.soapui.support.editor.inspectors.AbstractXmlInspector;
import com.eviware.soapui.support.editor.xml.XmlDocument;

import javax.swing.JComponent;
import javax.swing.JLabel;

/**
 * Created by ole on 18/06/14.
 */

@PluginResponseInspector(inspectorId = "SampleResponseInspector")
public class Plugin${type} extends AbstractXmlInspector {
    private ModelItem modelItem;

    public Plugin${type}(Editor<?> editor, ModelItem modelItem) {
        super("Sample Response Inspector", "A sample response inspector", true, "SampleResponseInspector");
        this.modelItem = modelItem;
    }

    @Override
    public boolean isEnabledFor(EditorView<XmlDocument> view) {
        return true;
    }

    @Override
    public JComponent getComponent() {
        return new JLabel(modelItem.getName() + ": " + modelItem.getDescription());
    }
}
