
/* WARNING: Removing unreachable block (ram,0x02146038) */
/* WARNING: Removing unreachable block (ram,0x02146028) */
/* WARNING: Removing unreachable block (ram,0x02146074) */

void FUN_02145ff4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  long local_58;
  undefined *local_50;
  undefined8 local_48;
  
  lVar6 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (lVar6 == 0) {
    return;
  }
  local_68 = (undefined **)((ulong)local_68 & 0xffffffff00000000);
  local_50 = PTR_DAT_04bb2010 + 0x10;
  local_48 = 0;
  lVar6 = *(long *)(lVar6 + 0xd0);
  if (lVar6 == 0) {
    puVar3 = &DAT_05586008;
  }
  else {
    lVar7 = lVar6 + 0x130 + (ulong)*(uint *)(lVar6 + 0x198) * 0x30;
    if (1 < *(uint *)(lVar6 + 0x198)) {
      lVar7 = lVar6 + 0x130;
    }
    puVar3 = (undefined2 *)FUN_012eb21c(lVar7,param_2,&local_50);
  }
  puVar1 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(puVar3);
  lVar6 = DAT_05150358;
  lVar7 = *(long *)puVar1;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_68 = &PTR_FUN_04a36b50;
      local_60 = *puVar3;
      local_5e = *(undefined1 *)(puVar3 + 1);
      local_5d = *(undefined1 *)((long)puVar3 + 3);
      local_5c = *(undefined4 *)(puVar3 + 2);
      local_58 = 0;
      uVar2 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar1 != 0) {
        lVar6 = *(long *)(lVar7 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(puVar3);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8), lVar6 != 0)) {
            local_58 = lVar6;
          }
        }
      }
      uVar4 = FUN_01ae59b0(&local_68);
      if ((uVar4 & 1) == 0) {
        return;
      }
      uVar4 = FUN_01ae6020(&local_68);
      if ((uVar4 & 1) == 0) {
        return;
      }
      FUN_01afb480(&local_68,param_1 + 0x18);
      *(undefined1 *)(param_1 + 0x40) = 1;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + (int)local_48;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + local_48._4_4_;
      local_48._0_4_ = *(int *)(param_1 + 0x38) + (int)local_48;
      local_48._4_4_ = *(int *)(param_1 + 0x3c) + local_48._4_4_;
      goto LAB_021461fc;
    }
  }
  if (DAT_05150358 == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0xb0) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0x488) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0x2b0) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0) {
    return;
  }
  uVar2 = FUN_0277d6c4(puVar3);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
  if (*(uint *)(lVar6 + 0x1d8) <= uVar2) {
    return;
  }
  if (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return;
  }
  FUN_0124c030(&local_68,puVar3);
  if (local_58 == 0) {
    return;
  }
  pbVar5 = (byte *)FUN_01246470(local_58,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
  if (pbVar5 == (byte *)0x0) {
    return;
  }
  if ((*pbVar5 >> 1 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(int *)(param_1 + 0x28) = (int)local_48;
  *(int *)(param_1 + 0x2c) = local_48._4_4_;
  local_48._0_4_ = (int)local_48 + 1;
  local_48._4_4_ = local_48._4_4_ + 1;
LAB_021461fc:
  *(int *)(param_1 + 0x38) = (int)local_48;
  *(int *)(param_1 + 0x3c) = local_48._4_4_;
  return;
}

