// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class TabViewProperties
{
public:
    TabViewProperties();

    void AddButtonCommand(winrt::ICommand const& value);
    winrt::ICommand AddButtonCommand();

    void AddButtonCommandParameter(winrt::IInspectable const& value);
    winrt::IInspectable AddButtonCommandParameter();

    void CanCloseTabs(bool value);
    bool CanCloseTabs();

    void CanDragDropTabs(bool value);
    bool CanDragDropTabs();

    void IsAddButtonVisible(bool value);
    bool IsAddButtonVisible();

    void Items(winrt::IVector<winrt::IInspectable> const& value);
    winrt::IVector<winrt::IInspectable> Items();

    void ItemsSource(winrt::IInspectable const& value);
    winrt::IInspectable ItemsSource();

    void ItemTemplate(winrt::DataTemplate const& value);
    winrt::DataTemplate ItemTemplate();

    void ItemTemplateSelector(winrt::DataTemplateSelector const& value);
    winrt::DataTemplateSelector ItemTemplateSelector();

    void LeftCustomContent(winrt::IInspectable const& value);
    winrt::IInspectable LeftCustomContent();

    void LeftCustomContentTemplate(winrt::DataTemplate const& value);
    winrt::DataTemplate LeftCustomContentTemplate();

    void RightCustomContent(winrt::IInspectable const& value);
    winrt::IInspectable RightCustomContent();

    void RightCustomContentTemplate(winrt::DataTemplate const& value);
    winrt::DataTemplate RightCustomContentTemplate();

    void SelectedIndex(int value);
    int SelectedIndex();

    void SelectedItem(winrt::IInspectable const& value);
    winrt::IInspectable SelectedItem();

    void TabWidthMode(winrt::TabViewWidthMode const& value);
    winrt::TabViewWidthMode TabWidthMode();

    static winrt::DependencyProperty AddButtonCommandProperty() { return s_AddButtonCommandProperty; }
    static winrt::DependencyProperty AddButtonCommandParameterProperty() { return s_AddButtonCommandParameterProperty; }
    static winrt::DependencyProperty CanCloseTabsProperty() { return s_CanCloseTabsProperty; }
    static winrt::DependencyProperty CanDragDropTabsProperty() { return s_CanDragDropTabsProperty; }
    static winrt::DependencyProperty IsAddButtonVisibleProperty() { return s_IsAddButtonVisibleProperty; }
    static winrt::DependencyProperty ItemsProperty() { return s_ItemsProperty; }
    static winrt::DependencyProperty ItemsSourceProperty() { return s_ItemsSourceProperty; }
    static winrt::DependencyProperty ItemTemplateProperty() { return s_ItemTemplateProperty; }
    static winrt::DependencyProperty ItemTemplateSelectorProperty() { return s_ItemTemplateSelectorProperty; }
    static winrt::DependencyProperty LeftCustomContentProperty() { return s_LeftCustomContentProperty; }
    static winrt::DependencyProperty LeftCustomContentTemplateProperty() { return s_LeftCustomContentTemplateProperty; }
    static winrt::DependencyProperty RightCustomContentProperty() { return s_RightCustomContentProperty; }
    static winrt::DependencyProperty RightCustomContentTemplateProperty() { return s_RightCustomContentTemplateProperty; }
    static winrt::DependencyProperty SelectedIndexProperty() { return s_SelectedIndexProperty; }
    static winrt::DependencyProperty SelectedItemProperty() { return s_SelectedItemProperty; }
    static winrt::DependencyProperty TabWidthModeProperty() { return s_TabWidthModeProperty; }

    static GlobalDependencyProperty s_AddButtonCommandProperty;
    static GlobalDependencyProperty s_AddButtonCommandParameterProperty;
    static GlobalDependencyProperty s_CanCloseTabsProperty;
    static GlobalDependencyProperty s_CanDragDropTabsProperty;
    static GlobalDependencyProperty s_IsAddButtonVisibleProperty;
    static GlobalDependencyProperty s_ItemsProperty;
    static GlobalDependencyProperty s_ItemsSourceProperty;
    static GlobalDependencyProperty s_ItemTemplateProperty;
    static GlobalDependencyProperty s_ItemTemplateSelectorProperty;
    static GlobalDependencyProperty s_LeftCustomContentProperty;
    static GlobalDependencyProperty s_LeftCustomContentTemplateProperty;
    static GlobalDependencyProperty s_RightCustomContentProperty;
    static GlobalDependencyProperty s_RightCustomContentTemplateProperty;
    static GlobalDependencyProperty s_SelectedIndexProperty;
    static GlobalDependencyProperty s_SelectedItemProperty;
    static GlobalDependencyProperty s_TabWidthModeProperty;

    winrt::event_token AddButtonClick(winrt::TypedEventHandler<winrt::TabView, winrt::IInspectable> const& value);
    void AddButtonClick(winrt::event_token const& token);
    winrt::event_token SelectionChanged(winrt::SelectionChangedEventHandler const& value);
    void SelectionChanged(winrt::event_token const& token);
    winrt::event_token TabClosing(winrt::TypedEventHandler<winrt::TabView, winrt::TabViewTabClosingEventArgs> const& value);
    void TabClosing(winrt::event_token const& token);

    event_source<winrt::TypedEventHandler<winrt::TabView, winrt::IInspectable>> m_addButtonClickEventSource;
    event_source<winrt::SelectionChangedEventHandler> m_selectionChangedEventSource;
    event_source<winrt::TypedEventHandler<winrt::TabView, winrt::TabViewTabClosingEventArgs>> m_tabClosingEventSource;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnItemsPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnItemsSourcePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSelectedIndexPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSelectedItemPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnTabWidthModePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
