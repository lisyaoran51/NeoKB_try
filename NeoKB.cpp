#include "NeoKB.h"

ws2811_t ledstring = {};
ledstring.freq = TARGET_FREQ;
ledstring.dmanum = DMA;
ledstring.channel = {{},{}};
ledstring.channel[0].gpionum = GPIO_PIN;
ledstring.channel[0].count = LED_COUNT;
ledstring.channel[0].invert = 0;
ledstring.channel[0].brightness = 255;
ledstring.channel[0].strip_type = STRI P_TYPE;
ledstring.channel[1].gpionum = 0;
ledstring.channel[1].count = 0;
ledstring.channel[1].invert = 0;
ledstring.channel[1].brightness = 0;


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
