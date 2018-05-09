#include "NeoKB.h"

int main(int argc, char *argv[])
{
	ws2811_return_t ret;

	//sprintf(VERSION, "%d.%d.%d", VERSION_MAJOR, VERSION_MINOR, VERSION_MICRO);
	//
	//parseargs(argc, argv, &ledstring);
	//
	//matrix = malloc(sizeof(ws2811_led_t) * width * height);
	//
	//setup_handlers();
	//
	//if ((ret = ws2811_init(&ledstring)) != WS2811_SUCCESS)
	//{
	//	fprintf(stderr, "ws2811_init failed: %s\n", ws2811_get_return_t_str(ret));
	//	return ret;
	//}
	//
	//while (running)
	//{
	//	matrix_raise();
	//	matrix_bottom();
	//	matrix_render();
	//
	//	if ((ret = ws2811_render(&ledstring)) != WS2811_SUCCESS)
	//	{
	//		fprintf(stderr, "ws2811_render failed: %s\n", ws2811_get_return_t_str(ret));
	//		break;
	//	}
	//
	//	// 15 frames /sec
	//	usleep(1000000 / 15);
	//}
	//
	//if (clear_on_exit) {
	//	matrix_clear();
	//	matrix_render();
	//	ws2811_render(&ledstring);
	//}
	//
	//ws2811_fini(&ledstring);
	//
	//printf("\n");
	return ret;
}
