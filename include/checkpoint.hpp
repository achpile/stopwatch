/***********************************************************************
     * File       : checkpoint.hpp
     * Created    : Apr 17, 2016
     * Copyright  : (C) 2016 Achpile
     * Author     : Fedosov Alexander
     * Email      : achpile@gmail.com

***********************************************************************/
#ifndef __CHECKPOINT
#define __CHECKPOINT


namespace ach {
	struct Checkpoint {
		sf::Text       *caption;
		sf::Text       *timer;
		ach::TimeStamp  clock;


		 Checkpoint(int index, const char *label);
		~Checkpoint();

		void update();
		void render();

		void setClock(long _clock);
	};
}

#endif
