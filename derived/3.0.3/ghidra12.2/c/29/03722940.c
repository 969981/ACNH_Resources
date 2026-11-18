
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_03722940(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  ulong uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  byte bVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  short *psVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  undefined8 *puVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  uint local_104;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0 [4];
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined **local_c0;
  float *pfStack_b8;
  float *local_b0;
  float *pfStack_a8;
  float local_a0;
  undefined4 uStack_9c;
  float local_98;
  undefined4 local_94;
  char local_90 [4];
  float local_8c [3];
  
  local_c8 = 0.0;
  local_d0 = 0;
  pfVar13 = (float *)FUN_0252d9bc(0);
  puVar5 = PTR_DAT_04bb6298;
  puVar4 = PTR_DAT_04bb4718;
  puVar3 = PTR_DAT_04bb39b0;
  if (pfVar13 == (float *)0x0) {
    iVar11 = 0;
    iVar12 = 0;
    iVar28 = 0;
    iVar24 = 0;
  }
  else {
    local_c8 = pfVar13[2];
    local_d0 = *(undefined8 *)pfVar13;
    lVar20 = *(long *)PTR_DAT_04bb39b0;
    pbVar17 = PTR_DAT_04bb32e0;
    if (lVar20 == 0) {
LAB_03722a10:
      if (*pbVar17 < 8) goto LAB_03722a7c;
LAB_03722a1c:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_03722a74:
        pbVar17 = PTR_DAT_04bb5038;
        goto LAB_03722a7c;
      }
      lVar20 = **(long **)PTR_DAT_04bb27d0;
      bVar18 = *(byte *)(lVar20 + 0x473);
      pbVar17 = PTR_DAT_04bb5038;
      if ((long)(char)bVar18 != 0xffffffffffffffff) {
        puVar15 = (uint *)(lVar20 + 0x48) + ((long)(char)bVar18 & 0xffffffffU) * 0x20;
        if (7 < bVar18) {
          puVar15 = (uint *)(lVar20 + 0x48);
        }
        if ((*puVar15 & 8) != 0) {
          pbVar17 = (byte *)(lVar20 + 0x471);
        }
      }
      uVar26 = (uint)*pbVar17;
      if (7 < *pbVar17) goto LAB_03722a74;
    }
    else {
      if (*(int *)(lVar20 + 0x15c) != 0) {
        pbVar17 = (byte *)(lVar20 + 0x158);
      }
      if (7 < *pbVar17) {
        if ((*(int *)(lVar20 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_03722a10;
        }
        goto LAB_03722a1c;
      }
LAB_03722a7c:
      uVar26 = (uint)*pbVar17;
      if (7 < uVar26) {
        uVar26 = 0xff;
      }
    }
    lVar20 = *(long *)PTR_DAT_04bb4718;
    if ((lVar20 == 0) || (7 < uVar26)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar25 = &DAT_054f0c08;
        if (iVar11 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = '\0';
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
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
      }
      else {
        psVar25 = &DAT_054f0c08;
      }
    }
    else {
      psVar25 = (short *)(lVar20 + (ulong)uVar26 * 0xd0 +
                          (ulong)(*(uint *)(lVar20 + (ulong)uVar26 * 4 + 0xd68) & 1) * 0x68 + 0x6e8)
      ;
    }
    if (((char)psVar25[0x32] == '\0') || (*psVar25 != *(short *)puVar5)) {
      iVar11 = 1;
    }
    else {
      iVar11 = *(int *)(psVar25 + 0x30);
    }
    uVar10 = FUN_0245bbd8(pfVar13);
    lVar20 = *(long *)puVar4;
    if ((lVar20 == 0) || (7 < uVar26)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar25 = &DAT_054f0c08;
        cVar2 = DAT_054f0c6c;
        if (iVar12 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = '\0';
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
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
          cVar2 = DAT_054f0c6c;
        }
        goto joined_r0x03722c74;
      }
      psVar25 = &DAT_054f0c08;
      if (DAT_054f0c6c != '\0') goto LAB_03722b60;
LAB_03722c78:
      lVar20 = *(long *)puVar4;
      if ((lVar20 == 0) || (7 < uVar26)) {
        if ((DAT_054f0c70 & 1) == 0) {
          iVar12 = __cxa_guard_acquire(&DAT_054f0c70);
          psVar25 = &DAT_054f0c08;
          cVar2 = DAT_054f0c6c;
          if (iVar12 != 0) {
            DAT_054f0c1c._0_4_ = 0;
            DAT_054f0c1c._4_4_ = 0;
            DAT_054f0c68 = 1;
            DAT_054f0c6c = '\0';
            DAT_054f0c24._0_4_ = 0;
            DAT_054f0c24._4_4_ = 0;
            DAT_054f0c2c._0_4_ = 0;
            DAT_054f0c2c._4_4_ = 0;
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
            cVar2 = DAT_054f0c6c;
          }
          goto joined_r0x037234c8;
        }
        psVar25 = &DAT_054f0c08;
        if (DAT_054f0c6c != '\0') goto LAB_03722cd4;
LAB_03722cf0:
        uVar26 = 0;
      }
      else {
        lVar20 = lVar20 + (ulong)uVar26 * 0xd0 +
                 (ulong)(*(uint *)(lVar20 + (ulong)uVar26 * 4 + 0xd68) & 1) * 0x68;
        psVar25 = (short *)(lVar20 + 0x6e8);
        cVar2 = *(char *)(lVar20 + 0x74c);
joined_r0x037234c8:
        if (cVar2 == '\0') goto LAB_03722cf0;
LAB_03722cd4:
        if ((*psVar25 != *(short *)puVar5) || (uVar26 = *(uint *)(psVar25 + 2), 0x148 < uVar26))
        goto LAB_03722cf0;
      }
      bVar8 = uVar26 != 0xf2;
    }
    else {
      lVar20 = lVar20 + (ulong)uVar26 * 0xd0 +
               (ulong)(*(uint *)(lVar20 + (ulong)uVar26 * 4 + 0xd68) & 1) * 0x68;
      psVar25 = (short *)(lVar20 + 0x6e8);
      cVar2 = *(char *)(lVar20 + 0x74c);
joined_r0x03722c74:
      if (cVar2 == '\0') goto LAB_03722c78;
LAB_03722b60:
      if (((*psVar25 != *(short *)puVar5) || (0x148 < *(uint *)(psVar25 + 2))) ||
         (*(uint *)(psVar25 + 2) != 0xf3)) goto LAB_03722c78;
      bVar8 = false;
    }
    fVar30 = *pfVar13;
    if ((iVar11 == 7) || (!bVar8 && ((uVar10 ^ 1) & 1) == 0)) {
      iVar11 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
      iVar12 = (int)((float)(int)pfVar13[2] / 5.0) - (uint)(pfVar13[2] < 0.0);
      iVar28 = iVar11;
      iVar24 = iVar12;
    }
    else {
      iVar11 = (int)((float)(int)(fVar30 + -2.5) / 5.0) - (uint)(fVar30 + -2.5 < 0.0);
      iVar12 = (int)((float)(int)(pfVar13[2] + -2.5) / 5.0) - (uint)(pfVar13[2] + -2.5 < 0.0);
      iVar28 = iVar11 + 1;
      iVar24 = iVar12 + 1;
    }
  }
  lVar20 = *(long *)(*param_2 + 0x68);
  if (lVar20 == 0) {
    return 0;
  }
  local_e0 = *(undefined8 *)(lVar20 + 0x278);
  fVar30 = *(float *)(lVar20 + 0x280);
  fVar7 = (float)local_e0;
  fVar33 = (float)*(int *)(param_3 + 0x20) * 5.0 + 5.0;
  bVar8 = false;
  if (((float)*(int *)(param_3 + 0x10) * 5.0 <= (float)local_e0) &&
     (bVar8 = false, !NAN((float)local_e0) && !NAN(fVar33))) {
    bVar8 = (float)local_e0 < fVar33;
  }
  if (bVar8) {
    fVar33 = (float)*(int *)(param_3 + 0x24) * 5.0 + 5.0;
    bVar8 = false;
    if (((float)*(int *)(param_3 + 0x14) * 5.0 <= fVar30) &&
       (bVar8 = false, !NAN(fVar30) && !NAN(fVar33))) {
      bVar8 = fVar30 < fVar33;
    }
    if (bVar8) {
      return 0;
    }
  }
  lVar21 = *(long *)PTR_DAT_04bbc218;
  iVar19 = (int)((float)(int)((float)local_e0 + -2.5) / 5.0) - (uint)((float)local_e0 + -2.5 < 0.0);
  iVar27 = (int)((float)(int)(fVar30 + -2.5) / 5.0) - (uint)(fVar30 + -2.5 < 0.0);
  if (*(long *)(lVar21 + 0x210) != lVar21 + 0x208) {
    lVar22 = (long)*(int *)(lVar21 + 0x21c);
    lVar23 = *(long *)(lVar21 + 0x210) - lVar22;
    do {
      if ((((*(short *)(lVar23 + 0x24) == *(short *)puVar5) && (iVar19 <= *(int *)(lVar23 + 0x48)))
          && (*(int *)(lVar23 + 0x38) <= iVar19 + 1)) &&
         ((iVar27 <= *(int *)(lVar23 + 0x4c) && (*(int *)(lVar23 + 0x3c) <= iVar27 + 1)))) {
        local_104 = 1;
        goto LAB_03722f20;
      }
      lVar23 = *(long *)(lVar23 + lVar22 + 8) - lVar22;
    } while (lVar23 != (lVar21 + 0x208) - lVar22);
  }
  local_104 = 0;
LAB_03722f20:
  fVar33 = *(float *)(*param_2 + 0x230);
  lVar21 = *(long *)puVar3;
  pbVar17 = PTR_DAT_04bb32e0;
  if (lVar21 == 0) {
LAB_03722f7c:
    if (7 < *pbVar17) {
LAB_03722f88:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar21 = **(long **)PTR_DAT_04bb27d0;
        bVar18 = *(byte *)(lVar21 + 0x473);
        pbVar17 = PTR_DAT_04bb5038;
        if ((long)(char)bVar18 != 0xffffffffffffffff) {
          puVar15 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar18 & 0xffffffffU) * 0x20;
          if (7 < bVar18) {
            puVar15 = (uint *)(lVar21 + 0x48);
          }
          if ((*puVar15 & 8) != 0) {
            pbVar17 = (byte *)(lVar21 + 0x471);
          }
        }
        bVar18 = *pbVar17;
        bVar8 = 7 < bVar18;
        if (bVar8) {
          bVar18 = 0xff;
        }
        local_c0 = (undefined **)CONCAT71(local_c0._1_7_,bVar18);
        if (!bVar8) goto LAB_03723008;
      }
      pbVar17 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar21 + 0x15c) != 0) {
      pbVar17 = (byte *)(lVar21 + 0x158);
    }
    if (7 < *pbVar17) {
      if ((*(int *)(lVar21 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_03722f7c;
      }
      goto LAB_03722f88;
    }
  }
  bVar18 = *pbVar17;
  if (7 < bVar18) {
    bVar18 = 0xff;
  }
  local_c0 = (undefined **)CONCAT71(local_c0._1_7_,bVar18);
LAB_03723008:
  local_d8 = fVar30;
  uVar26 = FUN_02546c1c(&local_c0);
  uVar14 = FUN_037234d0(&local_d0,&local_e0);
  if ((uVar14 & 1) == 0) {
    bVar8 = false;
  }
  else {
    fVar31 = fVar7 - (float)local_d0;
    bVar8 = SQRT((fVar30 - local_c8) * (fVar30 - local_c8) + fVar31 * fVar31) < 8.0;
  }
  local_f0[0] = fVar33;
  local_8c[0] = (float)((uint)local_8c[0] & 0xffffff00);
  local_a0 = fVar7;
  uStack_9c = local_e0._4_4_;
  local_94 = 0x40200000;
  pfStack_b8 = &local_a0;
  local_c0 = &PTR_FUN_04a77180;
  local_b0 = local_f0;
  pfStack_a8 = local_8c;
  iVar1 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  local_98 = fVar30;
  if (iVar1 == 0) {
    bVar9 = false;
  }
  else {
    lVar21 = (long)iVar1 << 3;
    puVar29 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_c0)(&local_c0,*puVar29);
      lVar21 = lVar21 + -8;
      puVar29 = puVar29 + 1;
    } while (lVar21 != 0);
    bVar9 = local_8c[0]._0_1_ != '\0';
  }
  if ((((local_104 & uVar26) == 0) && (!bVar9)) &&
     (!bVar8 && ((iVar27 + 1 < iVar12 || iVar24 < iVar27) ||
                (iVar19 + 1 < iVar11 || iVar28 < iVar19)))) {
    return 0;
  }
  iVar12 = *(int *)(param_3 + 0x20);
  iVar28 = *(int *)(param_3 + 0x24);
  iVar24 = *(int *)(param_3 + 0x10);
  iVar11 = *(int *)(param_3 + 0x14);
  local_f0[0] = 0.0;
  local_f0[1] = 0.0;
  uVar6 = local_f0._0_8_;
  local_f0[1] = 0.0;
  iVar19 = iVar24;
  if (iVar28 + 1 != iVar11) {
    iVar27 = iVar24;
    local_f0._0_8_ = uVar6;
    do {
      if ((iVar27 != iVar12) && (iVar11 != *(int *)(param_3 + 0x24))) {
        fVar30 = (float)iVar27 * 5.0 + 5.0;
        local_f0[2] = (float)iVar11 * 5.0 + 5.0;
        local_f0[0] = fVar30;
        lVar21 = *(long *)PTR_DAT_04bb27c8;
        if ((lVar21 == 0) ||
           ((*(long *)(lVar21 + 0xa8) == 0 || (*(char *)(lVar21 + 0x11c8) != '\0')))) {
          uStack_9c = 0xc3fa0000;
          local_a0 = fVar30;
        }
        else {
          uStack_9c = FUN_0093a950(lVar21 + 0x28,local_f0,0);
          local_a0 = local_f0[0];
        }
        local_f0[1] = (float)uStack_9c;
        pfStack_b8 = &local_a0;
        local_90[0] = '\0';
        local_94 = 0x40200000;
        local_c0 = &PTR_FUN_04a77180;
        iVar12 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
        local_b0 = local_8c;
        pfStack_a8 = (float *)local_90;
        local_98 = local_f0[2];
        local_8c[0] = fVar33;
        if (iVar12 != 0) {
          lVar21 = (long)iVar12 << 3;
          puVar29 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
          do {
            (*(code *)*local_c0)(&local_c0,*puVar29);
            lVar21 = lVar21 + -8;
            puVar29 = puVar29 + 1;
          } while (lVar21 != 0);
          if (local_90[0] != '\0') {
            iVar12 = *(int *)(param_3 + 0x20);
            iVar19 = *(int *)(param_3 + 0x10);
            goto LAB_0372326c;
          }
        }
        puVar16 = &local_f4;
        lVar21 = *param_2;
        local_f4 = *(undefined4 *)(lVar20 + 0x2b4);
        goto LAB_03723424;
      }
LAB_0372326c:
      if (iVar27 < iVar12) {
        iVar27 = iVar27 + 1;
      }
      else {
        iVar11 = iVar11 + 1;
        iVar27 = iVar19;
      }
    } while ((iVar24 != iVar27) || (iVar28 + 1 != iVar11));
    iVar11 = *(int *)(param_3 + 0x14);
    iVar28 = *(int *)(param_3 + 0x24);
  }
  puVar3 = PTR_DAT_04bb39d8;
  local_f0[0] = ((float)iVar19 * 5.0 + (float)iVar12 * 5.0 + 5.0) * 0.5;
  local_f0[2] = ((float)iVar11 * 5.0 + (float)iVar28 * 5.0 + 5.0) * 0.5;
  puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar10 = puVar15[3];
  uVar26 = *puVar15 ^ *puVar15 << 0xb;
  *puVar15 = puVar15[1];
  puVar15[1] = puVar15[2];
  uVar26 = uVar26 >> 8 ^ uVar10 >> 0x13 ^ uVar26 ^ uVar10;
  puVar15[2] = uVar10;
  puVar15[3] = uVar26;
  local_f0[0] = local_f0[0] + ((float)(uVar26 >> 9 | 0x3f800000) + -1.0) * 5.0 + -2.5;
  puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar3);
  uVar26 = *puVar15 ^ *puVar15 << 0xb;
  uVar10 = puVar15[3];
  *puVar15 = puVar15[1];
  puVar15[1] = puVar15[2];
  uVar26 = uVar26 >> 8 ^ uVar10 >> 0x13 ^ uVar26 ^ uVar10;
  puVar15[2] = uVar10;
  puVar15[3] = uVar26;
  local_f0[2] = local_f0[2] + ((float)(uVar26 >> 9 | 0x3f800000) + -1.0) * 5.0 + -2.5;
  lVar21 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar21 == 0) || (*(long *)(lVar21 + 0xa8) == 0)) || (*(char *)(lVar21 + 0x11c8) != '\0')) {
    uVar32 = 0xc3fa0000;
  }
  else {
    uVar32 = FUN_0093a950(lVar21 + 0x28,local_f0,0);
  }
  lVar21 = *param_2;
  puVar16 = &local_f8;
  local_f8 = *(undefined4 *)(lVar20 + 0x2b4);
  local_f0[1] = (float)uVar32;
LAB_03723424:
  FUN_01e39778(lVar21,local_f0,puVar16,0);
  return 1;
}

