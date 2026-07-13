// This file is auto-generated
#include "/root/tdeck_slint/build/esp-idf/main/main.h"

const slint::private_api::ItemTreeVTable MainWindow::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, ensure_instantiated, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<MainWindow>, slint::private_api::dealloc };

auto MainWindow::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->field_root_1.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.278194466e9)));
    self->field_root_1_empty_2_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Center, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_3), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_4), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_5), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_6), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1)) ) }.data(), 4), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8), 240, 10),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_1_empty_2_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_3), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_4), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_5), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_6), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1)) ) }.data(), 4),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8));
                        });
    self->field_root_1_empty_2_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_3), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_4), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_5), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_6), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1)) ) }.data(), 4),10,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8),slint::cbindgen_private::LayoutAlignment::Center);
                        });
    self->field_root_1.height.set(240);
    self->field_root_1_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->field_root_1), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + self->field_root_1_empty_2_layoutinfo_h.get());
                        });
    self->field_root_1_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->field_root_1), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + self->field_root_1_empty_2_layoutinfo_v.get());
                        });
    self->field_root_1.title.set(slint::SharedString(u8"Slint Window"));
    self->field_root_1.width.set(320);
    self->field_text_3.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.278255615e9)));
    self->field_text_3.font_size.set(24);
    self->field_text_3.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_3.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_1_empty_2_layout_cache.get()[1];
                        });
    self->field_text_3.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_3.text.set(slint::SharedString(u8"T-DECK PLUS"));
    self->field_text_3.width.set(304);
    self->field_text_4.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)));
    self->field_text_4.font_size.set(32);
    self->field_text_4.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_4.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_1_empty_2_layout_cache.get()[3];
                        });
    self->field_text_4.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_4.text.set(slint::SharedString(u8"HELLO WORLD"));
    self->field_text_4.width.set(304);
    self->field_text_5.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287146751e9)));
    self->field_text_5.font_size.set(16);
    self->field_text_5.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_1_empty_2_layout_cache.get()[5];
                        });
    self->field_text_5.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_5.text.set(slint::SharedString(u8"ESP32-S3FN16R8\n320x240 ST7789 + GT911"));
    self->field_text_5.width.set(304);
    self->field_text_6.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.278255496e9)));
    self->field_text_6.font_size.set(18);
    self->field_text_6.font_weight.set(slint::private_api::saturating_float_to_int(600));
    self->field_text_6.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_1_empty_2_layout_cache.get()[7];
                        });
    self->field_text_6.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_6.text.set(slint::SharedString(u8"counter: 0"));
    self->field_text_6.width.set(304);
    self->field_root_1.always_on_top.set_constant();
    self->field_root_1.background.set_constant();
    self->field_root_1.default_font_family.set_constant();
    self->field_root_1.default_font_size.set_constant();
    self->field_root_1.default_font_weight.set_constant();
    self->field_root_1.icon.set_constant();
    self->field_root_1.no_frame.set_constant();
    self->field_root_1.resize_border_width.set_constant();
    self->field_root_1.title.set_constant();
    self->field_text_3.color.set_constant();
    self->field_text_3.font_size.set_constant();
    self->field_text_3.font_weight.set_constant();
    self->field_text_3.horizontal_alignment.set_constant();
    self->field_text_3.text.set_constant();
    self->field_text_3.vertical_alignment.set_constant();
    self->field_text_3.width.set_constant();
    self->field_text_4.color.set_constant();
    self->field_text_4.font_size.set_constant();
    self->field_text_4.font_weight.set_constant();
    self->field_text_4.horizontal_alignment.set_constant();
    self->field_text_4.text.set_constant();
    self->field_text_4.vertical_alignment.set_constant();
    self->field_text_4.width.set_constant();
    self->field_text_5.color.set_constant();
    self->field_text_5.font_size.set_constant();
    self->field_text_5.font_weight.set_constant();
    self->field_text_5.horizontal_alignment.set_constant();
    self->field_text_5.text.set_constant();
    self->field_text_5.vertical_alignment.set_constant();
    self->field_text_5.width.set_constant();
    self->field_text_6.color.set_constant();
    self->field_text_6.font_size.set_constant();
    self->field_text_6.font_weight.set_constant();
    self->field_text_6.horizontal_alignment.set_constant();
    self->field_text_6.text.set_constant();
    self->field_text_6.vertical_alignment.set_constant();
    self->field_text_6.width.set_constant();
}

auto MainWindow::user_init () -> void{
    [[maybe_unused]] auto self = this;
    ;
}

auto MainWindow::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->field_root_1_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(320, layout_info.max_percent, 320, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : [&]{ [[maybe_unused]] auto layout_info = self->field_root_1_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(240, layout_info.max_percent, 240, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

auto MainWindow::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(240), float(320), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_1_empty_2_layout_cache.get()[1]), float(304), float(8), float(self->field_root_1_empty_2_layout_cache.get()[0])));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_1_empty_2_layout_cache.get()[3]), float(304), float(8), float(self->field_root_1_empty_2_layout_cache.get()[2])));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_1_empty_2_layout_cache.get()[5]), float(304), float(8), float(self->field_root_1_empty_2_layout_cache.get()[4])));
        case 4: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_1_empty_2_layout_cache.get()[7]), float(304), float(8), float(self->field_root_1_empty_2_layout_cache.get()[6])));
    }
    return {};
}

auto MainWindow::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 1: return slint::cbindgen_private::AccessibleRole::Text;
        case 2: return slint::cbindgen_private::AccessibleRole::Text;
        case 3: return slint::cbindgen_private::AccessibleRole::Text;
        case 4: return slint::cbindgen_private::AccessibleRole::Text;
    }
    return {};
}

auto MainWindow::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (1 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"T-DECK PLUS");
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"HELLO WORLD");
        case (3 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"ESP32-S3FN16R8\n320x240 ST7789 + GT911");
        case (4 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"counter: 0");
    }
    return {};
}

auto MainWindow::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

auto MainWindow::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

auto MainWindow::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

auto MainWindow::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    return _changed;
}

auto MainWindow::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const MainWindow*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const MainWindow*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

auto MainWindow::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

auto MainWindow::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

auto MainWindow::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

auto MainWindow::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

auto MainWindow::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
}

auto MainWindow::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

auto MainWindow::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

auto MainWindow::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(4, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 5, 0, 1, true), 
slint::private_api::make_item_node(0, 5, 0, 2, true), 
slint::private_api::make_item_node(0, 5, 0, 3, true), 
slint::private_api::make_item_node(0, 5, 0, 4, true) };
    return slint::private_api::make_slice(std::span(children));
}

auto MainWindow::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(WindowItemVTable),  offsetof(MainWindow, field_root_1) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_3) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_4) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_5) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_6) } };
    return slint::private_api::make_slice(std::span(items));
}

auto MainWindow::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const MainWindow*>(component.instance)->layout_info(o);
}

auto MainWindow::ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool{
    return reinterpret_cast<const MainWindow*>(component.instance)->ensure_instantiated();
}

auto MainWindow::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const MainWindow*>(component.instance)->item_geometry(index);
}

auto MainWindow::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const MainWindow*>(component.instance)->accessible_role(index);
}

auto MainWindow::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const MainWindow*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

auto MainWindow::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const MainWindow*>(component.instance)->accessibility_action(index, *action);
}

auto MainWindow::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const MainWindow*>(component.instance)->supported_accessibility_actions(index);
}

auto MainWindow::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

auto MainWindow::window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const MainWindow*>(component.instance)->globals->window().window_handle();
}

auto MainWindow::create () -> slint::ComponentHandle<MainWindow>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, MainWindow>::make();
    auto self = const_cast<MainWindow *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::cbindgen_private::slint_ensure_backend();
    self->globals = &self->m_globals;
    self->m_globals.root_weak = self->self_weak;
    self->m_globals.init_globals();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), self->globals->m_window);
    self->init(self->globals, self->self_weak, 0, 1 );
    auto &window = self->globals->window();
    self->user_init();
    self->m_globals.window();
    slint::cbindgen_private::slint_windowrc_ensure_tree_instantiated(reinterpret_cast<const slint::cbindgen_private::WindowAdapterRcOpaque*>(&window.window_handle()));
    return slint::ComponentHandle<MainWindow>{ self_rc };
}

MainWindow::~MainWindow (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

auto MainWindow::show () -> void{
    m_globals.window().show();
}

auto MainWindow::hide () -> void{
    m_globals.window().hide();
}

auto MainWindow::window () const -> slint::Window&{
    return m_globals.window();
}

auto MainWindow::run () -> void{
    show();
    slint::run_event_loop();
    hide();
}
