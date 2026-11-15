
undefined8 FUN_01f0929c(long *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  
  iVar3 = *(int *)((long)param_1 + 0x77f4);
  iVar1 = (int)param_1[0xef6];
  if (iVar3 == 0x3c) {
LAB_01f092f0:
    bVar2 = false;
  }
  else {
    if (iVar1 == 0x3c) {
      bVar2 = false;
    }
    else {
      if (iVar3 == 0x10) goto LAB_01f092f0;
      bVar2 = iVar1 != 0x10 && (iVar3 != 0x3e && iVar1 != 0x3e);
    }
    if (iVar3 == 0x3d) {
      return 0;
    }
  }
  if ((*(ushort *)((long)param_1 + 0xaf64) & 0x40) == 0) {
    bVar2 = true;
  }
  if (iVar3 == 0x10) {
    return 0;
  }
  if (iVar1 == 0x3d) {
    return 0;
  }
  if (bVar2) {
    if (iVar1 == 0x10) {
      return 0;
    }
    if ((*(int *)(param_1[2] + 0x360) != 0x13) && (*(int *)(param_1[2] + 0x378) != 0x13)) {
      plVar4 = *(long **)(param_1[1] + 0x60);
      if (plVar4 == (long *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          plVar4 = &DAT_05240280;
        }
        else {
          plVar4 = &DAT_05240280;
        }
      }
      uVar5 = (**(code **)(*plVar4 + 0x100))();
      if ((uVar5 & 1) != 0) {
        (**(code **)(*param_1 + 0x38))(param_1,0x3d,0,0);
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

