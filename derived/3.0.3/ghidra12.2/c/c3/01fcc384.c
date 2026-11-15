
void FUN_01fcc384(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x60);
  if (plVar2 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar2 = &DAT_05240280;
    }
    else {
      plVar2 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar2 + 0x4e8))(plVar2,0);
  *(undefined4 *)(param_1 + 0xaf50) = 0;
  *(undefined4 *)(param_1 + 0xaf34) = 1;
  return;
}

