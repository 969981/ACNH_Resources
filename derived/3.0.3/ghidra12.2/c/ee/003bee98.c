
void FUN_003bee98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc3) = 1;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined2 *)(param_1 + 0x170) = 0x3c3c;
  *(undefined8 *)(param_1 + 0x180) = param_2;
  *(undefined8 *)(param_1 + 0x15c) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x188) = param_3;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined1 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0x3f800000;
  *(undefined4 *)(param_1 + 200) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd4) = 0x100000000;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_003c02d0();
  }
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x156) = 0;
  *(undefined2 *)(param_1 + 0x154) = 0xffff;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  FUN_003bfd84(DAT_041384cc,param_1 + 0x20);
  *(undefined2 *)(param_1 + 0x3d1) = 0;
  FUN_003bebac(param_1 + 0x3c);
  *(undefined1 *)(param_1 + 0xbc) = 0xff;
  FUN_003bebac(param_1 + 0x5c);
  *(undefined1 *)(param_1 + 0xbd) = 0xff;
  FUN_003bebac(param_1 + 0x7c);
  *(undefined1 *)(param_1 + 0xbe) = 0xff;
  FUN_003bebac(param_1 + 0x9c);
  *(undefined1 *)(param_1 + 0xbf) = 0xff;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined1 *)(param_1 + 0x172) = 0;
  lVar2 = FUN_03b38a74();
  uVar1 = 2;
  if (*(int *)(lVar2 + 0xe8) != 0) {
    uVar1 = *(int *)(lVar2 + 0xe8) == 1;
  }
  *(undefined1 *)(param_1 + 0x173) = uVar1;
  *(undefined1 **)(param_1 + 0x174) = &DAT_3f8000003f800000;
  return;
}

