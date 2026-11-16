
void FUN_028f4074(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0xffff0000;
  param_1[6] = 0xffff;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x16) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x1a) = 0xfffe;
  FUN_0277d4ac(param_1 + 0x1a);
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_027c0ee4(param_1 + 0x24);
  memset(param_1 + 0x5c,0,0x830);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 1;
  *(undefined8 *)(param_1 + 0x474) = 0;
  FUN_027c0ee4(param_1 + 0x478);
  memset(param_1 + 0x4b0,0,0x830);
  param_1[0x8e2] = 0;
  *(undefined8 *)(param_1 + 0x8d0) = 0;
  *(undefined8 *)(param_1 + 0x8cc) = 0;
  *(undefined8 *)(param_1 + 0x8d4) = 0;
  *(undefined8 *)(param_1 + 0x8d8) = 0;
  *(undefined8 *)(param_1 + 0x8dc) = 0;
  *(undefined4 *)(param_1 + 0x8e3) = 0x101;
  *(undefined1 *)(param_1 + 0x8e5) = 0;
  *(byte *)(param_1 + 0x4ac) = *(byte *)(param_1 + 0x4ac) | 1;
  *(undefined4 *)((long)param_1 + 0x11bf) = 0;
  *(undefined8 *)(param_1 + 0x8c8) = 0;
  *(undefined8 *)(param_1 + 0x8ce) = 0;
  *(undefined8 *)(param_1 + 0x8d2) = 0;
  *(undefined8 *)(param_1 + 0x8d6) = 0;
  *(undefined8 *)(param_1 + 0x8da) = 0;
  *(undefined8 *)(param_1 + 0x8ca) = 0;
  *(undefined4 *)((long)param_1 + 0x11d3) = 0;
  *(undefined8 *)(param_1 + 0x8e6) = 0;
  *(undefined8 *)(param_1 + 0x8dd) = 0;
  FUN_028f50f0(param_1 + 0x8ec);
  return;
}

