#ifndef __MENU_H__
#define __MENU_H__

enum OpMenu {nll, sum, res, dvd, nul, total};

	class Opt{
		public:
			void run();
			void title();
			OpMenu menu();
			OpMenu ask_menu();
	};
#endif
