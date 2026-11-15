
void FUN_023b61e8(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined1 auStack_30 [8];
  char *local_28;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    local_4 = *(undefined4 *)(param_1 + 0x1900);
    FUN_0171ed40(&local_4);
    FUN_0171ea90(auStack_30);
    if (*local_28 != '\0') {
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
      (**(code **)(*plVar2 + 0x218))(plVar2,auStack_30,6);
      return;
    }
  }
  FUN_023164ec(param_1,6);
  return;
}

