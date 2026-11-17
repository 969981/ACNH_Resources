
/* WARNING: Removing unreachable block (ram,0x02b62754) */
/* WARNING: Removing unreachable block (ram,0x02b6275c) */

undefined8 FUN_02b62710(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  byte local_40;
  int local_3c;
  ushort local_24;
  
  if (param_1 == 0) {
    return 0;
  }
  local_48[0] = 1;
  puVar3 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar3 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  FUN_02a58f80(local_48,puVar3);
  if ((local_3c == 0) || (local_3c == 0)) {
    return 0;
  }
  if (local_3c != 0x1a) {
    return 0;
  }
  if ((local_40 & 1) != 0) {
    return 0;
  }
  local_60 = 0;
  local_70 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_68 = PTR_DAT_04bb2010 + 0x10;
  local_50 = 0;
  local_58 = puStack_68;
  FUN_02a8f7b0(local_48,&local_70);
  uVar4 = 0;
  lVar6 = *(long *)PTR_DAT_04bb5008;
  uVar9 = (uint)local_24;
  if (local_3c != 0x1a) {
    uVar9 = 0;
  }
  uVar9 = uVar9 - *(ushort *)(lVar6 + 0xff0);
  if (uVar9 < *(uint *)(lVar6 + 0xfd0)) {
    puVar7 = *(uint **)(*(long *)(lVar6 + 0xfd8) + (long)(int)uVar9 * 8);
    if (puVar7 == (uint *)0x0) {
LAB_02b6289c:
      uVar4 = 0;
    }
    else {
      uVar9 = *puVar7;
      uVar4 = 0;
      if ((uVar9 != 0) && (puVar7 != (uint *)(ulong)uVar9)) {
        puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar9);
        uVar4 = 0;
        if (*puVar8 != 0) {
          uVar9 = puVar8[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar8 + lVar6 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar6 != 0) {
              uVar4 = 0;
              if ((ulong)uVar9 != 0) {
                uVar4 = (uint)((ulong)((long)puVar7 - lVar6) / (ulong)uVar9);
              }
              if (*puVar8 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < *(uint *)PTR_DAT_04bc4590) &&
                 (uVar4 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc4590 + 8) + (long)(int)uVar4 * 2),
                 uVar4 < 6)) goto LAB_02b628a0;
            }
          }
          goto LAB_02b6289c;
        }
      }
    }
  }
LAB_02b628a0:
  if (uVar4 - 3 < 3) {
    iVar5 = local_50._4_4_ + -7;
    local_50._4_4_ = local_50._4_4_ + 4;
  }
  else {
    if (2 < uVar4) {
      local_60._0_4_ = 0;
      iVar5 = 0;
      local_50._4_4_ = 0;
      local_50._0_4_ = 0;
      goto LAB_02b628f0;
    }
    iVar5 = local_50._4_4_ + -1;
    local_50._4_4_ = local_50._4_4_ + 6;
  }
  local_60._0_4_ = (int)local_60 + -2;
  local_50._0_4_ = (int)local_50 + 2;
LAB_02b628f0:
  iVar1 = (int)local_60;
  if ((int)local_50 <= (int)local_60) {
    iVar1 = (int)local_50;
  }
  if ((int)local_60 <= (int)local_50) {
    local_60._0_4_ = (int)local_50;
  }
  iVar2 = iVar5;
  if (local_50._4_4_ <= iVar5) {
    iVar2 = local_50._4_4_;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar5 <= local_50._4_4_) {
    iVar5 = local_50._4_4_;
  }
  *(int *)(param_1 + 0x20) = (int)local_60;
  *(int *)(param_1 + 0x24) = iVar5;
  return 1;
}

