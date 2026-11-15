
void FUN_02488998(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *local_40;
  char *pcStack_38;
  uint local_30;
  float local_2c;
  float fStack_28;
  float local_24;
  
  local_30 = (uint)*(byte *)(param_1 + 0x1916);
  if (4 < local_30) {
    local_30 = 0;
  }
  fStack_28 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_2c = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_24 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  FUN_016dec40(param_1,&local_2c,0,0,0,0,0);
  uVar1 = local_30;
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  if (uVar1 == 1) {
    pcStack_38 = "PlayerCliffMakerCreateReadyWait";
  }
  else {
    pcStack_38 = "PlayerCliffMakerDeleteReadyWait";
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar3,&local_40,6,1,0);
  return;
}

