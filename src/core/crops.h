
#ifndef CROPS_H
#define CROPS_H

#include <boost/date_time.hpp>
namespace bg = boost::gregorian;

#include <string>
#include <list>
using namespace std;

class Plot;
class Plant;

class CropAction
{
    private:
        bg::date date;
        string note;
    public:
        CropAction(bg::date date, string note) : date(date), note(note) {};
        bg::date get_date() const { return date; }
        string get_note() const { return note; }
};

class Crop
{
    private:
        bg::date start_date;
        bg::date end_date;
        bg::date planned_start_date;
        bg::date planned_end_date;
        string note;
        Plant* p_plant;
        string varkey;
        Plot* p_plot;
        list<CropAction> actions;
    public:
        Crop();
        Crop(bg::date start_date, bg::date end_date,
             bg::date planned_start_date, bg::date planned_end_date,
             Plant &plant, string varkey,
             Plot &plot, string note = "");
        Crop(bg::date start_date, bg::date end_date,
             Plant &plant, string varkey,
             Plot &plot, string note = "");
        string str_descr() const;
        Plant& get_plant() const;
        void set_plant(Plant& plant);
        Plot& get_plot() const;
        void set_plot(Plot& plot);
        bg::date get_date(string which) const;
        void set_date(string which, bg::date date);
        bg::date get_virtual_end_date() const;
        bg::date get_virtual_planned_end_date() const;
        void add_action(bg::date date, string note);
        list<CropAction>& get_actions();
        string get_varkey() const;
        void set_varkey(string varkey);
        string get_note() const;
        void set_note(string note);
        explicit operator bool() const;
        bool is_active_at_date(bg::date date) const;
        bool is_planned_at_date(bg::date date) const;
        bool is_in_year_started_by(bg::date date) const;
        string description() const;
};
extern Crop NullCrop;


class Crops: public list<Crop>
{
    private:
    public:
        Crop& find_crop(const Plot& plot, bg::date date);
        bool is_used_plot(const Plot& plot) const;
        bool is_used_plant(const Plant& plant) const;
};

#endif //CROPS_H
