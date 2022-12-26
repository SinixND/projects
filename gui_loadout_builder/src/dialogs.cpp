#include <dialogs.h>

DialogMain::DialogMain( const wxString &rTitle ) : wxDialog( nullptr, wxID_ANY, rTitle, wxDefaultPosition, wxDefaultSize ){
    // panels
    pPanelDialogMain = new wxPanel( this );
        pPanelDialogMain->SetBackgroundColour( wxColor( 100, 100, 100 ));

    pPDMUpper = new wxPanel( pPanelDialogMain );
        pPDMUpper->SetBackgroundColour( wxColor( 100, 200, 100 ));

    pPDMButtons = new wxPanel( pPanelDialogMain );
        pPDMButtons->SetBackgroundColour( wxColor( 100, 100, 200 ));

    // buttons
	pButtonApply = new wxButton( pPDMButtons, wxID_APPLY, wxT( "Apply" ));

    // sizers
    pSizerPanelDialogMain = new wxBoxSizer( wxVERTICAL );
        pPanelDialogMain->SetSizerAndFit( pSizerPanelDialogMain );
        pSizerPanelDialogMain->Add( pPDMUpper, 1, wxEXPAND );
        pSizerPanelDialogMain->Add( pPDMButtons, wxALIGN_RIGHT );

    //pSizerPDMButtons = new wxBoxSizer( wxHORIZONTAL );
        //pPDMButtons->SetSizerAndFit( pSizerPDMButtons );
        //pSizerPDMButtons->AddStretchSpacer( 1 );
        //pSizerPDMButtons->Add( pButtonApply, 1 );
};
