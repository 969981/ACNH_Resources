
undefined8
FUN_021bfc64(undefined8 param_1,undefined4 *param_2,long param_3,long param_4,undefined8 param_5,
            undefined4 param_6)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint *puVar9;
  long *plVar10;
  uint uVar11;
  undefined4 uVar12;
  bool bVar13;
  long lVar14;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint *local_50;
  int local_48;
  uint local_44;
  
  uVar3 = FUN_021c010c(param_1,param_2,param_6);
  puVar1 = PTR_DAT_04bb43c0;
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  local_50 = (uint *)0x0;
  local_60 = PTR_DAT_04bc0510 + 0x10;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar1 == 0) {
LAB_021bfd44:
    if (local_50 != (uint *)0x0) goto LAB_021bfd4c;
LAB_021bfdd4:
    uVar8 = 0;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar11 = ((uint)uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar11) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_021bfd44;
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar11 = ((uint)uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar11) ||
       (puVar9 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar11 * 8),
       puVar9 == (uint *)0x0)) goto LAB_021bfd44;
    local_50 = puVar9;
LAB_021bfd4c:
    uVar11 = *local_50;
    uVar8 = 0;
    if ((uVar11 != 0) && (local_50 != (uint *)(ulong)uVar11)) {
      puVar9 = (uint *)((long)local_50 - (long)(ulong)uVar11);
      uVar8 = 0;
      if (*puVar9 != 0) {
        uVar11 = puVar9[1];
        if ((uVar11 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar9 + lVar14 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar14 != 0) {
            uVar8 = 0;
            if ((ulong)uVar11 != 0) {
              uVar8 = (uint)((ulong)((long)local_50 - lVar14) / (ulong)uVar11);
            }
            if (*puVar9 <= uVar8) {
              uVar8 = 0xffffffff;
            }
            if ((uVar8 < *(uint *)PTR_DAT_04bc0068) &&
               (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar8 * 2),
               uVar8 < 0x13e)) goto LAB_021bfdd8;
          }
        }
        goto LAB_021bfdd4;
      }
    }
  }
LAB_021bfdd8:
  local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar8);
  if (uVar8 == 0x13d) {
    return 0;
  }
  uVar3 = FUN_021c01e8(uVar4,param_2,param_5);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  local_78 = 0;
  local_88 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_80 = PTR_DAT_04bb2010 + 0x10;
  local_68 = 0;
  local_44 = 10;
  local_70 = puStack_80;
  local_48 = FUN_01ae7550(&local_60);
  if (local_48 != local_44) {
    local_44 = 0xb;
    local_48 = FUN_01ae7550(&local_60);
    if (local_48 != local_44) {
      local_44 = 0xc;
      local_48 = FUN_01ae7550(&local_60);
      if (local_48 != local_44) {
        FUN_01afb7fc(&local_60,&local_88,*(undefined4 *)(param_4 + 0x18));
        local_78._0_4_ = (int)local_78 + *(int *)(param_4 + 0x10);
        local_78._4_4_ = local_78._4_4_ + *(int *)(param_4 + 0x14);
        local_68._0_4_ = (int)local_68 + *(int *)(param_4 + 0x10);
        local_68._4_4_ = local_68._4_4_ + *(int *)(param_4 + 0x14);
        goto LAB_021c0080;
      }
    }
  }
  puVar1 = PTR_DAT_04bb27c0;
  lVar14 = *(long *)PTR_DAT_04bb27c0;
  if (lVar14 == 0) {
    return 0;
  }
  uVar11 = *(uint *)(param_4 + 0x20);
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar14 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar5 + 0x60))();
    if (iVar2 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_021bff30;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_021bff30:
    uVar11 = 0;
  }
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  lVar14 = plVar10[0x2a];
  if (((*PTR_DAT_04bb5928 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5928);
  }
  uVar3 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb5920);
  uVar8 = 0;
  if ((int)lVar14 == 1) {
    uVar8 = uVar11;
  }
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (uVar8 == 0) {
    return 0;
  }
  local_44 = FUN_01aee3b4(&local_60);
  uVar12 = 0;
  bVar13 = true;
  if (local_44 < 0x12) {
    if ((1 << (ulong)(local_44 & 0x1f) & 0x7400U) == 0) {
      if ((1 << (ulong)(local_44 & 0x1f) & 0x38000U) == 0) {
        if (local_44 == 0xb) {
          bVar13 = false;
          uVar12 = 1;
        }
      }
      else {
        bVar13 = false;
        uVar12 = 4;
      }
    }
    else {
      bVar13 = false;
      uVar12 = 2;
    }
  }
  local_44 = FUN_01ae7550(&local_60);
  if (2 < local_44 - 10) {
    return 0;
  }
  if (bVar13) {
    return 0;
  }
  uVar7 = *(undefined4 *)(&DAT_04179bd4 + (long)(int)(local_44 - 10) * 4);
  uVar6 = uVar12;
  if ((*(uint *)(param_4 + 0x18) | 2) == 3) {
    uVar6 = uVar7;
    uVar7 = uVar12;
  }
  FUN_012e1d60(&local_88,plVar10[0xd] + 0x278,uVar6,uVar7);
LAB_021c0080:
  if ((((*(int *)(param_3 + 0x20) < (int)local_78) || ((int)local_68 < *(int *)(param_3 + 0x10))) ||
      (*(int *)(param_3 + 0x24) < local_78._4_4_)) || (local_68._4_4_ < *(int *)(param_3 + 0x14))) {
    return 0;
  }
  return 1;
}

