
bool FUN_01e2d0a0(long param_1,long param_2,int *param_3,uint param_4,ulong param_5)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined1 *puVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint local_f54;
  float local_f50 [4];
  undefined8 local_f40;
  float local_f38;
  int local_f30 [624];
  undefined1 auStack_570 [1248];
  int local_38;
  int local_34;
  
  iVar5 = *(int *)(param_2 + 0x48);
  local_f30[2] = 0;
  local_f30[0] = 0;
  local_f30[1] = 0;
  if (iVar5 == 0) {
    iVar12 = 0;
    iVar17 = 0;
  }
  else {
    lVar10 = *(long *)(param_2 + 0x38);
    iVar12 = *(int *)(param_2 + 0x40);
    iVar17 = *(int *)(param_2 + 0x44);
    iVar16 = iVar5;
    do {
      iVar1 = 0;
      if (iVar12 <= iVar17) {
        iVar1 = iVar12;
      }
      lVar18 = lVar10 + (long)(iVar17 - iVar1) * 0x14;
      if ((*(char *)(lVar18 + 0x11) != '\0') && (*(int *)(lVar18 + 4) < 3)) {
        uVar19 = (ulong)*(uint *)(lVar18 + 4);
        if (2 < *(uint *)(lVar18 + 4)) {
          uVar19 = 0;
        }
        local_f30[uVar19] = local_f30[uVar19] + 1;
      }
      iVar16 = iVar16 + -1;
      iVar17 = iVar17 + 1;
    } while (iVar16 != 0);
    iVar17 = local_f30[0];
    iVar12 = local_f30[1];
  }
  pfVar2 = (float *)(param_1 + 8) + (ulong)*(uint *)(param_2 + 0x14) * 9;
  if (2 < *(uint *)(param_2 + 0x14)) {
    pfVar2 = (float *)(param_1 + 8);
  }
  pfVar3 = pfVar2 + (ulong)*(uint *)(param_2 + 0x18) * 3;
  if (2 < *(uint *)(param_2 + 0x18)) {
    pfVar3 = pfVar2;
  }
  fVar26 = *pfVar3;
  fVar28 = pfVar3[1];
  fVar29 = pfVar3[2];
  iVar16 = local_f30[2] + iVar12;
  iVar1 = local_f30[2] + iVar17;
  fVar22 = (float)iVar12 - fVar28;
  fVar20 = fVar28 - (float)iVar12;
  fVar24 = (float)local_f30[2] - fVar29;
  fVar27 = 0.0;
  if (0.0 <= fVar22) {
    fVar27 = fVar22;
  }
  fVar22 = 0.0;
  if (0.0 <= fVar24) {
    fVar22 = fVar24;
  }
  fVar25 = fVar26 - (float)iVar17;
  fVar23 = (float)iVar17 - fVar26;
  fVar24 = 0.0;
  if (0.0 <= fVar25) {
    fVar24 = fVar25;
  }
  fVar25 = 0.0;
  if (0.0 <= fVar23) {
    fVar25 = fVar23;
  }
  fVar23 = 0.0;
  if (0.0 <= fVar20) {
    fVar23 = fVar20;
  }
  fVar21 = fVar29 - (float)local_f30[2];
  fVar20 = 0.0;
  if (0.0 <= fVar21) {
    fVar20 = fVar21;
  }
  FUN_01e31460(local_f30);
  local_34 = *param_3;
  local_f38 = 0.0;
  local_f40 = 0;
  local_f50[2] = 0.0;
  local_f50[0] = 0.0;
  local_f50[1] = 0.0;
  if (local_34 == 2) {
    if (iVar5 < 1) {
      piVar11 = &DAT_0538ea6c;
    }
    else {
      iVar7 = iVar5 + *(int *)(param_2 + 0x44) + -1;
      iVar5 = 0;
      if (*(int *)(param_2 + 0x40) <= iVar7) {
        iVar5 = *(int *)(param_2 + 0x40);
      }
      piVar11 = (int *)(*(long *)(param_2 + 0x38) + (long)(iVar7 - iVar5) * 0x14 + 8);
    }
    local_34 = *piVar11;
  }
  bVar6 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
  if (bVar6 < 5) {
    local_38 = 5;
  }
  else if (bVar6 < 8) {
    local_38 = 0;
  }
  else if (bVar6 < 0xc) {
    local_38 = 1;
  }
  else if (bVar6 < 0x10) {
    local_38 = 2;
  }
  else {
    local_38 = 3;
    if (0x12 < bVar6) {
      local_38 = 4;
    }
  }
  uVar8 = FUN_00a86724(DAT_04da7238);
  local_f54 = 2;
  if ((uVar8 & 0xfffffffd) != 5) {
    local_f54 = (uint)(3 < uVar8);
  }
  FUN_01e31630(param_1,param_2,&local_34,&local_38,&local_f54,param_4 & 1,local_f30,&local_f40,
               local_f50);
  fVar24 = (fVar24 * (float)iVar16 + fVar26 * (fVar27 + 1.0 + fVar22)) * (float)local_f40;
  fVar22 = fVar24 + (fVar23 * (float)iVar1 + fVar28 * (fVar25 + fVar22 + 1.0)) * local_f40._4_4_;
  fVar27 = fVar22 + (fVar20 * (float)(iVar12 + iVar17) + fVar29 * (fVar27 + fVar25 + 1.0)) *
                    local_f38;
  if (fVar27 == 0.0) {
    if ((param_5 & 1) == 0) {
      if ((*(int *)(param_2 + 0x48) == 0) || (*(long *)(param_2 + 0x38) == 0)) goto LAB_01e2d588;
      iVar17 = *(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x44) + -1;
      iVar5 = 0;
      if (*(int *)(param_2 + 0x40) <= iVar17) {
        iVar5 = *(int *)(param_2 + 0x40);
      }
      piVar11 = (int *)(*(long *)(param_2 + 0x38) + (long)(iVar17 - iVar5) * 0x14);
      piVar11[0] = 0x16;
      piVar11[1] = 2;
LAB_01e2d574:
      piVar11[3] = local_38;
      puVar14 = (undefined1 *)((long)piVar11 + 0x11);
    }
    else {
      *(undefined8 *)(param_2 + 0x118) = 0x200000016;
LAB_01e2d524:
      *(int *)(param_2 + 0x124) = local_38;
      puVar14 = (undefined1 *)(param_2 + 0x129);
    }
    *puVar14 = 1;
  }
  else {
    puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar4 = puVar9[3];
    uVar8 = *puVar9 ^ *puVar9 << 0xb;
    *puVar9 = puVar9[1];
    puVar9[1] = puVar9[2];
    uVar8 = uVar8 >> 8 ^ uVar4 >> 0x13 ^ uVar8 ^ uVar4;
    puVar9[2] = uVar4;
    puVar9[3] = uVar8;
    fVar20 = fVar27 * ((float)(uVar8 >> 9 | 0x3f800000) + -1.0);
    if (fVar24 <= fVar20) {
      if (fVar22 <= fVar20) {
        local_f54 = 2;
      }
      else {
        local_f54 = 1;
      }
    }
    else {
      local_f54 = 0;
    }
    uVar19 = (ulong)local_f54;
    if (2 < local_f54) {
      uVar19 = 0;
    }
    fVar20 = local_f50[uVar19];
    puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar8 = *puVar9 ^ *puVar9 << 0xb;
    uVar4 = puVar9[3];
    *puVar9 = puVar9[1];
    puVar9[1] = puVar9[2];
    uVar8 = uVar8 >> 8 ^ uVar4 >> 0x13 ^ uVar8 ^ uVar4;
    puVar9[2] = uVar4;
    puVar9[3] = uVar8;
    piVar11 = local_f30 + (ulong)local_f54 * 0x138;
    if (2 < local_f54) {
      piVar11 = local_f30;
    }
    piVar15 = *(int **)(piVar11 + 2);
    if (piVar15 != piVar11) {
      fVar22 = 0.0;
      piVar13 = piVar15 + -2;
      do {
        fVar22 = fVar22 + (float)piVar13[1];
        if (fVar20 * ((float)(uVar8 >> 9 | 0x3f800000) + -1.0) < fVar22) {
          if ((param_5 & 1) != 0) {
            iVar5 = *piVar13;
            *(uint *)(param_2 + 0x11c) = local_f54;
            *(int *)(param_2 + 0x118) = iVar5;
            goto LAB_01e2d524;
          }
          if ((*(int *)(param_2 + 0x48) != 0) && (*(long *)(param_2 + 0x38) != 0)) {
            iVar17 = *(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x44) + -1;
            iVar5 = 0;
            if (*(int *)(param_2 + 0x40) <= iVar17) {
              iVar5 = *(int *)(param_2 + 0x40);
            }
            piVar11 = (int *)(*(long *)(param_2 + 0x38) + (long)(iVar17 - iVar5) * 0x14);
            *piVar11 = *piVar13;
            piVar11[1] = local_f54;
            goto LAB_01e2d574;
          }
          break;
        }
        piVar15 = *(int **)(piVar15 + 2);
        piVar13 = piVar15 + -2;
      } while (piVar13 != piVar11 + -2);
    }
  }
LAB_01e2d588:
  puVar14 = auStack_570;
  do {
    puVar14 = *(undefined1 **)(puVar14 + 8);
  } while (puVar14 != auStack_570);
  return fVar27 != 0.0;
}

