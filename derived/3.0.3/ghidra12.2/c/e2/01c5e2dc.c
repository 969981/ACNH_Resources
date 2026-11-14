
int FUN_01c5e2dc(undefined8 param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined ***pppuStack_38;
  undefined4 *local_30;
  undefined4 local_4;
  
  local_50 = 0;
  local_48 = 0;
  local_58 = &PTR_LAB_04a42518;
  if (*(char *)(param_3 + 1) == '\0') {
    local_30 = (undefined4 *)CONCAT44(local_30._4_4_,param_2);
    local_40 = &PTR_LAB_04a42560;
    pppuStack_38 = &local_58;
    FUN_01c5fba0(&local_40);
    local_4 = 2;
    local_40 = &PTR_LAB_04a42600;
    local_30 = &local_4;
    pppuStack_38 = &local_58;
    FUN_01c5fba0(&local_40);
  }
  else {
    local_50._0_4_ = 0x40000000;
    local_48._4_4_ = 0;
    local_50 = 0x40000000;
    local_48._0_4_ = 0;
    local_50._4_4_ = 0;
  }
  iVar6 = 0x1e;
  uVar1 = (uint)local_50 - ((uint)local_50 >> 1 & 0x55555555);
  uVar2 = local_50._4_4_ - (local_50._4_4_ >> 1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
  uVar3 = (uint)local_48 - ((uint)local_48 >> 1 & 0x55555555);
  uVar1 = uVar1 + (uVar1 >> 8);
  uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
  uVar2 = uVar2 + (uVar2 >> 8);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar4 = local_48._4_4_ - (local_48._4_4_ >> 1 & 0x55555555);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 + (uVar3 >> 8);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  if ((uVar2 + (uVar2 >> 0x10) & 0x3f) + (uVar3 + (uVar3 >> 0x10) & 0x3f) +
      (uVar1 + (uVar1 >> 0x10) & 0x3f) + (uVar4 + (uVar4 >> 0x10) & 0x3f) != 0) {
    iVar5 = FUN_01c63a20(&local_58);
    iVar6 = 0x1e;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
  }
  return iVar6;
}

