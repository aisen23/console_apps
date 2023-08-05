#pragma once

namespace CA
{
    enum class ImageType : int {
        None,
        Heart
    };

    class Image
    {
    public:
        virtual ~Image() = default;

        void Display() const;
        virtual void Update() = 0;

    protected:
        virtual void DoDisplay() const = 0;

    private:
        void Flush() const;
    };
}
