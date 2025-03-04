/*
 * ads1248_wrap.h
 *
 * Copyright (C) 2021, SpaceLab.
 *
 * This file is part of EPS 2.0.
 *
 * EPS 2.0 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EPS 2.0 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EPS 2.0. If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * \brief ADS1248 driver wrap definition.
 *
 * \author Lucas Zacchi de Medeiros <lucas.zacchi@spacelab.ufsc.br>
 *
 * \version 0.1.0
 *
 * \date 2021/09/06
 *
 * \defgroup ads1248_wrap ADS1248 Wrap
 * \ingroup tests
 * \{
 */

#ifndef ADS1248_WRAP_H
#define ADS1248_WRAP_H

#include <drivers/ads1248/ads1248.h>
#include <drivers/gpio/gpio.h>

int __wrap_ads1248_init(ads1248_config_t *config);

int __wrap_ads1248_reset(ads1248_config_t *config, ads1248_reset_mode_t mode);

int __wrap_ads1248_config_regs(ads1248_config_t *config);

int __wrap_ads1248_read_regs(ads1248_config_t *config, uint8_t *rd);

int __wrap_ads1248_read_data(ads1248_config_t *config, uint8_t *rd, uint8_t positive_channel);

int __wrap_ads1248_write_cmd(ads1248_config_t *config, ads1248_cmd_t cmd, uint8_t *rd, uint8_t positive_channel);

int __wrap_ads1248_set_powerdown_mode(ads1248_config_t *config, ads1248_power_down_t mode);

#endif /* ADS1248_WRAP_H_ */
/** \} End of ads1248_wrap group */
