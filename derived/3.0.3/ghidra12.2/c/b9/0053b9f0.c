
/* WARNING: Removing unreachable block (ram,0x0053ba74) */

undefined8 FUN_0053b9f0(long param_1,int *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  int *piVar23;
  long lVar24;
  undefined4 *puVar25;
  uint local_d0 [2];
  long local_c8;
  undefined4 local_c0;
  uint local_bc;
  long local_b8;
  undefined4 local_b0;
  uint local_ac;
  long local_a0;
  undefined4 local_98;
  uint local_94;
  long local_90;
  undefined4 local_88;
  uint local_84;
  undefined4 local_78 [2];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  iVar13 = *param_2;
  if (iVar13 < 0) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x270) + 0x38) <= iVar13) {
    return 0;
  }
  uVar19 = param_2[4];
  if (uVar19 != param_2[8]) {
    return 0;
  }
  if ((int)uVar19 < 1) {
    bVar7 = true;
  }
  else {
    uVar8 = *(uint *)(*(long *)(*(long *)(*(long *)(param_1 + 0x270) + 0x30) + (long)iVar13 * 8) +
                     0x20);
    if (uVar19 == 1) {
      lVar15 = 0;
      bVar7 = true;
LAB_0053bac4:
      bVar7 = (bool)(bVar7 & *(uint *)(*(long *)(param_2 + 2) + lVar15 * 4) < uVar8);
    }
    else {
      lVar15 = 0;
      bVar7 = true;
      do {
        puVar2 = (uint *)(*(long *)(param_2 + 2) + lVar15 * 4);
        lVar15 = lVar15 + 2;
        bVar7 = (bool)(bVar7 & *puVar2 < uVar8 & puVar2[1] < uVar8);
      } while ((ulong)uVar19 - ((ulong)uVar19 & 1) != lVar15);
      if ((uVar19 & 1) != 0) goto LAB_0053bac4;
    }
    if (0 < (int)uVar19) {
      lVar24 = 0;
      lVar15 = 0;
      uVar19 = 1;
      do {
        uVar8 = FUN_004d0f70(*(long *)(param_2 + 6) + lVar24);
        lVar15 = lVar15 + 1;
        uVar19 = uVar19 & uVar8;
        lVar24 = lVar24 + 0x40;
      } while (lVar15 < param_2[8]);
      goto joined_r0x0053bbec;
    }
  }
  uVar19 = 1;
joined_r0x0053bbec:
  uVar18 = 0;
  if ((bVar7) && (uVar18 = 0, uVar19 != 0)) {
    puVar20 = *(undefined4 **)(param_1 + 0x260);
    if (puVar20 == (undefined4 *)0x0) {
      puVar20 = (undefined4 *)(*(long *)(param_1 + 0x18) + 0xa8);
    }
    local_78[0] = *puVar20;
    local_70 = (undefined4 *)0x0;
    local_68 = 0x8000000000000000;
    uVar19 = puVar20[4];
    puVar25 = *(undefined4 **)(puVar20 + 2);
    uVar18 = *(undefined8 *)PTR_PTR_04bd4d20;
    if ((int)uVar19 < 1) {
      local_70 = (undefined4 *)0x0;
      local_68 = -0x8000000000000000;
    }
    else {
      local_d0[0] = uVar19;
      local_70 = (undefined4 *)FUN_00421ed0(uVar18,4,local_d0);
      local_68 = CONCAT44(local_d0[0],uVar19);
      uVar8 = uVar19 & 3;
      puVar10 = local_70;
      if (2 < uVar19 - 1) {
        iVar13 = uVar8 - uVar19;
        puVar9 = local_70;
        do {
          *puVar9 = *puVar25;
          puVar9[1] = puVar25[1];
          puVar9[2] = puVar25[2];
          puVar1 = puVar25 + 3;
          puVar10 = puVar9 + 4;
          puVar25 = puVar25 + 4;
          puVar9[3] = *puVar1;
          iVar13 = iVar13 + 4;
          puVar9 = puVar10;
        } while (iVar13 != 0);
      }
      if (uVar8 != 0) {
        iVar13 = -uVar8;
        do {
          iVar13 = iVar13 + 1;
          *puVar10 = *puVar25;
          puVar10 = puVar10 + 1;
          puVar25 = puVar25 + 1;
        } while (iVar13 != 0);
      }
    }
    local_60 = (undefined8 *)0x0;
    local_58 = 0x8000000000000000;
    uVar19 = puVar20[8];
    puVar21 = *(undefined8 **)(puVar20 + 6);
    local_d0[0] = uVar19;
    if ((int)uVar19 < 1) {
      local_60 = (undefined8 *)0x0;
      local_58 = -0x8000000000000000;
      piVar23 = *(int **)(param_1 + 0x260);
    }
    else {
      local_60 = (undefined8 *)FUN_00421ed0(uVar18,0x40,local_d0);
      local_58 = CONCAT44(local_d0[0],uVar19);
      uVar8 = uVar19 & 3;
      puVar12 = local_60;
      if (2 < uVar19 - 1) {
        iVar13 = uVar8 - uVar19;
        puVar11 = local_60;
        puVar22 = puVar21;
        do {
          uVar14 = puVar22[1];
          puVar11[3] = puVar22[3];
          uVar16 = puVar22[2];
          *puVar11 = *puVar22;
          puVar11[1] = uVar14;
          puVar11[2] = uVar16;
          uVar16 = puVar22[5];
          puVar11[7] = puVar22[7];
          uVar14 = puVar22[4];
          uVar17 = puVar22[6];
          puVar11[5] = uVar16;
          puVar11[6] = uVar17;
          puVar11[4] = uVar14;
          uVar3 = puVar22[0xd];
          uVar14 = puVar22[0xe];
          uVar4 = puVar22[0xf];
          puVar11[0xc] = puVar22[0xc];
          uVar16 = puVar22[8];
          uVar5 = puVar22[9];
          puVar12 = puVar11 + 0x20;
          uVar17 = puVar22[10];
          uVar6 = puVar22[0xb];
          puVar11[0xd] = uVar3;
          puVar11[0xe] = uVar14;
          puVar11[0xf] = uVar4;
          puVar21 = puVar22 + 0x20;
          puVar11[10] = uVar17;
          puVar11[0xb] = uVar6;
          iVar13 = iVar13 + 4;
          puVar11[8] = uVar16;
          puVar11[9] = uVar5;
          uVar14 = puVar22[0x10];
          uVar16 = puVar22[0x11];
          uVar17 = puVar22[0x13];
          puVar11[0x12] = puVar22[0x12];
          puVar11[0x13] = uVar17;
          puVar11[0x10] = uVar14;
          puVar11[0x11] = uVar16;
          uVar14 = puVar22[0x14];
          uVar16 = puVar22[0x15];
          uVar17 = puVar22[0x17];
          puVar11[0x16] = puVar22[0x16];
          puVar11[0x17] = uVar17;
          puVar11[0x14] = uVar14;
          puVar11[0x15] = uVar16;
          uVar14 = puVar22[0x18];
          uVar16 = puVar22[0x19];
          uVar17 = puVar22[0x1b];
          puVar11[0x1a] = puVar22[0x1a];
          puVar11[0x1b] = uVar17;
          puVar11[0x18] = uVar14;
          puVar11[0x19] = uVar16;
          uVar14 = puVar22[0x1c];
          uVar16 = puVar22[0x1d];
          uVar17 = puVar22[0x1f];
          puVar11[0x1e] = puVar22[0x1e];
          puVar11[0x1f] = uVar17;
          puVar11[0x1c] = uVar14;
          puVar11[0x1d] = uVar16;
          puVar11 = puVar12;
          puVar22 = puVar21;
        } while (iVar13 != 0);
      }
      if (uVar8 != 0) {
        iVar13 = -uVar8;
        do {
          uVar14 = puVar21[1];
          puVar12[3] = puVar21[3];
          puVar12[1] = uVar14;
          uVar14 = puVar21[5];
          puVar12[7] = puVar21[7];
          puVar12[5] = uVar14;
          uVar14 = *puVar21;
          puVar12[2] = puVar21[2];
          *puVar12 = uVar14;
          uVar14 = puVar21[4];
          puVar12[6] = puVar21[6];
          puVar12[4] = uVar14;
          puVar12 = puVar12 + 8;
          puVar21 = puVar21 + 8;
          iVar13 = iVar13 + 1;
        } while (iVar13 != 0);
      }
      piVar23 = *(int **)(param_1 + 0x260);
    }
    if (piVar23 == (int *)0x0) {
      piVar23 = (int *)FUN_00438810(0x28);
      FUN_0053c900();
      *(int **)(param_1 + 0x260) = piVar23;
    }
    *piVar23 = *param_2;
    if (piVar23 != param_2) {
      uVar16 = *(undefined8 *)(param_2 + 2);
      iVar13 = param_2[4];
      uVar14 = *(undefined8 *)(piVar23 + 2);
      if ((int)(piVar23[5] & 0x3fffffffU) < iVar13) {
        uVar14 = FUN_004267f0(uVar18,iVar13,4,uVar14,piVar23[4]);
        *(undefined8 *)(piVar23 + 2) = uVar14;
      }
      FUN_0043aa30(uVar14,uVar16,(long)iVar13 << 2);
      piVar23[4] = iVar13;
      uVar16 = *(undefined8 *)(param_2 + 6);
      iVar13 = param_2[8];
      uVar14 = *(undefined8 *)(piVar23 + 6);
      if ((int)(piVar23[9] & 0x3fffffffU) < iVar13) {
        uVar14 = FUN_004267f0(uVar18,iVar13,0x40,uVar14,piVar23[8]);
        *(undefined8 *)(piVar23 + 6) = uVar14;
      }
      FUN_0043aa30(uVar14,uVar16,(long)iVar13 << 6);
      piVar23[8] = iVar13;
    }
    FUN_0053bfb0(local_d0,local_78,*(undefined8 *)(param_1 + 0x260),0);
    FUN_0053c580(*(long *)(param_1 + 0x270) + 0x108,param_1,local_d0);
    local_88 = 0;
    if ((-1 < (int)local_84) && (local_90 != 0)) {
      FUN_00421f90(uVar18,local_90,0x40,local_84 & 0x3fffffff);
    }
    local_90 = 0;
    local_84 = 0x80000000;
    local_98 = 0;
    if ((-1 < (int)local_94) && (local_a0 != 0)) {
      FUN_00421f90(uVar18,local_a0,4,local_94 & 0x3fffffff);
    }
    local_a0 = 0;
    local_94 = 0x80000000;
    local_b0 = 0;
    if ((-1 < (int)local_ac) && (local_b8 != 0)) {
      FUN_00421f90(uVar18,local_b8,0x40,local_ac & 0x3fffffff);
    }
    local_ac = 0x80000000;
    local_b8 = 0;
    local_c0 = 0;
    if ((-1 < (int)local_bc) && (local_c8 != 0)) {
      FUN_00421f90(uVar18,local_c8,4,local_bc & 0x3fffffff);
    }
    lVar15 = local_58;
    uVar19 = local_58._4_4_;
    local_58 = (ulong)local_58._4_4_ << 0x20;
    if ((-1 < lVar15) && (local_60 != (undefined8 *)0x0)) {
      FUN_00421f90(uVar18,local_60,0x40,uVar19 & 0x3fffffff);
    }
    lVar15 = local_68;
    local_58 = CONCAT44(0x80000000,(undefined4)local_58);
    uVar19 = local_68._4_4_;
    local_60 = (undefined8 *)0x0;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    if ((-1 < lVar15) && (local_70 != (undefined4 *)0x0)) {
      FUN_00421f90(uVar18,local_70,4,uVar19 & 0x3fffffff);
    }
    uVar18 = 1;
  }
  return uVar18;
}

