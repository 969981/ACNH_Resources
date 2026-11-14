
/* WARNING: Removing unreachable block (ram,0x0187b990) */
/* WARNING: Removing unreachable block (ram,0x0187b9f0) */
/* WARNING: Removing unreachable block (ram,0x0187b9f4) */
/* WARNING: Removing unreachable block (ram,0x0187b9fc) */
/* WARNING: Removing unreachable block (ram,0x0187ba00) */
/* WARNING: Removing unreachable block (ram,0x0187ba34) */
/* WARNING: Removing unreachable block (ram,0x0187ba38) */
/* WARNING: Removing unreachable block (ram,0x0187ba50) */
/* WARNING: Removing unreachable block (ram,0x0187ba54) */
/* WARNING: Removing unreachable block (ram,0x0187ba60) */
/* WARNING: Removing unreachable block (ram,0x0187ba64) */
/* WARNING: Removing unreachable block (ram,0x0187ba70) */
/* WARNING: Removing unreachable block (ram,0x0187ba74) */
/* WARNING: Removing unreachable block (ram,0x0187b8a0) */
/* WARNING: Removing unreachable block (ram,0x0187ba84) */
/* WARNING: Removing unreachable block (ram,0x0187ba90) */
/* WARNING: Removing unreachable block (ram,0x0187bad4) */
/* WARNING: Removing unreachable block (ram,0x0187bab0) */
/* WARNING: Removing unreachable block (ram,0x0187bab4) */
/* WARNING: Removing unreachable block (ram,0x0187bab8) */
/* WARNING: Removing unreachable block (ram,0x0187bac4) */
/* WARNING: Removing unreachable block (ram,0x0187bacc) */
/* WARNING: Removing unreachable block (ram,0x0187bad8) */
/* WARNING: Removing unreachable block (ram,0x0187b8a4) */
/* WARNING: Removing unreachable block (ram,0x0187bae0) */
/* WARNING: Removing unreachable block (ram,0x0187b8ec) */
/* WARNING: Removing unreachable block (ram,0x0187b930) */
/* WARNING: Removing unreachable block (ram,0x0187b918) */
/* WARNING: Removing unreachable block (ram,0x0187b944) */
/* WARNING: Removing unreachable block (ram,0x0187b900) */

ulong FUN_0187afc0(float param_1,float param_2,long param_3,undefined8 param_4,byte param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 uVar12;
  bool bVar13;
  long lVar14;
  uint uVar15;
  byte *pbVar16;
  bool bVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  byte local_ac [4];
  undefined4 local_a8;
  undefined2 local_a4;
  undefined8 local_a0;
  int local_98;
  int iStack_94;
  
  if (*(char *)(param_3 + 0x4d8) != '\0') {
    return 0;
  }
  if ((*(long *)(param_3 + 0x3d8) != 0) && (*(char *)(*(long *)(param_3 + 0x3d8) + 0x294) != '\0'))
  {
    FUN_02507c6c(&local_a0,7,1,1,0);
    puVar4 = PTR_DAT_04bb5038;
    local_a8 = local_a0._4_4_;
    local_ac[0] = 0xff;
    if ((byte)local_a0 < 8) {
      local_ac[0] = (byte)local_a0;
    }
    local_a4 = (undefined2)local_98;
    if ((byte)local_a0 < 8) {
      fVar25 = 0.0;
      fVar27 = 0.0;
      fVar26 = 0.0;
      iVar8 = 0;
      do {
        pfVar9 = (float *)FUN_0251b3b0(local_ac,0);
        bVar5 = local_ac[0];
        if (pfVar9 != (float *)0x0) {
          lVar14 = *(long *)(param_3 + 0x300);
          fVar19 = *pfVar9 - *(float *)(lVar14 + 0x278);
          fVar20 = pfVar9[1] - *(float *)(lVar14 + 0x27c);
          fVar21 = pfVar9[2] - *(float *)(lVar14 + 0x280);
          fVar22 = SQRT(fVar20 * fVar20 + fVar19 * fVar19 + fVar21 * fVar21);
          if (fVar22 < param_2) {
            iVar8 = iVar8 + 1;
            fVar24 = 1.0 / fVar22;
            if (fVar22 <= 0.0) {
              fVar24 = 1.0;
            }
            fVar23 = 1.0 / fVar22;
            if (fVar22 <= 1.0) {
              fVar23 = 1.0;
            }
            fVar26 = fVar26 + fVar23 * fVar19 * fVar24;
            fVar27 = fVar27 + fVar23 * fVar20 * fVar24;
            fVar25 = fVar25 + fVar23 * fVar21 * fVar24;
          }
        }
        uVar18 = (ulong)local_ac[0];
        if ((7 < local_ac[0]) || (uVar18 + 1 == 8)) goto LAB_0187b224;
        pbVar16 = puVar4 + uVar18 + 1;
        uVar10 = FUN_02507924(local_ac,pbVar16);
        if ((uVar10 & 1) == 0) {
          if (uVar18 + 2 == 8) goto LAB_0187b224;
          pbVar16 = puVar4 + uVar18 + 2;
          uVar10 = FUN_02507924(local_ac,pbVar16);
          if ((uVar10 & 1) == 0) {
            if (uVar18 + 3 == 8) goto LAB_0187b224;
            pbVar16 = puVar4 + uVar18 + 3;
            uVar10 = FUN_02507924(local_ac,pbVar16);
            if ((uVar10 & 1) == 0) {
              if (uVar18 + 4 == 8) goto LAB_0187b224;
              pbVar16 = puVar4 + uVar18 + 4;
              uVar10 = FUN_02507924(local_ac,pbVar16);
              if ((uVar10 & 1) == 0) {
                if (uVar18 + 5 == 8) goto LAB_0187b224;
                pbVar16 = puVar4 + uVar18 + 5;
                uVar10 = FUN_02507924(local_ac,pbVar16);
                if ((uVar10 & 1) == 0) {
                  if (uVar18 + 6 == 8) goto LAB_0187b224;
                  pbVar16 = puVar4 + uVar18 + 6;
                  uVar10 = FUN_02507924(local_ac,pbVar16);
                  if ((uVar10 & 1) == 0) {
                    if (uVar18 + 7 == 8) goto LAB_0187b224;
                    pbVar16 = puVar4 + uVar18 + 7;
                    uVar10 = FUN_02507924(local_ac,pbVar16);
                    if ((uVar10 & 1) == 0) {
                      if (bVar5 == 0) goto LAB_0187b224;
                      pbVar16 = puVar4 + uVar18 + 8;
                      FUN_02507924(local_ac,pbVar16);
                    }
                  }
                }
              }
            }
          }
        }
        if (7 < *pbVar16) goto LAB_0187b224;
        local_ac[0] = *pbVar16;
      } while( true );
    }
  }
LAB_0187b27c:
  lVar14 = (long)(int)(*(float *)(param_3 + 0x4a8) * 30.0);
  iVar8 = 0;
  if (lVar14 != 0) {
    iVar8 = (int)(0x600000000 / lVar14);
  }
  iVar8 = *(int *)(param_3 + 0x4b8) * iVar8;
  if (iVar8 == 0) {
    fVar25 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x4d4));
    fVar25 = fVar25 * 8.381903e-08;
    puVar11 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar15 = puVar11[3];
    uVar6 = *puVar11 ^ *puVar11 << 0xb;
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar6 = uVar6 >> 8 ^ uVar15 >> 0x13 ^ uVar6 ^ uVar15;
    puVar11[2] = uVar15;
    puVar11[3] = uVar6;
    uVar6 = *(int *)(param_3 + 800) +
            (int)(long)(((fVar25 + fVar25) * ((float)(uVar6 >> 9 | 0x3f800000) + -1.0) - fVar25) *
                       11930465.0);
  }
  else {
    uVar6 = *(int *)(param_3 + 800) + *(int *)(param_3 + 0x4cc) + iVar8;
  }
LAB_0187b33c:
  *(uint *)(param_3 + 0x4c8) = uVar6;
  uVar18 = (ulong)(uVar6 >> 0x19);
  fVar25 = (float)(uVar6 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar26 = (float)(&DAT_04199798)[uVar18 * 4] + fVar25 * (float)(&DAT_0419979c)[uVar18 * 4];
  fVar25 = (float)(&DAT_041997a0)[uVar18 * 4] + fVar25 * (float)(&DAT_041997a4)[uVar18 * 4];
  fVar27 = fVar26 * 0.0;
  fVar20 = fVar26 * (fVar26 + fVar26);
  fVar25 = fVar25 + fVar25;
  fVar19 = (fVar26 + fVar26) * fVar27;
  fVar22 = fVar27 * (fVar27 + fVar27);
  fVar21 = fVar26 * (fVar27 + fVar27);
  fVar27 = fVar25 * fVar27;
  fVar26 = fVar26 * fVar25;
  fVar24 = (fVar21 - fVar27) * 0.0 + ((1.0 - fVar20) - fVar22) * 0.0 + param_2 * (fVar26 + fVar22);
  fVar21 = ((1.0 - fVar22) - fVar22) * 0.0 + (fVar27 + fVar21) * 0.0 + param_2 * (fVar19 - fVar27);
  fVar27 = (fVar27 + fVar19) * 0.0 + (fVar22 - fVar26) * 0.0 + param_2 * ((1.0 - fVar22) - fVar20);
  pfVar9 = (float *)(**(code **)(**(long **)(param_3 + 0x300) + 0xf8))();
  fVar25 = *pfVar9;
  fVar26 = pfVar9[2];
  *(float *)(param_3 + 0x32c) = pfVar9[1] + fVar21;
  *(float *)(param_3 + 0x328) = fVar25 + fVar24;
  *(float *)(param_3 + 0x330) = fVar26 + fVar27;
  if ((*(long *)(param_3 + 0x3d0) == 0) ||
     (lVar14 = *(long *)(*(long *)(param_3 + 0x3d0) + 0x300), lVar14 == 0)) {
    local_ac[0] = *(byte *)(param_3 + 0x494);
    bVar17 = false;
    uVar12 = *(undefined8 *)(param_3 + 0x498);
  }
  else {
    local_ac[0] = *(byte *)(param_3 + 0x494);
    bVar17 = *(float *)(lVar14 + 0x2b8) < *(float *)(lVar14 + 0x2b0);
    puVar1 = (undefined8 *)(param_3 + 0x4a0);
    if (*(float *)(lVar14 + 0x2b0) <= *(float *)(lVar14 + 0x2b8)) {
      puVar1 = (undefined8 *)(param_3 + 0x498);
    }
    uVar12 = *puVar1;
  }
  local_ac[0] = local_ac[0] ^ 1;
  local_a8 = 0;
  uVar6 = FUN_01a1e110(param_3 + 0x328,pfVar9,uVar12,local_ac);
  if ((uVar6 & 3) != 0) {
    fVar25 = *(float *)(param_3 + 0x328);
    fVar26 = *(float *)(param_3 + 0x330);
    if ((uVar6 >> 1 & 1) != 0) {
      fVar25 = *pfVar9 + (fVar25 - *pfVar9) * 0.9;
      fVar26 = pfVar9[2] + (fVar26 - pfVar9[2]) * 0.9;
      *(float *)(param_3 + 0x32c) = pfVar9[1] + (*(float *)(param_3 + 0x32c) - pfVar9[1]) * 0.9;
      *(float *)(param_3 + 0x328) = fVar25;
      *(float *)(param_3 + 0x330) = fVar26;
    }
    local_a0 = &DAT_048f9750;
    local_98 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
    iStack_94 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
    uVar18 = FUN_01a1ddd0(&local_a0,PTR_LAB_04bbfc88);
    if ((uVar18 & 1) == 0) {
      local_a0 = &DAT_048f9750;
      local_98 = (int)((float)(int)*(float *)(param_3 + 0x328) / 5.0) -
                 (uint)(*(float *)(param_3 + 0x328) < 0.0);
      iStack_94 = (int)((float)(int)*(float *)(param_3 + 0x330) / 5.0) -
                  (uint)(*(float *)(param_3 + 0x330) < 0.0);
      uVar18 = FUN_01a1ddd0(&local_a0,PTR_LAB_04bbe978);
      if ((uVar18 & 1) != 0) goto LAB_0187b5c4;
      bVar13 = false;
    }
    else {
LAB_0187b5c4:
      *(float *)(param_3 + 0x328) =
           (float)(int)((int)((float)(int)*(float *)(param_3 + 0x328) / 10.0) -
                       (uint)(*(float *)(param_3 + 0x328) < 0.0)) * 10.0 + 5.0;
      *(float *)(param_3 + 0x330) =
           (float)(int)((int)((float)(int)*(float *)(param_3 + 0x330) / 10.0) -
                       (uint)(*(float *)(param_3 + 0x330) < 0.0)) * 10.0 + 5.0;
      puVar4 = PTR_DAT_04bb39d8;
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar15 = *puVar11 ^ *puVar11 << 0xb;
      uVar3 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar2 = uVar15 ^ uVar3;
      puVar11[2] = uVar3;
      puVar11[3] = uVar15 >> 8 ^ uVar3 >> 0x13 ^ uVar2;
      uVar7 = *(undefined4 *)puVar4;
      *(float *)(param_3 + 0x328) = *(float *)(param_3 + 0x328) + (float)(int)((uVar2 >> 0x1e) - 2);
      puVar11 = (uint *)nn::os::GetTlsValue(uVar7);
      uVar15 = *puVar11 ^ *puVar11 << 0xb;
      uVar3 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar2 = uVar15 ^ uVar3;
      puVar11[2] = uVar3;
      puVar11[3] = uVar15 >> 8 ^ uVar3 >> 0x13 ^ uVar2;
      fVar25 = *(float *)(param_3 + 0x330) + (float)(int)((uVar2 >> 0x1e) - 2);
      *(float *)(param_3 + 0x330) = fVar25;
      uVar7 = FUN_006f0400(*(float *)(param_3 + 0x328) -
                           *(float *)(*(long *)(param_3 + 0x300) + 0x278),
                           fVar25 - *(float *)(*(long *)(param_3 + 0x300) + 0x280));
      bVar13 = true;
      *(undefined4 *)(param_3 + 0x4c8) = uVar7;
    }
    fVar25 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) - *(float *)(param_3 + 0x328);
    fVar26 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) - *(float *)(param_3 + 0x330);
    fVar25 = SQRT(fVar26 * fVar26 + fVar25 * fVar25);
    uVar15 = 0x3c;
    if (param_1 <= fVar25) {
      uVar15 = uVar6;
    }
    if ((bVar13) || (fVar25 < param_1)) goto LAB_0187b7b4;
    *(float *)(param_3 + 0x4d0) = fVar25;
    puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar2 = puVar11[3];
    uVar15 = *puVar11 ^ *puVar11 << 0xb;
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar15 = uVar15 >> 8 ^ uVar2 >> 0x13 ^ uVar15 ^ uVar2;
    puVar11[2] = uVar2;
    puVar11[3] = uVar15;
    fVar25 = (fVar25 - param_1) * ((float)(uVar15 >> 9 | 0x3f800000) + -1.0);
    param_2 = fVar25 / param_2;
    *(float *)(param_3 + 0x328) = *(float *)(param_3 + 0x328) - fVar24 * param_2;
    *(float *)(param_3 + 0x32c) = *(float *)(param_3 + 0x32c) - fVar21 * param_2;
    *(float *)(param_3 + 0x330) = *(float *)(param_3 + 0x330) - fVar27 * param_2;
    *(float *)(param_3 + 0x4d0) = *(float *)(param_3 + 0x4d0) - fVar25;
  }
  uVar15 = uVar6;
LAB_0187b7b4:
  if ((uVar15 & 0x3c) == 0) {
    if (!bVar17 && ((param_5 ^ 0xff) & 1) == 0) {
      local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,2);
                    /* WARNING: Could not recover jumptable at 0x0187b978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (*(code *)(&UNK_0187b97c + (ulong)DAT_04177302 * 4))(0);
      return uVar18;
    }
    *(undefined1 *)(param_3 + 0x4d8) = 1;
    *(undefined4 *)(param_3 + 0x4b8) = *(undefined4 *)(param_3 + 0x4bc);
    puVar11 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar15 = puVar11[3];
    uVar6 = *puVar11 ^ *puVar11 << 0xb;
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar6 = uVar6 >> 8 ^ uVar15 >> 0x13 ^ uVar6 ^ uVar15;
    puVar11[2] = uVar15;
    puVar11[3] = uVar6;
    fVar25 = (float)(uVar6 >> 9 | 0x3f800000) + -1.0;
    if (0.25 <= fVar25) {
      if (0.5 <= fVar25) {
        if (0.75 <= fVar25) {
          uVar7 = 0x80000000;
        }
        else {
          uVar7 = 0xc0000000;
        }
      }
      else {
        uVar7 = 0x40000000;
      }
      uVar18 = 0;
      *(undefined4 *)(param_3 + 0x4cc) = uVar7;
    }
    else {
      uVar18 = 0;
      *(undefined4 *)(param_3 + 0x4cc) = 0;
    }
  }
  else {
    uVar6 = *(int *)(param_3 + 0x4d4) + 0xb60b61;
    if (0x3fffffff < uVar6) {
      uVar6 = 0x40000000;
    }
    *(uint *)(param_3 + 0x4d4) = uVar6;
    iVar8 = (**(code **)(*(long *)(param_3 + 0x4b0) + (ulong)*(byte *)(param_3 + 0x4c4) * 8))
                      (param_3 + 0x4b0);
    *(int *)(param_3 + 0x4b8) = iVar8;
    uVar18 = (ulong)(iVar8 == *(int *)(param_3 + 0x4c0));
  }
  return uVar18;
LAB_0187b224:
  if (iVar8 < 1) goto LAB_0187b27c;
  if (((fVar26 == 0.0) && (fVar27 == 0.0)) && (fVar25 == 0.0)) {
    puVar11 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar6 = *puVar11 ^ *puVar11 << 0xb;
    uVar15 = puVar11[3];
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar6 = uVar6 >> 8 ^ uVar15 >> 0x13 ^ uVar6 ^ uVar15;
    puVar11[2] = uVar15;
    puVar11[3] = uVar6;
  }
  else {
    fVar19 = (float)*(int *)(param_3 + 0x4b8) + (float)*(int *)(param_3 + 0x4b8);
    fVar27 = 180.0;
    if (fVar19 <= 180.0) {
      fVar27 = fVar19;
    }
    iVar8 = FUN_006f0400(-fVar26,-fVar25);
    uVar6 = *(uint *)(param_3 + 1000);
    *(undefined4 *)(param_3 + 1000) = *(undefined4 *)(param_3 + 0x3ec);
    uVar6 = uVar6 ^ uVar6 << 0xb;
    *(undefined4 *)(param_3 + 0x3ec) = *(undefined4 *)(param_3 + 0x3f0);
    uVar15 = *(uint *)(param_3 + 0x3f4);
    *(uint *)(param_3 + 0x3f0) = uVar15;
    uVar6 = uVar6 >> 8 ^ uVar15 >> 0x13 ^ uVar6 ^ uVar15;
    *(uint *)(param_3 + 0x3f4) = uVar6;
    uVar6 = iVar8 + (int)(long)(((fVar27 + fVar27) * ((float)(uVar6 >> 9 | 0x3f800000) + -1.0) -
                                fVar27) * 11930465.0);
  }
  goto LAB_0187b33c;
}

