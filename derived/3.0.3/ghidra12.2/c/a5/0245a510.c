
void FUN_0245a510(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined1 auStack_38 [12];
  float local_2c;
  float fStack_28;
  float local_24;
  
  fStack_28 = (float)(int)*(short *)(param_1 + 0x191a) * 0.25;
  local_24 = (float)*(int *)(param_1 + 0x191c) * 0.001;
  local_2c = (float)*(int *)(param_1 + 0x1916) * 0.001;
  FUN_016d8b9c(param_1,&local_2c,auStack_38,*(undefined1 *)(param_1 + 0x1920),1);
  plVar2 = *(long **)(param_1 + 0x60);
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
  (**(code **)(*plVar2 + 0x4b8))(0x3f800000);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 4;
  return;
}

