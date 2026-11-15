
uint FUN_01f0a858(long *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  
  if ((*(byte *)((long)param_1 + 0xad5a) >> 2 & 1) != 0) {
    return 0;
  }
  if (*(int *)((long)param_1 + 0x77f4) != 0x1f) {
    uVar1 = 0;
    if (((*(int *)((long)param_1 + 0x77f4) == 0x10) || (iVar2 = (int)param_1[0xef6], iVar2 == 0x1f))
       || (iVar2 == 0x10)) goto LAB_01f0a940;
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
      if (((uVar4 & 1) != 0) &&
         (((iVar2 = (int)param_1[0xef6], 4 < iVar2 - 3U ||
           ((*(byte *)((long)param_1 + 0xad5d) >> 1 & 1) != 0)) &&
          (*(int *)(param_1[1] + 0x750) != 3)))) {
        uVar1 = 0;
        if ((((iVar2 == 0x38) || (*(int *)((long)param_1 + 0x77f4) == 0x38)) || (iVar2 == 0x3b)) ||
           (*(int *)((long)param_1 + 0x77f4) == 0x3b)) goto LAB_01f0a940;
        uVar4 = (**(code **)(*param_1 + 0x528))(param_1);
        if ((uVar4 & 1) == 0) {
          uVar1 = (**(code **)(*param_1 + 0x530))(param_1);
          uVar1 = uVar1 ^ 1;
          goto LAB_01f0a940;
        }
      }
    }
  }
  uVar1 = 0;
LAB_01f0a940:
  return uVar1 & 1;
}

