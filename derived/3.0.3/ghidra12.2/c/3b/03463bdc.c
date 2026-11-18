
undefined8 FUN_03463bdc(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x18) >> 1 & 1) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x100) == 1) {
    return 0;
  }
  uVar2 = FUN_00817520(param_1);
  if (((uVar2 & 1) != 0) && ((*(byte *)(param_1 + 0x18) >> 1 & 1) != 0)) {
    uVar2 = FUN_03f2d924(param_1 + 0x10);
    if ((uVar2 & 1) != 0) {
      puVar3 = (undefined8 *)FUN_03f2d7f0(param_1 + 0x10);
      if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4be8);
      }
      if ((((puVar3 != (undefined8 *)0x0) &&
           (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4be0), (uVar2 & 1) != 0)) &&
          (puVar3[6] != 0)) && (lVar4 = *(long *)(puVar3[6] + 8), lVar4 != 0)) {
        if (*(long *)(lVar4 + 0x20) == 0) {
          return 0;
        }
        lVar4 = FUN_038fde10();
        if (lVar4 == 0) {
          return 0;
        }
        if (**(long **)(lVar4 + 0x28) != 0) {
          FUN_03973f28(param_3);
          *(char **)(param_3 + 0x90) = "[UI]TextureResLoad";
          return 1;
        }
      }
    }
  }
  return 0;
}

