
bool FUN_02b160e0(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  char *pcVar14;
  int *piVar15;
  int *piVar16;
  char *pcVar17;
  int *piVar18;
  bool bVar19;
  bool bVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  int *piVar24;
  int *piVar25;
  long lVar26;
  char *pcVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined *local_e8;
  int local_e0;
  int iStack_dc;
  uint local_d4;
  undefined *local_d0;
  undefined *puStack_c8;
  int local_c0;
  int iStack_bc;
  undefined *local_b8;
  int local_b0;
  int iStack_ac;
  
  uVar23 = (ulong)param_3;
  if (5 < param_3) {
    uVar23 = 0;
  }
  bVar13 = (&DAT_0417f214)[uVar23];
  uVar23 = (ulong)param_3;
  if (5 < param_3) {
    uVar23 = 0;
  }
  uVar23 = (ulong)(byte)(&DAT_0417f21a)[uVar23];
  if ((uVar23 == 0) || (bVar13 == 0)) {
    bVar20 = false;
  }
  else {
    uVar29 = 0;
    puVar1 = PTR_DAT_04bb2018 + 0x10;
    bVar20 = true;
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    local_d4 = param_3;
    do {
      lVar30 = 0;
      pcVar4 = &DAT_0417f319 + uVar29 * 6;
      pcVar14 = &DAT_0417f33d + uVar29 * 6;
      if (5 < uVar29) {
        pcVar4 = "";
        pcVar14 = "";
      }
      uVar28 = 0;
      piVar5 = &DAT_0417f694 + uVar29 * 0xc;
      if (5 < uVar29) {
        piVar5 = &DAT_0417f694;
      }
      piVar6 = &DAT_0417f574 + uVar29 * 8;
      if (8 < uVar29) {
        piVar6 = &DAT_0417f574;
      }
      lVar26 = uVar29 * 4;
      pcVar7 = &DAT_0417f2f5 + lVar26;
      if (8 < uVar29) {
        pcVar7 = "\x01\x01\x01\x01\x01\x01\x01\x01";
      }
      pcVar8 = &DAT_040578c0 + lVar26;
      piVar15 = (int *)(&DAT_0417f474 + uVar29 * 0x20);
      if (7 < uVar29) {
        pcVar8 = "\x01\x01\x01\x01\x01\x01\x01\x01";
        piVar15 = (int *)&DAT_0417f474;
      }
      piVar18 = &DAT_0417f7b4 + uVar29 * 0xe;
      pcVar17 = &DAT_0417f361 + uVar29 * 7;
      piVar16 = (int *)(&DAT_0417f394 + uVar29 * 0x20);
      pcVar9 = &DAT_0417f2d9 + lVar26;
      if (6 < uVar29) {
        piVar18 = &DAT_0417f7b4;
        pcVar17 = "";
        piVar16 = (int *)&DAT_0417f394;
        pcVar9 = "\x01\x01\x01\x01\x01\x01\x01\x01";
      }
      do {
        local_d0 = (undefined *)CONCAT44(local_d0._4_4_,local_d4);
        switch(local_d4) {
        case 0:
          piVar24 = (int *)((long)piVar16 + lVar30);
          if (3 < uVar28) {
            piVar24 = piVar16;
          }
          pcVar27 = pcVar9 + uVar28;
          if (3 < uVar28) {
            pcVar27 = pcVar9;
          }
          if (*pcVar27 == '\0') goto switchD_02b162c8_default;
          goto LAB_02b16340;
        case 1:
          piVar25 = piVar15;
          pcVar27 = pcVar8;
          break;
        case 2:
          piVar25 = piVar6;
          pcVar27 = pcVar7;
          break;
        case 3:
          pcVar27 = pcVar4;
          goto LAB_02b16310;
        case 4:
          pcVar27 = pcVar14;
LAB_02b16310:
          bVar19 = 5 < uVar28;
          piVar24 = (int *)((long)piVar5 + lVar30);
          if (bVar19) {
            piVar24 = piVar5;
          }
          goto LAB_02b16330;
        case 5:
          bVar19 = 6 < uVar28;
          piVar25 = piVar18;
          pcVar27 = pcVar17;
          goto LAB_02b16328;
        default:
          goto switchD_02b162c8_default;
        }
        bVar19 = 3 < uVar28;
LAB_02b16328:
        piVar24 = (int *)((long)piVar25 + lVar30);
        if (bVar19) {
          piVar24 = piVar25;
        }
LAB_02b16330:
        pcVar10 = pcVar27 + uVar28;
        if (bVar19) {
          pcVar10 = pcVar27;
        }
        if (*pcVar10 != '\0') {
LAB_02b16340:
          iVar11 = *piVar24;
          iVar12 = piVar24[1];
          local_e0 = *(int *)(param_1 + 0x10);
          iStack_dc = *(int *)(param_1 + 0x14);
          fVar31 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x1c));
          local_e8 = puVar1;
          fVar32 = sinf(fVar31 * 1.4629181e-09);
          fVar31 = cosf(fVar31 * 1.4629181e-09);
          fVar33 = -(fVar32 * (float)iVar12) + (float)iVar11 * fVar31;
          fVar32 = fVar31 * (float)iVar12 + (float)iVar11 * fVar32;
          fVar31 = 0.5;
          if (fVar33 < 0.0) {
            fVar31 = -0.5;
          }
          fVar34 = 0.5;
          if (fVar32 < 0.0) {
            fVar34 = -0.5;
          }
          local_e0 = local_e0 + (int)(fVar33 + fVar31);
          iStack_dc = iStack_dc + (int)(fVar32 + fVar34);
          uVar21 = FUN_01317ff0(&local_e8,1);
          if (((uVar21 & 1) != 0) || (uVar21 = FUN_01318220(&local_e8), (uVar21 & 1) != 0)) {
            uVar22 = 0xf;
LAB_02b16580:
            if (*(int *)(param_2 + 8) != 0) {
              return bVar20;
            }
            if (uVar22 < 0x18) {
              *(int *)(param_2 + 8) = 1 << (ulong)uVar22;
              return bVar20;
            }
            return bVar20;
          }
          uVar21 = FUN_01317ff0(&local_e8,3);
          if ((uVar21 & 1) != 0) {
            uVar22 = 0x10;
            goto LAB_02b16580;
          }
          fVar32 = (float)iStack_dc * 10.0 + 2.5;
          fVar31 = (float)local_e0 * 10.0 + 2.5;
          fVar34 = (float)iStack_dc * 10.0 + 10.0 + -2.5;
          fVar33 = (float)local_e0 * 10.0 + 10.0 + -2.5;
          local_b0 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
          iStack_ac = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
          iVar11 = (int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0);
          iVar12 = (int)((float)(int)fVar34 / 5.0) - (uint)(fVar34 < 0.0);
          local_c0 = local_b0;
          if (iVar11 <= local_b0) {
            local_c0 = iVar11;
          }
          if (local_b0 <= iVar11) {
            local_b0 = iVar11;
          }
          iStack_bc = iStack_ac;
          if (iVar12 <= iStack_ac) {
            iStack_bc = iVar12;
          }
          if (iStack_ac <= iVar12) {
            iStack_ac = iVar12;
          }
          if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
             (lVar26 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar26 == 0)) {
            uVar22 = 0x12;
            goto LAB_02b16580;
          }
          local_d0 = puVar2;
          puStack_c8 = puVar3;
          local_b8 = puVar3;
          uVar21 = FUN_00971f80(lVar26,&local_d0,1);
          if ((uVar21 & 1) == 0) {
            uVar22 = 0x12;
            goto LAB_02b16580;
          }
        }
switchD_02b162c8_default:
        uVar28 = uVar28 + 1;
        lVar30 = lVar30 + 8;
      } while (bVar13 != uVar28);
      uVar29 = uVar29 + 1;
      bVar20 = uVar29 < uVar23;
    } while (uVar29 != uVar23);
  }
  return bVar20;
}

