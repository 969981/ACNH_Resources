
void FUN_0372f1e0(long param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int iVar11;
  byte *pbVar12;
  byte bVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  undefined8 *puVar21;
  int iVar22;
  uint uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8 [4];
  undefined8 local_c8;
  float local_c0;
  undefined **local_b8;
  float *pfStack_b0;
  float *local_a8;
  float *pfStack_a0;
  float local_98;
  undefined4 uStack_94;
  float local_90;
  undefined4 local_8c;
  char local_88 [4];
  float local_84;
  
  lVar19 = *(long *)(*param_2 + 0x68);
  if (lVar19 == 0) {
    return;
  }
  local_c8 = *(undefined8 *)(lVar19 + 0x278);
  fVar28 = *(float *)(lVar19 + 0x280);
  fVar4 = (float)local_c8;
  fVar26 = (float)*(int *)(param_4 + 0x20) * 5.0 + 5.0;
  bVar5 = false;
  if (((float)*(int *)(param_4 + 0x10) * 5.0 <= (float)local_c8) &&
     (bVar5 = false, !NAN((float)local_c8) && !NAN(fVar26))) {
    bVar5 = (float)local_c8 < fVar26;
  }
  if (bVar5) {
    fVar26 = (float)*(int *)(param_4 + 0x24) * 5.0 + 5.0;
    bVar5 = false;
    if (((float)*(int *)(param_4 + 0x14) * 5.0 <= fVar28) &&
       (bVar5 = false, !NAN(fVar28) && !NAN(fVar26))) {
      bVar5 = fVar28 < fVar26;
    }
    if (bVar5) {
      return;
    }
  }
  lVar15 = *(long *)PTR_DAT_04bbc218;
  iVar20 = (int)((float)(int)((float)local_c8 + -2.5) / 5.0) - (uint)((float)local_c8 + -2.5 < 0.0);
  iVar11 = (int)((float)(int)(fVar28 + -2.5) / 5.0) - (uint)(fVar28 + -2.5 < 0.0);
  if (*(long *)(lVar15 + 0x210) != lVar15 + 0x208) {
    lVar16 = (long)*(int *)(lVar15 + 0x21c);
    lVar18 = *(long *)(lVar15 + 0x210) - lVar16;
    do {
      if ((((*(short *)(lVar18 + 0x24) == *(short *)PTR_DAT_04bb6298) &&
           (iVar20 <= *(int *)(lVar18 + 0x48))) && (*(int *)(lVar18 + 0x38) <= iVar20 + 1)) &&
         ((iVar11 <= *(int *)(lVar18 + 0x4c) && (*(int *)(lVar18 + 0x3c) <= iVar11 + 1)))) {
        uVar23 = 1;
        goto LAB_0372f37c;
      }
      lVar18 = *(long *)(lVar18 + lVar16 + 8) - lVar16;
    } while (lVar18 != (lVar15 + 0x208) - lVar16);
  }
  uVar23 = 0;
LAB_0372f37c:
  fVar26 = *(float *)(*param_2 + 0x230);
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  pbVar12 = PTR_DAT_04bb32e0;
  if (lVar15 == 0) {
LAB_0372f3e0:
    if (7 < *pbVar12) {
LAB_0372f3ec:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar15 = **(long **)PTR_DAT_04bb27d0;
        bVar13 = *(byte *)(lVar15 + 0x473);
        pbVar12 = PTR_DAT_04bb5038;
        if ((long)(char)bVar13 != 0xffffffffffffffff) {
          puVar9 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
          if (7 < bVar13) {
            puVar9 = (uint *)(lVar15 + 0x48);
          }
          if ((*puVar9 & 8) != 0) {
            pbVar12 = (byte *)(lVar15 + 0x471);
          }
        }
        bVar13 = *pbVar12;
        bVar5 = 7 < bVar13;
        if (bVar5) {
          bVar13 = 0xff;
        }
        local_b8 = (undefined **)CONCAT71(local_b8._1_7_,bVar13);
        if (!bVar5) goto LAB_0372f46c;
      }
      pbVar12 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0372f3e0;
      }
      goto LAB_0372f3ec;
    }
  }
  bVar13 = *pbVar12;
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  local_b8 = (undefined **)CONCAT71(local_b8._1_7_,bVar13);
LAB_0372f46c:
  local_c0 = fVar28;
  uVar7 = FUN_02546c1c(&local_b8);
  uVar8 = FUN_037234d0(*(undefined8 *)(param_1 + 8),&local_c8);
  if ((uVar8 & 1) == 0) {
    bVar5 = false;
  }
  else {
    fVar24 = fVar4 - **(float **)(param_1 + 8);
    fVar27 = fVar28 - (*(float **)(param_1 + 8))[2];
    bVar5 = SQRT(fVar27 * fVar27 + fVar24 * fVar24) < 8.0;
  }
  local_d8[0] = fVar26;
  local_84 = (float)((uint)local_84 & 0xffffff00);
  local_98 = fVar4;
  uStack_94 = local_c8._4_4_;
  local_8c = 0x40200000;
  pfStack_b0 = &local_98;
  local_b8 = &PTR_FUN_04a77180;
  local_a8 = local_d8;
  pfStack_a0 = &local_84;
  iVar1 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  local_90 = fVar28;
  if (iVar1 == 0) {
    bVar6 = false;
  }
  else {
    lVar15 = (long)iVar1 << 3;
    puVar21 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_b8)(&local_b8,*puVar21);
      lVar15 = lVar15 + -8;
      puVar21 = puVar21 + 1;
    } while (lVar15 != 0);
    bVar6 = local_84._0_1_ != '\0';
  }
  if ((((uVar23 & uVar7) != 0) || (bVar6)) ||
     (bVar5 || (*(int *)(param_3 + 0x14) <= iVar11 + 1 && iVar11 <= *(int *)(param_3 + 0x24)) &&
               (*(int *)(param_3 + 0x10) <= iVar20 + 1 && iVar20 <= *(int *)(param_3 + 0x20)))) {
    iVar11 = *(int *)(param_4 + 0x20);
    iVar17 = *(int *)(param_4 + 0x24);
    iVar1 = *(int *)(param_4 + 0x10);
    iVar20 = *(int *)(param_4 + 0x14);
    local_d8[0] = 0.0;
    local_d8[1] = 0.0;
    uVar3 = local_d8._0_8_;
    local_d8[1] = 0.0;
    iVar14 = iVar1;
    if (iVar17 + 1 != iVar20) {
      iVar22 = iVar1;
      local_d8._0_8_ = uVar3;
      do {
        if ((iVar22 != iVar11) && (iVar20 != *(int *)(param_4 + 0x24))) {
          fVar28 = (float)iVar22 * 5.0 + 5.0;
          local_d8[2] = (float)iVar20 * 5.0 + 5.0;
          local_d8[0] = fVar28;
          lVar15 = *(long *)PTR_DAT_04bb27c8;
          if ((lVar15 == 0) ||
             ((*(long *)(lVar15 + 0xa8) == 0 || (*(char *)(lVar15 + 0x11c8) != '\0')))) {
            uStack_94 = 0xc3fa0000;
            local_98 = fVar28;
          }
          else {
            uStack_94 = FUN_0093a950(lVar15 + 0x28,local_d8,0);
            local_98 = local_d8[0];
          }
          local_d8[1] = (float)uStack_94;
          pfStack_b0 = &local_98;
          local_88[0] = '\0';
          local_8c = 0x40200000;
          local_b8 = &PTR_FUN_04a77180;
          iVar11 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
          local_a8 = &local_84;
          pfStack_a0 = (float *)local_88;
          local_90 = local_d8[2];
          local_84 = fVar26;
          if (iVar11 != 0) {
            lVar15 = (long)iVar11 << 3;
            puVar21 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
            do {
              (*(code *)*local_b8)(&local_b8,*puVar21);
              lVar15 = lVar15 + -8;
              puVar21 = puVar21 + 1;
            } while (lVar15 != 0);
            if (local_88[0] != '\0') {
              iVar11 = *(int *)(param_4 + 0x20);
              iVar14 = *(int *)(param_4 + 0x10);
              goto LAB_0372f6cc;
            }
          }
          puVar10 = &local_dc;
          lVar15 = *param_2;
          local_dc = *(undefined4 *)(lVar19 + 0x2b4);
          goto LAB_0372f868;
        }
LAB_0372f6cc:
        if (iVar22 < iVar11) {
          iVar22 = iVar22 + 1;
        }
        else {
          iVar20 = iVar20 + 1;
          iVar22 = iVar14;
        }
      } while ((iVar1 != iVar22) || (iVar17 + 1 != iVar20));
      iVar20 = *(int *)(param_4 + 0x14);
      iVar17 = *(int *)(param_4 + 0x24);
    }
    puVar2 = PTR_DAT_04bb39d8;
    local_d8[0] = ((float)iVar14 * 5.0 + (float)iVar11 * 5.0 + 5.0) * 0.5;
    local_d8[2] = ((float)iVar20 * 5.0 + (float)iVar17 * 5.0 + 5.0) * 0.5;
    puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar7 = puVar9[3];
    uVar23 = *puVar9 ^ *puVar9 << 0xb;
    *puVar9 = puVar9[1];
    puVar9[1] = puVar9[2];
    uVar23 = uVar23 >> 8 ^ uVar7 >> 0x13 ^ uVar23 ^ uVar7;
    puVar9[2] = uVar7;
    puVar9[3] = uVar23;
    local_d8[0] = local_d8[0] + ((float)(uVar23 >> 9 | 0x3f800000) + -1.0) * 5.0 + -2.5;
    puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
    uVar23 = *puVar9 ^ *puVar9 << 0xb;
    uVar7 = puVar9[3];
    *puVar9 = puVar9[1];
    puVar9[1] = puVar9[2];
    uVar23 = uVar23 >> 8 ^ uVar7 >> 0x13 ^ uVar23 ^ uVar7;
    puVar9[2] = uVar7;
    puVar9[3] = uVar23;
    local_d8[2] = local_d8[2] + ((float)(uVar23 >> 9 | 0x3f800000) + -1.0) * 5.0 + -2.5;
    lVar15 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar15 == 0) || (*(long *)(lVar15 + 0xa8) == 0)) || (*(char *)(lVar15 + 0x11c8) != '\0'))
    {
      uVar25 = 0xc3fa0000;
    }
    else {
      uVar25 = FUN_0093a950(lVar15 + 0x28,local_d8,0);
    }
    lVar15 = *param_2;
    puVar10 = &local_e0;
    local_e0 = *(undefined4 *)(lVar19 + 0x2b4);
    local_d8[1] = (float)uVar25;
LAB_0372f868:
    FUN_01e39778(lVar15,local_d8,puVar10,0);
  }
  return;
}

