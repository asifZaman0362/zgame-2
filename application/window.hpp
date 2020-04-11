#include "../core/stddef.hpp"
#include "../core/vectors.hpp"


namespace zg {
    struct Window {
        typedef vec2<uint16> vec2i;

        explicit Window();
        Window(uint16 width, uint16 height, uint16 posX, uint16 posY);
        Window(vec2i size, vec2i pos);
        ~Window();

        void Create(uint16 width, uint16 height, uint16 posX, uint16 posY);
        void Create(vec2i size, vec2i pos);
        void Close();
        void SetSize(uint16, uint16);
        void SetSize(vec2i);
        void SetPosition(uint16, uint16);
        void SetPosition(vec2i);

    private:
        uint16 m_width;
        uint16 m_height;
        uint16 m_posX;
        uint16 m_posY;
    };
}