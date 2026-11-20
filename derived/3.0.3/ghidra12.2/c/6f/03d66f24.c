
void FUN_03d66f24(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *local_50;
  char *pcStack_48;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_04b90770;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_04bb2020;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "Loop";
  if (*param_3 != 0) {
    uVar2 = FUN_03c9c780(*param_3,&local_50);
    if ((uVar2 & 1) != 0) {
      local_50 = puVar1 + 0x10;
      pcStack_48 = "Loop";
      uVar3 = FUN_03c68d44(param_2,&local_50,PTR_PTR_04bb2238);
      param_1[2] = uVar3;
    }
    local_50 = puVar1 + 0x10;
    pcStack_48 = "LoopRandom";
    if ((*param_3 != 0) && (uVar2 = FUN_03c9c780(*param_3,&local_50), (uVar2 & 1) != 0)) {
      local_50 = puVar1 + 0x10;
      pcStack_48 = "LoopRandom";
      uVar3 = FUN_03c68d44(param_2,&local_50,PTR_PTR_04bb2238);
      param_1[3] = uVar3;
    }
  }
  return;
}

