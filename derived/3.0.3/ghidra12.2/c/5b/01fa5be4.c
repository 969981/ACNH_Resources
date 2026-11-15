
bool FUN_01fa5be4(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  
  if ((*(byte *)(param_1 + 0xad5a) >> 2 & 1) != 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x77f4) != 0x1f) {
    if (*(int *)(param_1 + 0x77f4) == 0x10) {
      return false;
    }
    iVar2 = *(int *)(param_1 + 0x77b0);
    if (iVar2 == 0x1f) {
      return false;
    }
    if (iVar2 == 0x10) {
      return false;
    }
    if ((*(int *)(*(long *)(param_1 + 0x10) + 0x360) != 0x13) &&
       (*(int *)(*(long *)(param_1 + 0x10) + 0x378) != 0x13)) {
      plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x60);
      if (plVar3 == (long *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          plVar3 = &DAT_05240280;
        }
        else {
          plVar3 = &DAT_05240280;
        }
      }
      uVar4 = (**(code **)(*plVar3 + 0x100))();
      if ((((uVar4 & 1) != 0) &&
          ((iVar2 = *(int *)(param_1 + 0x77b0), 4 < iVar2 - 3U ||
           ((*(byte *)(param_1 + 0xad5d) >> 1 & 1) != 0)))) &&
         (((iVar1 = *(int *)(param_1 + 0x77f4), iVar2 != 0x4f && (iVar1 != 0x4f)) ||
          ((*(byte *)(param_1 + 0xad5d) >> 1 & 1) != 0)))) {
        if (iVar2 == 0x38) {
          return false;
        }
        if (iVar1 == 0x38) {
          return false;
        }
        if (iVar2 == 0x3b) {
          return false;
        }
        if (iVar1 == 0x3b) {
          return false;
        }
        if ((*(uint *)(param_1 + 0xafb0) >> 0x1c & 1) == 0) {
          return iVar2 != 0x3a && iVar1 != 0x3a;
        }
        return false;
      }
    }
  }
  return false;
}

