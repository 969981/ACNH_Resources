
void FUN_03b42690(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_04b762a0;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  puVar1 = PTR_DAT_04bd1eb0 + 0x10;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0xbf800000bf800000;
  param_1[7] = puVar1;
  param_1[0x11] = puVar1;
  *(undefined8 *)((long)param_1 + 0x4c) = 0xbf800000bf800000;
  *(undefined4 *)((long)param_1 + 0x54) = 0xbf800000;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0xbf800000bf800000;
  *(undefined8 *)((long)param_1 + 0x9c) = 0xbf800000bf800000;
  *(undefined4 *)((long)param_1 + 0xa4) = 0xbf800000;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 **)((long)param_1 + 0xf4) = &DAT_3f8000003f800000;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0xffffffff00000000;
  param_1[0x15] = 0x3f800000;
  param_1[0x16] = 0xffffffff00000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  puVar1 = PTR_DAT_04bd22d8 + 0x10;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)((long)param_1 + 0x1a6) = 0;
  param_1[0x35] = param_1 + 0x2d;
  param_1[0x3d] = 0;
  param_1[0x2c] = puVar1;
  param_1[0x2d] = 0;
  *(undefined2 *)((long)param_1 + 0x1a4) = 0x101;
  *(undefined4 *)(param_1 + 0x3a) = 0xffff000d;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = param_1 + 0x33;
  param_1[0x37] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  puVar1 = PTR_DAT_04bcb018;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  if ((*puVar1 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05ad1da8);
    if (iVar2 != 0) {
      FUN_037d8910(&DAT_05ad1d98);
      __cxa_guard_release(&DAT_05ad1da8);
    }
  }
  if (0 < (int)DAT_05ad1d98) {
    uVar3 = 0;
    do {
      if (*(int *)(DAT_05ad1da0 + uVar3 * 4) == 0) goto LAB_03b427f8;
      uVar3 = uVar3 + 1;
    } while (DAT_05ad1d98 != uVar3);
  }
  uVar3 = 0;
LAB_03b427f8:
  *(int *)(param_1 + 0x40) = (int)uVar3;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  return;
}

