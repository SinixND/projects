#include <app.h>
#include <frames.h>
#include <dialogs.h>

wxIMPLEMENT_APP( App );

bool App::OnInit(){
    FrameMain *pFrameMain = new FrameMain( "FrameMain Title" );
    DialogMain *pDialogMain = new DialogMain( "Dialog Title" );
    pFrameMain->Show(); 

    // event handlers
    Bind( wxEVT_COMMAND_BUTTON_CLICKED, [ = ]( wxCommandEvent& ){
        pDialogMain->ShowModal();
    }, ID_BUTTON_OPEN_DIALOG );

    return true;
}