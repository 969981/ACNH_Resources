
void FUN_01bf7ffc(long param_1)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(param_1 + 0x9a) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  (**(code **)(*(long *)(param_1 + 0x240) + 0x38))(param_1 + 0x240);
  (**(code **)(*(long *)(param_1 + 0x1320) + 0x38))(param_1 + 0x1320);
  *(undefined8 *)(param_1 + 0x2420) = 0;
  *(undefined8 *)(param_1 + 0x2408) = 0xffffffffffffd8f0;
  *(undefined8 *)(param_1 + 0x2440) = 0;
  *(undefined4 *)(param_1 + 0x2427) = 0;
  *(undefined8 *)(param_1 + 0x2446) = 0;
  *(undefined8 *)(param_1 + 0x246c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2474) = 1;
  *(undefined8 *)(param_1 + 0x2410) = 0;
  *(undefined4 *)(param_1 + 0x2418) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x242c) = 0;
  *(undefined2 *)(param_1 + 0x2430) = 0;
  *(undefined2 *)(param_1 + 0x2460) = 0;
  *(undefined8 *)(param_1 + 0x2450) = 0;
  *(undefined1 *)(param_1 + 0x2458) = 0;
  *(undefined8 *)(param_1 + 0x2438) = 0;
  *(undefined1 *)(param_1 + 0x2468) = 0;
  *(undefined4 *)(param_1 + 0x2464) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2462) = 0;
  *(undefined8 *)(param_1 + 0x2475) = 0;
  **(undefined1 **)(param_1 + 0x2488) = 0;
  *(undefined8 *)(param_1 + 0x24d8) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x24e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24e8) = 0;
  **(undefined1 **)(param_1 + 0x24f8) = 0;
  *(undefined8 *)(param_1 + 0x2548) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x2550) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2558) = 0;
  **(undefined1 **)(param_1 + 0x2568) = 0;
  if (*(char *)(*(long *)(param_1 + 8) + 0xc) != '\0') {
    FUN_01bc1880(DAT_0533ec08 + 0x2990,*(long *)(param_1 + 8) + 8);
  }
  FUN_03ebb160(param_1 + 0x40,0);
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_01c04e38(*(undefined8 *)(param_1 + 0x20));
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x60) + 0x27c) = 0;
  return;
}

