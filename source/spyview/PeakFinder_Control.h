// generated by Fast Light User Interface Designer (fluid) version 1.0107

#ifndef PeakFinder_Control_h
#define PeakFinder_Control_h
#include <FL/Fl.H>
#include <FL/Fl_Color_Chooser.H>
class ImageWindow;
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Roller.H>
#include <FL/Fl_Spinner.H>
#include <FL/Fl_Input.H>

class PeakFinder_Control {
public:
  ImageWindow *iw;
  PeakFinder_Control(ImageWindow *p_iw);
  Fl_Double_Window *win;
private:
  void cb_Save_i(Fl_Button*, void*);
  static void cb_Save(Fl_Button*, void*);
  void cb_dismiss_i(Fl_Button*, void*);
  static void cb_dismiss(Fl_Button*, void*);
public:
  Fl_Value_Input *thresh;
private:
  void cb_thresh_i(Fl_Value_Input*, void*);
  static void cb_thresh(Fl_Value_Input*, void*);
public:
  Fl_Light_Button *plot_peaks;
private:
  void cb_plot_peaks_i(Fl_Light_Button*, void*);
  static void cb_plot_peaks(Fl_Light_Button*, void*);
  void cb_Help_i(Fl_Button*, void*);
  static void cb_Help(Fl_Button*, void*);
public:
  Fl_Light_Button *plot_valleys;
private:
  void cb_plot_valleys_i(Fl_Light_Button*, void*);
  static void cb_plot_valleys(Fl_Light_Button*, void*);
public:
  Fl_Roller *slider;
private:
  void cb_slider_i(Fl_Roller*, void*);
  static void cb_slider(Fl_Roller*, void*);
public:
  Fl_Value_Input *slider_step;
private:
  void cb_slider_step_i(Fl_Value_Input*, void*);
  static void cb_slider_step(Fl_Value_Input*, void*);
public:
  Fl_Light_Button *recalc;
private:
  void cb_recalc_i(Fl_Light_Button*, void*);
  static void cb_recalc(Fl_Light_Button*, void*);
public:
  Fl_Light_Button *vmax_enable;
private:
  void cb_vmax_enable_i(Fl_Light_Button*, void*);
  static void cb_vmax_enable(Fl_Light_Button*, void*);
public:
  Fl_Value_Input *valley_max;
private:
  void cb_valley_max_i(Fl_Value_Input*, void*);
  static void cb_valley_max(Fl_Value_Input*, void*);
public:
  Fl_Light_Button *pmin_enable;
private:
  void cb_pmin_enable_i(Fl_Light_Button*, void*);
  static void cb_pmin_enable(Fl_Light_Button*, void*);
public:
  Fl_Light_Button *do_outliers;
private:
  void cb_do_outliers_i(Fl_Light_Button*, void*);
  static void cb_do_outliers(Fl_Light_Button*, void*);
public:
  Fl_Spinner *outlier_x;
private:
  void cb_outlier_x_i(Fl_Spinner*, void*);
  static void cb_outlier_x(Fl_Spinner*, void*);
public:
  Fl_Spinner *outlier_y;
private:
  void cb_outlier_y_i(Fl_Spinner*, void*);
  static void cb_outlier_y(Fl_Spinner*, void*);
public:
  Fl_Spinner *outlier_num;
private:
  void cb_outlier_num_i(Fl_Spinner*, void*);
  static void cb_outlier_num(Fl_Spinner*, void*);
public:
  Fl_Value_Input *peak_min;
private:
  void cb_peak_min_i(Fl_Value_Input*, void*);
  static void cb_peak_min(Fl_Value_Input*, void*);
  void cb_Toggle_i(Fl_Button*, void*);
  static void cb_Toggle(Fl_Button*, void*);
public:
  Fl_Light_Button *hide_data;
private:
  void cb_hide_data_i(Fl_Light_Button*, void*);
  static void cb_hide_data(Fl_Light_Button*, void*);
public:
  Fl_Button *peak_color_box;
private:
  void cb_peak_color_box_i(Fl_Button*, void*);
  static void cb_peak_color_box(Fl_Button*, void*);
public:
  Fl_Button *valley_color_box;
private:
  void cb_valley_color_box_i(Fl_Button*, void*);
  static void cb_valley_color_box(Fl_Button*, void*);
public:
  Fl_Double_Window *helpwin;
private:
  void cb_Dismiss_i(Fl_Button*, void*);
  static void cb_Dismiss(Fl_Button*, void*);
public:
  Fl_Input *helptext;
  Fl_Double_Window *colorwin;
  Fl_Color_Chooser *peak_color;
private:
  void cb_peak_color_i(Fl_Color_Chooser*, void*);
  static void cb_peak_color(Fl_Color_Chooser*, void*);
public:
  Fl_Color_Chooser *valley_color;
private:
  void cb_valley_color_i(Fl_Color_Chooser*, void*);
  static void cb_valley_color(Fl_Color_Chooser*, void*);
  void cb_dismiss1_i(Fl_Button*, void*);
  static void cb_dismiss1(Fl_Button*, void*);
};
#endif