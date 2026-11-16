
void FUN_02885b80(undefined2 *param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 *puVar16;
  undefined *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined *local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  long local_90;
  undefined *local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  long local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  if (0 < (int)param_3) {
    uVar22 = 0;
    puVar3 = param_1 + (ulong)param_2 * 8;
    if (6 < param_2) {
      puVar3 = param_1;
    }
    puVar4 = (undefined4 *)((long)(param_1 + 0x38) + (ulong)param_2 * 2 * 4);
    puVar16 = param_1 + 0x54 + param_2;
    if (6 < param_2) {
      puVar4 = (undefined4 *)(param_1 + 0x38);
      puVar16 = param_1 + 0x54;
    }
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar2 = PTR_DAT_04bb43c0;
      puVar5 = puVar3 + uVar22 * 4;
      if (1 < uVar22) {
        puVar5 = puVar3;
      }
      uVar14 = *puVar5;
      uVar10 = *(undefined1 *)(puVar5 + 1);
      uVar11 = *(undefined1 *)((long)puVar5 + 3);
      uVar8 = *(undefined4 *)(puVar5 + 2);
      lVar21 = *(long *)PTR_DAT_04bb43c0;
      local_68 = uVar14;
      local_66 = uVar10;
      local_65 = uVar11;
      local_64 = uVar8;
      uVar18 = FUN_0277d6c4(&local_68);
      lVar23 = *(long *)puVar2;
      if (lVar23 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar18 < *(uint *)(lVar21 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
          puVar6 = puVar4 + uVar22;
          if (1 < uVar22) {
            puVar6 = puVar4;
          }
          puVar7 = (undefined2 *)((long)puVar16 + uVar22);
          if (1 < uVar22) {
            puVar7 = puVar16;
          }
          if (param_3 != 1) {
            if (uVar22 == 0) {
              uVar15 = puVar3[4];
              uVar12 = *(undefined1 *)(puVar3 + 5);
              uVar13 = *(undefined1 *)((long)puVar3 + 0xb);
              uVar9 = *(undefined4 *)(puVar3 + 6);
              local_70 = uVar15;
              local_6e = uVar12;
              local_6d = uVar13;
              local_6c = uVar9;
              uVar18 = FUN_0277d6c4(&local_68);
              lVar21 = *(long *)PTR_DAT_04bb43c0;
              if (lVar21 != 0) {
                lVar23 = *(long *)(lVar23 + 0x57e58);
                uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                if ((uVar18 < *(uint *)(lVar23 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                  local_78 = 0;
                  local_88 = puVar1;
                  local_80 = uVar14;
                  local_7e = uVar10;
                  local_7d = uVar11;
                  local_7c = uVar8;
                  uVar18 = FUN_0277d6c4(&local_80);
                  if (*(long *)PTR_DAT_04bb43c0 != 0) {
                    lVar21 = *(long *)(lVar21 + 0x57e58);
                    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                    if ((uVar18 < *(uint *)(lVar21 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                      lVar21 = *(long *)PTR_DAT_04bc0428;
                      uVar18 = FUN_0277d6c4(&local_68);
                      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                      if ((uVar18 < *(uint *)(lVar21 + 0x1d8)) &&
                         (lVar21 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar18 * 8),
                         lVar21 != 0)) {
                        local_78 = lVar21;
                      }
                    }
                  }
                  iVar19 = FUN_01aed730(&local_88);
                  puVar2 = PTR_DAT_04bb43c0;
                  local_a0 = PTR_DAT_04bc0510 + 0x10;
                  local_90 = 0;
                  lVar21 = *(long *)PTR_DAT_04bb43c0;
                  local_98 = uVar15;
                  local_96 = uVar12;
                  local_95 = uVar13;
                  local_94 = uVar9;
                  uVar18 = FUN_0277d6c4(&local_98);
                  if (*(long *)puVar2 != 0) {
                    lVar21 = *(long *)(lVar21 + 0x57e58);
                    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                    if ((uVar18 < *(uint *)(lVar21 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                      lVar21 = *(long *)PTR_DAT_04bc0428;
                      uVar18 = FUN_0277d6c4(&local_70);
                      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                      if ((uVar18 < *(uint *)(lVar21 + 0x1d8)) &&
                         (lVar21 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar18 * 8),
                         lVar21 != 0)) {
                        local_90 = lVar21;
                      }
                    }
                  }
                  iVar20 = FUN_01aed730(&local_a0);
                  if (iVar20 / 100 < iVar19 / 100) {
                    uVar8 = puVar4[1];
                    uVar11 = *(undefined1 *)((long)puVar16 + 1);
                    puVar3[4] = *puVar5;
                    *(undefined1 *)(puVar3 + 5) = *(undefined1 *)(puVar5 + 1);
                    *(undefined1 *)((long)puVar3 + 0xb) = *(undefined1 *)((long)puVar5 + 3);
                    *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(puVar5 + 2);
                    puVar4[1] = *puVar6;
                    *(undefined1 *)((long)puVar16 + 1) = *(undefined1 *)puVar7;
                    *(undefined1 *)(puVar5 + 1) = uVar12;
                    *puVar5 = uVar15;
                    *(undefined1 *)((long)puVar5 + 3) = local_6d;
                    *(undefined4 *)(puVar5 + 2) = local_6c;
                    *puVar6 = uVar8;
                    *(undefined1 *)puVar7 = uVar11;
                  }
                }
              }
            }
            if (param_3 != 2) {
              uVar24 = 2;
              do {
                puVar2 = PTR_DAT_04bb43c0;
                if (uVar22 < uVar24) {
                  uVar15 = *puVar3;
                  uVar11 = *(undefined1 *)(puVar3 + 1);
                  uVar12 = *(undefined1 *)((long)puVar3 + 3);
                  uVar8 = *(undefined4 *)(puVar3 + 2);
                  lVar23 = *(long *)PTR_DAT_04bb43c0;
                  local_70 = uVar15;
                  local_6e = uVar11;
                  local_6d = uVar12;
                  local_6c = uVar8;
                  uVar18 = FUN_0277d6c4(&local_68);
                  lVar21 = *(long *)puVar2;
                  if (lVar21 != 0) {
                    lVar23 = *(long *)(lVar23 + 0x57e58);
                    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                    if ((uVar18 < *(uint *)(lVar23 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                      local_78 = 0;
                      puVar2 = PTR_DAT_04bc0510 + 0x10;
                      local_7d = local_65;
                      local_7c = local_64;
                      local_88 = puVar2;
                      local_80 = uVar14;
                      local_7e = uVar10;
                      uVar18 = FUN_0277d6c4(&local_80);
                      if (*(long *)PTR_DAT_04bb43c0 != 0) {
                        lVar21 = *(long *)(lVar21 + 0x57e58);
                        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                        if ((uVar18 < *(uint *)(lVar21 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                          lVar21 = *(long *)PTR_DAT_04bc0428;
                          uVar18 = FUN_0277d6c4(&local_68);
                          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                          if ((uVar18 < *(uint *)(lVar21 + 0x1d8)) &&
                             (lVar21 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar18 * 8),
                             lVar21 != 0)) {
                            local_78 = lVar21;
                          }
                        }
                      }
                      iVar19 = FUN_01aed730(&local_88);
                      puVar17 = PTR_DAT_04bb43c0;
                      lVar21 = *(long *)PTR_DAT_04bb43c0;
                      local_90 = 0;
                      local_a0 = puVar2;
                      local_98 = uVar15;
                      local_96 = uVar11;
                      local_95 = uVar12;
                      local_94 = uVar8;
                      uVar18 = FUN_0277d6c4(&local_98);
                      if (*(long *)puVar17 != 0) {
                        lVar21 = *(long *)(lVar21 + 0x57e58);
                        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                        if ((uVar18 < *(uint *)(lVar21 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                          lVar21 = *(long *)PTR_DAT_04bc0428;
                          uVar18 = FUN_0277d6c4(&local_70);
                          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                          if ((uVar18 < *(uint *)(lVar21 + 0x1d8)) &&
                             (lVar21 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar18 * 8),
                             lVar21 != 0)) {
                            local_90 = lVar21;
                          }
                        }
                      }
                      iVar20 = FUN_01aed730(&local_a0);
                      if (iVar20 / 100 < iVar19 / 100) {
                        uVar8 = *puVar4;
                        uVar12 = *(undefined1 *)puVar16;
                        *puVar3 = *puVar5;
                        *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar5 + 1);
                        *(undefined1 *)((long)puVar3 + 3) = *(undefined1 *)((long)puVar5 + 3);
                        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar5 + 2);
                        *puVar4 = *puVar6;
                        *(undefined1 *)puVar16 = *(undefined1 *)puVar7;
                        *(undefined1 *)(puVar5 + 1) = uVar11;
                        *puVar5 = uVar15;
                        *(undefined1 *)((long)puVar5 + 3) = local_6d;
                        *(undefined4 *)(puVar5 + 2) = local_6c;
                        *puVar6 = uVar8;
                        *(undefined1 *)puVar7 = uVar12;
                      }
                    }
                  }
                }
                uVar24 = uVar24 + 1;
              } while (param_3 != uVar24);
            }
          }
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != param_3);
  }
  return;
}

