
/* WARNING: Removing unreachable block (ram,0x01f4511c) */
/* WARNING: Removing unreachable block (ram,0x01f4512c) */

undefined8 FUN_01f44f60(long *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined8 ***pppuVar13;
  long lVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 ****local_118;
  uint local_110;
  undefined8 ****local_108;
  undefined8 ****ppppuStack_100;
  int local_f8;
  undefined8 ****local_f0;
  undefined8 ***local_e8;
  undefined8 ***local_e0;
  undefined8 ***local_d8 [3];
  undefined8 **local_c0 [3];
  undefined8 *local_a8 [3];
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  long lStack_80;
  float local_78;
  float fStack_74;
  float local_70;
  int iStack_6c;
  
  lVar14 = *(long *)(param_1[1] + 0x68);
  uVar8 = FUN_021f2ed0(lVar14 + 0x278,0);
  if ((uVar8 & 1) == 0) {
LAB_01f457a0:
    uVar9 = 0;
  }
  else {
    lVar10 = param_1[1];
    if (lVar10 != 0) {
      uVar7 = *(uint *)(lVar10 + 0x508);
      if (uVar7 == 0xffffffff) {
        uVar7 = *(uint *)(lVar10 + 0x50c);
        if (uVar7 != 0xffffffff) {
          pcVar12 = &DAT_05454358 + (ulong)uVar7 * 0x2d8;
          if (0x10 < uVar7) {
            pcVar12 = &DAT_05454358;
          }
          if (*pcVar12 != '\0') {
            cVar5 = pcVar12[0x110];
            goto joined_r0x01f45024;
          }
        }
      }
      else {
        puVar11 = &DAT_053fe348 + (ulong)uVar7 * 0xba0;
        if (9 < uVar7) {
          puVar11 = &DAT_053fe348;
        }
        cVar5 = puVar11[0x6d8];
joined_r0x01f45024:
        if (cVar5 != '\0') {
          FUN_01e5e100(param_1[2]);
          param_1[0x15ab] = param_1[0x15ab] | 0x1000;
          goto LAB_01f457a0;
        }
      }
    }
    fVar18 = *(float *)(lVar14 + 0x278);
    fVar19 = *(float *)(lVar14 + 0x280);
    fVar22 = (float)((int)fVar18 / 5) * 5.0 + 5.0;
    fVar20 = (float)((int)fVar18 / 5) * 5.0;
    fVar24 = fVar18 - fVar20;
    fVar25 = (float)((int)fVar19 / 5) * 5.0 + 5.0;
    fVar23 = (float)((int)fVar19 / 5) * 5.0;
    fVar18 = fVar18 - fVar22;
    fVar21 = -fVar24;
    if (0.0 <= fVar24) {
      fVar21 = fVar24;
    }
    fVar24 = -fVar18;
    if (0.0 <= fVar18) {
      fVar24 = fVar18;
    }
    fVar18 = fVar19 - fVar23;
    fVar19 = fVar19 - fVar25;
    if (fVar24 <= fVar21) {
      fVar20 = fVar22;
    }
    fVar21 = -fVar18;
    if (0.0 <= fVar18) {
      fVar21 = fVar18;
    }
    fVar18 = -fVar19;
    if (0.0 <= fVar19) {
      fVar18 = fVar19;
    }
    if (fVar18 <= fVar21) {
      fVar23 = fVar25;
    }
    uStack_128._4_4_ = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
    local_120 = (undefined8 ****)((ulong)local_120._4_4_ << 0x20);
    iVar6 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
    local_88 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    lStack_80 = *(long *)PTR_DAT_04bb27c8 + 0x28;
    local_8c = *(int *)(lVar14 + 0x2b4) + 0x20000000U >> 0x1e;
    local_90 = *(int *)(lVar14 + 0x2b4) + 0xa0000000U >> 0x1e;
    puVar4 = &DAT_053a95c0 + (ulong)local_8c * 2;
    if (3 < local_8c) {
      puVar4 = &DAT_053a95c0;
    }
    iVar1 = *(int *)(puVar4 + 1) + uStack_128._4_4_;
    iVar2 = *(int *)((long)puVar4 + 0xc) + iVar6;
    uVar8 = FUN_035aa210(iVar1 + -1,iVar2 + -1,&local_88);
    if (((((uVar8 & 1) == 0) || (uVar8 = FUN_035aa210(iVar1 + -1,iVar2,&local_88), (uVar8 & 1) == 0)
         ) || (uVar8 = FUN_035aa210(iVar1,iVar2 + -1,&local_88), (uVar8 & 1) == 0)) ||
       (uVar8 = FUN_035aa210(iVar1,iVar2,&local_88), (uVar8 & 1) == 0)) {
      local_118 = (undefined8 ****)&local_120;
      local_110 = 0;
      ppppuStack_100 = &local_f0;
      local_d8[0] = local_c0;
      local_c0[0] = local_a8;
      local_a8[0] = (undefined8 *)0x0;
      local_f8 = 4;
      if ((local_8c == 0) || (local_90 == 0)) {
        uVar7 = 0;
        local_108 = ppppuStack_100;
        local_f0 = local_d8;
      }
      else {
        local_118 = &local_e8;
        local_e8 = (undefined8 ***)&local_120;
        uVar7 = 1;
        local_f0 = (undefined8 ****)((ulong)local_d8 & 0xffffffff00000000);
        local_110 = 1;
        local_108 = local_d8;
        local_e0 = local_e8;
      }
      ppppuVar17 = local_108;
      local_120 = local_118;
      if (((local_8c != 1) && (local_90 != 1)) && (uVar7 < 4)) {
        if (local_108 != (undefined8 ****)0x0) {
          local_108 = (undefined8 ****)*local_108;
        }
        *(undefined4 *)ppppuVar17 = 1;
        local_120 = ppppuVar17 + 1;
        *local_120 = (undefined8 ***)0x0;
        ppppuVar17[2] = (undefined8 ***)&local_120;
        *local_120 = local_118;
        if (local_118 != (undefined8 ****)0x0) {
          local_118[1] = local_120;
        }
        uVar7 = local_110 + 1;
        local_110 = uVar7;
      }
      ppppuVar17 = local_108;
      if (((local_8c != 2) && (local_90 != 2)) && ((int)uVar7 < local_f8)) {
        if (local_108 != (undefined8 ****)0x0) {
          local_108 = (undefined8 ****)*local_108;
        }
        *(undefined4 *)ppppuVar17 = 2;
        ppppuVar15 = ppppuVar17 + 1;
        *ppppuVar15 = (undefined8 ***)0x0;
        ppppuVar17[2] = (undefined8 ***)&local_120;
        *ppppuVar15 = local_120;
        if (local_120 != (undefined8 ****)0x0) {
          local_120[1] = ppppuVar15;
        }
        uVar7 = local_110 + 1;
        local_120 = ppppuVar15;
        local_110 = uVar7;
      }
      ppppuVar17 = local_108;
      if (((local_8c != 3) && (local_90 != 3)) && ((int)uVar7 < local_f8)) {
        if (local_108 != (undefined8 ****)0x0) {
          local_108 = (undefined8 ****)*local_108;
        }
        *(undefined4 *)ppppuVar17 = 3;
        ppppuVar15 = ppppuVar17 + 1;
        *ppppuVar15 = (undefined8 ***)0x0;
        ppppuVar17[2] = (undefined8 ***)&local_120;
        *ppppuVar15 = local_120;
        if (local_120 != (undefined8 ****)0x0) {
          local_120[1] = ppppuVar15;
        }
        local_110 = local_110 + 1;
        local_120 = ppppuVar15;
      }
      ppppuVar17 = &local_118;
      uVar7 = nn::os::GetSystemTick();
      local_78 = (float)((uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1);
      fStack_74 = (float)(((uint)local_78 ^ (uint)local_78 >> 0x1e) * 0x6c078965 + 2);
      local_70 = (float)(((uint)fStack_74 ^ (uint)fStack_74 >> 0x1e) * 0x6c078965 + 3);
      iStack_6c = ((uint)local_70 ^ (uint)local_70 >> 0x1e) * 0x6c078965 + 4;
      FUN_038aaa70(&local_120,&local_78);
      if (local_118 != (undefined8 ****)&local_120) {
        ppppuVar16 = local_118 + -1;
        ppppuVar15 = local_118;
        do {
          puVar4 = &DAT_053a95c0 + (ulong)*(uint *)(ppppuVar15 + -1) * 2;
          if (3 < *(uint *)(ppppuVar15 + -1)) {
            puVar4 = &DAT_053a95c0;
          }
          iVar1 = *(int *)(puVar4 + 1) + uStack_128._4_4_;
          iVar2 = *(int *)((long)puVar4 + 0xc) + iVar6;
          uVar8 = FUN_035aa210(iVar1 + -1,iVar2 + -1,&local_88);
          if ((((uVar8 & 1) != 0) &&
              (uVar8 = FUN_035aa210(iVar1 + -1,iVar2,&local_88), (uVar8 & 1) != 0)) &&
             ((uVar8 = FUN_035aa210(iVar1,iVar2 + -1,&local_88), (uVar8 & 1) != 0 &&
              (uVar8 = FUN_035aa210(iVar1,iVar2,&local_88), (uVar8 & 1) != 0)))) {
            uVar8 = (ulong)((float)*(int *)ppppuVar16 * 90.0 * 11930465.0);
            fVar20 = (float)uVar8;
            pfVar3 = (float *)(PTR_DAT_04bb2d00 + (uVar8 >> 0x19 & 0x7f) * 0x10);
            fVar23 = (float)((uint)fVar20 >> 1 & 0xffffff) * 5.9604645e-08;
            fVar21 = *pfVar3 + fVar23 * pfVar3[1];
            fVar23 = pfVar3[2] + fVar23 * pfVar3[3];
            fVar18 = fVar21 * 0.0;
            fVar23 = fVar23 + fVar23;
            fVar22 = fVar21 * (fVar21 + fVar21);
            fVar19 = (fVar21 + fVar21) * fVar18;
            fVar25 = fVar18 * (fVar18 + fVar18);
            fVar24 = fVar21 * (fVar18 + fVar18);
            fVar18 = fVar18 * fVar23;
            fVar21 = fVar21 * fVar23;
            local_78 = *(float *)(lVar14 + 0x278) +
                       (fVar21 + fVar25 + (fVar24 - fVar18) * 0.0 + ((1.0 - fVar22) - fVar25) * 0.0)
                       * 10.0;
            fStack_74 = *(float *)(lVar14 + 0x27c) +
                        ((fVar19 - fVar18) +
                        ((1.0 - fVar25) - fVar25) * 0.0 + (fVar18 + fVar24) * 0.0) * 10.0;
            local_70 = *(float *)(lVar14 + 0x280) +
                       (((1.0 - fVar25) - fVar22) +
                       (fVar19 + fVar18) * 0.0 + (fVar25 - fVar21) * 0.0) * 10.0;
            (**(code **)(**(long **)(param_1[1] + 0x68) + 0x100))
                      (*(long **)(param_1[1] + 0x68),&local_78);
            local_78 = fVar20;
            (**(code **)(**(long **)(param_1[1] + 0x68) + 0x160))
                      (*(long **)(param_1[1] + 0x68),&local_78);
            uVar7 = 1;
            goto LAB_01f45780;
          }
          ppppuVar15 = (undefined8 ****)ppppuVar15[1];
          ppppuVar16 = ppppuVar15 + -1;
        } while (ppppuVar16 != (undefined8 ****)&uStack_128);
      }
      uVar7 = (**(code **)(*param_1 + 0x388))(param_1,&local_78);
      if ((uVar7 & 1) != 0) {
        (**(code **)(**(long **)(param_1[1] + 0x68) + 0x100))
                  (*(long **)(param_1[1] + 0x68),&local_78);
        (**(code **)(**(long **)(param_1[1] + 0x68) + 0x160))
                  (*(long **)(param_1[1] + 0x68),PTR_DAT_04bb2ce0);
      }
      uVar7 = uVar7 & 1;
LAB_01f45780:
      do {
        pppuVar13 = *ppppuVar17;
        ppppuVar17 = (undefined8 ****)(pppuVar13 + 1);
      } while (pppuVar13 != (undefined8 ***)&local_120);
      if (uVar7 == 0) goto LAB_01f457a0;
    }
    else {
      uVar8 = (ulong)((float)(int)local_8c * 90.0 * 11930465.0);
      pfVar3 = (float *)(PTR_DAT_04bb2d00 + (uVar8 >> 0x19 & 0x7f) * 0x10);
      fVar20 = (float)((uint)uVar8 >> 1 & 0xffffff) * 5.9604645e-08;
      fVar23 = *pfVar3 + fVar20 * pfVar3[1];
      fVar20 = pfVar3[2] + fVar20 * pfVar3[3];
      fVar21 = fVar23 * 0.0;
      fVar20 = fVar20 + fVar20;
      fVar19 = fVar23 * (fVar23 + fVar23);
      fVar18 = (fVar23 + fVar23) * fVar21;
      fVar24 = fVar21 * (fVar21 + fVar21);
      fVar22 = fVar23 * (fVar21 + fVar21);
      fVar21 = fVar21 * fVar20;
      fVar23 = fVar23 * fVar20;
      local_120 = (undefined8 ****)
                  CONCAT44(*(float *)(lVar14 + 0x27c) +
                           ((fVar18 - fVar21) +
                           ((1.0 - fVar24) - fVar24) * 0.0 + (fVar21 + fVar22) * 0.0) * 10.0,
                           *(float *)(lVar14 + 0x278) +
                           (fVar23 + fVar24 +
                           (fVar22 - fVar21) * 0.0 + ((1.0 - fVar19) - fVar24) * 0.0) * 10.0);
      local_118 = (undefined8 ****)
                  CONCAT44(local_118._4_4_,
                           *(float *)(lVar14 + 0x280) +
                           (((1.0 - fVar24) - fVar19) +
                           (fVar18 + fVar21) * 0.0 + (fVar24 - fVar23) * 0.0) * 10.0);
      (**(code **)(**(long **)(param_1[1] + 0x68) + 0x100))
                (*(long **)(param_1[1] + 0x68),&local_120);
    }
    uVar9 = 1;
  }
  return uVar9;
}

