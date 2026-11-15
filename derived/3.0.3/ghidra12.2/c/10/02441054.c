
void FUN_02441054(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
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
  (**(code **)(*plVar2 + 0x4e8))(plVar2,1);
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
  (**(code **)(*plVar2 + 0x4e0))(0x3f800000);
  FUN_023203ac(param_1,0,0);
  local_30 = 0;
  local_28 = 6;
  local_2c = 1;
  local_22 = 0;
  local_24 = 0;
  FUN_02321e44(auStack_38,param_1,&local_30);
  return;
}

