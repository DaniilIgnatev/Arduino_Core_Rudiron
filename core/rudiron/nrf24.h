/*
This file is part of Arduino_Core_Rudiron.

Arduino_Core_Rudiron is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Arduino_Core_Rudiron is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Arduino_Core_Rudiron.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef NRF24_H
#define NRF24_H

#include "Stream.h"
#include "nrf24l01.h"

namespace Rudiron
{
    ///Потоко-ориентированный интерфейс для работы с nrf24
    class nRF24: Stream
    {
    private:
    public:
        bool begin(bool receiver);

        void end();

        virtual int available(void) override;

        virtual int peek(void) override;

        virtual int read(void) override;

        virtual int availableForWrite() override;

        virtual void flush() override;

        virtual size_t write(uint8_t byte) override;

        using Print::write;

        operator bool() { return true; }
    };
}

#endif