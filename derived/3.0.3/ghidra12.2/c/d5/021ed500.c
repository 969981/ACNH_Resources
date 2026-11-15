
void FUN_021ed500(long param_1,float *param_2,undefined4 *param_3,long param_4,uint *param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  undefined8 local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_58 = 0;
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_60 = *param_3;
  uStack_5c = param_3[1];
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar3 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_3);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if (uVar5 < *(uint *)(lVar6 + 0x1d8)) {
        lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8);
        if (lVar6 != 0) {
          local_58 = lVar6;
        }
      }
    }
  }
  local_80 = 0;
  local_90 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_88 = PTR_DAT_04bb2010 + 0x10;
  local_70 = 0;
  local_78 = puStack_88;
  FUN_01afb7fc(&local_68,&local_90,0);
  local_98 = 0x3e6;
  *param_2 = (float)((local_70._4_4_ - local_80._4_4_) + 1);
  local_70._4_4_ = local_70._4_4_ + 2;
  FUN_0277d4ac(&local_98);
  bVar4 = FUN_0277d7b4(param_3,&local_98);
  if (*param_5 < 4) {
    bVar4 = (param_6 & 2) == 0 & bVar4;
    switch(*param_5) {
    case 0:
      local_80._0_4_ = (int)local_80 + *(int *)(param_4 + 8);
      local_80._4_4_ = local_80._4_4_ + *(int *)(param_4 + 0xc);
      local_70._0_4_ = (int)local_70 + *(int *)(param_4 + 8);
      local_70._4_4_ = local_70._4_4_ + *(int *)(param_4 + 0xc);
      if (bVar4 != 0) {
        local_80._4_4_ = local_80._4_4_ + -2;
        local_70._4_4_ = local_70._4_4_ + -2;
      }
      break;
    case 1:
      local_70._4_4_ = local_70._4_4_ - local_80._4_4_;
      iVar1 = (int)local_70 - (int)local_80;
      local_80._0_4_ = *(int *)(param_4 + 8) + (int)local_80;
      local_80._4_4_ = *(int *)(param_4 + 0xc) + local_80._4_4_;
      local_70._0_4_ = (int)local_80 + local_70._4_4_;
      local_70._4_4_ = local_80._4_4_ + iVar1;
      if (bVar4 != 0) {
        local_80._0_4_ = (int)local_80 + -2;
        local_70._0_4_ = (int)local_70 + -2;
      }
      break;
    case 2:
      local_80._0_4_ = (int)local_80 + *(int *)(param_4 + 8);
      iVar1 = *(int *)(param_4 + 0xc);
      if (bVar4 == 0) {
        iVar1 = *(int *)(param_4 + 0xc) + -2;
      }
      local_80._4_4_ = local_80._4_4_ + iVar1;
      local_70._0_4_ = (int)local_70 + *(int *)(param_4 + 8);
      local_70._4_4_ = local_70._4_4_ + iVar1;
      break;
    case 3:
      iVar2 = (int)local_70 - (int)local_80;
      iVar1 = (int)local_80 + (local_70._4_4_ - local_80._4_4_);
      local_70._0_4_ = *(int *)(param_4 + 8);
      if (bVar4 == 0) {
        local_70._0_4_ = *(int *)(param_4 + 8) + -2;
      }
      local_80._4_4_ = *(int *)(param_4 + 0xc) + local_80._4_4_;
      local_80._0_4_ = (int)local_70 + (int)local_80;
      local_70._0_4_ = (int)local_70 + iVar1;
      local_70._4_4_ = local_80._4_4_ + iVar2;
    }
  }
  *(int *)(param_1 + 0x10) = (int)local_80;
  *(int *)(param_1 + 0x14) = local_80._4_4_;
  *(int *)(param_1 + 0x20) = (int)local_70;
  *(int *)(param_1 + 0x24) = local_70._4_4_;
  return;
}

