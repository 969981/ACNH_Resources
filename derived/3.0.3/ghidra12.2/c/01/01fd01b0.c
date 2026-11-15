
void FUN_01fd01b0(long param_1,ulong param_2,undefined8 *param_3)

{
  float *pfVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ulong uVar13;
  undefined4 uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_7c;
  float local_74;
  
  lVar15 = DAT_05abbc58;
  if (DAT_05abbc58 == 0) {
    return;
  }
  iVar10 = FUN_03738270(DAT_05abbc58);
  if (iVar10 == *(int *)PTR_DAT_04bb3238) {
    FUN_02085a50(*(undefined8 *)(param_1 + 0x18),0,0);
  }
  else {
    FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,iVar10,PTR_DAT_04bb6928,0);
  }
  puVar9 = PTR_DAT_04bb5ce0;
  pfVar1 = (float *)(param_1 + 0xa9f0);
  if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (DAT_05aed670 == 0)) ||
     (*(long *)(DAT_05aed670 + 0x330) == 0)) {
LAB_01fd02c8:
    if (*(char *)(param_1 + 0x8930) == '\0') {
      local_7c = 0;
      piVar2 = (int *)(param_1 + 0xacc8);
      local_74 = 0.0;
      FUN_021d9820(&local_7c,1);
      *(undefined1 **)(param_1 + 0x122a8) = &LAB_01fd0d10;
      *(undefined1 *)(param_1 + 0x8930) = 1;
      *(long *)(param_1 + 0x122a0) = param_1;
      *(undefined8 *)(param_1 + 0x122b0) = 0;
      fVar21 = (float)local_7c + 5.0 + -7.5;
      fVar23 = local_74 + 0.0 + -7.5;
      iVar10 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
      iVar16 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
      *(int *)(param_1 + 0x8878) = iVar10;
      *(int *)(param_1 + 0x887c) = iVar16;
      *(int *)(param_1 + 0x8888) = iVar10 + 3;
      *(int *)(param_1 + 0x888c) = iVar16 + 3;
      if (*piVar2 < *(int *)(param_1 + 0xaccc)) {
        *(long *)(*(long *)(param_1 + 0xacd0) + (long)*piVar2 * 8) = param_1 + 0x12298;
        *piVar2 = *piVar2 + 1;
      }
    }
  }
  else {
    puVar11 = (undefined8 *)
              (**(code **)(*DAT_05aed668 + 0x18))
                        (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar10 = FUN_006bd550(*puVar11,0);
    if (((iVar10 != 0x758f7eaf) || (DAT_05aed670 == 0)) ||
       ((*(long *)(DAT_05aed670 + 0x330) == 0 ||
        (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) == 0)))) goto LAB_01fd02c8;
  }
  if ((param_2 & 1) != 0) {
    iVar10 = FUN_03738270(lVar15);
    if (iVar10 == 0) {
      return;
    }
    FUN_02077fb0(*(undefined8 *)(param_1 + 0x89b8));
    pfVar1[0] = 0.0;
    pfVar1[1] = 0.0;
    *(undefined4 *)(param_1 + 0xa9f8) = 0;
    *(int *)(param_1 + 0xa9fc) = iVar10;
    puVar11 = &DAT_053e0d04;
    if (param_3 != (undefined8 *)0x0) {
      puVar11 = param_3;
    }
    uVar6 = *puVar11;
    uVar7 = puVar11[1];
    *(undefined4 *)(param_1 + 0xaa14) = *(undefined4 *)(puVar11 + 2);
    *(undefined8 *)(param_1 + 0xaa04) = uVar6;
    *(undefined8 *)(param_1 + 0xaa0c) = uVar7;
    *(undefined4 *)(param_1 + 0xaa18) = *(undefined4 *)((long)puVar11 + 0x14);
    *(undefined4 *)(param_1 + 0xaa1c) = *(undefined4 *)(puVar11 + 3);
    uVar22 = *(undefined4 *)((long)puVar11 + 0x1c);
    uVar14 = 2;
    goto LAB_01fd06e8;
  }
  if ((*(uint *)(&DAT_00001230 + lVar15) >> 2 & 1) != 0) {
    return;
  }
  if ((*(uint *)(&DAT_00001230 + lVar15) >> 3 & 1) == 0) {
    pfVar12 = (float *)FUN_0252d9bc(0);
    if (pfVar12 == (float *)0x0) {
      return;
    }
  }
  else {
    pfVar12 = (float *)(lVar15 + 0x1170);
  }
  puVar8 = PTR_DAT_04bb2720;
  lVar15 = *(long *)PTR_DAT_04bb2720;
  if ((*(long *)puVar9 != 0) && (*(long *)(lVar15 + 0x330) != 0)) {
    puVar11 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
    iVar10 = FUN_006bd550(*puVar11,0);
    lVar15 = *(long *)puVar8;
    if ((iVar10 == 0x758f7eaf) &&
       ((*(long *)(lVar15 + 0x330) != 0 && (*(int *)(*(long *)(lVar15 + 0x330) + 0x244) != 0)))) {
      lVar19 = *(long *)puVar9;
      if (lVar19 == 0) {
        iVar10 = 0;
        iVar16 = 0;
        iVar17 = 0x10;
        iVar20 = 0x10;
      }
      else {
        iVar10 = *(int *)(lVar19 + 0xd88);
        iVar16 = *(int *)(lVar19 + 0xd8c);
        iVar20 = *(int *)(lVar19 + 0xd98);
        iVar17 = *(int *)(lVar19 + 0xd9c);
      }
      iVar5 = iVar10;
      if (iVar20 <= iVar10) {
        iVar5 = iVar20;
      }
      if (iVar10 <= iVar20) {
        iVar10 = iVar20;
      }
      lVar19 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      fVar21 = *(float *)(lVar19 + 0x278);
      if (((float)iVar5 * 5.0 <= fVar21) && (fVar21 < (float)iVar10 * 5.0 + 5.0)) {
        iVar10 = iVar16;
        if (iVar16 <= iVar17) {
          iVar10 = iVar17;
        }
        if (iVar17 <= iVar16) {
          iVar16 = iVar17;
        }
        fVar21 = *(float *)(lVar19 + 0x280);
        if (((float)iVar16 * 5.0 <= fVar21) && (fVar21 < (float)iVar10 * 5.0 + 5.0))
        goto LAB_01fd0558;
      }
      uVar13 = FUN_01fd0998(param_1);
      if ((uVar13 & 1) != 0) {
        FUN_01fd0ac0(param_1);
        return;
      }
      lVar15 = *(long *)puVar8;
    }
  }
LAB_01fd0558:
  uVar4 = *(uint *)(param_1 + 0x122b8) & ((int)*(uint *)(param_1 + 0x122b8) >> 0x1f ^ 0xffffffffU);
  puVar11 = (undefined8 *)
            (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar15 + 0x338));
  FUN_006bd550(*puVar11,0);
  uVar18 = uVar4 + 1;
  uVar3 = uVar18 & 3;
  lVar15 = *(long *)(*(long *)puVar8 + 0x330) + 0x250;
  if (2 < uVar4) {
    uVar18 = uVar18 & 0xfffffffc;
    do {
      uVar18 = uVar18 - 4;
      lVar15 = *(long *)(*(long *)(*(long *)(*(long *)(lVar15 + 8) + 8) + 8) + 8);
    } while (uVar18 != 0);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    lVar15 = *(long *)(lVar15 + 8);
  }
  lVar19 = 0;
  if (lVar15 != 0) {
    lVar19 = lVar15 + -0x40;
  }
  fVar21 = (float)NEON_ucvtf(*(undefined4 *)(lVar19 + 0x20));
  fVar24 = *(float *)(lVar19 + 0x14);
  fVar23 = *pfVar12;
  uVar13 = (ulong)(long)(fVar21 * 11930465.0) >> 0x18 & 0xff;
  fVar21 = (float)((uint)(long)(fVar21 * 11930465.0) & 0xffffff) * 5.9604645e-08;
  fVar25 = (float)(&DAT_04199798)[uVar13 * 4] + fVar21 * (float)(&DAT_0419979c)[uVar13 * 4];
  fVar21 = (float)(&DAT_041997a0)[uVar13 * 4] + fVar21 * (float)(&DAT_041997a4)[uVar13 * 4];
  fVar26 = fVar25 * 0.0;
  FUN_02077fb0(*(undefined8 *)(param_1 + 0x89b8));
  *pfVar1 = fVar23 + fVar26 * 0.0 + fVar21 * 0.0 + (fVar25 + 0.0) * 15.0;
  *(float *)(param_1 + 0xa9f4) =
       (fVar26 * 0.0 + 1.0) * 0.0 + fVar21 * 0.0 * 0.0 + fVar26 * 15.0 + 0.0;
  *(float *)(param_1 + 0xa9f8) = fVar24 + (fVar21 * 0.0 * 0.0 - fVar25 * 0.0) + fVar21 * 15.0;
  puVar11 = (undefined8 *)(param_1 + 0xaa24);
  if (param_3 != (undefined8 *)0x0) {
    puVar11 = param_3;
  }
  *(undefined4 *)(param_1 + 0xa9fc) = 0;
  uVar6 = *puVar11;
  uVar7 = puVar11[1];
  *(undefined4 *)(param_1 + 0xaa14) = *(undefined4 *)(puVar11 + 2);
  *(undefined8 *)(param_1 + 0xaa04) = uVar6;
  *(undefined8 *)(param_1 + 0xaa0c) = uVar7;
  *(undefined4 *)(param_1 + 0xaa18) = *(undefined4 *)((long)puVar11 + 0x14);
  *(undefined4 *)(param_1 + 0xaa1c) = *(undefined4 *)(puVar11 + 3);
  uVar22 = *(undefined4 *)((long)puVar11 + 0x1c);
  uVar14 = 1;
LAB_01fd06e8:
  *(undefined4 *)(param_1 + 0xaa20) = uVar22;
  *(undefined4 *)(param_1 + 0xaa00) = uVar14;
  *(undefined1 *)(param_1 + 0xaa44) = 0;
  return;
}

