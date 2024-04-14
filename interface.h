WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
// generated by Fast Light User Interface Designer (fluid) version 1.0009
/*
Revision 1 - Steve Lin, Jan. 14, 2002
Revision 2 - Alla and Kiran, Jan 18, 2002
Revision 3 - Jernej Barbic and Yili Zhao, Feb, 2012
*/

#ifndef interface_h
#define interface_h

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Value_Slider.H>
#include "mocapPlayer.h"

extern Fl_Window * main_window;

extern Fl_Button * play_button;
extern Fl_Button * pause_button;
extern Fl_Button * rewind_button;
extern Fl_Button * repeat_button;
extern Fl_Button * plusOne_button;
extern Fl_Button * minusOne_button;
extern void play_callback(Fl_Button *, void *);

extern Fl_Button * loadSkeleton_button;
extern Fl_Button * loadMotion_button;
extern void load_callback(Fl_Button *, void *);

extern Fl_Button * reloadMotion_button;
extern void reload_callback(Fl_Button *, void *);

extern Fl_Button * resetScene_button;
extern void resetScene_callback(Fl_Button *, void *);

extern Fl_Button * screenShot_button;
extern void saveScreenToFile_callback(Fl_Button *, void *);

extern Fl_Light_Button * record_button;
extern void record_callback(Fl_Light_Button *, void *);

extern Fl_Value_Slider * frame_slider;
extern void fslider_callback(Fl_Value_Slider * , long);

extern Fl_Light_Button * groundPlane_button;
extern void renderGroundPlane_callback(Fl_Light_Button *, long);


extern Fl_Light_Button * worldAxes_button;
extern void renderWorldAxes_callback(Fl_Light_Button *, long);

extern Fl_Light_Button * fog_button;
extern void useFog_callback(Fl_Light_Button *, long);

extern Fl_Button * aboutPlayer_button;
extern void aboutPlayer_callback(Fl_Button * button, void *);

extern Player_Gl_Window *glwindow;

extern Fl_Value_Input * speedUp;
extern void playSpeed_callback(Fl_Value_Input *, void *);

extern Fl_Value_Input * joint_idx;
extern void spotJoint_callback(Fl_Value_Input *, void *);

extern Fl_Value_Input * sub_input;
extern void skeletonID_callback(Fl_Value_Input * , void *);

extern Fl_Value_Input * tx_input;
extern void tx_callback(Fl_Value_Input *, void *);

extern Fl_Value_Input * ty_input;
extern void ty_callback(Fl_Value_Input *, void *);

extern Fl_Value_Input * tz_input;
extern void tz_callback(Fl_Value_Input *, void *);

extern Fl_Value_Input * rx_input;
extern void rx_callback(Fl_Value_Input *, void *);

extern Fl_Value_Input * ry_input;
extern void ry_callback(Fl_Value_Input*, void *);

extern Fl_Value_Input * rz_input;
extern void rz_callback(Fl_Value_Input *, void *);

Fl_Window * make_window();

#endif
