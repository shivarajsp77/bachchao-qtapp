import QtQuick 1.1
import com.nokia.meego 1.0

PageStackWindow {
    id: app
    showToolBar: true;

    initialPage: MainPage{}

    ToolBar {
        anchors.bottom: parent.bottom
    }

    SettingsPage {
        id: settingsPage
    }
}
