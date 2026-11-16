
bool FUN_0269de40(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulong *puVar13;
  byte *pbVar14;
  ulong uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  long lVar18;
  uint *puVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  char *pcVar27;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  long local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined4 local_9c;
  uint uStack_98;
  uint local_94;
  uint local_90 [4];
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  uint *local_70;
  undefined1 local_64 [4];
  
  puVar2 = PTR_DAT_04bc0510;
  puVar8 = PTR_DAT_04bb43c0;
  local_90[0] = 0;
  local_90[1] = 0;
  uVar4 = *(uint *)(param_2 + 0x138);
  uVar24 = (ulong)uVar4;
  uVar9 = uVar4;
  if (0 < (int)uVar4) {
    uVar21 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar13 = (ulong *)(**(code **)(*(long *)(*(long *)(*(long *)(param_2 + 0x120) + uVar21 * 8) +
                                               0x60) + 0xf0))();
      uVar25 = *puVar13;
      local_a8 = uVar25 & 0xffff;
      FUN_0277d4ac(&local_a8);
      lVar26 = *(long *)puVar8;
      local_a8._0_3_ = CONCAT12((char)(uVar25 >> 0x10),(undefined2)local_a8);
      local_a8._0_4_ = CONCAT13((char)(uVar25 >> 0x18),(undefined3)local_a8);
      local_74 = (undefined4)(uVar25 >> 0x20);
      local_a8 = CONCAT44(local_74,(undefined4)local_a8);
      local_78 = CONCAT22((short)(uVar25 >> 0x10),(undefined2)local_a8);
      local_70 = (uint *)0x0;
      local_80 = puVar1;
      uVar9 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar8 != 0) {
        lVar26 = *(long *)(lVar26 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar26 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar26 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(&local_a8);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar26 + 0x1d8)) &&
             (((puVar17 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar9 * 8),
               puVar17 != (uint *)0x0 && (uVar9 = *puVar17, uVar9 != 0)) &&
              (puVar17 != (uint *)(ulong)uVar9)))) {
            puVar19 = (uint *)((long)puVar17 - (long)(ulong)uVar9);
            if (((*puVar19 != 0) && (uVar9 = puVar19[1], uVar9 != 0)) &&
               ((ulong)(ushort)puVar19[2] != 0)) {
              lVar26 = 0xc;
              if (*(char *)((long)puVar19 + 10) != '\0') {
                lVar26 = 0x1c;
              }
              lVar26 = (long)puVar19 + lVar26 + (ulong)(ushort)puVar19[2] * 8;
              if (lVar26 != 0) {
                uVar10 = 0;
                if ((ulong)uVar9 != 0) {
                  uVar10 = (uint)((ulong)((long)puVar17 - lVar26) / (ulong)uVar9);
                }
                if (*puVar19 <= uVar10) {
                  uVar10 = 0xffffffff;
                }
                if (((uVar10 < *(uint *)PTR_DAT_04bc00c8) &&
                    (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar10 * 2),
                    uVar7 < 0xbd)) && ((uVar21 < 0x24 && (uVar7 == 0xb6)))) {
                  uVar25 = uVar21 >> 3 & 0x1ffffffffffffffc;
                  *(uint *)((long)local_90 + uVar25) =
                       *(uint *)((long)local_90 + uVar25) | 1 << (ulong)((uint)uVar21 & 0x1f);
                }
              }
            }
          }
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar24 != uVar21);
    uVar9 = *(uint *)(param_2 + 0x138);
  }
  puVar8 = PTR_DAT_04bb43c0;
  local_90[2] = 0;
  local_90[3] = 0;
  if ((int)uVar9 < 1) {
    uVar21 = 0;
    lVar26 = param_1 + 0x14;
    lVar20 = *(long *)PTR_DAT_04bb43c0;
    do {
      uVar9 = FUN_0277d6c4(lVar26);
      lVar18 = *(long *)puVar8;
      if (lVar18 != 0) {
        lVar20 = *(long *)(lVar20 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if (((uVar9 < *(uint *)(lVar20 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
           (*(char *)(lVar26 + 0xb) != '\x01')) {
          uVar25 = uVar21 >> 5 & 0x7ffffff;
          local_90[uVar25 + 2] = local_90[uVar25 + 2] | 1 << (ulong)((uint)uVar21 & 0x1f);
        }
      }
      uVar21 = uVar21 + 1;
      lVar26 = lVar26 + 0xc;
      lVar20 = lVar18;
    } while (uVar21 != 0x24);
  }
  else {
    uVar21 = 0;
    lVar26 = param_1 + 0x14;
    do {
      puVar8 = PTR_DAT_04bb43c0;
      lVar20 = *(long *)PTR_DAT_04bb43c0;
      uVar10 = FUN_0277d6c4(lVar26 + uVar21 * 0xc);
      if (*(long *)puVar8 != 0) {
        lVar20 = *(long *)(lVar20 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          iVar11 = (int)*(char *)(lVar26 + uVar21 * 0xc + 0xb);
          local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar11);
          if (iVar11 != 1) {
            lVar20 = lVar26 + uVar21 * 0xc;
            uVar25 = 0;
            uVar5 = *(undefined1 *)(lVar20 + 8);
            uVar6 = *(undefined1 *)(lVar20 + 9);
            local_c8 = (uint)*(char *)(lVar20 + 10);
            do {
              if (uVar25 < *(uint *)(param_2 + 0x118)) {
                lVar20 = *(long *)(*(long *)(param_2 + 0x120) + uVar25 * 8);
              }
              else {
                lVar20 = 0;
              }
              pbVar14 = (byte *)(**(code **)(*(long *)(lVar20 + 0xf8) + 0xf0))();
              local_80 = (undefined *)CONCAT44(local_80._4_4_,(uint)*pbVar14);
              if (*pbVar14 == (uint)local_c0) {
                if (uVar25 < *(uint *)(param_2 + 0x118)) {
                  lVar20 = *(long *)(*(long *)(param_2 + 0x120) + uVar25 * 8);
                }
                else {
                  lVar20 = 0;
                }
                local_a8 = CONCAT71(local_a8._1_7_,uVar5);
                uVar15 = (**(code **)(*(long *)(lVar20 + 0x98) + 0x118))
                                   ((long *)(lVar20 + 0x98),&local_a8);
                if ((uVar15 & 1) != 0) {
                  if (uVar25 < *(uint *)(param_2 + 0x118)) {
                    lVar20 = *(long *)(*(long *)(param_2 + 0x120) + uVar25 * 8);
                  }
                  else {
                    lVar20 = 0;
                  }
                  local_64[0] = uVar6;
                  uVar15 = (**(code **)(*(long *)(lVar20 + 200) + 0x118))
                                     ((long *)(lVar20 + 200),local_64);
                  if ((uVar15 & 1) != 0) {
                    puVar13 = (ulong *)(**(code **)(*(long *)(*(long *)(*(long *)(param_2 + 0x120) +
                                                                       uVar25 * 8) + 0x60) + 0xf0))
                                                 ();
                    uVar15 = *puVar13;
                    local_a8 = uVar15 & 0xffff;
                    FUN_0277d4ac(&local_a8);
                    puVar8 = PTR_DAT_04bb43c0;
                    local_a8._0_3_ = CONCAT12((char)(uVar15 >> 0x10),(undefined2)local_a8);
                    local_a8._0_4_ = CONCAT13((char)(uVar15 >> 0x18),(undefined3)local_a8);
                    local_74 = (undefined4)(uVar15 >> 0x20);
                    local_a8 = CONCAT44(local_74,(undefined4)local_a8);
                    local_78 = CONCAT22((short)(uVar15 >> 0x10),(undefined2)local_a8);
                    local_70 = (uint *)0x0;
                    lVar20 = *(long *)PTR_DAT_04bb43c0;
                    local_80 = puVar2 + 0x10;
                    uVar10 = FUN_0277d6c4(&local_78);
                    if (*(long *)puVar8 != 0) {
                      lVar20 = *(long *)(lVar20 + 0x57e58);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                      if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                        lVar20 = *(long *)PTR_DAT_04bc0428;
                        uVar10 = FUN_0277d6c4(&local_a8);
                        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                        if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
                           (puVar17 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8),
                           puVar17 != (uint *)0x0)) {
                          local_70 = puVar17;
                        }
                      }
                    }
                    iVar11 = FUN_01ae98d0(&local_80);
                    local_a8 = CONCAT44(local_a8._4_4_,iVar11);
                    if (iVar11 == local_c8) goto LAB_0269e0d0;
                  }
                }
              }
              uVar25 = uVar25 + 1;
            } while (uVar9 != uVar25);
            uVar25 = uVar21 >> 5 & 0x7ffffff;
            local_90[uVar25 + 2] = local_90[uVar25 + 2] | 1 << (ulong)((uint)uVar21 & 0x1f);
          }
        }
      }
LAB_0269e0d0:
      uVar21 = uVar21 + 1;
    } while (uVar21 != 0x24);
  }
  puVar8 = PTR_DAT_04bc0130;
  uVar9 = local_90[2] - (local_90[2] >> 1 & 0x55555555);
  uVar10 = local_90[3] - (local_90[3] >> 1 & 0x55555555);
  uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
  uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
  uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
  uVar9 = uVar9 + (uVar9 >> 8);
  uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
  uVar10 = uVar10 + (uVar10 >> 8);
  uVar9 = uVar9 + (uVar9 >> 0x10) & 0x3f;
  uVar10 = uVar10 + (uVar10 >> 0x10) & 0x3f;
  if (uVar10 + uVar9 != 0) {
    uVar21 = 0;
    lVar26 = param_1 + 0x14;
    puVar2 = PTR_DAT_04bc0510 + 0x10;
LAB_0269e4bc:
    puVar1 = PTR_DAT_04bb43c0;
    if ((local_90[(uVar21 >> 5 & 0x7ffffff) + 2] >> (ulong)((uint)uVar21 & 0x1f) & 1) != 0) {
      puVar23 = (undefined8 *)(lVar26 + uVar21 * 0xc);
      local_70 = (uint *)0x0;
      local_78 = *(undefined4 *)puVar23;
      local_74 = *(undefined4 *)((long)puVar23 + 4);
      lVar20 = *(long *)PTR_DAT_04bb43c0;
      local_80 = puVar2;
      uVar12 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar1 != 0) {
        lVar20 = *(long *)(lVar20 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar20 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          lVar20 = *(long *)PTR_DAT_04bc0428;
          uVar12 = FUN_0277d6c4(puVar23);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar20 + 0x1d8)) &&
             (puVar17 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar12 * 8),
             puVar17 != (uint *)0x0)) {
            local_70 = puVar17;
          }
        }
      }
      local_a8 = 0xfffe;
      FUN_0277d4ac(&local_a8);
      local_94 = 0;
      local_9c = 0;
      uStack_98 = 0;
      local_a8 = *puVar23;
      pcVar27 = (char *)(lVar26 + uVar21 * 0xc + 0xb);
      local_a0 = (int)*pcVar27;
      local_9c = FUN_01aee3b4(&local_80);
      if (local_70 == (uint *)0x0) {
        local_94 = 0;
        uStack_98 = 0xbc;
      }
      else {
        uVar12 = *local_70;
        uStack_98 = 0;
        if ((uVar12 != 0) && (local_70 != (uint *)(ulong)uVar12)) {
          puVar17 = (uint *)((long)local_70 - (long)(ulong)uVar12);
          if ((*puVar17 == 0) ||
             ((uVar12 = puVar17[1], uVar12 == 0 || ((ulong)(ushort)puVar17[2] == 0)))) {
LAB_0269e640:
            uStack_98 = 0;
          }
          else {
            lVar20 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar17 + lVar20 + (ulong)(ushort)puVar17[2] * 8;
            uStack_98 = 0;
            if (lVar20 != 0) {
              uVar3 = 0;
              if ((ulong)uVar12 != 0) {
                uVar3 = (uint)((ulong)((long)local_70 - lVar20) / (ulong)uVar12);
              }
              if (*puVar17 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bc00c8 <= uVar3) ||
                 (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                 uStack_98 = (uint)uVar7, 0xbc < uVar7)) goto LAB_0269e640;
            }
          }
        }
        local_94 = 0;
        uVar12 = *local_70;
        if ((uVar12 != 0) && (local_70 != (uint *)(ulong)uVar12)) {
          puVar17 = (uint *)((long)local_70 - (long)(ulong)uVar12);
          local_94 = 0;
          if (*puVar17 != 0) {
            uVar12 = puVar17[1];
            if ((uVar12 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
              lVar20 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                lVar20 = 0x1c;
              }
              lVar20 = (long)puVar17 + lVar20 + (ulong)(ushort)puVar17[2] * 8;
              if (lVar20 != 0) {
                uVar3 = 0;
                if ((ulong)uVar12 != 0) {
                  uVar3 = (uint)((ulong)((long)local_70 - lVar20) / (ulong)uVar12);
                }
                if (*puVar17 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)puVar8) &&
                   (local_94 = (uint)*(ushort *)(*(long *)(puVar8 + 8) + (long)(int)uVar3 * 2),
                   local_94 < 0x15)) goto LAB_0269e6e0;
              }
            }
            local_94 = 0;
          }
        }
      }
LAB_0269e6e0:
      if (0 < (int)uVar4) {
        uVar25 = 0;
        do {
          if (((0x23 < uVar25) ||
              ((*(uint *)((long)local_90 + (uVar25 >> 3 & 0x1ffffffffffffffc)) >>
                (ulong)((uint)uVar25 & 0x1f) & 1) == 0)) &&
             (uVar15 = FUN_026aa0f0(param_1,&local_a8,
                                    *(undefined8 *)(*(long *)(param_2 + 0x120) + uVar25 * 8),
                                    uVar21 & 0xffffffff), (uVar15 & 1) != 0)) goto LAB_0269e794;
          uVar25 = uVar25 + 1;
        } while (uVar24 != uVar25);
        uVar25 = 0;
        do {
          if (((uVar25 < 0x24) &&
              ((*(uint *)((long)local_90 + (uVar25 >> 3 & 0x1ffffffffffffffc)) >>
                (ulong)((uint)uVar25 & 0x1f) & 1) != 0)) &&
             (uVar15 = FUN_026aa0f0(param_1,&local_a8,
                                    *(undefined8 *)(*(long *)(param_2 + 0x120) + uVar25 * 8),
                                    uVar21 & 0xffffffff), (uVar15 & 1) != 0)) goto LAB_0269e794;
          uVar25 = uVar25 + 1;
        } while (uVar24 != uVar25);
      }
      local_c0 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_c0);
      *pcVar27 = '\0';
      *(uint *)puVar23 = (uint)local_c0;
      *(undefined4 *)((long)puVar23 + 4) = local_c0._4_4_;
      lVar20 = lVar26 + uVar21 * 0xc;
      *(undefined2 *)(lVar20 + 8) = 0xffff;
      *(undefined1 *)(lVar20 + 10) = 0;
    }
    goto LAB_0269e4b0;
  }
LAB_0269e920:
  return uVar10 != -uVar9;
LAB_0269e794:
  if ((uint)uVar25 < *(uint *)(param_2 + 0x118)) {
    lVar20 = *(long *)(*(long *)(param_2 + 0x120) + uVar25 * 8);
  }
  else {
    lVar20 = 0;
  }
  puVar16 = (undefined1 *)(**(code **)(*(long *)(lVar20 + 0x98) + 0xf0))();
  if ((uint)uVar25 < *(uint *)(param_2 + 0x118)) {
    lVar20 = *(long *)(*(long *)(param_2 + 0x120) + uVar25 * 8);
  }
  else {
    lVar20 = 0;
  }
  uVar5 = *puVar16;
  puVar16 = (undefined1 *)(**(code **)(*(long *)(lVar20 + 200) + 0xf0))((long *)(lVar20 + 200));
  uVar6 = *puVar16;
  lVar20 = lVar26 + uVar21 * 0xc;
  *(undefined1 *)(lVar20 + 8) = uVar5;
  *(undefined1 *)(lVar20 + 9) = uVar6;
  puVar23 = (undefined8 *)
            (**(code **)(*(long *)(*(long *)(*(long *)(param_2 + 0x120) + uVar25 * 8) + 0x60) + 0xf0
                        ))();
  uVar22 = *puVar23;
  local_c4 = 0;
  local_c8 = (uint)(ushort)uVar22;
  FUN_0277d4ac(&local_c8);
  puVar1 = PTR_DAT_04bb43c0;
  local_b6 = (undefined1)((ulong)uVar22 >> 0x10);
  local_b5 = (undefined1)((ulong)uVar22 >> 0x18);
  local_c8 = CONCAT13(local_b5,CONCAT12(local_b6,(undefined2)local_c8));
  local_c4 = (undefined4)((ulong)uVar22 >> 0x20);
  local_c0 = PTR_DAT_04bc0510 + 0x10;
  local_b8 = (undefined2)local_c8;
  local_b0 = 0;
  lVar20 = *(long *)PTR_DAT_04bb43c0;
  local_b4 = local_c4;
  uVar12 = FUN_0277d6c4(&local_b8);
  if (*(long *)puVar1 != 0) {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar20 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      lVar20 = *(long *)PTR_DAT_04bc0428;
      uVar12 = FUN_0277d6c4(&local_c8);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar20 + 0x1d8)) &&
         (lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar12 * 8), lVar20 != 0)) {
        local_b0 = lVar20;
      }
    }
  }
  local_c8 = FUN_01ae98d0(&local_c0);
  *(char *)(lVar26 + uVar21 * 0xc + 10) = (char)local_c8;
LAB_0269e4b0:
  uVar21 = uVar21 + 1;
  if (uVar21 == 0x24) goto LAB_0269e914;
  goto LAB_0269e4bc;
LAB_0269e914:
  FUN_027cdae0(param_1);
  goto LAB_0269e920;
}

