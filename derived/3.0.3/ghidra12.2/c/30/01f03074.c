
void FUN_01f03074(long param_1,float *param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *__s;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  int *piVar11;
  float *pfVar12;
  uint *puVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (param_3 != 0) {
    return;
  }
  pfVar12 = (float *)(param_1 + 0x12670);
  fVar19 = *(float *)(param_1 + 0x1267c);
  fVar21 = *(float *)(param_1 + 0x126c4);
  fVar14 = *(float *)(param_1 + 0x12514);
  fVar15 = *(float *)(param_1 + 0x1255c);
  fVar17 = *(float *)(param_1 + 0x12634);
  fVar18 = *(float *)(param_1 + 0x125ec);
  fVar22 = *(float *)(param_1 + 0x1270c);
  iVar16 = -(uint)(3.4028235e+38 <= fVar14 || fVar14 <= 0.0);
  fVar23 = 3.4028235e+38;
  if (3.4028235e+38 > fVar14 && fVar14 > 0.0) {
    fVar23 = fVar14;
  }
  if (0.0 < fVar15 && fVar15 < fVar23) {
    iVar16 = 1;
    fVar23 = fVar15;
  }
  fVar14 = fVar17;
  if (fVar17 <= 0.0 || fVar23 <= fVar17) {
    fVar14 = fVar23;
  }
  iVar20 = 2;
  if (fVar17 <= 0.0 || fVar23 <= fVar17) {
    iVar20 = iVar16;
  }
  fVar23 = fVar18;
  if (fVar18 <= 0.0 || fVar14 <= fVar18) {
    fVar23 = fVar14;
  }
  iVar16 = 3;
  if (fVar18 <= 0.0 || fVar14 <= fVar18) {
    iVar16 = iVar20;
  }
  fVar14 = fVar19;
  if (fVar19 <= 0.0 || fVar23 <= fVar19) {
    fVar14 = fVar23;
  }
  iVar20 = 4;
  if (fVar19 <= 0.0 || fVar23 <= fVar19) {
    iVar20 = iVar16;
  }
  fVar23 = fVar21;
  if (fVar21 <= 0.0 || fVar14 <= fVar21) {
    fVar23 = fVar14;
  }
  iVar16 = 5;
  if (fVar21 <= 0.0 || fVar14 <= fVar21) {
    iVar16 = iVar20;
  }
  bVar3 = false;
  bVar4 = true;
  bVar5 = false;
  if (fVar22 < fVar23) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar22)) {
      bVar3 = fVar22 < 0.0;
      bVar4 = fVar22 == 0.0;
      bVar5 = false;
    }
  }
  iVar20 = 6;
  if (bVar4 || bVar3 != bVar5) {
    iVar20 = iVar16;
  }
  switch(iVar20) {
  case 0:
    local_78 = 0;
    local_88 = PTR_DAT_04bc0510 + 0x10;
    local_80 = *(undefined4 *)(param_1 + 0x12518);
    uStack_7c = *(undefined4 *)(param_1 + 0x1251c);
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(&local_80);
    fVar23 = 0.0;
    if (*(long *)puVar2 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4((undefined4 *)(param_1 + 0x12518));
        __s = PTR_DAT_04bbfe90;
        puVar2 = PTR_DAT_04bbfe88;
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
           ((puVar13 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8),
            puVar13 != (uint *)0x0 && (uVar7 = *puVar13, uVar7 != 0)))) {
          cVar6 = *PTR_DAT_04bbfe88;
          do {
            if (cVar6 == '\0') {
              cVar6 = '\x01';
              *puVar2 = 1;
              memset(__s,0xff,0x1ac);
              uVar7 = *puVar13;
            }
            else {
              uVar1 = *(uint *)(__s + 0x28);
              if (-1 < (int)uVar1) {
                if ((float *)((ulong)uVar1 + (long)puVar13) != (float *)0x0) {
                  fVar23 = *(float *)((ulong)uVar1 + (long)puVar13) * 0.5;
                }
                break;
              }
              if (uVar1 != 0xffffffff) break;
            }
            puVar9 = (uint *)(ulong)uVar7;
            if ((puVar9 == (uint *)0x0) || (puVar13 == puVar9)) break;
            lVar10 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar9)) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar13 + (lVar10 - (long)puVar9);
            if (lVar10 == 0) break;
            uVar8 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar9));
            *(undefined4 *)(__s + 0x28) = 0xfffffffe;
            if (uVar8 == 0) break;
            piVar11 = (int *)(lVar10 + 4);
            while (piVar11[-1] != -0x3e783aea) {
              piVar11 = piVar11 + 2;
              uVar8 = uVar8 - 1;
              if (uVar8 == 0) goto LAB_01f034e4;
            }
            iVar16 = 0;
            if (*piVar11 != -1) {
              iVar16 = *piVar11;
            }
            *(int *)(__s + 0x28) = iVar16;
            uVar7 = *puVar13;
            if (uVar7 == 0) break;
          } while( true );
        }
      }
    }
LAB_01f034e4:
    lVar10 = param_1 + 0x124e0;
    break;
  case 1:
    FUN_0124c030(&local_88,param_1 + 0x12560);
    iVar16 = FUN_0123db50(&local_80,local_78);
    if ((iVar16 - 0x23U < 9) && (uVar8 = FUN_0123d890(local_78,0), (uVar8 & 1) == 0)) {
      fVar23 = 5.0;
    }
    else {
      iVar16 = FUN_0123db50(&local_80,local_78);
      if ((iVar16 - 0xbU < 7) && (cVar6 = FUN_0124dff0(&local_88), cVar6 != '\0')) {
        fVar23 = 2.5;
      }
      else {
        iVar16 = FUN_0123db50(&local_80,local_78);
        fVar23 = 0.0;
        if (iVar16 - 0x18U < 7) {
          uVar8 = FUN_0124dff0(&local_88);
          fVar23 = 5.0;
          if ((uVar8 & 0xfe) == 0) {
            fVar23 = 0.0;
          }
        }
      }
    }
    lVar10 = param_1 + 0x12528;
    break;
  case 2:
    fVar23 = 0.0;
    lVar10 = param_1 + 0x12600;
    break;
  case 3:
    lVar10 = param_1 + 0x125b8;
    fVar23 = (float)FUN_02201b50(param_1 + 0x125f0);
    break;
  case 4:
    fVar23 = 7.5;
    goto LAB_01f0345c;
  case 5:
    pfVar12 = (float *)(param_1 + 0x126b8);
    fVar23 = (float)FUN_015cb8d4(pfVar12,0);
    lVar10 = *(long *)PTR_DAT_04bb27c8;
    if ((lVar10 == 0) || (*(long *)(lVar10 + 0xa8) == 0)) goto LAB_01f03450;
LAB_01f03444:
    if (*(char *)(lVar10 + 0x11c8) != '\0') goto LAB_01f03450;
    fVar14 = (float)FUN_0093a950(lVar10 + 0x28,pfVar12,0);
    goto LAB_01f03458;
  case 6:
    fVar23 = *(float *)(param_1 + 0x12704);
    pfVar12 = (float *)(param_1 + 0x12700);
    lVar10 = *(long *)PTR_DAT_04bb27c8;
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0xa8) != 0)) goto LAB_01f03444;
LAB_01f03450:
    fVar14 = -500.0;
LAB_01f03458:
    fVar23 = fVar23 - fVar14;
LAB_01f0345c:
    *param_2 = *pfVar12;
    param_2[1] = pfVar12[1];
    fVar14 = pfVar12[2];
    goto LAB_01f0353c;
  default:
    goto switchD_01f031cc_default;
  }
  if (param_2 != (float *)0x0) {
    iVar20 = *(int *)(lVar10 + 0x24);
    iVar16 = *(int *)(lVar10 + 0x14);
    *param_2 = ((float)*(int *)(lVar10 + 0x10) * 5.0 + (float)*(int *)(lVar10 + 0x20) * 5.0 + 5.0) *
               0.5;
    fVar14 = ((float)iVar16 * 5.0 + (float)iVar20 * 5.0 + 5.0) * 0.5;
LAB_01f0353c:
    param_2[2] = fVar14;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0xa8) == 0)) || (*(char *)(lVar10 + 0x11c8) != '\0')) {
    fVar14 = -500.0;
  }
  else {
    fVar14 = (float)FUN_0093a950(lVar10 + 0x28,param_2,0);
  }
  param_2[1] = fVar23 + fVar14;
switchD_01f031cc_default:
  return;
}

