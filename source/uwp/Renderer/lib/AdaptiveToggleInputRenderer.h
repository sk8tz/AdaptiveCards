#pragma once

#include "AdaptiveCards.XamlCardRenderer.h"
#include "Enums.h"
#include "ToggleInput.h"

namespace AdaptiveCards { namespace XamlCardRenderer
{
    class AdaptiveToggleInputRenderer :
        public Microsoft::WRL::RuntimeClass<
        Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
        ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveElementRenderer>
    {
        InspectableClass(RuntimeClass_AdaptiveCards_XamlCardRenderer_AdaptiveToggleInputRenderer, BaseTrust)

    public:
        HRESULT RuntimeClassInitialize() noexcept;

        IFACEMETHODIMP Render(
            _In_ ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveCardElement* cardElement,
            _In_ ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveRenderContext* renderContext,
            _COM_Outptr_ ABI::Windows::UI::Xaml::IUIElement** result);

        IFACEMETHODIMP get_Type(_Out_ HSTRING* type);
    };

    ActivatableClass(AdaptiveToggleInputRenderer);
}}