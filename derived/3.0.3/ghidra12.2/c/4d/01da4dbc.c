
undefined8 FUN_01da4dbc(long param_1,byte *param_2,byte param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (**(long **)(*(long *)PTR_DAT_04bb49f0 + 8) == 0 &&
      (*(long **)(*(long *)PTR_DAT_04bb49f0 + 8))[1] == 0) {
    uVar6 = 0;
    uVar5 = 3;
    goto LAB_01da4ef0;
  }
  bVar4 = *param_2;
  if ((bVar4 & 0xf) != 0) {
    *(byte *)(param_1 + 0x58) = bVar4;
    if (((bVar4 & 1) != 0) && (*(int *)(param_1 + 0x68) == 0)) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x1e8));
      FUN_03ebb160(param_1 + 0x60,1);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e8));
    }
    if (*(char *)(param_1 + 0x1b3) != '\0') {
      if (DAT_04c487d4 != -1) {
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 0xf & 1) != 0) {
          *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xf1;
        }
      }
      *(undefined1 *)(param_1 + 0x1b3) = 0;
    }
    if ((*(byte *)(param_1 + 0x58) & 0xe) != 0) {
      if ((*(int *)(DAT_05358908 + 0x78) == 0) || (1 < *(int *)(DAT_05358908 + 0xc4) - 1U)) {
        if (*(int *)(param_1 + 0xb0) == 0) {
          *(byte *)(param_1 + 0x1b1) = param_3 & 1;
          uVar6 = 1;
          FUN_03ebb160(param_1 + 0xa8,1);
          uVar5 = 0;
          *(undefined4 *)(param_1 + 0x138) = 1;
        }
        else {
          uVar6 = 1;
          uVar5 = 0;
          if ((param_3 & 1) != 0) {
            iVar3 = 5;
            if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) < 6) {
              iVar3 = 0;
            }
            *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)iVar3 * 0x38 + 0x30)
                 = 0;
            *(undefined1 *)(param_1 + 0x1b1) = 1;
          }
        }
        goto LAB_01da4ef0;
      }
      if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
        uVar6 = 0;
        uVar5 = 2;
        goto LAB_01da4ef0;
      }
      uVar1 = 0;
      if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
        uVar1 = *(uint *)(param_1 + 0x28);
      }
      if (*(uint *)(param_1 + 8) <= uVar1) {
        uVar1 = 0;
      }
      *(undefined1 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar1 * 0x40 + 0x3a) = 0;
      uVar1 = 0;
      if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
        uVar1 = *(uint *)(param_1 + 0x28);
      }
      if (*(uint *)(param_1 + 8) <= uVar1) {
        uVar1 = 0;
      }
      *(undefined1 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar1 * 0x40 + 0x30) = 0;
    }
  }
  uVar5 = 0;
  uVar6 = 1;
LAB_01da4ef0:
  *(undefined4 *)(param_1 + 0x168) = uVar5;
  return uVar6;
}

