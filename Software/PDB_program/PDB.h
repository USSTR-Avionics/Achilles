class PDB
{
private:
    /* data */
public:
    PDB();

    void send_abort_signal();

    void switch_to_secondary_battery();

    bool check_main_battery_voltage();

    bool check_secindary_battery_voltage();

    void main_system_loop();

    void secondary_system_loop();
};

