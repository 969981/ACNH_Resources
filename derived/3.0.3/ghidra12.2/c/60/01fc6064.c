
undefined8 FUN_01fc6064(undefined8 param_1,undefined2 *param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *local_d8;
  undefined *puStack_d0;
  int local_c8;
  int iStack_c4;
  undefined *local_c0;
  int local_b8;
  int local_b4;
  undefined *local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  uint *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined **local_70;
  undefined **local_68;
  undefined *local_60;
  int local_58;
  int local_54;
  
  puVar2 = PTR_DAT_04bb2010;
  local_98 = PTR_DAT_04bb2010 + 0x10;
  local_90 = 0;
  puVar6 = (undefined2 *)FUN_01a5190c(param_1,0,param_4,&local_98);
  uVar7 = FUN_0277e294();
  puVar3 = PTR_DAT_04bb43c0;
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  local_b0 = PTR_DAT_04bc0510 + 0x10;
  local_a8 = *puVar6;
  local_a6 = *(undefined1 *)(puVar6 + 1);
  local_a5 = *(undefined1 *)((long)puVar6 + 3);
  local_a4 = *(undefined4 *)(puVar6 + 2);
  local_a0 = (uint *)0x0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_a8);
  if (*(long *)puVar3 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(puVar6);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if (uVar4 < *(uint *)(lVar12 + 0x1d8)) {
        puVar9 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8);
        if (puVar9 != (uint *)0x0) {
          uVar8 = 0;
          uVar4 = *puVar9;
          local_a0 = puVar9;
          if ((uVar4 == 0) || (puVar9 == (uint *)(ulong)uVar4)) goto LAB_01fc6204;
          puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
          uVar8 = 0;
          if (*puVar10 == 0) goto LAB_01fc6204;
          uVar4 = puVar10[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar12 != 0) {
              uVar8 = 0;
              if ((ulong)uVar4 != 0) {
                uVar8 = (uint)((ulong)((long)puVar9 - lVar12) / (ulong)uVar4);
              }
              if (*puVar10 <= uVar8) {
                uVar8 = 0xffffffff;
              }
              if ((uVar8 < *(uint *)PTR_DAT_04bc0048) &&
                 (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar8 * 2),
                 uVar8 < 0x52)) goto LAB_01fc6204;
            }
          }
        }
      }
    }
  }
  uVar8 = 0;
LAB_01fc6204:
  if (8 < uVar8 - 1) {
    return 0;
  }
  puStack_d0 = puVar2 + 0x10;
  local_d8 = PTR_DAT_04bbc1a0 + 0x10;
  local_c8 = *(int *)(param_4 + 8);
  iStack_c4 = *(int *)(param_4 + 0xc);
  lVar12 = *(long *)puVar3;
  local_b8 = local_c8 + 1;
  local_b4 = iStack_c4 + 1;
  local_c0 = puStack_d0;
  uVar4 = FUN_0277d6c4(puVar6);
  if (*(long *)puVar3 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_80 = 0;
      lVar12 = *(long *)PTR_DAT_04bb2720;
      if (lVar12 == 0) {
        puVar11 = &DAT_055c04a0;
      }
      else {
        puVar11 = &DAT_055c04a0;
        if (*(long *)(lVar12 + 0x330) != 0) {
          puVar11 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
          iVar5 = FUN_006bd550(*puVar11,0);
          puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar5 != 0x758f7eaf) {
            puVar11 = &DAT_055c04a0;
          }
        }
      }
      local_7c = *(undefined4 *)(puVar11 + 7);
      local_78 = FUN_017baf44();
      local_78 = local_78 & 1;
      local_88 = PTR_DAT_04bb3140 + 0x10;
      uVar7 = FUN_01a4fafc(&local_88,1,&local_d8);
      iVar5 = local_c8;
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      local_70 = &puStack_d0;
      local_68 = &local_c0;
      local_60 = puVar2 + 0x10;
      local_58 = local_c8;
      local_54 = iStack_c4;
      iVar1 = local_b4 + 1;
      if (iVar1 != iStack_c4) {
        do {
          uVar7 = FUN_01a4fd6c(&local_88,1,&local_60,1);
          if ((uVar7 & 1) == 0) {
            return 0;
          }
          if (local_58 < *(int *)(local_68 + 1)) {
            local_58 = local_58 + 1;
          }
          else {
            local_54 = local_54 + 1;
            local_58 = *(int *)(local_70 + 1);
          }
        } while (iVar5 != local_58 || iVar1 != local_54);
      }
    }
  }
  *param_2 = *puVar6;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(puVar6 + 1);
  *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)puVar6 + 3);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar6 + 2);
  FUN_01afb480(&local_b0,param_3);
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + (int)local_90;
  *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + local_90._4_4_;
  *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + (int)local_90;
  *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x24) + local_90._4_4_;
  return 1;
}

