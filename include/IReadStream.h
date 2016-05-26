#pragma once

class IReadStream
{
public:
    virtual int Read() = 0;
    virtual void Seek() = 0;
    virtual bool IsFinished() = 0;

    virtual ~IReadStream();
};