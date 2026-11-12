
undefined8 FUN_007b7080(long param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  byte bVar6;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 - 5U < 2) {
    return 1;
  }
  if ((iVar3 == 3) || (iVar3 == 0)) {
    if (DAT_04c487d4 == -1) {
      bVar6 = 0;
    }
    else {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      bVar6 = (byte)(*puVar2 >> 3) & 1;
    }
    *(byte *)(param_1 + 0x1c) = bVar6;
    *(undefined4 *)(param_1 + 0x18) = 4;
  }
  if (*(int *)(param_1 + 0x18) == 4) {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      uVar5 = FUN_01521b30();
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
    if (((*(uint *)(DAT_05aec9a0 + 0x330) | *(uint *)(DAT_05aec9a0 + 0x32c)) >> 5 & 1) == 0) {
      if (DAT_0537d558 == 0) {
        bVar4 = true;
      }
      else {
        bVar4 = *(int *)(*(long *)(DAT_0537d558 + 0x10) + 0x380) - 0x25U < 0xfffffffe;
      }
      if (*DAT_055cdb40 == '\0') {
        bVar1 = false;
        if (*PTR_DAT_04bb4518 != '\0') {
          bVar1 = bVar4;
        }
        if (bVar1) {
          return 0;
        }
        if (*DAT_055c10d8 != '\0') {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x18) = 5;
        if (DAT_05694df8 != 0) {
          FUN_02e257b8();
        }
        return 1;
      }
    }
  }
  return 0;
}

