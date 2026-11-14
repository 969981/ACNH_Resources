
undefined8 FUN_018d9d90(long *param_1,float *param_2,long param_3)

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
  int iVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 *local_70;
  int local_68;
  int iStack_64;
  uint local_60;
  short local_5c;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined4 local_58;
  uint local_54;
  
  lVar10 = *param_1;
  fVar17 = (float)*(int *)(param_3 + 0xc) * 10.0;
  fVar19 = (float)*(int *)(param_3 + 8) * 10.0;
  fVar21 = fVar17 + 2.5;
  fVar20 = fVar19 + 2.5;
  fVar19 = fVar19 + 10.0 + -2.5;
  fVar17 = fVar17 + 10.0 + -2.5;
  iVar18 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  iVar2 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  iVar3 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  iVar4 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar16 = iVar18;
  if (iVar3 <= iVar18) {
    iVar16 = iVar3;
  }
  if (iVar18 <= iVar3) {
    iVar18 = iVar3;
  }
  iVar3 = iVar2;
  if (iVar4 <= iVar2) {
    iVar3 = iVar4;
  }
  if (iVar2 <= iVar4) {
    iVar2 = iVar4;
  }
  *(int *)(lVar10 + 0x10) = iVar16;
  *(int *)(lVar10 + 0x14) = iVar3;
  *(int *)(lVar10 + 0x20) = iVar18;
  *(int *)(lVar10 + 0x24) = iVar2;
  lVar10 = *param_1;
  lVar13 = *(long *)param_1[1];
  if ((((*(int *)(lVar10 + 0x10) < *(int *)(lVar13 + 0x20)) ||
       (*(int *)(lVar13 + 0x30) < *(int *)(lVar10 + 0x20))) ||
      (*(int *)(lVar10 + 0x14) < *(int *)(lVar13 + 0x24))) ||
     (*(int *)(lVar13 + 0x34) < *(int *)(lVar10 + 0x24))) {
    return 0;
  }
  local_70 = &DAT_048f9750;
  fVar19 = (float)*(int *)(param_3 + 8) * 10.0 + 2.5;
  fVar17 = (float)*(int *)(param_3 + 0xc) * 10.0 + 2.5;
  local_68 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  iStack_64 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  puVar8 = (undefined2 *)FUN_01a5190c(param_1[3],0,&local_70,param_1[4]);
  puVar11 = (undefined2 *)param_1[2];
  *puVar11 = *puVar8;
  *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar8 + 1);
  *(undefined1 *)((long)puVar11 + 3) = *(undefined1 *)((long)puVar8 + 3);
  *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar8 + 2);
  if ((*(undefined8 **)param_1[5] != (undefined8 *)0x0) &&
     (uVar9 = (*(code *)**(undefined8 **)param_1[5])
                        (param_1[6],param_1[2],&local_70,param_1[7] + 0xc), (uVar9 & 1) == 0)) {
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
      local_58 = *(undefined4 *)(psVar15 + 2);
      _local_5c = CONCAT13(*(undefined1 *)((long)psVar15 + 3),CONCAT12((char)psVar15[1],*psVar15));
      local_54 = FUN_01241ca0(&local_5c);
      if (local_54 == 0x13) {
        return 0;
      }
      local_60 = 0;
      uVar9 = FUN_01a12d50(*(undefined8 *)puVar6,&local_60,uVar1);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      if ((local_60 >> (ulong)(local_54 & 0x1f) & 1) == 0) {
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
      fVar19 = (float)*(int *)(param_1[4] + 8) * 5.0 + 5.0;
      fVar17 = (float)*(int *)(param_1[4] + 0xc) * 5.0 + 5.0;
      uVar7 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
      if ((int)(uVar7 & 0xfffffffe) < DAT_05233970) {
        return 0;
      }
      if (DAT_05233980 < (int)(uVar7 & 0xfffffffe)) {
        return 0;
      }
      uVar5 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
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
      *param_2 = fVar19;
      param_2[1] = 0.0;
      goto LAB_018da2f4;
    }
  }
  uVar7 = *(uint *)param_1[8];
  if (uVar7 != 0x12) {
    if (*(uint *)(DAT_052cc470 + 0x5f0) <= uVar7) {
      uVar7 = 0;
    }
    if (*(long *)(PTR_DAT_04bbec40 + 8) != 0) {
      iVar16 = *(int *)(param_3 + 8);
      if ((DAT_052ae7c8 <= iVar16) && (iVar16 <= DAT_052ae7d8)) {
        iVar18 = *(int *)(param_3 + 0xc);
        if ((DAT_052ae7cc <= iVar18) && (iVar18 <= DAT_052ae7dc)) {
          lVar10 = (long)(int)((iVar16 - DAT_052ae7c8) +
                              *(uint *)PTR_DAT_04bbec40 * (iVar18 - DAT_052ae7cc));
          if (*(uint *)(PTR_DAT_04bbec40 + 4) <= (uint)(iVar18 - DAT_052ae7cc) ||
              *(uint *)PTR_DAT_04bbec40 <= (uint)(iVar16 - DAT_052ae7c8)) {
            lVar10 = 0;
          }
          if ((*(byte *)(*(long *)(PTR_DAT_04bbec40 + 8) + lVar10) >>
               (ulong)(*(uint *)(*(long *)(DAT_052cc470 + 0x5f8) + (long)(int)uVar7 * 8 + 4) & 0x1f)
              & 1) != 0) {
            return 0;
          }
        }
      }
    }
  }
  iVar16 = *(int *)(param_1[4] + 8);
  iVar18 = *(int *)(param_1[4] + 0xc);
  param_2[1] = 0.0;
  fVar17 = (float)iVar16 * 0.5;
  uVar7 = 0;
  if (fVar17 != (float)(int)fVar17) {
    uVar7 = (uint)(fVar17 < 0.0);
  }
  fVar19 = (float)iVar18 * 0.5;
  uVar14 = 0;
  if (fVar19 != (float)(int)fVar19) {
    uVar14 = (uint)(fVar19 < 0.0);
  }
  *param_2 = (float)(int)((int)fVar17 - uVar7) * 10.0 + 5.0;
  fVar17 = (float)(int)((int)fVar19 - uVar14) * 10.0 + 5.0;
LAB_018da2f4:
  param_2[2] = fVar17;
  return 1;
}

