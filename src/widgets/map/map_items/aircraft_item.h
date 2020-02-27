#ifndef AIRCRAFT_ITEM_H
#define AIRCRAFT_ITEM_H

#include "map_item.h"
#include "graphics_aircraft.h"
#include "QGraphicsTextItem"
#include "graphics_track.h"

class AircraftItem : public MapItem
{
    Q_OBJECT
public:
    explicit AircraftItem(Point2DLatLon pt, QString ac_id, MapWidget* map, double neutral_scale_zoom = 15, QObject *parent = nullptr);

    virtual void setHighlighted(bool h);
    virtual void setZValue(qreal z);
    virtual void setForbidHighlight(bool fh);
    virtual void setEditable(bool ed){(void)ed;}
    virtual void removeFromScene();
    virtual ItemType getType() {return ITEM_AIRCRAFT;}

    void setPosition(Point2DLatLon pt);
    void setHeading(double h);

signals:

public slots:

protected:
    virtual void updateGraphics();

private:
    GraphicsAircraft* graphics_aircraft;
    QGraphicsTextItem* graphics_text;
    Point2DLatLon latlon;
    double heading;
    GraphicsTrack* graphics_track;

    QColor color_idle;
    QColor color_unfocused;

    QList<Point2DLatLon> track;
};

#endif // AIRCRAFT_ITEM_H
