
/* WARNING: Removing unreachable block (ram,0x008c7644) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c754c(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  char *pcVar11;
  short *psVar12;
  uint uVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  undefined **ppuVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if (0 < *(int *)(param_1 + 0x30968)) {
    *(int *)(param_1 + 0x30968) = *(int *)(param_1 + 0x30968) + -1;
    return;
  }
  bVar9 = FUN_008c7440();
  iVar4 = *(int *)(param_1 + 0x410);
  cVar5 = *(char *)(param_1 + 0x37fb8);
  *PTR_DAT_04bb34c0 = bVar9 & 1 | (iVar4 == 0x22 && cVar5 == '\0');
  puVar7 = PTR_DAT_04bb2d00;
  if ((bVar9 & 1) == 0) {
    if ((iVar4 != 0x22 || cVar5 != '\0') || (*(long *)(DAT_05231900 + 0x58) == 0))
    goto LAB_008c7b40;
    fVar18 = (float)(*(uint *)(param_1 + 0x30890) & 0xffffff);
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_1 + 0x30890) >> 0x14) & 0xff0));
    pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_1 + 0x30894) >> 0x14) & 0xff0));
    fVar20 = (float)(*(uint *)(param_1 + 0x30894) & 0xffffff);
    fVar19 = *(float *)(param_1 + 0x3089c) * (pfVar1[2] + pfVar1[3] * fVar18 * 5.9604645e-08);
    fVar21 = fVar19 * (*pfVar2 + pfVar2[1] * fVar20 * 5.9604645e-08);
    fVar18 = *(float *)(param_1 + 0x3089c) * (*pfVar1 + pfVar1[1] * fVar18 * 5.9604645e-08);
    fVar19 = fVar19 * (pfVar2[2] + pfVar2[3] * fVar20 * 5.9604645e-08);
    fVar18 = -(SQRT(fVar18 * fVar18 + fVar21 * fVar21 + fVar19 * fVar19) -
              (*(float *)(*(long *)(DAT_05231900 + 0x58) + 0xee4) + 21.2132));
  }
  else {
    fVar18 = 3.0;
    switch(iVar4) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 9:
    case 10:
    case 0xb:
      break;
    default:
switchD_008c7604_caseD_5:
      if (*(int *)(param_1 + 0x307e8) == 0) {
        if (DAT_04cd19d8 == 0) {
          pbVar14 = &DAT_0548e140;
LAB_008c7858:
          if (*pbVar14 < 8) goto LAB_008c78c4;
LAB_008c7864:
          if (DAT_0537d558 == (long *)0x0) {
LAB_008c78bc:
            pbVar14 = &DAT_0548e168;
            goto LAB_008c78c4;
          }
          lVar16 = *DAT_0537d558;
          bVar9 = *(byte *)(lVar16 + 0x473);
          pbVar14 = PTR_DAT_04bb5038;
          if ((long)(char)bVar9 != 0xffffffffffffffff) {
            puVar3 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
            if (7 < bVar9) {
              puVar3 = (uint *)(lVar16 + 0x48);
            }
            if ((*puVar3 & 8) != 0) {
              pbVar14 = (byte *)(lVar16 + 0x471);
            }
          }
          uVar13 = (uint)*pbVar14;
          if (7 < *pbVar14) goto LAB_008c78bc;
        }
        else {
          pbVar14 = PTR_DAT_04bb32e0;
          if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
            pbVar14 = (byte *)(DAT_04cd19d8 + 0x158);
          }
          if (7 < *pbVar14) {
            if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
              pbVar14 = (byte *)(DAT_054f5738 + 0x11a5);
              goto LAB_008c7858;
            }
            goto LAB_008c7864;
          }
LAB_008c78c4:
          uVar13 = (uint)*pbVar14;
          if (7 < uVar13) {
            uVar13 = 0xff;
          }
        }
        if ((DAT_054f5738 == 0) || (7 < uVar13)) {
          if ((DAT_054f0c70 & 1) == 0) {
            iVar10 = __cxa_guard_acquire(&DAT_054f0c70);
            if (iVar10 != 0) {
              DAT_054f0c1c._0_4_ = 0;
              DAT_054f0c1c._4_4_ = 0;
              DAT_054f0c24._0_4_ = 0;
              DAT_054f0c24._4_4_ = 0;
              DAT_054f0c2c._0_4_ = 0;
              DAT_054f0c2c._4_4_ = 0;
              DAT_054f0c68 = 1;
              DAT_054f0c6c = '\0';
              _DAT_054f0c44 = 0;
              DAT_054f0c34._0_4_ = 0;
              DAT_054f0c34._4_4_ = 0;
              DAT_054f0c3c._0_4_ = 0;
              DAT_054f0c3c._4_4_ = 0;
              _DAT_054f0c08 = 0;
              _DAT_054f0c10 = 1;
              DAT_054f0c14._0_4_ = 0;
              DAT_054f0c14._4_4_ = 0;
              DAT_054f0c48 = 0;
              DAT_054f0c50 = 0;
              DAT_054f0c58 = 0;
              DAT_054f0c60 = 0;
              __cxa_guard_release(&DAT_054f0c70);
            }
            psVar12 = &DAT_054f0c08;
            cVar5 = DAT_054f0c6c;
            goto joined_r0x008c7afc;
          }
          psVar12 = &DAT_054f0c08;
          if (DAT_054f0c6c != '\0') goto LAB_008c7930;
LAB_008c7b00:
          iVar10 = 1;
        }
        else {
          lVar16 = DAT_054f5738 + (ulong)uVar13 * 0xd0 +
                   (ulong)(*(uint *)(DAT_054f5738 + (ulong)uVar13 * 4 + 0xd68) & 1) * 0x68;
          psVar12 = (short *)(lVar16 + 0x6e8);
          cVar5 = *(char *)(lVar16 + 0x74c);
joined_r0x008c7afc:
          if (cVar5 == '\0') goto LAB_008c7b00;
LAB_008c7930:
          if (*psVar12 != DAT_04c487d4) goto LAB_008c7b00;
          iVar10 = *(int *)(psVar12 + 0x30);
        }
        if (iVar10 - 5U < 2) {
          fVar18 = -80.0;
          break;
        }
      }
      if (iVar4 != 0x1d) goto switchD_008c7604_caseD_1c;
      fVar18 = 7.0;
      break;
    case 0xf:
      fVar18 = -4.0;
      break;
    case 0x1a:
    case 0x1b:
      fVar18 = -62.0;
      break;
    case 0x1c:
switchD_008c7604_caseD_1c:
      fVar18 = -15.0;
      break;
    case 0x21:
    case 0x22:
      if (cVar5 == '\0') goto switchD_008c7604_caseD_5;
      uVar13 = *(uint *)(param_1 + 0x307e8);
      if (uVar13 == 0x62) {
        ppuVar17 = (undefined **)(param_1 + 0x30710);
        (**(code **)(*(long *)(param_1 + 0x30708) + 0x18))();
LAB_008c77ac:
        pcVar11 = *ppuVar17;
      }
      else {
        if (uVar13 < 99) {
          ppuVar17 = &PTR_s_cNormal_04922de8 + uVar13;
          goto LAB_008c77ac;
        }
        pcVar11 = "";
      }
      if (pcVar11 == "PlazaAreaForCountDownDemo") {
LAB_008c7800:
        fVar18 = -50.0;
      }
      else {
        uVar15 = 0;
        bVar8 = true;
        do {
          if (pcVar11[uVar15] != "PlazaAreaForCountDownDemo"[uVar15]) break;
          if (pcVar11[uVar15] == '\0') {
            if (bVar8) goto LAB_008c7800;
            break;
          }
          bVar8 = uVar15 < 0x80000;
          uVar15 = uVar15 + 1;
        } while (uVar15 != 0x80001);
        if (pcVar11 == "PlazaAreaForCountDownBehind") {
LAB_008c7954:
          fVar18 = -40.0;
        }
        else {
          uVar15 = 0;
          bVar8 = true;
          do {
            if (pcVar11[uVar15] != "PlazaAreaForCountDownBehind"[uVar15]) break;
            if (pcVar11[uVar15] == '\0') {
              if (bVar8) goto LAB_008c7954;
              break;
            }
            bVar8 = uVar15 < 0x80000;
            uVar15 = uVar15 + 1;
          } while (uVar15 != 0x80001);
          if (pcVar11 == "OrderCut0") {
LAB_008c79a8:
            fVar18 = -65.0;
          }
          else {
            uVar15 = 0;
            bVar8 = true;
            do {
              if (pcVar11[uVar15] != "OrderCut0"[uVar15]) break;
              if (pcVar11[uVar15] == '\0') {
                if (bVar8) goto LAB_008c79a8;
                break;
              }
              bVar8 = uVar15 < 0x80000;
              uVar15 = uVar15 + 1;
            } while (uVar15 != 0x80001);
            if (pcVar11 != s_cFacePanel_04922c2f) {
              uVar15 = 0;
              bVar8 = true;
              do {
                if (pcVar11[uVar15] != s_cFacePanel_04922c2f[uVar15]) break;
                if (pcVar11[uVar15] == '\0') {
                  if ((bool)(bVar8 | pcVar11 == s_cFacePanelBehind_04922c3b)) goto LAB_008c7a7c;
                  goto LAB_008c7a30;
                }
                bVar8 = uVar15 < 0x80000;
                uVar15 = uVar15 + 1;
              } while (uVar15 != 0x80001);
              if (pcVar11 != s_cFacePanelBehind_04922c3b) {
LAB_008c7a30:
                if (*pcVar11 != 'c') break;
                lVar16 = 0;
                do {
                  if ((lVar16 == 0x80000) ||
                     (pcVar11[lVar16 + 1] != s_cFacePanelBehind_04922c3b[lVar16 + 1]))
                  goto switchD_008c7604_caseD_1;
                  if (pcVar11[lVar16 + 1] == '\0') break;
                  lVar6 = lVar16 + 2;
                  if (pcVar11[lVar6] != s_cFacePanelBehind_04922c3b[lVar16 + 2])
                  goto switchD_008c7604_caseD_1;
                  lVar16 = lVar16 + 2;
                } while (pcVar11[lVar6] != '\0');
              }
            }
LAB_008c7a7c:
            fVar18 = -10.0;
          }
        }
      }
    }
  }
switchD_008c7604_caseD_1:
  DAT_04c47d18 = fVar18;
LAB_008c7b40:
  fVar18 = (float)(*(uint *)(param_1 + 0x30910) & 0xffffff);
  *(float *)(param_1 + 0x2c0) = *(float *)(param_1 + 0x2b4);
  *(float *)(param_1 + 0x2c4) = *(float *)(param_1 + 0x2b8);
  *(float *)(param_1 + 0x2c8) = *(float *)(param_1 + 700);
  fVar19 = (float)(*(uint *)(param_1 + 0x30914) & 0xffffff);
  pfVar1 = (float *)(puVar7 + ((ulong)(*(uint *)(param_1 + 0x30910) >> 0x14) & 0xff0));
  pfVar2 = (float *)(puVar7 + ((ulong)(*(uint *)(param_1 + 0x30914) >> 0x14) & 0xff0));
  fVar21 = *pfVar2;
  fVar22 = pfVar2[1];
  fVar23 = pfVar2[2];
  fVar24 = pfVar2[3];
  uVar13 = (int)*(short *)(param_1 + 0x3096e) - 1;
  fVar20 = *(float *)(param_1 + 0x3091c) * (pfVar1[2] + pfVar1[3] * fVar18 * 5.9604645e-08);
  *(float *)(param_1 + 0x2a0) =
       *(float *)(param_1 + 0x2b8) +
       *(float *)(param_1 + 0x3091c) * (*pfVar1 + pfVar1[1] * fVar18 * 5.9604645e-08);
  *(float *)(param_1 + 0x29c) =
       *(float *)(param_1 + 0x2b4) + fVar20 * (fVar21 + fVar22 * fVar19 * 5.9604645e-08);
  *(float *)(param_1 + 0x2a4) =
       *(float *)(param_1 + 700) + fVar20 * (fVar23 + fVar24 * fVar19 * 5.9604645e-08);
  if (0 < *(short *)(param_1 + 0x3096e)) {
    *(short *)(param_1 + 0x3096e) = (short)uVar13;
    if ((uVar13 & 0xffff) == 0) {
      DAT_04c47d1c = 0x41900000;
    }
    else {
      DAT_04c47d1c = 0;
    }
  }
  return;
}

