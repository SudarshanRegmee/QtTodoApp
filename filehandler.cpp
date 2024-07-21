#include "filehandler.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>


FileHandler::FileHandler(const QString &filePath) : m_filePath(filePath) {

}

QStringList FileHandler::readFile() {
    QStringList lines;
    QFile file(m_filePath);

    if (!file.open(QIODeviceBase::ReadOnly | QIODeviceBase::Text)) {
        qDebug() << file.errorString();
        return lines;
    }

    QTextStream in(&file);

    while(!in.atEnd()) {
        lines.append(in.readLine());
    }

    file.close();
    return lines;

}

void FileHandler::writeFile(const QStringList &lines) {
    QFile file(m_filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << file.errorString();
        return;
    }
    QTextStream out(&file);
    foreach (const QString &line, lines) {
        out << line << "\n";
    }

    file.close();
}

void FileHandler::clearFileContents() {
    QFile file(m_filePath);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        qDebug() << "Could not open file for writing";
        return;
    }

    file.close();
}
