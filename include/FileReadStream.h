#pragma once

#include "IReadStream.h"

class FileReadStream : public IReadStream
{
public:
    virtual int Read();
    virtual void Seek();
    virtual bool IsFinished();

    virtual ~FileReadStream();
};