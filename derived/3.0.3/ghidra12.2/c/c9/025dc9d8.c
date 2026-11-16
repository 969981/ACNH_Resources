
void FUN_025dc9d8(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_02602950(param_1,0x41);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "PlayMusic";
  local_40 = puVar1;
  uVar3 = FUN_0277d6c4(*param_2);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar3);
  }
  pcStack_38 = "AudioItem";
  local_40 = puVar1;
  uVar3 = FUN_0277d6c4(param_2[1]);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar3);
    puVar1 = puVar2 + 0x10;
    pcStack_38 = "IsShuffle";
    if (*(long *)(param_1 + 8) != 0) {
      local_40 = puVar1;
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,*(undefined1 *)((long)param_2 + 0x11));
      pcStack_38 = "Volume";
      if (*(long *)(param_1 + 8) != 0) {
        local_40 = puVar1;
        FUN_02605660(*(long *)(param_1 + 8),&local_40,*(undefined1 *)(param_2 + 2));
        local_40 = puVar2 + 0x10;
        pcStack_38 = "Place";
        if (*(long *)(param_1 + 8) != 0) {
          FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)*(int *)((long)param_2 + 0x14));
        }
      }
    }
  }
  return;
}

