
/* WARNING: Removing unreachable block (ram,0x01fc5fe8) */

undefined4 FUN_01fc5b40(long *param_1,long param_2,undefined1 *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 local_cc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  int local_88;
  int local_84;
  
  puVar5 = PTR_DAT_04bb43c0;
  lVar18 = *param_1;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(param_1[2]);
  if (*(long *)puVar5 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      local_b0 = 0;
      if (DAT_05aed670 == 0) {
        puVar17 = &DAT_055c04a0;
      }
      else {
        puVar17 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar17 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar9 = FUN_006bd550(*puVar17,0);
          puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar9 != 0x758f7eaf) {
            puVar17 = &DAT_055c04a0;
          }
        }
      }
      local_ac = *(undefined4 *)(puVar17 + 7);
      local_a8 = FUN_017baf44();
      local_a8 = local_a8 & 1;
      local_b8 = PTR_DAT_04bb3140 + 0x10;
      uVar10 = FUN_01a4fafc(&local_b8,1,param_4);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      iVar19 = *(int *)(param_4 + 0x10);
      local_84 = *(int *)(param_4 + 0x14);
      local_a0 = param_4 + 8;
      local_98 = param_4 + 0x18;
      local_90 = PTR_DAT_04bb2010 + 0x10;
      iVar9 = *(int *)(param_4 + 0x24) + 1;
      if (iVar9 != local_84) {
        local_88 = iVar19;
        do {
          uVar10 = FUN_01a4fd6c(&local_b8,1,&local_90,1);
          if ((uVar10 & 1) == 0) {
            return 0;
          }
          if (local_88 < *(int *)(local_98 + 8)) {
            local_88 = local_88 + 1;
          }
          else {
            local_84 = local_84 + 1;
            local_88 = *(int *)(local_a0 + 8);
          }
        } while (iVar19 != local_88 || iVar9 != local_84);
      }
    }
  }
  iVar2 = *(int *)(param_4 + 0x10);
  iVar19 = *(int *)(param_4 + 0x14);
  local_a0 = param_4 + 8;
  local_98 = param_4 + 0x18;
  local_90 = PTR_DAT_04bb2010 + 0x10;
  iVar9 = *(int *)(param_4 + 0x24) + 1;
  if (iVar9 == iVar19) {
    local_cc = 0;
  }
  else {
    fVar26 = 3.4028235e+38;
    local_cc = 0;
    iVar15 = iVar19 + -1;
    iVar20 = iVar2;
    iVar22 = iVar19;
    local_88 = iVar2;
    local_84 = iVar19;
LAB_01fc5d64:
    do {
      if (iVar15 < iVar19) {
        pfVar13 = (float *)param_1[1];
        uVar8 = 0;
        uVar11 = 0;
        do {
          if (uVar11 < 4) {
            local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar11);
            if ((uVar11 + 7 < 0xf) &&
               (local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar11),
               (*(byte *)param_1[3] >> (ulong)(uVar11 & 7) & 1) != 0)) {
              if ((*pfVar13 == 0.0) && ((pfVar13[1] == 0.0 && (pfVar13[2] == 0.0)))) {
LAB_01fc5d80:
                uVar8 = uVar8 | 1 << (ulong)(uVar11 & 0x1f) & 0xffU;
              }
              else {
                lVar16 = param_1[4] + (ulong)uVar11 * 0x10;
                if (3 < uVar11) {
                  lVar16 = param_1[4];
                }
                uVar3 = *(ushort *)(lVar18 + 0x188);
                uVar21 = *(int *)(lVar16 + 8) + iVar20;
                if (((uint)uVar3 <= (uVar21 & 0xffff)) &&
                   ((uVar21 & 0xffff) <=
                    (((uint)uVar3 + (uint)*(ushort *)(lVar18 + 0x194)) - 1 & 0xffff))) {
                  uVar1 = *(int *)(lVar16 + 0xc) + iVar19;
                  uVar4 = *(ushort *)(lVar18 + 0x18a);
                  if (((uint)uVar4 <= (uVar1 & 0xffff)) &&
                     (((uVar1 & 0xffff) <=
                       (((uint)uVar4 + (uint)*(ushort *)(lVar18 + 0x198)) - 1 & 0xffff) &&
                      (uVar21 = (uVar21 - uVar3) +
                                *(int *)(*(long *)(lVar18 + 0x1c8) + 0x1c) * (uVar1 - uVar4),
                      (*(uint *)(*(long *)(*(long *)(lVar18 + 0x1c8) + 0x10) +
                                (long)((int)uVar21 >> 5) * 4) >> (ulong)(uVar21 & 0x1f) & 1) != 0)))
                     ) goto LAB_01fc5d80;
                }
              }
            }
          }
          uVar21 = 4;
          if ((int)uVar11 < 4) {
            uVar21 = uVar11 + 1;
          }
          uVar11 = uVar21;
        } while (uVar21 != 4);
        uVar11 = uVar8 - (uVar8 >> 1 & 0x55);
        uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
        uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
        uVar11 = uVar11 + (uVar11 >> 8);
        if ((uVar11 + (uVar11 >> 0x10) & 0x3f) != 0) {
          uVar10 = FUN_01fabae0(lVar18,&local_90);
          if ((uVar10 & 1) == 0) {
            pfVar13 = (float *)param_1[1];
            fVar25 = *pfVar13;
            bVar6 = false;
            if ((pfVar13[2] == 0.0) && (bVar6 = false, !NAN(pfVar13[1]))) {
              bVar6 = pfVar13[1] == 0.0;
            }
            bVar7 = false;
            if ((bVar6) && (bVar7 = false, !NAN(fVar25))) {
              bVar7 = fVar25 == 0.0;
            }
            fVar25 = fVar25 - ((float)iVar20 * 5.0 + 5.0);
            fVar24 = pfVar13[2] - ((float)iVar19 * 5.0 + 5.0);
            fVar23 = 0.0;
            if (!bVar7) {
              fVar23 = fVar24 * fVar24 + fVar25 * fVar25;
            }
            if (fVar23 < fVar26) {
              *(int *)(param_2 + 8) = iVar20;
              *(int *)(param_2 + 0xc) = iVar19;
              local_cc = 1;
              *param_3 = (char)uVar8;
              fVar26 = fVar23;
            }
          }
          else {
          }
        }
      }
      if (iVar20 < *(int *)(param_4 + 0x20)) {
        local_88 = iVar20 + 1;
        iVar12 = iVar19;
      }
      else {
        local_88 = *(int *)(param_4 + 0x10);
        iVar22 = iVar22 + 1;
        iVar12 = iVar22;
        local_84 = iVar22;
      }
      iVar19 = iVar12;
      if ((iVar2 == local_88) && (iVar9 == iVar22)) {
LAB_01fc5fd8:
        iVar14 = iVar15;
        iVar20 = iVar2;
        iVar22 = iVar9;
      }
      else {
        if (local_88 < *(int *)(param_4 + 0x20)) {
          iVar20 = local_88 + 1;
        }
        else {
          iVar20 = *(int *)(param_4 + 0x10);
          iVar19 = iVar22 + 1;
          iVar22 = iVar19;
          local_84 = iVar19;
        }
        local_88 = iVar20;
        if ((iVar2 == iVar20) && (iVar9 == iVar22)) goto LAB_01fc5fd8;
        iVar14 = iVar19;
        if (iVar19 != iVar15 + 2 || iVar19 == iVar12) {
          iVar14 = iVar15;
        }
        iVar15 = iVar14;
        if (iVar2 != iVar20) goto LAB_01fc5d64;
      }
      iVar15 = iVar14;
    } while (iVar9 != iVar22);
  }
  return local_cc;
}

