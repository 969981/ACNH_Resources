
void FUN_03ed6420(long param_1,long param_2,long param_3,long param_4,byte param_5,uint param_6)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  undefined **ppuVar17;
  long *plVar18;
  float *pfVar19;
  long lVar20;
  int *piVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float local_1b4;
  undefined *local_1b0;
  undefined1 *puStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [255];
  undefined1 local_9d;
  
  puVar16 = *(uint **)(*(long *)(param_2 + 8) + 0x98);
  uVar3 = puVar16[0x26];
  if ((int)*puVar16 <= (int)uVar3) {
    local_9d = 0;
    local_1a0 = 0x100;
    puStack_1a8 = local_19c;
    local_19c[0] = 0;
    local_1b0 = PTR_DAT_04bb21f8 + 0x10;
    lVar14 = *(long *)(*(long *)(*(long *)(puVar16 + 0x24) + 0x10) + 8);
    FUN_038d1270(&local_1b0,"%s.as",lVar14 + *(int *)(lVar14 + 0x24) + (long)*(int *)(lVar14 + 8));
    return;
  }
  uVar22 = *(undefined4 *)(param_4 + 0xc);
  uVar24 = *(undefined4 *)(param_3 + 0x54);
  uVar26 = *(undefined4 *)(param_4 + 0x14);
  lVar15 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  uVar27 = *(undefined4 *)(param_4 + 4);
  lVar14 = (long)*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) +
                         (ulong)**(ushort **)(param_1 + 0x18) * 4);
  uVar1 = uVar3 + 1;
  if (*puVar16 <= uVar3) {
    uVar3 = 0;
  }
  puVar16[0x26] = uVar1;
  piVar2 = (int *)(lVar15 + lVar14);
  plVar18 = (long *)(*(long *)(puVar16 + 2) + (long)(int)uVar3 * 0x18);
  *plVar18 = (long)piVar2;
  *(undefined4 *)(plVar18 + 1) = uVar27;
  *(undefined4 *)((long)plVar18 + 0xc) = uVar26;
  *(undefined4 *)(plVar18 + 2) = uVar24;
  *(undefined4 *)((long)plVar18 + 0x14) = uVar22;
  fVar23 = *(float *)(param_4 + 4);
  fVar28 = *(float *)(param_4 + 8);
  if (fVar28 <= fVar23) {
    fVar25 = *(float *)(param_4 + 0x1c);
    if ((param_5 & 0.0 <= *(float *)(param_4 + 0x1c)) == 0) {
      fVar25 = fVar28;
    }
  }
  else {
    fVar25 = *(float *)(param_4 + 0x14);
    if (fVar23 + (fVar25 - fVar28) < fVar28 - fVar23) {
      bVar5 = false;
      ppuVar17 = (undefined **)&local_1b4;
      local_1b0 = (undefined *)CONCAT44(local_1b0._4_4_,fVar25);
      fVar25 = fVar28;
      goto LAB_03ed6584;
    }
    fVar25 = (fVar28 - fVar25) + 0.0;
  }
  bVar5 = true;
  ppuVar17 = &local_1b0;
LAB_03ed6584:
  *(float *)ppuVar17 = fVar23;
  fVar23 = local_1b4;
  if (0 < *piVar2) {
    fVar28 = local_1b0._0_4_;
    lVar20 = 0;
    pfVar19 = (float *)(lVar14 + lVar15 + 0x1c);
    do {
      fVar29 = *pfVar19;
      if (fVar29 == -2.0) {
        if ((param_6 & 1) != 0) goto LAB_03ed65b0;
      }
      else if (((*(ushort *)(param_3 + 0x7a) >> 3 & 1) == 0) ||
              ((*(uint *)(*(long *)(param_2 + 8) + (long)((int)pfVar19[-4] >> 5) * 4 + 0xfc) >>
                (ulong)((uint)pfVar19[-4] & 0x1f) & 1) != 0)) {
        if (fVar29 == -1.0) {
          if ((param_5 & 1) != 0) {
LAB_03ed65b0:
            FUN_03ec4710(*(undefined8 *)(*(long *)(param_2 + 8) + 0x98),pfVar19 + -5,plVar18,
                         *(undefined8 *)(param_1 + 0x10));
          }
        }
        else {
          if ((fVar25 < fVar29) && (fVar29 <= fVar28)) {
            FUN_03ec4710(*(undefined8 *)(*(long *)(param_2 + 8) + 0x98),pfVar19 + -5,plVar18,
                         *(undefined8 *)(param_1 + 0x10));
          }
          if (((!bVar5) && (-1.0 < fVar29)) && (fVar29 <= fVar23)) goto LAB_03ed65b0;
        }
      }
      lVar20 = lVar20 + 1;
      pfVar19 = pfVar19 + 6;
    } while (lVar20 < *piVar2);
  }
  if (((param_6 & 1) == 0) && (iVar13 = piVar2[1], 0 < iVar13)) {
    fVar23 = local_1b0._0_4_;
    lVar14 = 0;
    piVar21 = piVar2;
    do {
      iVar4 = *piVar2;
      if (((*(ushort *)(param_3 + 0x7a) >> 3 & 1) == 0) ||
         ((*(uint *)(*(long *)(param_2 + 8) + (long)(piVar21[(long)iVar4 * 6 + 3] >> 5) * 4 + 0xfc)
           >> (ulong)(piVar21[(long)iVar4 * 6 + 3] & 0x1f) & 1) != 0)) {
        fVar28 = (float)piVar21[(long)iVar4 * 6 + 7];
        fVar29 = (float)piVar21[(long)iVar4 * 6 + 8];
        if (fVar23 < fVar28) {
LAB_03ed6710:
          bVar8 = false;
          bVar9 = true;
          bVar10 = false;
          if (0.0 <= fVar29) {
            bVar8 = false;
            bVar9 = false;
            bVar10 = true;
            if (!NAN(fVar23) && !NAN(fVar29)) {
              bVar8 = fVar23 < fVar29;
              bVar9 = fVar23 == fVar29;
              bVar10 = false;
            }
          }
          bVar6 = false;
          if ((!bVar9 && bVar8 == bVar10) && (bVar6 = false, !NAN(fVar25) && !NAN(fVar28))) {
            bVar6 = fVar25 < fVar28;
          }
          if (bVar6) {
            uVar12 = 0;
            goto LAB_03ed6730;
          }
        }
        else {
          bVar8 = false;
          bVar9 = false;
          if (0.0 <= fVar29) {
            bVar8 = false;
            bVar9 = true;
            if (!NAN(fVar23) && !NAN(fVar29)) {
              bVar8 = fVar23 == fVar29;
              bVar9 = fVar29 <= fVar23;
            }
          }
          if (bVar9 && !bVar8) goto LAB_03ed6710;
          uVar12 = 1;
LAB_03ed6730:
          FUN_03ec4a30(*(undefined8 *)(*(long *)(param_2 + 8) + 0x98),piVar21 + (long)iVar4 * 6 + 2,
                       plVar18,uVar12,*(undefined8 *)(param_1 + 0x10));
        }
        if (!bVar5) {
          fVar28 = (float)piVar21[(long)iVar4 * 6 + 7];
          fVar29 = (float)piVar21[(long)iVar4 * 6 + 8];
          if (local_1b4 < fVar28) {
LAB_03ed6694:
            bVar8 = false;
            bVar9 = true;
            bVar10 = false;
            if (0.0 <= fVar29) {
              bVar8 = false;
              bVar9 = false;
              bVar10 = true;
              if (!NAN(local_1b4) && !NAN(fVar29)) {
                bVar8 = local_1b4 < fVar29;
                bVar9 = local_1b4 == fVar29;
                bVar10 = false;
              }
            }
            bVar6 = false;
            bVar7 = true;
            bVar11 = false;
            if (!bVar9 && bVar8 == bVar10) {
              bVar6 = false;
              bVar7 = false;
              bVar11 = true;
              if (!NAN(fVar28)) {
                bVar6 = fVar28 < -1.0;
                bVar7 = fVar28 == -1.0;
                bVar11 = false;
              }
            }
            if (bVar7 || bVar6 != bVar11) goto LAB_03ed66a4;
            uVar12 = 0;
          }
          else {
            bVar8 = false;
            bVar9 = false;
            if (0.0 <= fVar29) {
              bVar8 = false;
              bVar9 = true;
              if (!NAN(local_1b4) && !NAN(fVar29)) {
                bVar8 = local_1b4 == fVar29;
                bVar9 = fVar29 <= local_1b4;
              }
            }
            if (bVar9 && !bVar8) goto LAB_03ed6694;
            uVar12 = 1;
          }
          FUN_03ec4a30(*(undefined8 *)(*(long *)(param_2 + 8) + 0x98),piVar21 + (long)iVar4 * 6 + 2,
                       plVar18,uVar12,*(undefined8 *)(param_1 + 0x10));
        }
LAB_03ed66a4:
        iVar13 = piVar2[1];
      }
      lVar14 = lVar14 + 1;
      piVar21 = piVar21 + 7;
    } while (lVar14 < iVar13);
  }
  return;
}

