
void FUN_025e4f50(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined *local_60;
  char *pcStack_58;
  
  FUN_02602950(param_1,0x5d);
  puVar2 = PTR_DAT_04bb2020;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "NpcArea";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_60,(long)*(int *)(param_2 + 0x28));
  }
  local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
  plVar5 = *(long **)PTR_DAT_04bb48c8;
  plVar4 = (long *)plVar5[0xc];
  if ((char)plVar5[1] == '\0') {
    lVar3 = nn::oe::GetProgramTotalActiveTime();
    *plVar5 = lVar3;
    *(undefined1 *)(plVar5 + 1) = 1;
  }
  else {
    lVar3 = *plVar5;
  }
  puVar1 = puVar2 + 0x10;
  pcStack_58 = "PlayTime";
  if (*(long *)(param_1 + 8) != 0) {
    local_60 = puVar1;
    FUN_026054d0(*(long *)(param_1 + 8),&local_60,(lVar3 - *plVar4) / 1000000000);
    pcStack_58 = "Distance";
    if (*(long *)(param_1 + 8) != 0) {
      local_60 = puVar1;
      FUN_026057f0(*(undefined4 *)(param_2 + 0x2c),*(long *)(param_1 + 8),&local_60);
    }
  }
  puVar2 = puVar2 + 0x10;
  pcStack_58 = "Main";
  local_60 = puVar2;
  FUN_025e50ac(param_1,param_2,&local_60);
  pcStack_58 = "Sub";
  local_60 = puVar2;
  FUN_025e50ac(param_1,param_2 + 0x14,&local_60);
  return;
}

