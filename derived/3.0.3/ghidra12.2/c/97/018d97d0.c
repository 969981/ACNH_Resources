
undefined8 FUN_018d97d0(long *param_1,float *param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined2 *puVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  short *psVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  undefined8 local_a0;
  undefined8 *puStack_98;
  int local_90;
  int iStack_8c;
  undefined8 *local_88;
  int local_80;
  int iStack_7c;
  undefined8 *local_78;
  int local_70;
  int iStack_6c;
  uint local_68;
  uint local_64;
  
  lVar10 = *param_1;
  fVar18 = (float)*(int *)(param_3 + 0xc) * 10.0;
  fVar16 = (float)*(int *)(param_3 + 8) * 10.0;
  fVar23 = fVar18 + 2.5;
  fVar22 = fVar16 + 2.5;
  fVar18 = fVar18 + 10.0 + -2.5;
  fVar16 = fVar16 + 10.0 + -2.5;
  iVar21 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
  iVar2 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  iVar3 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar4 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar17 = iVar21;
  if (iVar3 <= iVar21) {
    iVar17 = iVar3;
  }
  if (iVar21 <= iVar3) {
    iVar21 = iVar3;
  }
  iVar3 = iVar2;
  if (iVar4 <= iVar2) {
    iVar3 = iVar4;
  }
  if (iVar2 <= iVar4) {
    iVar2 = iVar4;
  }
  *(int *)(lVar10 + 0x10) = iVar17;
  *(int *)(lVar10 + 0x14) = iVar3;
  *(int *)(lVar10 + 0x20) = iVar21;
  *(int *)(lVar10 + 0x24) = iVar2;
  lVar10 = *param_1;
  lVar13 = *(long *)param_1[1];
  if ((((*(int *)(lVar10 + 0x10) < *(int *)(lVar13 + 0x20)) ||
       (*(int *)(lVar13 + 0x30) < *(int *)(lVar10 + 0x20))) ||
      (*(int *)(lVar10 + 0x14) < *(int *)(lVar13 + 0x24))) ||
     (*(int *)(lVar13 + 0x34) < *(int *)(lVar10 + 0x24))) {
    return 0;
  }
  local_78 = &DAT_048f9750;
  fVar18 = (float)*(int *)(param_3 + 0xc) * 10.0 + 2.5;
  fVar16 = (float)*(int *)(param_3 + 8) * 10.0 + 2.5;
  local_70 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iStack_6c = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  puVar8 = (undefined2 *)FUN_01a5190c(param_1[3],0,&local_78,param_1[4]);
  puVar11 = (undefined2 *)param_1[2];
  *puVar11 = *puVar8;
  *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar8 + 1);
  *(undefined1 *)((long)puVar11 + 3) = *(undefined1 *)((long)puVar8 + 3);
  *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar8 + 2);
  if ((*(undefined8 **)param_1[5] != (undefined8 *)0x0) &&
     (uVar9 = (*(code *)**(undefined8 **)param_1[5])
                        (param_1[6],param_1[2],&local_78,param_1[7] + 0xc), (uVar9 & 1) == 0)) {
    return 0;
  }
  puVar6 = PTR_DAT_04bb4008;
  piVar12 = (int *)param_1[8];
  if (((*piVar12 != 2) && (*piVar12 != 0xc)) && (*piVar12 != 0x13)) {
    psVar15 = (short *)param_1[2];
    uVar1 = *(undefined4 *)(param_1[7] + 0xc);
    uVar9 = FUN_01a12b00(*(undefined8 *)PTR_DAT_04bb4008,uVar1);
    if ((uVar9 & 1) != 0) {
      if (*psVar15 == -2) {
        return 0;
      }
      local_a0 = (undefined *)
                 CONCAT44(*(undefined4 *)(psVar15 + 2),
                          CONCAT13(*(undefined1 *)((long)psVar15 + 3),
                                   CONCAT12((char)psVar15[1],*psVar15)));
      local_64 = FUN_01241ca0(&local_a0);
      if (local_64 == 0x13) {
        return 0;
      }
      local_68 = 0;
      uVar9 = FUN_01a12d50(*(undefined8 *)puVar6,&local_68,uVar1);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      if ((local_68 >> (ulong)(local_64 & 0x1f) & 1) == 0) {
        return 0;
      }
    }
  }
  lVar10 = DAT_05150358;
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar7 = FUN_0277d6c4(param_1[2]);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      fVar16 = (float)*(int *)(param_1[4] + 0xc) * 5.0 + 5.0;
      fVar18 = (float)*(int *)(param_1[4] + 8) * 5.0 + 5.0;
      uVar7 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
      if ((int)(uVar7 & 0xfffffffe) < DAT_05233970) {
        return 0;
      }
      if (DAT_05233980 < (int)(uVar7 & 0xfffffffe)) {
        return 0;
      }
      uVar5 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
      uVar14 = uVar5 & 0xfffffffe;
      if ((int)uVar14 < DAT_05233974) {
        return 0;
      }
      if (DAT_05233984 < (int)uVar14) {
        return 0;
      }
      uVar14 = (uVar5 * 0x80 & 0xffffff00) + ((int)uVar7 >> 1);
      if (uVar14 >> 0xf != 0) {
        return 0;
      }
      if ((*(uint *)(PTR_DAT_04bbbb80 + (ulong)(uVar14 >> 5) * 4 + 8) >> (ulong)(uVar7 >> 1 & 0x1f)
          & 1) == 0) {
        return 0;
      }
      local_88 = &DAT_048f9750;
      local_a0 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_98 = &DAT_048f9750;
      fVar22 = (float)(int)((int)((float)(int)fVar18 / 10.0) - (uint)(fVar18 < 0.0)) * 10.0;
      fVar19 = (float)(int)((int)((float)(int)fVar16 / 10.0) - (uint)(fVar16 < 0.0)) * 10.0;
      fVar23 = fVar22 + 2.5;
      fVar20 = fVar19 + 2.5;
      fVar22 = fVar22 + 10.0 + -2.5;
      fVar19 = fVar19 + 10.0 + -2.5;
      local_80 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
      iStack_7c = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
      iVar17 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
      iVar21 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
      local_90 = local_80;
      if (iVar17 <= local_80) {
        local_90 = iVar17;
      }
      if (local_80 <= iVar17) {
        local_80 = iVar17;
      }
      iStack_8c = iStack_7c;
      if (iVar21 <= iStack_7c) {
        iStack_8c = iVar21;
      }
      if (iStack_7c <= iVar21) {
        iStack_7c = iVar21;
      }
      uVar9 = FUN_01a1d370(&local_a0);
      if ((uVar9 & 1) != 0) {
        return 0;
      }
      param_2[1] = 0.0;
      *param_2 = fVar18;
      goto LAB_018d9d70;
    }
  }
  iVar17 = *(int *)(param_1[4] + 8);
  iVar21 = *(int *)(param_1[4] + 0xc);
  param_2[1] = 0.0;
  fVar16 = (float)iVar17 * 0.5;
  uVar7 = 0;
  if (fVar16 != (float)(int)fVar16) {
    uVar7 = (uint)(fVar16 < 0.0);
  }
  fVar18 = (float)iVar21 * 0.5;
  uVar14 = 0;
  if (fVar18 != (float)(int)fVar18) {
    uVar14 = (uint)(fVar18 < 0.0);
  }
  *param_2 = (float)(int)((int)fVar16 - uVar7) * 10.0 + 5.0;
  fVar16 = (float)(int)((int)fVar18 - uVar14) * 10.0 + 5.0;
LAB_018d9d70:
  param_2[2] = fVar16;
  return 1;
}

