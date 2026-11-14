
undefined8 FUN_01508594(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar4 + 0x338));
      iVar2 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  uVar1 = *(undefined4 *)(puVar5 + 7);
  FUN_017baf44(uVar1);
  local_48 = 0;
  local_58 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_50 = PTR_DAT_04bb2010 + 0x10;
  local_38 = 0;
  local_40 = puStack_50;
  uVar3 = FUN_017ba710(uVar1,&local_58);
  if ((uVar3 & 1) == 0) {
LAB_015086e8:
    return 0;
  }
  switch(*param_2) {
  case 2:
    local_38._4_4_ = local_48._4_4_ + 3;
    break;
  case 3:
    local_38._0_4_ = (int)local_48 + 3;
    goto LAB_015086c4;
  case 4:
    local_48._4_4_ = local_38._4_4_ + -3;
    break;
  case 5:
    local_48._0_4_ = (int)local_38 + -3;
LAB_015086c4:
    *(int *)(param_1 + 0x10) = (int)local_48;
    iVar2 = local_48._4_4_;
    if (local_38._4_4_ <= local_48._4_4_) {
      iVar2 = local_38._4_4_;
    }
    if (local_48._4_4_ <= local_38._4_4_) {
      local_48._4_4_ = local_38._4_4_;
    }
    *(int *)(param_1 + 0x20) = (int)local_38;
    goto LAB_015086dc;
  default:
    goto LAB_015086e8;
  }
  iVar2 = (int)local_48;
  if ((int)local_38 <= (int)local_48) {
    iVar2 = (int)local_38;
  }
  if ((int)local_48 <= (int)local_38) {
    local_48._0_4_ = (int)local_38;
  }
  *(int *)(param_1 + 0x10) = iVar2;
  *(int *)(param_1 + 0x20) = (int)local_48;
  iVar2 = local_48._4_4_;
  local_48._4_4_ = local_38._4_4_;
LAB_015086dc:
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 0x24) = local_48._4_4_;
  return 1;
}

