
undefined8 FUN_03b43b10(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04bc3ee8;
  if (*(long *)(param_1 + 0x1e0) != 0) {
    *param_2 = 0;
    return 1;
  }
  if (*(char *)(param_1 + 0x1a4) == '\0') {
LAB_03b43b98:
    lVar2 = *(long *)(param_1 + 0x120);
    *(undefined4 *)(param_1 + 0xf4) = 0;
    nn::os::LockMutex((MutexType *)(lVar2 + 0x48));
    if (*(long *)(lVar2 + 8) != 0) {
      FUN_03b60e78(0);
    }
    *(undefined4 *)(lVar2 + 0x10) = 0;
    *(undefined4 *)(lVar2 + 0x24) = 0;
    *(undefined1 *)(lVar2 + 0x18) = 0;
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x48));
    if (*(long *)(param_1 + 0x110) != 0) {
      if (*(long *)(param_1 + 0x230) != 0 || *(long *)(param_1 + 0x228) != 0) {
        FUN_03b3d410(*(long *)(param_1 + 0x110),param_1);
      }
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0xc) = 7;
  }
  else {
    lVar2 = FUN_03bc36b0(*(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 8) + 0x58),
                         param_1 + 0x1a8,*(undefined1 *)(param_1 + 0x1a6));
    *(long *)(param_1 + 0x1e0) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x1f0) == 0) {
      lVar2 = FUN_03bc04f0(*(undefined8 *)(*(long *)puVar1 + 0x40),param_1);
      *(long *)(param_1 + 0x1f0) = lVar2;
      if (lVar2 == 0) goto LAB_03b43b98;
    }
    uVar3 = 1;
    *param_2 = 1;
  }
  return uVar3;
}

