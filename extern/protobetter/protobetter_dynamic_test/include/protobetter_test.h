#ifndef PROTOBETTER_TEST_H
#define PROTOBETTER_TEST_H

#include <QtTest>

#include "protobetterdynamic.h"

class ProtobetterTest : public QObject
{
    Q_OBJECT

private slots:

    void TestPrototypeJsonDeserialization();
    void TestAmpsPrototypeJsonDeserialization();
    void TestXTCEDeserialization();
    void TestDynamicAPI();
    void TestBittylicious();
    void TestBittylicousFromPtypeFile();
    void TestAgainstProtobetterC();
    void TestSuperBityFromPtypeFile();
};

#endif // PROTOBETTER_TEST_H
