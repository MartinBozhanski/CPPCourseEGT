#include "SoundManager.h"
#include <iostream>

SoundManager::SoundManager() {
	Mix_OpenAudio(48000, AUDIO_S16SYS, 2, 4096);
}

bool SoundManager::load(const char* fileName, std::string id, int type) {
	//type1 => music, type0 => sfx
	if (type == 1) { //Music
		Mix_Music* music = Mix_LoadMUS(fileName);
		if (music == 0) {
			std::cout << "Could not load music" << Mix_GetError() << std::endl;
			return false;
		}
		s_mMusic[id] = music;
		return true;
	}
	else {
		if (type == 0) { // SFX
			Mix_Chunk* chunk = Mix_LoadWAV(fileName);
			if (chunk == 0) {
				std::cout << "Could not load sfx" << Mix_GetError() << std::endl;
				return false;
			}
			s_mSfxs[id] = chunk;
			return true;
		}
	}
}

void SoundManager::playSound(std::string id, int loop, int ms)
{
	Mix_FadeInChannel(-1, s_mSfxs[id], loop, ms);
}

void SoundManager::playMusic(std::string id, int loop, int ms)
{
	Mix_FadeInMusic(s_mMusic[id], loop, ms);
}

void SoundManager::changeVolume(int c) {
	int currentVolume = Mix_VolumeMusic(-1);
	currentVolume += c;
	Mix_VolumeMusic(currentVolume);
}

SoundManager* SoundManager::s_mInstance = 0;
