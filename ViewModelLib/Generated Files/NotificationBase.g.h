﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180227.3

#pragma once
#include "winrt/Windows.UI.Xaml.Data.h"
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/ViewModelLib.h"

namespace winrt::ViewModelLib::implementation {

template <typename D, typename... I>
struct WINRT_EBO NotificationBase_base : implements<D, ViewModelLib::INotificationBase, Windows::UI::Xaml::Data::INotifyPropertyChanged, composing, I...>,
    impl::require<D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    impl::base<D, Windows::UI::Xaml::DependencyObject>
{
    using base_type = NotificationBase_base;
    using class_type = ViewModelLib::NotificationBase;
    using implements_type = typename NotificationBase_base::implements_type;
    using implements_type::implements_type;
    using composable_base = Windows::UI::Xaml::DependencyObject;
    operator class_type() const noexcept
    {
        static_assert(std::is_same_v<typename impl::implements_default_interface<D>::type, impl::default_interface_t<class_type>>);
        class_type result{ nullptr };
        attach_abi(result, detach_abi(static_cast<impl::default_interface_t<class_type>>(*this)));
        return result;
    }

    hstring GetRuntimeClassName() const
    {
        return L"ViewModelLib.NotificationBase";
    }
    NotificationBase_base()
    {
        get_activation_factory<Windows::UI::Xaml::DependencyObject, Windows::UI::Xaml::IDependencyObjectFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

namespace winrt::ViewModelLib::factory_implementation {

template <typename D, typename T, typename... I>
struct WINRT_EBO NotificationBaseT : implements<D, Windows::Foundation::IActivationFactory, I...>
{
    hstring GetRuntimeClassName() const
    {
        return L"ViewModelLib.NotificationBase";
    }

    Windows::Foundation::IInspectable ActivateInstance() const
    {
        return make<T>();
    }
};

}

#if defined(WINRT_FORCE_INCLUDE_NOTIFICATIONBASE_XAML_G_H) || __has_include("NotificationBase.xaml.g.h")

#include "NotificationBase.xaml.g.h"

#else

namespace winrt::ViewModelLib::implementation
{
    template <typename D, typename... I>
    using NotificationBaseT = NotificationBase_base<D, I...>;
}

#endif
