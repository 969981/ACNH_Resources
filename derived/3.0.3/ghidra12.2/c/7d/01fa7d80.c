
undefined8 FUN_01fa7d80(long *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  
  iVar2 = *(int *)((long)param_1 + 0x77f4);
  if (iVar2 == 0x10) {
    return 0;
  }
  iVar1 = (int)param_1[0xef6];
  if (iVar2 == 0x4b) {
    return 0;
  }
  if ((*(ushort *)((long)param_1 + 0xaf64) & 0x40) == 0 ||
      iVar1 != 0x10 && (iVar2 != 0x4c && iVar1 != 0x4c)) {
    if (iVar1 == 0x10) {
      return 0;
    }
    if (iVar1 == 0x4b) {
      return 0;
    }
    if ((*(int *)(param_1[2] + 0x360) != 0x13) && (*(int *)(param_1[2] + 0x378) != 0x13)) {
      plVar3 = *(long **)(param_1[1] + 0x60);
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
      if ((uVar4 & 1) != 0) {
        (**(code **)(*param_1 + 0x38))(param_1,0x4b,0,0);
        return 1;
      }
    }
  }
  return 0;
}

