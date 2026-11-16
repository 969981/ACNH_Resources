
void FUN_027c9340(undefined1 *param_1)

{
  long lVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  *param_1 = 0;
  memset(param_1 + 4,0,0xb10);
  lVar6 = 0;
  do {
    *(undefined8 *)(param_1 + lVar6 + 4) = 0xfffe;
    FUN_0277d4ac(param_1 + lVar6 + 4);
    lVar1 = lVar6 + 0xc;
    *(undefined4 *)(param_1 + lVar6 + 0xc) = 0;
    lVar6 = lVar1;
  } while (lVar1 != 0xb10);
  memset(param_1 + 0xb14,0,0x588);
  lVar6 = 0;
  do {
    lVar1 = lVar6 + 0x18;
    param_1[lVar6 + 0xb18] = 0;
    *(undefined4 *)(param_1 + lVar6 + 0xb14) = 0;
    *(undefined4 *)(param_1 + lVar6 + 0xb1a) = 0;
    param_1[lVar6 + 0xb1e] = 0;
    *(undefined4 *)(param_1 + lVar6 + 0xb20) = 0;
    param_1[lVar6 + 0xb24] = 0;
    param_1[lVar6 + 0xb2a] = 0;
    *(undefined4 *)(param_1 + lVar6 + 0xb26) = 0;
    lVar6 = lVar1;
  } while (lVar1 != 0x588);
  *(undefined2 *)(param_1 + 0x109e) = 0;
  *(undefined2 *)(param_1 + 0x109c) = 0x134b;
  *(undefined4 *)(param_1 + 0x10a0) = 0;
  FUN_0277d4ac(param_1 + 0x109c);
  *(undefined2 *)(param_1 + 0x10a4) = 0x134b;
  *(undefined2 *)(param_1 + 0x10a6) = 0;
  *(undefined4 *)(param_1 + 0x10a8) = 0;
  FUN_0277d4ac(param_1 + 0x10a4);
  *(undefined2 *)(param_1 + 0x10ae) = 0;
  *(undefined4 *)(param_1 + 0x10b0) = 0;
  *(undefined2 *)(param_1 + 0x10ac) = 0x139b;
  FUN_0277d4ac(param_1 + 0x10ac);
  *(undefined8 *)(param_1 + 0x10c4) = 0x3f80000000000001;
  uVar2 = DAT_04cb6038;
  *(undefined2 *)(param_1 + 0x10ba) = 0x4000;
  param_1[0x10bc] = 0x10;
  *(undefined4 *)(param_1 + 0x10c0) = 0x101;
  *(undefined8 *)(param_1 + 0x10cc) = 0;
  *(undefined2 *)(param_1 + 0x10b4) = uVar2;
  *(undefined2 *)(param_1 + 0x10b6) = uVar2;
  *(undefined2 *)(param_1 + 0x10b8) = uVar2;
  uVar3 = DAT_0558600a;
  uVar2 = DAT_05586008;
  param_1[0x10d6] = DAT_0558600a;
  *(undefined2 *)(param_1 + 0x10d4) = uVar2;
  *(undefined2 *)(param_1 + 0x10dc) = uVar2;
  uVar4 = DAT_0558600b;
  param_1[0x1104] = 0;
  *(undefined8 *)(param_1 + 0x10f4) = 0;
  *(undefined8 *)(param_1 + 0x10fc) = 0;
  *(undefined8 *)(param_1 + 0x10e4) = 0;
  *(undefined8 *)(param_1 + 0x10ec) = 0;
  param_1[0x10d7] = uVar4;
  uVar5 = DAT_0558600c;
  param_1[0x10de] = uVar3;
  param_1[0x10df] = uVar4;
  *(undefined4 *)(param_1 + 0x10d8) = uVar5;
  *(undefined4 *)(param_1 + 0x10e0) = uVar5;
  return;
}

