#ifndef VALIDATIONSTATS_H
#define VALIDATIONSTATS_H

#include <QString>
#include <stdint.h>

class ValidationStats
{
private:
    QString imagePath;
    QString expectedOutput;
    bool operationSuccess;
    bool resultMatch;
    QString errorMessage;
    int64_t elaspedTime;

public:
    ValidationStats();
    bool getOperationSuccess() const;
    bool getResultMatch() const;
    QString getErrorMessage() const;
    int64_t getElaspedTime() const;

    void setOperationSuccess(bool value);
    void setResultMatch(bool value);
    void setErrorMessage(const QString &value);
    void setElaspedTime(const int64_t &value);
    QString getExpectedOutput() const;
    void setExpectedOutput(const QString &value);
    QString getImagePath() const;
    void setImagePath(const QString &value);
};

#endif // VALIDATIONSTATS_H
