#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <QString>
#include <QStringList>

class FileHandler
{
public:
    FileHandler(const QString &filePath);
    QStringList readFile();
    void writeFile(const QStringList &lines);
    void deleteFile(int lineno);

private:
    QString m_filePath;
};

#endif // FILEHANDLER_H
