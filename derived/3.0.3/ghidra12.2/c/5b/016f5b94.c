
void FUN_016f5b94(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 0x60);
  if (plVar2 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      plVar2 = &DAT_05240280;
    }
    else {
      plVar2 = &DAT_05240280;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x016f5bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x370))(param_1);
  return;
}

