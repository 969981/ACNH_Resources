
void FUN_023d6c84(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *local_30;
  char *pcStack_28;
  
  iVar1 = *(int *)(param_1 + 0x178);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  if (iVar1 == 0) {
    pcStack_28 = "EntryFixDirWalkAction";
  }
  else {
    pcStack_28 = "EntryFixDirWalkActionRemote";
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  FUN_017029bc(puVar3,&local_30,6,0,0);
  return;
}

