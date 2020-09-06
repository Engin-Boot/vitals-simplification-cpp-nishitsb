#ifndef ALERT
#define ALERT

//add destructor method

class AlertInterface
{
public:
    virtual void alert(const char *vitalName, const char *alertMessage) = 0;
};

class AlertWithSMS : public AlertInterface
{
public:
    void alert(const char *vitalName, const char *alertMessage) override;
};

class AlertWithSound : public AlertInterface
{
public:
    void alert(const char *vitalName, const char *alertMessage) override;
};

#endif