
/* WARNING: Removing unreachable block (ram,0x0220711c) */
/* WARNING: Removing unreachable block (ram,0x02207140) */

void FUN_02207060(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  float local_54 [2];
  float local_4c;
  undefined *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 uStack_28;
  
  local_48 = PTR_DAT_04bbc1a0;
  puStack_40 = PTR_DAT_04bb2010;
  param_1[2] = 0;
  puVar1 = puStack_40 + 0x10;
  *param_1 = (long)(local_48 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[3] = (long)puVar1;
  param_1[4] = 0;
  if (param_2 == 2) {
    local_54[0] = 0.0;
    local_4c = 0.0;
    local_48 = PTR_DAT_04bb2020 + 0x10;
    puStack_40 = &DAT_040c9d84;
    uVar3 = FUN_021da1b0(local_54,&local_48);
    if ((uVar3 & 1) != 0) {
      iVar5 = (int)((float)(int)local_54[0] / 5.0) - (uint)(local_54[0] < 0.0);
      iVar4 = (int)((float)(int)local_4c / 5.0) - (uint)(local_4c < 0.0);
      *(int *)(param_1 + 2) = iVar5 + -5;
      *(int *)((long)param_1 + 0x14) = iVar4 + 1;
      *(int *)(param_1 + 4) = iVar5 + 4;
      *(int *)((long)param_1 + 0x24) = iVar4 + 4;
    }
  }
  else if (param_2 == 1) {
    local_48 = local_48 + 0x10;
    puStack_40 = puStack_40 + 0x10;
    uStack_28 = 0;
    local_38 = 0;
    local_54[0] = 0.0;
    uVar2 = 0x6e090aaa;
    if (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) != 1) {
      uVar2 = 0x55acd0a6;
    }
    local_30 = puStack_40;
    uVar3 = FUN_0118ad90(&local_48,uVar2);
    iVar5 = 0;
    iVar4 = 0;
    if ((uVar3 & 1) != 0) {
      iVar5 = DAT_05300528 + (int)local_38;
      iVar4 = DAT_0530052c + local_38._4_4_;
    }
    *(int *)(param_1 + 2) = iVar5 + -2;
    *(int *)((long)param_1 + 0x14) = iVar4;
    *(int *)(param_1 + 4) = iVar5 + 9;
    *(int *)((long)param_1 + 0x24) = iVar4 + 3;
  }
  return;
}

