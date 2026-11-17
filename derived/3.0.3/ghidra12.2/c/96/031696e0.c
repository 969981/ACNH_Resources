
undefined8 FUN_031696e0(long param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint **ppuVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  undefined **local_638;
  undefined4 local_630;
  undefined4 local_62c;
  uint *local_628;
  undefined8 local_620;
  uint **local_618;
  uint *local_610 [180];
  uint local_70;
  uint local_6c;
  
  puVar5 = PTR_DAT_04bc00c8;
  puVar4 = PTR_DAT_04bb43c0;
  iVar12 = (int)param_2[2];
  if (iVar12 == 1) {
    iVar12 = 0;
    if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) {
      iVar12 = (int)param_2[1];
    }
    lVar16 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(*param_2 + (long)(*(int *)((long)param_2 + 0xc) - iVar12) * 0x10);
    lVar17 = *(long *)puVar4;
    if (lVar17 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        iVar12 = 0;
        if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) {
          iVar12 = (int)param_2[1];
        }
        local_620 = &PTR_FUN_04a36b50;
        puVar1 = (undefined8 *)(*param_2 + (long)(*(int *)((long)param_2 + 0xc) - iVar12) * 0x10);
        local_618 = (uint **)*puVar1;
        local_610[0] = (uint *)0x0;
        uVar8 = FUN_0277d6c4(&local_618);
        if (*(long *)puVar4 == 0) {
LAB_03169cdc:
          puVar14 = (uint *)0x0;
          local_638 = (undefined **)CONCAT44(local_638._4_4_,0xac);
          local_6c = 0xbc;
          bVar6 = true;
        }
        else {
          lVar16 = *(long *)(lVar17 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar8) ||
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_03169cdc;
          lVar16 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(puVar1);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar8) ||
             (puVar14 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8),
             puVar14 == (uint *)0x0)) goto LAB_03169cdc;
          local_6c = 0;
          local_638 = (undefined **)CONCAT44(local_638._4_4_,0xac);
          uVar8 = *puVar14;
          local_610[0] = puVar14;
          if ((uVar8 == 0) || (puVar14 == (uint *)(ulong)uVar8)) {
LAB_03169ed0:
            bVar6 = false;
          }
          else {
            puVar13 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
            local_6c = 0;
            if (*puVar13 == 0) goto LAB_03169ed0;
            uVar8 = puVar13[1];
            if ((uVar8 == 0) || ((ulong)(ushort)puVar13[2] == 0)) {
LAB_03169ecc:
              local_6c = 0;
              goto LAB_03169ed0;
            }
            lVar16 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar13 + lVar16 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar16 == 0) goto LAB_03169ecc;
            uVar9 = 0;
            if ((ulong)uVar8 != 0) {
              uVar9 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar8);
            }
            if (*puVar13 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if (DAT_05326ec0 <= uVar9) goto LAB_03169ecc;
            local_6c = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar9 * 2);
            if (local_6c < 0xbd) goto LAB_03169ed0;
            bVar6 = false;
            local_6c = 0;
          }
        }
        if ((local_6c == (uint)local_638) || (uVar10 = FUN_01ae89e0(&local_620), (uVar10 & 1) != 0))
        {
LAB_03169d9c:
          iVar12 = 0;
          if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) {
            iVar12 = (int)param_2[1];
          }
          *(undefined1 *)(*param_2 + (long)(*(int *)((long)param_2 + 0xc) - iVar12) * 0x10 + 0xc) =
               1;
          return 2;
        }
        if (!bVar6) {
          puVar13 = (uint *)((long)puVar14 - (ulong)*puVar14);
          if ((((*puVar14 != 0) && (puVar13 != (uint *)0x0)) && (*puVar13 != 0)) &&
             ((uVar8 = puVar13[1], uVar8 != 0 && ((ulong)(ushort)puVar13[2] != 0)))) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar13 + lVar16 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar16 != 0) {
              uVar9 = 0;
              if ((ulong)uVar8 != 0) {
                uVar9 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar8);
              }
              if (*puVar13 <= uVar9) {
                uVar9 = 0xffffffff;
              }
              if ((uVar9 < DAT_05326ec0) &&
                 (*(short *)(DAT_05326ec8 + (long)(int)uVar9 * 2) == 0xaf)) goto LAB_03169d9c;
            }
          }
        }
        uVar10 = FUN_01ae8b58(&local_620);
        if ((uVar10 & 1) != 0) goto LAB_03169d9c;
        iVar12 = 0;
        if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) {
          iVar12 = (int)param_2[1];
        }
        uVar10 = FUN_0277e9e0(*param_2 + (long)(*(int *)((long)param_2 + 0xc) - iVar12) * 0x10);
        if ((uVar10 & 1) == 0) goto LAB_03169e7c;
        iVar12 = 0;
        if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) {
          iVar12 = (int)param_2[1];
        }
        uVar10 = FUN_0267d630(param_3,*param_2 +
                                      (long)(*(int *)((long)param_2 + 0xc) - iVar12) * 0x10);
        if ((uVar10 & 1) != 0) {
          iVar12 = 0;
          if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) {
            iVar12 = (int)param_2[1];
          }
          *(undefined1 *)(*param_2 + (long)(*(int *)((long)param_2 + 0xc) - iVar12) * 0x10 + 0xc) =
               1;
          *(undefined4 *)(param_1 + 0x228) = 0;
          return 2;
        }
        uVar10 = 0x45;
        goto LAB_03169e80;
      }
    }
LAB_03169e7c:
    uVar10 = 0x49;
LAB_03169e80:
    *(ulong *)(param_1 + 0x224) = uVar10 | 0x200000000;
    uVar10 = (ulong)*(byte *)(param_1 + 0x200);
    bVar6 = *(int *)(param_1 + 0x1f0 + uVar10 * 4) != -1;
  }
  else {
    local_618 = local_610;
    local_620 = (undefined **)0xb400000000;
    if (iVar12 == 0) {
LAB_03169c84:
      uVar10 = 0x47;
      goto LAB_03169e80;
    }
    iVar18 = 0;
    iVar19 = 0;
    do {
      lVar16 = *(long *)puVar4;
      iVar3 = 0;
      if ((int)param_2[1] <= iVar19 + *(int *)((long)param_2 + 0xc)) {
        iVar3 = (int)param_2[1];
      }
      uVar8 = FUN_0277d6c4(*param_2 +
                           (long)(iVar19 + (*(int *)((long)param_2 + 0xc) - iVar3)) * 0x10);
      lVar17 = *(long *)puVar4;
      if (lVar17 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar16 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          iVar3 = 0;
          if ((int)param_2[1] <= iVar19 + *(int *)((long)param_2 + 0xc)) {
            iVar3 = (int)param_2[1];
          }
          puVar2 = (undefined4 *)
                   (*param_2 + (long)(iVar19 + (*(int *)((long)param_2 + 0xc) - iVar3)) * 0x10);
          local_638 = &PTR_FUN_04a36b50;
          local_630 = *puVar2;
          local_62c = puVar2[1];
          local_628 = (uint *)0x0;
          uVar8 = FUN_0277d6c4(&local_630);
          if (*(long *)puVar4 == 0) {
LAB_03169afc:
            puVar14 = (uint *)0x0;
            bVar6 = true;
            local_70 = 0xbc;
          }
          else {
            lVar16 = *(long *)(lVar17 + 0x57e58);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if ((*(uint *)(lVar16 + 0x1d8) <= uVar8) ||
               (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
            goto LAB_03169afc;
            lVar16 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(puVar2);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if ((*(uint *)(lVar16 + 0x1d8) <= uVar8) ||
               (puVar14 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8),
               puVar14 == (uint *)0x0)) goto LAB_03169afc;
            local_70 = 0;
            uVar8 = *puVar14;
            local_628 = puVar14;
            if ((uVar8 == 0) || (puVar14 == (uint *)(ulong)uVar8)) {
LAB_03169c28:
              bVar6 = false;
            }
            else {
              puVar13 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
              local_70 = 0;
              if (*puVar13 == 0) goto LAB_03169c28;
              uVar8 = puVar13[1];
              if ((uVar8 == 0) || ((ulong)(ushort)puVar13[2] == 0)) {
LAB_03169c24:
                local_70 = 0;
                goto LAB_03169c28;
              }
              lVar16 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar13 + lVar16 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar16 == 0) goto LAB_03169c24;
              uVar9 = 0;
              if ((ulong)uVar8 != 0) {
                uVar9 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar8);
              }
              if (*puVar13 <= uVar9) {
                uVar9 = 0xffffffff;
              }
              if (*(uint *)puVar5 <= uVar9) goto LAB_03169c24;
              local_70 = (uint)*(ushort *)(*(long *)(puVar5 + 8) + (long)(int)uVar9 * 2);
              if (local_70 < 0xbd) goto LAB_03169c28;
              bVar6 = false;
              local_70 = 0;
            }
          }
          local_6c = 0xac;
          if ((local_70 != 0xac) && (uVar10 = FUN_01ae89e0(&local_638), (uVar10 & 1) == 0)) {
            if (!bVar6) {
              puVar13 = (uint *)((long)puVar14 - (ulong)*puVar14);
              if ((((*puVar14 != 0) && (puVar13 != (uint *)0x0)) && (*puVar13 != 0)) &&
                 ((uVar8 = puVar13[1], uVar8 != 0 && ((ulong)(ushort)puVar13[2] != 0)))) {
                lVar16 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar16 = 0x1c;
                }
                lVar16 = (long)puVar13 + lVar16 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar16 != 0) {
                  uVar9 = 0;
                  if ((ulong)uVar8 != 0) {
                    uVar9 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar8);
                  }
                  if (*puVar13 <= uVar9) {
                    uVar9 = 0xffffffff;
                  }
                  if ((uVar9 < *(uint *)puVar5) &&
                     (*(short *)(*(long *)(puVar5 + 8) + (long)(int)uVar9 * 2) == 0xaf))
                  goto LAB_03169924;
                }
              }
            }
            uVar10 = FUN_01ae8b58(&local_638);
            if ((uVar10 & 1) == 0) {
              iVar3 = 0;
              if ((int)param_2[1] <= iVar19 + *(int *)((long)param_2 + 0xc)) {
                iVar3 = (int)param_2[1];
              }
              uVar10 = FUN_0277e9e0(*param_2 +
                                    (long)(iVar19 + (*(int *)((long)param_2 + 0xc) - iVar3)) * 0x10)
              ;
              if ((uVar10 & 1) != 0) {
                if ((int)(uint)local_620 < local_620._4_4_) {
                  iVar3 = 0;
                  if ((int)param_2[1] <= iVar19 + *(int *)((long)param_2 + 0xc)) {
                    iVar3 = (int)param_2[1];
                  }
                  local_618[(int)(uint)local_620] =
                       (uint *)(*param_2 +
                               (long)(iVar19 + (*(int *)((long)param_2 + 0xc) - iVar3)) * 0x10);
                  local_620 = (undefined **)CONCAT44(local_620._4_4_,(uint)local_620 + 1);
                }
              }
              goto LAB_03169950;
            }
          }
LAB_03169924:
          iVar18 = iVar18 + 1;
          iVar3 = 0;
          if ((int)param_2[1] <= iVar19 + *(int *)((long)param_2 + 0xc)) {
            iVar3 = (int)param_2[1];
          }
          *(undefined1 *)
           (*param_2 + (long)(iVar19 + (*(int *)((long)param_2 + 0xc) - iVar3)) * 0x10 + 0xc) = 1;
        }
      }
LAB_03169950:
      iVar19 = iVar19 + 1;
    } while (iVar12 != iVar19);
    uVar8 = (uint)local_620;
    if ((uint)local_620 == 0) {
      if (iVar18 != 0) {
        return 1;
      }
      goto LAB_03169c84;
    }
    uVar9 = FUN_0267c230(param_3);
    if (uVar8 <= uVar9) {
      iVar12 = 0;
      if ((uint)local_620 != 0) {
        lVar16 = (long)(int)(uint)local_620 << 3;
        ppuVar15 = local_618;
        do {
          bVar7 = FUN_0267d630(param_3,*ppuVar15);
          lVar16 = lVar16 + -8;
          *(byte *)(*ppuVar15 + 3) = bVar7 & 1;
          ppuVar15 = ppuVar15 + 1;
        } while (lVar16 != 0);
        iVar12 = (uint)local_620;
      }
      if (iVar12 + iVar18 == (int)param_2[2]) {
        *(undefined4 *)(param_1 + 0x228) = 0;
        return 2;
      }
      *(undefined8 *)(param_1 + 0x224) = 0x200000048;
      uVar10 = (ulong)*(byte *)(param_1 + 0x200);
      bVar6 = *(int *)(param_1 + 0x1f0 + uVar10 * 4) != -1;
joined_r0x03169de4:
      if (bVar6) {
        return 1;
      }
      uVar11 = 1;
      goto LAB_03169e08;
    }
    *(undefined8 *)(param_1 + 0x224) = 0x200000046;
    uVar10 = (ulong)*(byte *)(param_1 + 0x200);
    bVar6 = *(int *)(param_1 + 0x1f0 + uVar10 * 4) != -1;
    if (iVar18 != 0) goto joined_r0x03169de4;
  }
  if (bVar6) {
    return 0;
  }
  uVar11 = 0;
LAB_03169e08:
  *(undefined4 *)(param_1 + 0x1f0 + uVar10 * 4) = 9;
  return uVar11;
}

