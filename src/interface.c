/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <bonobo.h>
#include <gnome.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

static GnomeUIInfo file1_menu_uiinfo[] =
{
  {
    GNOME_APP_UI_ITEM, N_("Save Settings"),
    NULL,
    (gpointer) on_save_setting1_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, "gtk-save",
    GDK_s, (GdkModifierType) GDK_CONTROL_MASK, NULL
  },
  {
    GNOME_APP_UI_ITEM, N_("Revert"),
    N_("Restore settings"),
    (gpointer) on_revert2_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, "gtk-revert-to-saved",
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_ITEM, N_("Restore Initial Values"),
    N_("Restore factory defaults"),
    (gpointer) on_restore_initial_values1_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, "gtk-undo",
    0, (GdkModifierType) 0, NULL
  },
  GNOMEUIINFO_SEPARATOR,
  GNOMEUIINFO_MENU_EXIT_ITEM (on_quit1_activate, NULL),
  GNOMEUIINFO_END
};

static GnomeUIInfo help1_menu_uiinfo[] =
{
  GNOMEUIINFO_MENU_ABOUT_ITEM (on_about1_activate, NULL),
  GNOMEUIINFO_END
};

static GnomeUIInfo menubar1_uiinfo[] =
{
  GNOMEUIINFO_MENU_FILE_TREE (file1_menu_uiinfo),
  GNOMEUIINFO_MENU_HELP_TREE (help1_menu_uiinfo),
  GNOMEUIINFO_END
};

GtkWidget*
create_main (void)
{
  GtkWidget *main;
  GdkPixbuf *main_icon_pixbuf;
  GtkWidget *bonobodock1;
  GtkWidget *toolbar1;
  gint tmp_toolbar_icon_size;
  GtkWidget *toolbutton1;
  GtkWidget *toolbutton2;
  GtkWidget *toolbutton3;
  GtkWidget *notebook1;
  GtkWidget *vbox1;
  GtkWidget *label27;
  GtkWidget *table2;
  GtkWidget *hscale12;
  GtkWidget *hscale13;
  GtkWidget *hscale14;
  GtkWidget *label26;
  GtkWidget *label24;
  GtkWidget *label29;
  //GtkWidget *checkbutton2;
  GtkWidget *label8;
  GtkWidget *vbox2;
  GtkWidget *label30;
  GtkWidget *vbox3;
  GtkWidget *checkbutton1;
  GtkWidget *checkbutton3;
  GtkWidget *table1;
  GtkWidget *hscale1;
  GtkWidget *hscale2;
  GtkWidget *hscale3;
  GtkWidget *hscale4;
  GtkWidget *hscale5;
  GtkWidget *hscale6;
  GtkWidget *hscale7;
  GtkWidget *vbox7;
  GtkWidget *label28;
  GtkWidget *label34;
  GtkWidget *vbox9;
  GtkWidget *label10;
  GtkWidget *label36;
  GtkWidget *vbox8;
  GtkWidget *label11;
  GtkWidget *label35;
  GtkWidget *vbox6;
  GtkWidget *label5;
  GtkWidget *label33;
  GtkWidget *vbox4;
  GtkWidget *label3;
  GtkWidget *label31;
  GtkWidget *vbox5;
  GtkWidget *label4;
  GtkWidget *label32;
  GtkWidget *label2;
  GtkWidget *label9;
  GtkWidget *appbar1;
  GtkTooltips *tooltips;

  tooltips = gtk_tooltips_new ();

  main = gnome_app_new ("Configure-trackpoint", _("Configure TrackPoint"));
  main_icon_pixbuf = create_pixbuf ("configure-trackpoint/trackpoint.png");
  if (main_icon_pixbuf)
    {
      gtk_window_set_icon (GTK_WINDOW (main), main_icon_pixbuf);
      g_object_unref (main_icon_pixbuf);
    }

  bonobodock1 = GNOME_APP (main)->dock;
  gtk_widget_show (bonobodock1);

  gnome_app_create_menus (GNOME_APP (main), menubar1_uiinfo);
  if (getuid())	gtk_widget_set_sensitive (file1_menu_uiinfo[0].widget, FALSE);
  toolbar1 = gtk_toolbar_new ();
  gtk_widget_show (toolbar1);
  gnome_app_add_toolbar (GNOME_APP (main), GTK_TOOLBAR (toolbar1), "toolbar1",
                                BONOBO_DOCK_ITEM_BEH_EXCLUSIVE,
                                BONOBO_DOCK_TOP, 1, 0, 0);
  gtk_toolbar_set_style (GTK_TOOLBAR (toolbar1), GTK_TOOLBAR_BOTH);
  tmp_toolbar_icon_size = gtk_toolbar_get_icon_size (GTK_TOOLBAR (toolbar1));

  toolbutton1 = (GtkWidget*) gtk_tool_button_new_from_stock ("gtk-apply");
  gtk_widget_show (toolbutton1);
  gtk_container_add (GTK_CONTAINER (toolbar1), toolbutton1);
  gtk_tool_item_set_tooltip (GTK_TOOL_ITEM (toolbutton1), tooltips, _("Apply changes to TrackPoint"), NULL);

  toolbutton2 = (GtkWidget*) gtk_tool_button_new_from_stock ("gtk-revert-to-saved");
  gtk_widget_show (toolbutton2);
  gtk_container_add (GTK_CONTAINER (toolbar1), toolbutton2);
  gtk_tool_item_set_tooltip (GTK_TOOL_ITEM (toolbutton2), tooltips, _("Restore settings"), NULL);

  toolbutton3 = (GtkWidget*) gtk_tool_button_new_from_stock ("gtk-save");
  gtk_widget_show (toolbutton3);
  if (getuid()) gtk_widget_set_sensitive(toolbutton3, FALSE); 
  gtk_container_add (GTK_CONTAINER (toolbar1), toolbutton3);
  gtk_tool_item_set_tooltip (GTK_TOOL_ITEM (toolbutton3), tooltips, _("Save settings"), NULL);

  notebook1 = gtk_notebook_new ();
  gtk_widget_show (notebook1);
  gnome_app_set_contents (GNOME_APP (main), notebook1);

  vbox1 = gtk_vbox_new (FALSE, 5);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (notebook1), vbox1);
  gtk_container_set_border_width (GTK_CONTAINER (vbox1), 5);

  label27 = gtk_label_new (_("These parameters control normal cursor movement."));
  gtk_widget_show (label27);
  gtk_box_pack_start (GTK_BOX (vbox1), label27, FALSE, FALSE, 0);

  table2 = gtk_table_new (3, 2, FALSE);
  gtk_widget_show (table2);
  gtk_box_pack_start (GTK_BOX (vbox1), table2, FALSE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table2), 5);
  gtk_table_set_row_spacings (GTK_TABLE (table2), 5);
  gtk_table_set_col_spacings (GTK_TABLE (table2), 5);

  hscale12 = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 255, 1, 0, 0)));
  gtk_widget_show (hscale12);
  gtk_table_attach (GTK_TABLE (table2), hscale12, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_scale_set_digits (GTK_SCALE (hscale12), 0);

  hscale13 = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 255, 1, 0, 0)));
  gtk_widget_show (hscale13);
  gtk_table_attach (GTK_TABLE (table2), hscale13, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_scale_set_digits (GTK_SCALE (hscale13), 0);

  hscale14 = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 255, 1, 0, 0)));
  gtk_widget_show (hscale14);
  gtk_table_attach (GTK_TABLE (table2), hscale14, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_scale_set_digits (GTK_SCALE (hscale14), 0);

  label26 = gtk_label_new (_("Negative Inertia"));
  gtk_widget_show (label26);
  gtk_table_attach (GTK_TABLE (table2), label26, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label26), 0, 0.5);

  label24 = gtk_label_new (_("Upper Plateau Speed\n(controls high speed performance)"));
  gtk_widget_show (label24);
  gtk_table_attach (GTK_TABLE (table2), label24, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (label24), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label24), 0, 0.5);

  label29 = gtk_label_new (_("Sensitivity"));
  gtk_widget_show (label29);
  gtk_table_attach (GTK_TABLE (table2), label29, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label29), 0, 0.5);

  //checkbutton2 = gtk_check_button_new_with_mnemonic (_("Enable Middle Button"));
  //gtk_widget_show (checkbutton2);
  //gtk_box_pack_start (GTK_BOX (vbox1), checkbutton2, FALSE, FALSE, 0);
  //gtk_tooltips_set_tip (tooltips, checkbutton2, _("Applies to the TrackPoint and external pointing device"), NULL);

  label8 = gtk_label_new (_("Basic"));
  gtk_widget_show (label8);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 0), label8);

  vbox2 = gtk_vbox_new (FALSE, 5);
  gtk_widget_show (vbox2);
  gtk_container_add (GTK_CONTAINER (notebook1), vbox2);
  gtk_container_set_border_width (GTK_CONTAINER (vbox2), 5);

  label30 = gtk_label_new (_("These parameters apply to the vertical force (Z axis) on the TrackPoint."));
  gtk_widget_show (label30);
  gtk_box_pack_start (GTK_BOX (vbox2), label30, FALSE, FALSE, 0);
  gtk_label_set_line_wrap (GTK_LABEL (label30), TRUE);

  vbox3 = gtk_vbox_new (FALSE, 5);
  gtk_widget_show (vbox3);
  gtk_box_pack_start (GTK_BOX (vbox2), vbox3, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox3), 5);

  checkbutton1 = gtk_check_button_new_with_mnemonic (_("Enable Press to Select"));
  gtk_widget_show (checkbutton1);
  gtk_box_pack_start (GTK_BOX (vbox3), checkbutton1, FALSE, FALSE, 0);
  gtk_tooltips_set_tip (tooltips, checkbutton1, _("Enable Z-axis"), NULL);

  checkbutton3 = gtk_check_button_new_with_mnemonic (_("Supress movement after drag release (skip back)"));
  gtk_widget_show (checkbutton3);
  gtk_box_pack_start (GTK_BOX (vbox3), checkbutton3, FALSE, FALSE, 0);

  table1 = gtk_table_new (7, 2, FALSE);
  gtk_widget_show (table1);
  gtk_box_pack_start (GTK_BOX (vbox2), table1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table1), 5);
  gtk_table_set_row_spacings (GTK_TABLE (table1), 5);
  gtk_table_set_col_spacings (GTK_TABLE (table1), 5);

  hscale1 = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 255, 1, 0, 0)));
  gtk_widget_show (hscale1);
  gtk_table_attach (GTK_TABLE (table1), hscale1, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_widget_set_size_request (hscale1, 100, -1);
  gtk_scale_set_digits (GTK_SCALE (hscale1), 0);

  hscale2 = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 255, 1, 0, 0)));
  gtk_widget_show (hscale2);
  gtk_table_attach (GTK_TABLE (table1), hscale2, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_scale_set_digits (GTK_SCALE (hscale2), 0);

  hscale3 = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 255, 1, 0, 0)));
  gtk_widget_show (hscale3);
  gtk_table_attach (GTK_TABLE (table1), hscale3, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_scale_set_digits (GTK_SCALE (hscale3), 0);

  hscale4 = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 255, 1, 0, 0)));
  gtk_widget_show (hscale4);
  gtk_table_attach (GTK_TABLE (table1), hscale4, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_scale_set_digits (GTK_SCALE (hscale4), 0);

  hscale5 = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 255, 1, 0, 0)));
  gtk_widget_show (hscale5);
  gtk_table_attach (GTK_TABLE (table1), hscale5, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_scale_set_digits (GTK_SCALE (hscale5), 0);

  hscale6 = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 255, 1, 0, 0)));
  gtk_widget_show (hscale6);
  gtk_table_attach (GTK_TABLE (table1), hscale6, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_scale_set_digits (GTK_SCALE (hscale6), 0);

  hscale7 = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 255, 1, 0, 0)));
  gtk_widget_show (hscale7);
  gtk_table_attach (GTK_TABLE (table1), hscale7, 1, 2, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_scale_set_digits (GTK_SCALE (hscale7), 0);

  vbox7 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox7);
  gtk_table_attach (GTK_TABLE (table1), vbox7, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  label28 = gtk_label_new (_("Press Sharpness"));
  gtk_widget_show (label28);
  gtk_box_pack_start (GTK_BOX (vbox7), label28, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label28), 0, 0.5);

  label34 = gtk_label_new (_("(Z time)"));
  gtk_widget_show (label34);
  gtk_box_pack_start (GTK_BOX (vbox7), label34, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label34), 0, 0.5);

  vbox9 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox9);
  gtk_table_attach (GTK_TABLE (table1), vbox9, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  label10 = gtk_label_new (_("Press Threshold"));
  gtk_widget_show (label10);
  gtk_box_pack_start (GTK_BOX (vbox9), label10, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label10), 0, 0.5);

  label36 = gtk_label_new (_("(minimum force to trigger a press or release)"));
  gtk_widget_show (label36);
  gtk_box_pack_start (GTK_BOX (vbox9), label36, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label36), 0, 0.5);

  vbox8 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox8);
  gtk_table_attach (GTK_TABLE (table1), vbox8, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  label11 = gtk_label_new (_("Click Threshold"));
  gtk_widget_show (label11);
  gtk_box_pack_start (GTK_BOX (vbox8), label11, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label11), 0, 0.5);

  label35 = gtk_label_new (_("(minimum force to trigger a click)"));
  gtk_widget_show (label35);
  gtk_box_pack_start (GTK_BOX (vbox8), label35, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label35), 0, 0.5);

  vbox6 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox6);
  gtk_table_attach (GTK_TABLE (table1), vbox6, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  label5 = gtk_label_new (_("Drag Threshold"));
  gtk_widget_show (label5);
  gtk_box_pack_start (GTK_BOX (vbox6), label5, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label5), 0, 0.5);

  label33 = gtk_label_new (_("(minimum force to trigger dragging)"));
  gtk_widget_show (label33);
  gtk_box_pack_start (GTK_BOX (vbox6), label33, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label33), 0, 0.5);

  vbox4 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox4);
  gtk_table_attach (GTK_TABLE (table1), vbox4, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  label3 = gtk_label_new (_("Resistance to Dragging when Pressed"));
  gtk_widget_show (label3);
  gtk_box_pack_start (GTK_BOX (vbox4), label3, FALSE, FALSE, 0);
  gtk_label_set_line_wrap (GTK_LABEL (label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label3), 0, 0.5);

  label31 = gtk_label_new (_("(drag hysteresis)"));
  gtk_widget_show (label31);
  gtk_box_pack_start (GTK_BOX (vbox4), label31, FALSE, FALSE, 0);
  gtk_label_set_line_wrap (GTK_LABEL (label31), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label31), 0, 0.5);

  vbox5 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox5);
  gtk_table_attach (GTK_TABLE (table1), vbox5, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  label4 = gtk_label_new (_("Double Click Sensitivity"));
  gtk_widget_show (label4);
  gtk_box_pack_start (GTK_BOX (vbox5), label4, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label4), 0, 0.5);

  label32 = gtk_label_new (_("(Jenks curvature) "));
  gtk_widget_show (label32);
  gtk_box_pack_start (GTK_BOX (vbox5), label32, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label32), 0, 0.5);

  label2 = gtk_label_new (_("Backup Range for Z-axis Press"));
  gtk_widget_show (label2);
  gtk_table_attach (GTK_TABLE (table1), label2, 0, 1, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label2), 0, 0.5);

  label9 = gtk_label_new (_("Vertical Force"));
  gtk_widget_show (label9);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 1), label9);

  appbar1 = gnome_appbar_new (TRUE, TRUE, GNOME_PREFERENCES_NEVER);
  gtk_widget_show (appbar1);
  gnome_app_set_statusbar (GNOME_APP (main), appbar1);

  g_signal_connect ((gpointer) main, "delete_event",
                    G_CALLBACK (on_main_delete_event),
                    NULL);
  gnome_app_install_menu_hints (GNOME_APP (main), menubar1_uiinfo);
  g_signal_connect ((gpointer) toolbutton1, "clicked",
                    G_CALLBACK (on_apply_clicked),
                    NULL);
  g_signal_connect ((gpointer) toolbutton2, "clicked",
                    G_CALLBACK (on_revert_clicked),
                    NULL);
  g_signal_connect ((gpointer) toolbutton2, "realize",
                    G_CALLBACK (on_revert_realized),
                    NULL);
  g_signal_connect ((gpointer) toolbutton3, "clicked",
                    G_CALLBACK (on_save_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) checkbutton1, "toggled",
                    G_CALLBACK (on_checkbutton1_toggled),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (main, main, "main");
  GLADE_HOOKUP_OBJECT (main, bonobodock1, "bonobodock1");
  GLADE_HOOKUP_OBJECT (main, menubar1_uiinfo[0].widget, "file1");
  GLADE_HOOKUP_OBJECT (main, file1_menu_uiinfo[0].widget, "save_setting1");
  GLADE_HOOKUP_OBJECT (main, file1_menu_uiinfo[1].widget, "revert2");
  GLADE_HOOKUP_OBJECT (main, file1_menu_uiinfo[2].widget, "restore_initial_values1");
  GLADE_HOOKUP_OBJECT (main, file1_menu_uiinfo[3].widget, "separator1");
  GLADE_HOOKUP_OBJECT (main, file1_menu_uiinfo[4].widget, "quit1");
  GLADE_HOOKUP_OBJECT (main, menubar1_uiinfo[1].widget, "help1");
  GLADE_HOOKUP_OBJECT (main, help1_menu_uiinfo[0].widget, "about1");
  GLADE_HOOKUP_OBJECT (main, toolbar1, "toolbar1");
  GLADE_HOOKUP_OBJECT (main, toolbutton1, "toolbutton1");
  GLADE_HOOKUP_OBJECT (main, toolbutton2, "toolbutton2");
  GLADE_HOOKUP_OBJECT (main, toolbutton3, "toolbutton3");
  GLADE_HOOKUP_OBJECT (main, notebook1, "notebook1");
  GLADE_HOOKUP_OBJECT (main, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (main, label27, "label27");
  GLADE_HOOKUP_OBJECT (main, table2, "table2");
  GLADE_HOOKUP_OBJECT (main, hscale12, "hscale12");
  GLADE_HOOKUP_OBJECT (main, hscale13, "hscale13");
  GLADE_HOOKUP_OBJECT (main, hscale14, "hscale14");
  GLADE_HOOKUP_OBJECT (main, label26, "label26");
  GLADE_HOOKUP_OBJECT (main, label24, "label24");
  GLADE_HOOKUP_OBJECT (main, label29, "label29");
 // GLADE_HOOKUP_OBJECT (main, checkbutton2, "checkbutton2");
  GLADE_HOOKUP_OBJECT (main, label8, "label8");
  GLADE_HOOKUP_OBJECT (main, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (main, label30, "label30");
  GLADE_HOOKUP_OBJECT (main, vbox3, "vbox3");
  GLADE_HOOKUP_OBJECT (main, checkbutton1, "checkbutton1");
  GLADE_HOOKUP_OBJECT (main, checkbutton3, "checkbutton3");
  GLADE_HOOKUP_OBJECT (main, table1, "table1");
  GLADE_HOOKUP_OBJECT (main, hscale1, "hscale1");
  GLADE_HOOKUP_OBJECT (main, hscale2, "hscale2");
  GLADE_HOOKUP_OBJECT (main, hscale3, "hscale3");
  GLADE_HOOKUP_OBJECT (main, hscale4, "hscale4");
  GLADE_HOOKUP_OBJECT (main, hscale5, "hscale5");
  GLADE_HOOKUP_OBJECT (main, hscale6, "hscale6");
  GLADE_HOOKUP_OBJECT (main, hscale7, "hscale7");
  GLADE_HOOKUP_OBJECT (main, vbox7, "vbox7");
  GLADE_HOOKUP_OBJECT (main, label28, "label28");
  GLADE_HOOKUP_OBJECT (main, label34, "label34");
  GLADE_HOOKUP_OBJECT (main, vbox9, "vbox9");
  GLADE_HOOKUP_OBJECT (main, label10, "label10");
  GLADE_HOOKUP_OBJECT (main, label36, "label36");
  GLADE_HOOKUP_OBJECT (main, vbox8, "vbox8");
  GLADE_HOOKUP_OBJECT (main, label11, "label11");
  GLADE_HOOKUP_OBJECT (main, label35, "label35");
  GLADE_HOOKUP_OBJECT (main, vbox6, "vbox6");
  GLADE_HOOKUP_OBJECT (main, label5, "label5");
  GLADE_HOOKUP_OBJECT (main, label33, "label33");
  GLADE_HOOKUP_OBJECT (main, vbox4, "vbox4");
  GLADE_HOOKUP_OBJECT (main, label3, "label3");
  GLADE_HOOKUP_OBJECT (main, label31, "label31");
  GLADE_HOOKUP_OBJECT (main, vbox5, "vbox5");
  GLADE_HOOKUP_OBJECT (main, label4, "label4");
  GLADE_HOOKUP_OBJECT (main, label32, "label32");
  GLADE_HOOKUP_OBJECT (main, label2, "label2");
  GLADE_HOOKUP_OBJECT (main, label9, "label9");
  GLADE_HOOKUP_OBJECT (main, appbar1, "appbar1");
  GLADE_HOOKUP_OBJECT_NO_REF (main, tooltips, "tooltips");

  return main;
}

GtkWidget*
create_error_dialog_quit (void)
{
  GtkWidget *error_dialog_quit;
  GdkPixbuf *error_dialog_quit_icon_pixbuf;
  GtkWidget *dialog_vbox1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label1;
  GtkWidget *dialog_action_area1;
  GtkWidget *closebutton1;

  error_dialog_quit = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (error_dialog_quit), _("TrackPoint Detection Failed"));
  error_dialog_quit_icon_pixbuf = create_pixbuf ("configure-trackpoint/trackpoint.png");
  if (error_dialog_quit_icon_pixbuf)
    {
      gtk_window_set_icon (GTK_WINDOW (error_dialog_quit), error_dialog_quit_icon_pixbuf);
      g_object_unref (error_dialog_quit_icon_pixbuf);
    }

  dialog_vbox1 = GTK_DIALOG (error_dialog_quit)->vbox;
  gtk_widget_show (dialog_vbox1);

  hbox1 = gtk_hbox_new (FALSE, 5);
  gtk_widget_show (hbox1);
  gtk_box_pack_start (GTK_BOX (dialog_vbox1), hbox1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbox1), 5);

  image1 = gtk_image_new_from_stock ("gtk-dialog-error", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, TRUE, TRUE, 0);

  label1 = gtk_label_new (_("TrackPoint is not detected. Please check your kernel and TrackPoint driver."));
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (hbox1), label1, FALSE, FALSE, 0);
  gtk_label_set_line_wrap (GTK_LABEL (label1), TRUE);

  dialog_action_area1 = GTK_DIALOG (error_dialog_quit)->action_area;
  gtk_widget_show (dialog_action_area1);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area1), GTK_BUTTONBOX_END);

  closebutton1 = gtk_button_new_from_stock ("gtk-close");
  gtk_widget_show (closebutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (error_dialog_quit), closebutton1, GTK_RESPONSE_CLOSE);
  GTK_WIDGET_SET_FLAGS (closebutton1, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) error_dialog_quit, "delete_event",
                    G_CALLBACK (on_error_dialog_quit_delete_event),
                    NULL);
  g_signal_connect ((gpointer) closebutton1, "clicked",
                    G_CALLBACK (on_closebutton1_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (error_dialog_quit, error_dialog_quit, "error_dialog_quit");
  GLADE_HOOKUP_OBJECT_NO_REF (error_dialog_quit, dialog_vbox1, "dialog_vbox1");
  GLADE_HOOKUP_OBJECT (error_dialog_quit, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (error_dialog_quit, image1, "image1");
  GLADE_HOOKUP_OBJECT (error_dialog_quit, label1, "label1");
  GLADE_HOOKUP_OBJECT_NO_REF (error_dialog_quit, dialog_action_area1, "dialog_action_area1");
  GLADE_HOOKUP_OBJECT (error_dialog_quit, closebutton1, "closebutton1");

  return error_dialog_quit;
}

GtkWidget*
create_about2 (void)
{
  const gchar *authors[] = {
    "Cheuksan Wang <wang02139@gmail.com>",
    "Driver by Stephen Evanchik",
    "Icon by Zdravko Nikolov",	
    NULL
  };
  const gchar *documenters[] = { NULL };
  /* TRANSLATORS: Replace this string with your names, one name per line. */
  gchar *translators = _("translator_credits");
  GdkPixbuf *about2_logo_pixbuf;
  GtkWidget *about2;
  GdkPixbuf *about2_icon_pixbuf;

  if (!strcmp (translators, "translator_credits"))
    translators = NULL;
  about2_logo_pixbuf = create_pixbuf ("configure-trackpoint/trackpoint.png");
  about2 = gnome_about_new ("Configure-trackpoint", VERSION,
                        _("(C) 2004 Cheuksan Wang"),
                        _("A TrackPoint configuration program"),
                        authors,
                        documenters,
                        translators,
                        about2_logo_pixbuf);
  gtk_container_set_border_width (GTK_CONTAINER (about2), 5);
  about2_icon_pixbuf = create_pixbuf ("configure-trackpoint/trackpoint.png");
  if (about2_icon_pixbuf)
    {
      gtk_window_set_icon (GTK_WINDOW (about2), about2_icon_pixbuf);
      g_object_unref (about2_icon_pixbuf);
    }

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (about2, about2, "about2");

  return about2;
}

GtkWidget*
create_dialog1 (void)
{
  GtkWidget *dialog1;
  GtkWidget *dialog_vbox2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label37;
  GtkWidget *dialog_action_area2;
  GtkWidget *cancelbutton1;
  GtkWidget *okbutton1;

  dialog1 = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog1), _("TrackPoint Setting"));

  dialog_vbox2 = GTK_DIALOG (dialog1)->vbox;
  gtk_widget_show (dialog_vbox2);

  hbox2 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox2);
  gtk_box_pack_start (GTK_BOX (dialog_vbox2), hbox2, TRUE, TRUE, 0);

  image2 = gtk_image_new_from_stock ("gtk-dialog-warning", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, TRUE, TRUE, 0);

  label37 = gtk_label_new (_("Your sensitivity setting is very low. Are you sure you want to apply your changes?"));
  gtk_widget_show (label37);
  gtk_box_pack_start (GTK_BOX (hbox2), label37, FALSE, FALSE, 0);
  gtk_label_set_line_wrap (GTK_LABEL (label37), TRUE);

  dialog_action_area2 = GTK_DIALOG (dialog1)->action_area;
  gtk_widget_show (dialog_action_area2);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area2), GTK_BUTTONBOX_END);

  cancelbutton1 = gtk_button_new_from_stock ("gtk-cancel");
  gtk_widget_show (cancelbutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog1), cancelbutton1, GTK_RESPONSE_CANCEL);
  GTK_WIDGET_SET_FLAGS (cancelbutton1, GTK_CAN_DEFAULT);

  okbutton1 = gtk_button_new_from_stock ("gtk-apply");
  gtk_widget_show (okbutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog1), okbutton1, GTK_RESPONSE_APPLY);
  GTK_WIDGET_SET_FLAGS (okbutton1, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) cancelbutton1, "clicked",
                    G_CALLBACK (on_cancelbutton1_clicked),
                    NULL);
  g_signal_connect ((gpointer) okbutton1, "clicked",
                    G_CALLBACK (on_applybutton1_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dialog1, dialog1, "dialog1");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog1, dialog_vbox2, "dialog_vbox2");
  GLADE_HOOKUP_OBJECT (dialog1, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (dialog1, image2, "image2");
  GLADE_HOOKUP_OBJECT (dialog1, label37, "label37");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog1, dialog_action_area2, "dialog_action_area2");
  GLADE_HOOKUP_OBJECT (dialog1, cancelbutton1, "cancelbutton1");
  GLADE_HOOKUP_OBJECT (dialog1, okbutton1, "okbutton1");

  return dialog1;
}

GtkWidget*
create_dialog2 (void)
{
  GtkWidget *dialog2;
  GdkPixbuf *dialog2_icon_pixbuf;
  GtkWidget *dialog_vbox3;
  GtkWidget *hbox3;
  GtkWidget *image12;
  GtkWidget *label38;
  GtkWidget *dialog_action_area3;
  GtkWidget *closebutton2;

  dialog2 = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog2), _("Save Settings"));
  dialog2_icon_pixbuf = create_pixbuf ("configure-trackpoint/trackpoint.png");
  if (dialog2_icon_pixbuf)
    {
      gtk_window_set_icon (GTK_WINDOW (dialog2), dialog2_icon_pixbuf);
      g_object_unref (dialog2_icon_pixbuf);
    }

  dialog_vbox3 = GTK_DIALOG (dialog2)->vbox;
  gtk_widget_show (dialog_vbox3);

  hbox3 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox3);
  gtk_box_pack_start (GTK_BOX (dialog_vbox3), hbox3, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbox3), 5);

  image12 = gtk_image_new_from_stock ("gtk-dialog-info", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image12);
  gtk_box_pack_start (GTK_BOX (hbox3), image12, TRUE, TRUE, 0);

  label38 = gtk_label_new (_("label38"));
  gtk_widget_show (label38);
  gtk_box_pack_start (GTK_BOX (hbox3), label38, FALSE, FALSE, 5);
  GTK_WIDGET_SET_FLAGS (label38, GTK_CAN_FOCUS);
  gtk_label_set_line_wrap (GTK_LABEL (label38), TRUE);
  gtk_label_set_selectable (GTK_LABEL (label38), TRUE);

  dialog_action_area3 = GTK_DIALOG (dialog2)->action_area;
  gtk_widget_show (dialog_action_area3);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area3), GTK_BUTTONBOX_END);

  closebutton2 = gtk_button_new_from_stock ("gtk-close");
  gtk_widget_show (closebutton2);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog2), closebutton2, GTK_RESPONSE_CLOSE);
  GTK_WIDGET_SET_FLAGS (closebutton2, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) closebutton2, "clicked",
                    G_CALLBACK (on_cancelbutton1_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dialog2, dialog2, "dialog2");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog2, dialog_vbox3, "dialog_vbox3");
  GLADE_HOOKUP_OBJECT (dialog2, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (dialog2, image12, "image12");
  GLADE_HOOKUP_OBJECT (dialog2, label38, "label38");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog2, dialog_action_area3, "dialog_action_area3");
  GLADE_HOOKUP_OBJECT (dialog2, closebutton2, "closebutton2");

  return dialog2;
}

GtkWidget*
create_dialog3 (void)
{
  GtkWidget *dialog3;
  GtkWidget *dialog_vbox4;
  GtkWidget *hbox4;
  GtkWidget *image13;
  GtkWidget *label39;
  GtkWidget *dialog_action_area4;
  GtkWidget *cancelbutton2;
  GtkWidget *okbutton2;

  dialog3 = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog3), _("Save Settings"));

  dialog_vbox4 = GTK_DIALOG (dialog3)->vbox;
  gtk_widget_show (dialog_vbox4);

  hbox4 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox4);
  gtk_box_pack_start (GTK_BOX (dialog_vbox4), hbox4, TRUE, TRUE, 0);

  image13 = gtk_image_new_from_stock ("gtk-dialog-info", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image13);
  gtk_box_pack_start (GTK_BOX (hbox4), image13, TRUE, TRUE, 0);

  label39 = gtk_label_new (_("Saving settings will modify /etc/sysfs.conf. Are you sure?"));
  gtk_widget_show (label39);
  gtk_box_pack_start (GTK_BOX (hbox4), label39, FALSE, FALSE, 0);
  gtk_label_set_line_wrap (GTK_LABEL (label39), TRUE);

  dialog_action_area4 = GTK_DIALOG (dialog3)->action_area;
  gtk_widget_show (dialog_action_area4);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area4), GTK_BUTTONBOX_END);

  cancelbutton2 = gtk_button_new_from_stock ("gtk-cancel");
  gtk_widget_show (cancelbutton2);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog3), cancelbutton2, GTK_RESPONSE_CANCEL);
  GTK_WIDGET_SET_FLAGS (cancelbutton2, GTK_CAN_DEFAULT);

  okbutton2 = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (okbutton2);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog3), okbutton2, GTK_RESPONSE_OK);
  GTK_WIDGET_SET_FLAGS (okbutton2, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) cancelbutton2, "clicked",
                    G_CALLBACK (on_cancelbutton2_clicked),
                    NULL);
  g_signal_connect ((gpointer) okbutton2, "clicked",
                    G_CALLBACK (on_okbutton2_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dialog3, dialog3, "dialog3");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog3, dialog_vbox4, "dialog_vbox4");
  GLADE_HOOKUP_OBJECT (dialog3, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (dialog3, image13, "image13");
  GLADE_HOOKUP_OBJECT (dialog3, label39, "label39");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog3, dialog_action_area4, "dialog_action_area4");
  GLADE_HOOKUP_OBJECT (dialog3, cancelbutton2, "cancelbutton2");
  GLADE_HOOKUP_OBJECT (dialog3, okbutton2, "okbutton2");

  return dialog3;
}

GtkWidget*
create_dialog4 (void)
{
  GtkWidget *dialog4;
  GtkWidget *dialog_vbox5;
  GtkWidget *hbox5;
  GtkWidget *image14;
  GtkWidget *label40;
  GtkWidget *dialog_action_area5;
  GtkWidget *cancelbutton3;
  GtkWidget *okbutton3;

  dialog4 = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog4), _("Save Settings"));

  dialog_vbox5 = GTK_DIALOG (dialog4)->vbox;
  gtk_widget_show (dialog_vbox5);

  hbox5 = gtk_hbox_new (FALSE, 5);
  gtk_widget_show (hbox5);
  gtk_box_pack_start (GTK_BOX (dialog_vbox5), hbox5, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbox5), 5);

  image14 = gtk_image_new_from_stock ("gtk-dialog-warning", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image14);
  gtk_box_pack_start (GTK_BOX (hbox5), image14, TRUE, TRUE, 0);

  label40 = gtk_label_new (_("Your sensitivity setting is very low. Are you sure you want to save your settings?"));
  gtk_widget_show (label40);
  gtk_box_pack_start (GTK_BOX (hbox5), label40, FALSE, FALSE, 5);
  gtk_label_set_line_wrap (GTK_LABEL (label40), TRUE);

  dialog_action_area5 = GTK_DIALOG (dialog4)->action_area;
  gtk_widget_show (dialog_action_area5);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area5), GTK_BUTTONBOX_END);

  cancelbutton3 = gtk_button_new_from_stock ("gtk-cancel");
  gtk_widget_show (cancelbutton3);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog4), cancelbutton3, GTK_RESPONSE_CANCEL);
  GTK_WIDGET_SET_FLAGS (cancelbutton3, GTK_CAN_DEFAULT);

  okbutton3 = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (okbutton3);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog4), okbutton3, GTK_RESPONSE_OK);
  GTK_WIDGET_SET_FLAGS (okbutton3, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) cancelbutton3, "clicked",
                    G_CALLBACK (on_cancelbutton1_clicked),
                    NULL);
  g_signal_connect ((gpointer) okbutton3, "clicked",
                    G_CALLBACK (on_okbutton3_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dialog4, dialog4, "dialog4");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog4, dialog_vbox5, "dialog_vbox5");
  GLADE_HOOKUP_OBJECT (dialog4, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (dialog4, image14, "image14");
  GLADE_HOOKUP_OBJECT (dialog4, label40, "label40");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog4, dialog_action_area5, "dialog_action_area5");
  GLADE_HOOKUP_OBJECT (dialog4, cancelbutton3, "cancelbutton3");
  GLADE_HOOKUP_OBJECT (dialog4, okbutton3, "okbutton3");

  return dialog4;
}

GtkWidget*
create_dialog5 (void)
{
  GtkWidget *dialog5;
  GtkWidget *dialog_vbox6;
  GtkWidget *hbox6;
  GtkWidget *image15;
  GtkWidget *label41;
  GtkWidget *dialog_action_area6;
  GtkWidget *closebutton3;

  dialog5 = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog5), _("Settings Saved"));

  dialog_vbox6 = GTK_DIALOG (dialog5)->vbox;
  gtk_widget_show (dialog_vbox6);

  hbox6 = gtk_hbox_new (FALSE, 5);
  gtk_widget_show (hbox6);
  gtk_box_pack_start (GTK_BOX (dialog_vbox6), hbox6, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbox6), 5);

  image15 = gtk_image_new_from_stock ("gtk-dialog-info", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image15);
  gtk_box_pack_start (GTK_BOX (hbox6), image15, TRUE, TRUE, 0);

  label41 = gtk_label_new (_("TrackPoint settings saved. Your original file is renamed /etc/sysfs.conf.bak ."));
  gtk_widget_show (label41);
  gtk_box_pack_start (GTK_BOX (hbox6), label41, FALSE, FALSE, 0);
  gtk_label_set_line_wrap (GTK_LABEL (label41), TRUE);

  dialog_action_area6 = GTK_DIALOG (dialog5)->action_area;
  gtk_widget_show (dialog_action_area6);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area6), GTK_BUTTONBOX_END);

  closebutton3 = gtk_button_new_from_stock ("gtk-close");
  gtk_widget_show (closebutton3);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog5), closebutton3, GTK_RESPONSE_CLOSE);
  GTK_WIDGET_SET_FLAGS (closebutton3, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) closebutton3, "clicked",
                    G_CALLBACK (on_cancelbutton1_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dialog5, dialog5, "dialog5");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog5, dialog_vbox6, "dialog_vbox6");
  GLADE_HOOKUP_OBJECT (dialog5, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (dialog5, image15, "image15");
  GLADE_HOOKUP_OBJECT (dialog5, label41, "label41");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog5, dialog_action_area6, "dialog_action_area6");
  GLADE_HOOKUP_OBJECT (dialog5, closebutton3, "closebutton3");

  return dialog5;
}

