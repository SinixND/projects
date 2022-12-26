#include <dialogs.h>

DialogMain::DialogMain( const wxString &rTitle ) : wxDialog( nullptr, wxID_ANY, rTitle, wxDefaultPosition, wxDefaultSize ){
    // panels
    pPanelDialogMain = new wxPanel( this );
        pPanelDialogMain->SetBackgroundColour( wxColor( 100, 100, 100 ) );

    pPanelDMUpper = new wxPanel( pPanelDialogMain );
        pPanelDMUpper->SetBackgroundColour( wxColor( 100, 200, 100 ) );

    pPanelDMButtons = new wxPanel( pPanelDialogMain );
        pPanelDMButtons->SetBackgroundColour( wxColor( 100, 100, 200 ) );

    // buttons
	pButtonApply = new wxButton( pPanelDMButtons, wxID_APPLY, wxT( "Apply" ) );

    // sizers
    pSizerPDialogMain = new wxBoxSizer( wxVERTICAL );
        pPanelDialogMain->SetSizerAndFit( pSizerPDialogMain );
        pSizerPDialogMain->Add( pPanelDMUpper, 1, wxEXPAND );
        pSizerPDialogMain->Add( pPanelDMButtons, wxSizerFlags().Right().Border(wxALL, 5) );
};