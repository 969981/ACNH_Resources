
/* WARNING: Removing unreachable block (ram,0x014b8b50) */
/* WARNING: Removing unreachable block (ram,0x014b8b70) */
/* WARNING: Removing unreachable block (ram,0x014b8bb0) */

void FUN_014b81fc(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  undefined *puVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ushort uVar14;
  uint uVar15;
  long lVar16;
  float *pfVar17;
  long lVar18;
  undefined8 *puVar19;
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
  float local_c8;
  undefined4 uStack_c4;
  float local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  
  uVar12 = FUN_014e5b54(6);
  uVar15 = 0x1f;
  if ((uVar12 & 1) == 0) {
    uVar15 = 0;
  }
  uVar12 = FUN_014e5b54(7);
  puVar3 = PTR_DAT_04bb6298;
  bVar9 = false;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
LAB_014b8288:
    uVar13 = FUN_0180c600();
    if ((uVar13 & 1) != 0) goto LAB_014b8290;
    sVar4 = *(short *)puVar3;
    if (sVar4 != -1) {
      puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
      if (0xff < (uint)(int)sVar4) {
        puVar3 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar3 + 4) >> 2 & 1) != 0) goto LAB_014b8290;
    }
  }
  else {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x1a & 1) == 0) goto LAB_014b8288;
LAB_014b8290:
    bVar9 = true;
  }
  local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
  local_b8._0_4_ = 0.0;
  local_b8._4_4_ = 0;
  local_c0 = 0.0;
  local_c8 = 0.0;
  uStack_c4 = 0;
  FUN_014b8fc4(&local_b8,&local_c8);
  *(float *)(param_1 + 8) = (float)local_b8;
  *(undefined4 *)(param_1 + 0xc) = local_b8._4_4_;
  *(undefined4 *)(param_1 + 0x18) = uStack_c4;
  *(float *)(param_1 + 0x1c) = local_c0;
  *(float *)(param_1 + 0x10) = (float)local_b0;
  *(float *)(param_1 + 0x14) = local_c8;
  iVar5 = (int)((float)(int)(float)local_b8 / 5.0) - (uint)((float)local_b8 < 0.0);
  iVar6 = (int)((float)(int)(float)local_b0 / 5.0) - (uint)((float)local_b0 < 0.0);
  iVar7 = (int)((float)(int)(local_c8 + -0.001) / 5.0) - (uint)(local_c8 + -0.001 < 0.0);
  iVar8 = (int)((float)(int)(local_c0 + -0.001) / 5.0) - (uint)(local_c0 + -0.001 < 0.0);
  iVar11 = iVar5;
  if (iVar7 <= iVar5) {
    iVar11 = iVar7;
  }
  if (iVar5 <= iVar7) {
    iVar5 = iVar7;
  }
  iVar7 = iVar6;
  if (iVar8 <= iVar6) {
    iVar7 = iVar8;
  }
  if (iVar6 <= iVar8) {
    iVar6 = iVar8;
  }
  *(int *)(param_1 + 0x30) = iVar11;
  *(int *)(param_1 + 0x34) = iVar7;
  *(int *)(param_1 + 0x40) = iVar5;
  *(int *)(param_1 + 0x44) = iVar6;
  puVar3 = PTR_DAT_04bb2720;
  if (((uVar15 ^ 0xffffffff) & 0x1e) == 0) {
    local_b8._0_4_ = 2.8026e-45;
    fVar29 = (float)local_b8;
    local_b8._0_4_ = 2.8026e-45;
    puVar1 = PTR_DAT_04bb5438 + 0x10;
    fVar21 = (float)local_b8;
    local_b8._0_4_ = fVar29;
    do {
      lVar18 = *(long *)PTR_DAT_04bb5ce0;
      if (lVar18 == 0) {
        fVar29 = 0.0;
        fVar23 = 0.0;
        fVar24 = 85.0;
        fVar26 = 85.0;
      }
      else {
        fVar23 = (float)*(int *)(lVar18 + 0xd88) * 5.0;
        fVar29 = (float)*(int *)(lVar18 + 0xd8c) * 5.0;
        fVar24 = (float)*(int *)(lVar18 + 0xd98) * 5.0 + 5.0;
        fVar26 = (float)*(int *)(lVar18 + 0xd9c) * 5.0 + 5.0;
      }
      lVar18 = *(long *)puVar3;
      local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
      local_c8 = fVar21;
      if ((lVar18 == 0) || (*(long *)(lVar18 + 0x330) == 0)) {
        puVar19 = &DAT_055c04a0;
      }
      else {
        puVar19 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
        iVar11 = FUN_006bd550(*puVar19,0);
        puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar11 != 0x758f7eaf) {
          puVar19 = &DAT_055c04a0;
        }
      }
      local_b0 = (undefined *)CONCAT44(*(undefined4 *)(puVar19 + 7),(float)local_b0);
      uVar10 = FUN_017baf44();
      local_a8 = CONCAT71(local_a8._1_7_,uVar10) & 0xffffffffffffff01;
      local_b8 = puVar1;
      lVar18 = FUN_01a4fa00(&local_b8);
      fVar22 = 0.0;
      fVar25 = (float)*(int *)(lVar18 + 0x14) * 5.0;
      fVar20 = 0.0;
      fVar27 = 0.0;
      fVar28 = fVar23;
      switch(local_c8) {
      case 4.2039e-45:
      case 7.00649e-45:
        fVar28 = fVar29;
      case 2.8026e-45:
      case 5.60519e-45:
        fVar22 = fVar28;
        fVar27 = fVar25;
      }
      switch(local_c8) {
      case 2.8026e-45:
      case 5.60519e-45:
        fVar20 = fVar23 + (fVar24 - fVar23);
        break;
      case 4.2039e-45:
      case 7.00649e-45:
        fVar20 = fVar29 + (fVar26 - fVar29);
      }
      if ((int)fVar21 - 2U < 6) {
        local_b8._0_4_ = (float)(&DAT_04175734)[(int)((int)fVar21 - 2U)];
      }
      else {
        local_b8._0_4_ = 0.0;
      }
      fVar25 = fVar25 + 40.0;
      pfVar17 = (float *)(param_1 + 8) + (ulong)(uint)(float)local_b8 * 0x10;
      if (6 < (uint)(float)local_b8) {
        pfVar17 = (float *)(param_1 + 8);
      }
      *pfVar17 = fVar22;
      pfVar17[2] = fVar27;
      pfVar17[3] = fVar20;
      pfVar17[1] = 0.0;
      pfVar17[4] = 0.0;
      pfVar17[5] = fVar25;
      fVar25 = fVar25 + -0.001;
      fVar23 = (float)((int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0));
      fVar24 = (float)((int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0));
      fVar26 = (float)((int)((float)(int)(fVar20 + -0.001) / 5.0) - (uint)(fVar20 + -0.001 < 0.0));
      fVar27 = (float)((int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0));
      fVar29 = fVar23;
      if ((int)fVar26 <= (int)fVar23) {
        fVar29 = fVar26;
      }
      if ((int)fVar23 <= (int)fVar26) {
        fVar23 = fVar26;
      }
      fVar26 = fVar24;
      if ((int)fVar27 <= (int)fVar24) {
        fVar26 = fVar27;
      }
      if ((int)fVar24 <= (int)fVar27) {
        fVar24 = fVar27;
      }
      fVar27 = 1.12104e-44;
      if ((int)fVar21 < 8) {
        fVar27 = (float)((int)fVar21 + 1);
      }
      pfVar17[10] = fVar29;
      pfVar17[0xb] = fVar26;
      pfVar17[0xe] = fVar23;
      pfVar17[0xf] = fVar24;
      fVar21 = fVar27;
    } while (fVar27 != 8.40779e-45);
  }
  if ((uVar12 & 1) != 0) {
    local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
    local_b8._0_4_ = 0.0;
    local_b8._4_4_ = 0;
    local_c0 = 0.0;
    local_c8 = 0.0;
    uStack_c4 = 0;
    FUN_014b8fc4(&local_b8,&local_c8);
    *(undefined4 *)(param_1 + 0x14c) = local_b8._4_4_;
    *(float *)(param_1 + 0x15c) = local_c0;
    *(undefined4 *)(param_1 + 0x158) = uStack_c4;
    *(float *)(param_1 + 0x154) = local_c8;
    *(float *)(param_1 + 0x148) = (float)local_b8;
    *(float *)(param_1 + 0x150) = (float)local_b0;
    iVar5 = (int)((float)(int)(float)local_b8 / 5.0) - (uint)((float)local_b8 < 0.0);
    iVar6 = (int)((float)(int)(float)local_b0 / 5.0) - (uint)((float)local_b0 < 0.0);
    iVar7 = (int)((float)(int)(local_c8 + -0.001) / 5.0) - (uint)(local_c8 + -0.001 < 0.0);
    iVar11 = iVar5;
    if (iVar7 <= iVar5) {
      iVar11 = iVar7;
    }
    if (iVar5 <= iVar7) {
      iVar5 = iVar7;
    }
    *(int *)(param_1 + 0x170) = iVar11;
    *(int *)(param_1 + 0x180) = iVar5;
    iVar5 = (int)((float)(int)(local_c0 + -0.001) / 5.0) - (uint)(local_c0 + -0.001 < 0.0);
    iVar11 = iVar6;
    if (iVar5 <= iVar6) {
      iVar11 = iVar5;
    }
    *(int *)(param_1 + 0x174) = iVar11;
    if (iVar6 <= iVar5) {
      iVar6 = iVar5;
    }
    *(int *)(param_1 + 0x184) = iVar6;
  }
  puVar3 = PTR_DAT_04bb6298;
  if (!bVar9) {
    return;
  }
  fVar29 = 0.0;
  lVar18 = *(long *)PTR_DAT_04bb59d8;
  if (lVar18 == 0) {
LAB_014b8a44:
    fVar21 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    goto LAB_014b8a50;
  }
  uVar14 = *(ushort *)PTR_DAT_04bb6298;
  if (uVar14 == 0xffff) {
LAB_014b8980:
    uVar12 = FUN_0180c600();
    if ((uVar12 & 1) == 0) {
      sVar4 = *(short *)puVar3;
      if (sVar4 == -1) goto LAB_014b8a44;
      fVar21 = 0.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
      if (0xff < (uint)(int)sVar4) {
        puVar3 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar3 + 4) >> 2 & 1) == 0) goto LAB_014b8a50;
    }
LAB_014b8988:
    local_a8 = 0;
    local_b8 = PTR_DAT_04bbc1a0 + 0x10;
    local_b0 = PTR_DAT_04bb2010 + 0x10;
    local_98 = 0;
    local_a0 = local_b0;
    FUN_01811430(&local_b8);
  }
  else {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar14 * 8);
    if (0xff < uVar14) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar2 >> 1 & 1) == 0) || (local_b8._0_4_ = 3.64338e-44, (*puVar2 >> 0x1a & 1) == 0)) {
LAB_014b8944:
      local_b8._0_4_ = 3.64338e-44;
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar14 & 0xffffffffU) * 8);
      if (0xff < uVar14) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x1a & 1) == 0) goto LAB_014b8980;
      goto LAB_014b8988;
    }
    lVar16 = *(long *)PTR_DAT_04bb2720;
    if (lVar16 == 0) {
      puVar19 = &DAT_055c04a0;
    }
    else {
      puVar19 = &DAT_055c04a0;
      if (*(long *)(lVar16 + 0x330) != 0) {
        puVar19 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
        iVar11 = FUN_006bd550(*puVar19,0);
        puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar11 != 0x758f7eaf) {
          puVar19 = &DAT_055c04a0;
        }
      }
    }
    if (*(int *)(puVar19 + 7) != -0x17df00c3) {
      uVar14 = *(ushort *)puVar3;
      if (uVar14 == 0xffff) goto LAB_014b8980;
      goto LAB_014b8944;
    }
    local_a8._0_4_ = *(int *)(lVar18 + 0x50);
    local_a8._4_4_ = *(int *)(lVar18 + 0x54);
    local_98._0_4_ = *(int *)(lVar18 + 0x60);
    local_98._4_4_ = *(int *)(lVar18 + 100);
  }
  fVar29 = (float)(int)local_a8 * 5.0;
  fVar23 = (float)local_a8._4_4_ * 5.0;
  fVar24 = (float)(int)local_98 * 5.0 + 5.0;
  fVar21 = (float)local_98._4_4_ * 5.0 + 5.0;
LAB_014b8a50:
  if ((((fVar29 != 0.0) || (fVar23 != 0.0)) || (fVar24 != 0.0)) || (fVar21 != 0.0)) {
    *(float *)(param_1 + 0x194) = fVar24;
    *(float *)(param_1 + 400) = fVar23;
    *(float *)(param_1 + 0x188) = fVar29;
    *(undefined4 *)(param_1 + 0x18c) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(float *)(param_1 + 0x19c) = fVar21;
    iVar6 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
    iVar5 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
    iVar7 = (int)((float)(int)(fVar24 + -0.001) / 5.0) - (uint)(fVar24 + -0.001 < 0.0);
    iVar11 = iVar5;
    if (iVar7 <= iVar5) {
      iVar11 = iVar7;
    }
    if (iVar5 <= iVar7) {
      iVar5 = iVar7;
    }
    *(int *)(param_1 + 0x1b0) = iVar11;
    *(int *)(param_1 + 0x1c0) = iVar5;
    iVar5 = (int)((float)(int)(fVar21 + -0.001) / 5.0) - (uint)(fVar21 + -0.001 < 0.0);
    iVar11 = iVar6;
    if (iVar5 <= iVar6) {
      iVar11 = iVar5;
    }
    *(int *)(param_1 + 0x1b4) = iVar11;
    if (iVar6 <= iVar5) {
      iVar6 = iVar5;
    }
    *(int *)(param_1 + 0x1c4) = iVar6;
  }
  pfVar17 = (float *)(param_1 + 8);
  if (((*(float *)(param_1 + 0x14) < *pfVar17) ||
      (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0xc))) ||
     (*(float *)(param_1 + 0x1c) < *(float *)(param_1 + 0x10))) {
    pfVar17 = (float *)0x0;
  }
  fVar29 = *(float *)(param_1 + 0x188);
  fVar21 = *(float *)(param_1 + 0x194);
  if ((fVar29 <= fVar21) && (*(float *)(param_1 + 0x18c) <= *(float *)(param_1 + 0x198))) {
    fVar23 = *(float *)(param_1 + 400);
    fVar24 = *(float *)(param_1 + 0x19c);
    if ((fVar23 <= fVar24) && (pfVar17 != (float *)0x0)) {
      fVar26 = *pfVar17;
      fVar27 = pfVar17[2];
      if (((fVar26 < fVar21) || (fVar23 < fVar27)) || (pfVar17[5] < fVar24)) {
        fVar28 = pfVar17[3];
        if (((fVar29 < fVar28) || (fVar23 < fVar27)) || (pfVar17[5] < fVar24)) {
          if (((fVar29 < fVar26) || (fVar27 < fVar24)) || (fVar28 < fVar21)) {
            if (((fVar28 < fVar21) || (fVar29 < fVar26)) || (fVar23 < pfVar17[5])) {
              *(undefined4 *)(param_1 + 0x1c8) = 0;
            }
            else {
              *(undefined4 *)(param_1 + 0x1c8) = 2;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x1c8) = 1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x1c8) = 4;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1c8) = 3;
      }
    }
  }
  return;
}

