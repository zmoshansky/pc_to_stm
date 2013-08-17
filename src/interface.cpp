/*
 * interface.cpp
 *
 *  Created on: Aug 16, 2013
 *      Author: Zachary Moshansky
 */

const int FN_PWM = 1;




/**
 * An Entry Point for Executing Remote Commands.
 */
bool rx_command(int commandType, char* argv[]) {
	switch (commandType) {
		case FN_PWM: 
			return pwm((int) argv[0],(int) argv[1],(int) argv[2]);
	}
	return false;
}

/**
 * Output a Square waveform on a pin.
 */
bool pwm(int pin, int dutyCycle, int frequency) {
	
	return true;
}

bool setDigital(int pin, bool high) {
	return setAnalog(pin, 1);
}

bool readDigital(int pin) {
	return readAnalog(pin);
}

int setAnalog(int pin, int value) {
	return true;
}

int readAnalog(int pin) {
	return true;
}
