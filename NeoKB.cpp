#include "NeoKB.h"

// defaults for cmdline options
#define TARGET_FREQ             WS2811_TARGET_FREQ
#define GPIO_PIN                18
#define DMA                     10
//#define STRIP_TYPE            WS2811_STRIP_RGB		// WS2812/SK6812RGB integrated chip+leds
#define STRIP_TYPE              WS2811_STRIP_GBR		// WS2812/SK6812RGB integrated chip+leds
//#define STRIP_TYPE            SK6812_STRIP_RGBW		// SK6812RGBW (NOT SK6812RGB)

#define WIDTH                   8
#define HEIGHT                  8
#define LED_COUNT               (WIDTH * HEIGHT)

ws2811_t ledstring = {};


int main(int argc, char *argv[])
{
	ws2811_return_t ret;

	ledstring.freq = TARGET_FREQ;
	ledstring.dmanum = DMA;
	ledstring.channel[0].gpionum = GPIO_PIN;
	ledstring.channel[0].count = LED_COUNT;
	ledstring.channel[0].invert = 0;
	ledstring.channel[0].brightness = 255;
	ledstring.channel[0].strip_type = STRIP_TYPE;
	ledstring.channel[1].gpionum = 0;
	ledstring.channel[1].count = 0;
	ledstring.channel[1].invert = 0;
	ledstring.channel[1].brightness = 0;



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
