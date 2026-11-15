
uint FUN_01fa6dd8(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  
  if ((*(int *)(param_1 + 0x77f4) == 0x10) || (*(int *)(param_1 + 0x77b0) == 0x10)) {
    return 1;
  }
  if ((*(int *)(*(long *)(param_1 + 0x10) + 0x360) == 0x13) ||
     (*(int *)(*(long *)(param_1 + 0x10) + 0x378) == 0x13)) {
    uVar1 = 1;
  }
  else {
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
    uVar1 = (**(code **)(*plVar3 + 0x100))();
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}

