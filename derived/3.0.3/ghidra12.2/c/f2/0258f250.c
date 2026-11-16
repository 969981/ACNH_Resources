
void FUN_0258f250(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *local_40;
  char *pcStack_38;
  undefined8 local_18;
  
  local_18 = 0x6f0000006e;
  FUN_02602950(param_1,*(undefined4 *)((long)&local_18 + (long)*(int *)(param_1 + 0x28) * 4));
  puVar1 = PTR_DAT_04bb2020;
  if (*(int *)(param_1 + 0x28) == 1) {
    FUN_02603510(param_1,param_2[1]);
    FUN_026035e0(param_1,param_2[1]);
  }
  else if (*(int *)(param_1 + 0x28) == 0) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "FortuneType";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)*param_2);
    }
  }
  local_40 = puVar1 + 0x10;
  pcStack_38 = "IsReqPrayer";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_40,(char)param_2[2]);
  }
  return;
}

