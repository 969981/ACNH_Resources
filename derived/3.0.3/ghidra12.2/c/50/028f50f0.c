
void FUN_028f50f0(undefined2 *param_1)

{
  undefined2 *puVar1;
  long lVar2;
  
  puVar1 = param_1 + 3;
  *param_1 = 0;
  memset(param_1 + 2,0,0x1560);
  lVar2 = 0x1c8;
  do {
    *(undefined8 *)(puVar1 + -1) = 0xfffe;
    FUN_0277d4ac(puVar1 + -1);
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1 = puVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  memset(param_1 + 0xab2,0,0x200);
  FUN_028f5324(param_1 + 0xab2);
  param_1[0xbb2] = 0;
  *(undefined4 *)(param_1 + 0xbb4) = 0x13002a;
  *(undefined1 *)(param_1 + 0xbb3) = 0;
  param_1[0xbb6] = 0x1c;
  param_1[3000] = DAT_05586008;
  *(undefined1 *)(param_1 + 0xbb9) = DAT_0558600a;
  *(undefined1 *)((long)param_1 + 0x1773) = DAT_0558600b;
  *(undefined4 *)(param_1 + 0xbba) = DAT_0558600c;
  memset(param_1 + 0xbbc,0,0x2ab8);
  FUN_028f8bb0(param_1 + 0xbbc);
  FUN_028f8bb0(param_1 + 0x166a);
  param_1[0x165a] = param_1[0x165a] | 1;
  memset(param_1 + 0x2118,0,0x610);
  lVar2 = 0x100;
  puVar1 = param_1 + 0x2125;
  do {
    *(undefined4 *)(puVar1 + -5) = 0;
    lVar2 = lVar2 + -2;
    *(undefined1 *)(puVar1 + -3) = 0;
    *(undefined4 *)(puVar1 + -2) = 0;
    *(undefined1 *)puVar1 = 0;
    puVar1 = puVar1 + 6;
  } while (lVar2 != 0);
  *(undefined8 *)(param_1 + 0x2428) = 0;
  *(undefined8 *)(param_1 + 0x242c) = 0;
  *(undefined8 *)(param_1 + 0x2430) = 0;
  *(undefined8 *)(param_1 + 0x2434) = 0;
  *(undefined8 *)(param_1 + 0x2438) = 0;
  *(undefined8 *)(param_1 + 0x243c) = 0;
  *(undefined8 *)(param_1 + 0x2440) = 0;
  *(undefined8 *)(param_1 + 0x2444) = 0;
  *(undefined8 *)(param_1 + 0x2448) = 0;
  *(undefined8 *)(param_1 + 0x244c) = 0;
  *(undefined8 *)(param_1 + 0x2450) = 0;
  *(undefined4 *)(param_1 + 0x2420) = 0xff0000;
  *(undefined1 *)(param_1 + 0x2423) = 0xff;
  param_1[0x2422] = 0;
  *(undefined8 *)(param_1 + 0x2424) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x2428) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x242c) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x2430) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x2434) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x2438) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x243c) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x2440) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x2444) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x2448) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x244c) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x2450) = 0xfffe;
  FUN_0277d4ac(param_1 + 0x2450);
  return;
}

