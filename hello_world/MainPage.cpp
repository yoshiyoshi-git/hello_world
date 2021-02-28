#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

//追加
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.UI.Popups.h>

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::hello_world::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}


void winrt::hello_world::implementation::MainPage::button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{
    //追加
    winrt::Windows::UI::Xaml::Controls::ContentDialog dialog;
    dialog.Title(box_value(L"hello"));
    dialog.Content(box_value(L"Hello World"));
    dialog.CloseButtonText(L"OK");
    dialog.PrimaryButtonText(L"OKOK");
    dialog.ShowAsync();

    Windows::UI::Popups::MessageDialog msg{ L"Hello World",L"Hello World" };
    msg.ShowAsync();

}


void winrt::hello_world::implementation::MainPage::button1_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{
    //追加
    textBlock().Text(L"Hello World");

}
