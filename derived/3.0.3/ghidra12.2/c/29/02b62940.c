
/* WARNING: Removing unreachable block (ram,0x02b62984) */
/* WARNING: Removing unreachable block (ram,0x02b6298c) */

undefined8 FUN_02b62940(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  byte local_40;
  int local_3c;
  
  uVar3 = 0;
  if (param_1 != 0) {
    local_48[0] = 1;
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    FUN_02a58f80(local_48,puVar2);
    if ((local_3c == 0) || (local_3c == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      if ((local_3c == 0x1b) && ((local_40 & 1) == 0)) {
        local_60 = 0;
        local_70 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_68 = PTR_DAT_04bb2010 + 0x10;
        local_50 = 0;
        local_58 = puStack_68;
        FUN_02a8f7b0(local_48,&local_70);
        uVar3 = 1;
        local_60._0_4_ = (int)local_60 + -2;
        local_50._0_4_ = (int)local_50 + 2;
        iVar1 = (int)local_60;
        if ((int)local_50 <= (int)local_60) {
          iVar1 = (int)local_50;
        }
        if ((int)local_60 <= (int)local_50) {
          local_60._0_4_ = (int)local_50;
        }
        *(int *)(param_1 + 0x10) = iVar1;
        *(int *)(param_1 + 0x14) = local_50._4_4_ + -1;
        *(int *)(param_1 + 0x20) = (int)local_60;
        *(int *)(param_1 + 0x24) = local_50._4_4_ + 8;
      }
    }
  }
  return uVar3;
}

