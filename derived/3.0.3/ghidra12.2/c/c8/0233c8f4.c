
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0233c8f4(long param_1,short *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_70;
  undefined4 local_6c;
  undefined **local_68;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  
  puVar6 = PTR_DAT_04bb43c0;
  if (*param_2 == -2) {
    return;
  }
  plVar2 = (long *)(param_1 + 0xbdf0);
  if ((*(uint *)(*(long *)(param_1 + 0x48) + 0x248) >> 4 & 1) == 0) goto LAB_0233caa8;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(param_2);
  lVar13 = *(long *)puVar6;
  uVar15 = 0;
  if (lVar13 == 0) {
LAB_0233ca44:
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (*(uint *)(lVar14 + 0x1d8) <= uVar7) goto LAB_0233ca44;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0) {
      local_58 = 0;
      local_60 = *(undefined4 *)param_2;
      local_5c = *(undefined4 *)(param_2 + 2);
      local_68 = &PTR_FUN_04a36b50;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar7 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar6 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(param_2);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
             (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8), lVar13 != 0)) {
            local_58 = lVar13;
          }
        }
      }
      uVar15 = FUN_01adef70(&local_68);
    }
  }
  *(undefined4 *)(param_1 + 0xc1c4) = uVar15;
  *(undefined4 *)(param_1 + 0xc1c8) = uVar16;
  *(undefined4 *)(param_1 + 0xc1cc) = uVar17;
  *(undefined4 *)(param_1 + 0xc1d0) = uVar18;
  FUN_0234c3d4(param_1,param_1 + 0xc1b4,(undefined4 *)(param_1 + 0xc1c4));
  if (*(char *)(param_1 + 0xc205) != '\0') {
    FUN_0170c740(*plVar2,1);
  }
  plVar12 = (long *)(param_1 + 0xc2a0);
  uVar8 = (**(code **)(*plVar12 + 8))(plVar12);
  if ((uVar8 & 1) != 0) {
    (**(code **)*plVar12)(plVar12,param_2);
  }
LAB_0233caa8:
  puVar6 = PTR_DAT_04bb43c0;
  if (**(char **)(param_1 + 0x5fa8) != '\0') {
    iVar9 = (int)*(char *)(*(long *)(param_1 + 0x48) + 0x224);
    local_68 = (undefined **)CONCAT44(local_68._4_4_,iVar9);
    if (iVar9 != 1) {
      lVar13 = *plVar2 + ((ulong)*(uint *)(*plVar2 + 0x10) & 1) * 0x20;
      puVar1 = (undefined4 *)(lVar13 + 0x14);
      uVar16 = *puVar1;
      local_70 = *puVar1;
      uVar15 = *(undefined4 *)(lVar13 + 0x18);
      lVar14 = *(long *)PTR_DAT_04bb43c0;
      local_6c = uVar15;
      uVar7 = FUN_0277d6c4(&local_70);
      lVar13 = *(long *)puVar6;
      if (lVar13 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          local_68 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
          local_58 = 0;
          local_60 = uVar16;
          local_5c = uVar15;
          uVar7 = FUN_0277d6c4(&local_60);
          if (*(long *)puVar6 != 0) {
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
              lVar13 = *(long *)PTR_DAT_04bc0428;
              uVar7 = FUN_0277d6c4(&local_70);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
                 (((puVar10 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8),
                   puVar10 != (uint *)0x0 && (uVar7 = *puVar10, uVar7 != 0)) &&
                  (puVar10 != (uint *)(ulong)uVar7)))) {
                puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
                if (((*puVar11 != 0) && (uVar7 = puVar11[1], uVar7 != 0)) &&
                   ((ulong)(ushort)puVar11[2] != 0)) {
                  lVar13 = 0xc;
                  if (*(char *)((long)puVar11 + 10) != '\0') {
                    lVar13 = 0x1c;
                  }
                  lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
                  if (lVar13 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar7);
                    }
                    if (*puVar11 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < DAT_05326ec0) &&
                       (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2),
                       uVar5 < 0xbd && (uVar5 | 4) == 0xc)) {
                      local_70 = _DAT_05586008;
                      local_6c = DAT_0558600c;
                    }
                  }
                }
              }
            }
          }
          lVar13 = *(long *)puVar6;
        }
      }
      uVar7 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar6 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          iVar4 = *(int *)(*plVar2 + ((ulong)*(uint *)(*plVar2 + 0x10) & 1) * 0x20 + 0x28);
          iVar9 = *(int *)PTR_DAT_04bb3238;
          if (iVar4 != 0) {
            iVar9 = iVar4;
          }
          FUN_0234c1f0(iVar9);
          return;
        }
      }
    }
  }
  return;
}

