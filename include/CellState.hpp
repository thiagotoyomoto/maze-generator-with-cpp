#ifndef D4941873_31F6_4E79_9B26_E7BF70F301D4
#define D4941873_31F6_4E79_9B26_E7BF70F301D4

enum class CellState {
  UNVISITED = 0x00,
  NORTH_OPEN = 0x01,
  WEST_OPEN = 0x02,
  SOUTH_OPEN = 0x04,
  EAST_OPEN = 0x08,
  VISITED = 0x10
};

#endif /* D4941873_31F6_4E79_9B26_E7BF70F301D4 */