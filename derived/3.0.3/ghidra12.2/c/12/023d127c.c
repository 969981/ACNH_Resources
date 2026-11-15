
void FUN_023d127c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *local_38;
  char *pcStack_30;
  undefined2 local_24 [2];
  
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
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_30 = "PlayerFaintUp";
  local_38 = puVar1;
  FUN_017081d0(puVar3,&local_38,6,1,0);
  if (*(int *)(param_1 + 0x178) == 0) {
    local_24[0] = 0;
    pcStack_30 = &DAT_040fa7fb;
    lVar4 = *(long *)PTR_DAT_04bb26a8;
    local_38 = puVar1;
    FUN_02a2dcd0(lVar4,local_24,&local_38);
    FUN_02a0d880(lVar4 + 0xa7660,local_24[0]);
  }
  return;
}

