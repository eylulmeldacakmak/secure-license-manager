#ifndef FILEREADER_H
#define FILEREADER_H

#include "User.h"
#include <QList>
#include <QString>
#include <QByteArray>

class FileReader
{
public:
    FileReader();

    //reads the encrypted license file as raw bytes (binary)
    QByteArray readEncryptedFile(const QString &filePath);

    //parses the decrypted JSON data into QList<User> objects
    QList<User> parseUsersFromJson(const QByteArray &jsonData);
};

#endif // FILEREADER_H