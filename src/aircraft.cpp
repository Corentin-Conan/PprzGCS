#include "aircraft.h"

Aircraft::Aircraft(QString id, QColor color, QString icon, QString n, FlightPlan fp, shared_ptr<SettingMenu> setting_menu, Airframe air):
    ac_id(id), color(color), icon(icon), _name(n), flight_plan(fp), setting_menu(setting_menu), airframe(air), position(Point2DLatLon(0,0))
{

}

Aircraft::Aircraft() : position(Point2DLatLon(0,0))
{

}
