
void FUN_01ec74a4(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  ushort uVar1;
  int iVar2;
  undefined8 local_70;
  int local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined **local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  uVar1 = 8;
  if ((param_3 & 1) == 0) {
    uVar1 = 0;
  }
  *(ushort *)((long)param_1 + 0xaf64) = *(ushort *)((long)param_1 + 0xaf64) & 0xfff7 | uVar1;
  local_40 = 0;
  local_50 = &PTR_LAB_04987060;
  local_48 = 0;
  if ((param_3 & 1) == 0) {
    if (*(int *)(param_2 + 0x18) == 0) {
      local_48 = *(undefined8 *)(param_2 + 8);
      local_40 = *(undefined4 *)(param_2 + 0x10);
      local_3c = *(undefined4 *)(param_2 + 0x14);
      uStack_38 = 0;
      iVar2 = 0;
    }
    else {
      local_70._0_4_ = (uint)local_70 & 0xffffff00;
      local_70._4_4_ = 0;
      local_68 = 0;
      local_64 = 0;
      local_5c = 0;
      FUN_01ec6980(param_1,&local_70,param_2,0);
      local_40 = *(undefined4 *)(param_2 + 0x10);
      local_3c = *(undefined4 *)(param_2 + 0x14);
      uStack_38 = *(undefined4 *)(param_2 + 0x18);
      local_48 = CONCAT44(*(undefined4 *)((long)param_1 + 0xaf3c),*(undefined4 *)(param_2 + 8));
      iVar2 = (int)local_5c;
      if ((int)local_5c != 0) {
        local_48 = CONCAT44(local_68,local_70._4_4_);
        iVar2 = (int)local_5c;
        local_40 = (undefined4)local_64;
        local_3c = local_64._4_4_;
        uStack_38 = local_5c._4_4_;
      }
    }
  }
  else {
    local_48 = *(undefined8 *)(param_2 + 8);
    local_40 = *(undefined4 *)(param_2 + 0x10);
    local_3c = *(undefined4 *)(param_2 + 0x14);
    uStack_38 = *(undefined4 *)(param_2 + 0x18);
    iVar2 = *(int *)((long)param_1 + 0xaf4c);
  }
  local_68 = iVar2;
  if ((param_4 & 1) != 0) {
    *(uint *)(*(long *)(param_1[1] + 0xa0) + 0x178) =
         *(uint *)(*(long *)(param_1[1] + 0xa0) + 0x178) | 1;
    *(uint *)(*(long *)(param_1[1] + 0x90) + 0x178) =
         *(uint *)(*(long *)(param_1[1] + 0x90) + 0x178) | 1;
  }
  local_70 = &local_50;
  local_64._4_4_ = (uint)((ulong)local_64 >> 0x20) & 0xffffff00;
  local_64 = CONCAT44(local_64._4_4_,0x39);
  (**(code **)(*param_1 + 0x4b0))(param_1,&local_70);
  return;
}

