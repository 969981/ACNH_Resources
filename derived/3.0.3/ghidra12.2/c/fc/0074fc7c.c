
undefined8 FUN_0074fc7c(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x298);
  if (lVar5 != 0) {
    uVar1 = param_2;
    if (*(uint *)(param_1 + 0x290) <= param_2) {
      uVar1 = 0;
    }
    lVar6 = lVar5 + (long)(int)uVar1 * 0x110;
    if (*(long *)(lVar6 + 0x10) == 0 && *(long *)(lVar6 + 8) == 0) {
      return 0;
    }
  }
  uVar1 = param_2;
  if (*(uint *)(param_1 + 0x290) <= param_2) {
    uVar1 = 0;
  }
  if (((*(byte *)(lVar5 + (long)(int)uVar1 * 0x110 + 0x30) >> 1 & 1) != 0) &&
     (uVar3 = FUN_03f2d924(lVar5 + (long)(int)uVar1 * 0x110 + 0x28), (uVar3 & 1) != 0)) {
    if (*(uint *)(param_1 + 0x290) <= param_2) {
      param_2 = 0;
    }
    lVar5 = *(long *)(param_1 + 0x298) + (long)(int)param_2 * 0x110;
    if ((*(byte *)(lVar5 + 0x30) >> 1 & 1) != 0) {
      lVar5 = lVar5 + 0x28;
      uVar3 = FUN_03f2d924(lVar5);
      if ((uVar3 & 1) != 0) {
        puVar4 = (undefined8 *)FUN_03f2d7f0(lVar5);
        if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar2 != 0)) {
          *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb4be8);
        }
        if ((puVar4 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb4be0), (uVar3 & 1) != 0)) {
          return puVar4[6];
        }
      }
    }
  }
  return 0;
}

