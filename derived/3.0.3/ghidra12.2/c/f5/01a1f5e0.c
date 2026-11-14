
undefined8 FUN_01a1f5e0(float *param_1,uint *param_2,long *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  float *pfVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (param_1 == (float *)0x0) {
    return 0;
  }
  if (*(int *)(*(long *)param_3[7] + 0x58) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = **(long **)(*(long *)param_3[7] + 0x60);
  }
  pcVar8 = (char *)(**(code **)(*(long *)(lVar11 + 0x30) + 0xf0))();
  if (*pcVar8 == '\0') {
LAB_01a1f6d4:
    pfVar10 = (float *)(**(code **)(*(long *)(lVar11 + 0x90) + 0xf0))((long *)(lVar11 + 0x90));
LAB_01a1f6e4:
    fVar17 = *pfVar10;
    fVar16 = pfVar10[2];
  }
  else {
    plVar12 = (long *)(lVar11 + 0x60);
    puVar9 = (uint *)(**(code **)(*plVar12 + 0xf0))(plVar12);
    puVar6 = PTR_DAT_04bb5ce0;
    if ((0x3f < *puVar9 || *(long *)PTR_DAT_04bb5ce0 == 0) ||
       (*(char *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*puVar9 * 0x14 + 0xc) == '\0'))
    goto LAB_01a1f6d4;
    puVar9 = (uint *)(**(code **)(*plVar12 + 0xf0))(plVar12);
    uVar5 = *puVar9;
    fVar16 = 0.0;
    if ((uVar5 < 0x40) && (*(long *)puVar6 != 0)) {
      lVar11 = *(long *)puVar6 + 0xc;
      fVar17 = 0.0;
      if (*(char *)(lVar11 + (ulong)uVar5 * 0x14) == '\0') goto LAB_01a1f6ec;
      pfVar10 = (float *)(lVar11 + (ulong)uVar5 * 0x14 + 4);
      goto LAB_01a1f6e4;
    }
    fVar17 = 0.0;
  }
LAB_01a1f6ec:
  iVar7 = (**(code **)(*param_3 + 0x158))(param_3);
  if ((iVar7 == 0) || (iVar7 = (**(code **)(*param_3 + 0x158))(param_3), iVar7 - 1U < 2)) {
    iVar7 = (**(code **)(*param_3 + 0x158))(param_3);
    if (iVar7 == 2) {
      lVar11 = *(long *)(param_3[7] + 0x10);
      if (*(int *)(lVar11 + 0x58) != 0) goto LAB_01a1f750;
LAB_01a1f7cc:
      lVar11 = 0;
LAB_01a1f7d0:
      pfVar10 = (float *)(**(code **)(*(long *)(lVar11 + 0x38) + 0xf0))();
      fVar13 = *pfVar10;
    }
    else {
      fVar13 = 0.0;
      if (iVar7 == 1) {
        lVar11 = *(long *)(param_3[7] + 8);
        if (*(int *)(lVar11 + 0x58) == 0) goto LAB_01a1f7cc;
LAB_01a1f750:
        lVar11 = **(long **)(lVar11 + 0x60);
        goto LAB_01a1f7d0;
      }
    }
    if (param_2 == (uint *)0x0) {
      fVar13 = 0.0;
      fVar15 = 0.0;
    }
    else {
      uVar4 = param_2[3];
      uVar5 = *param_2 ^ *param_2 << 0xb;
      uVar2 = param_2[1] ^ param_2[1] << 0xb;
      *param_2 = param_2[2];
      param_2[1] = uVar4;
      uVar3 = uVar5 ^ uVar4;
      uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar5 >> 0x13 ^ uVar2 ^ uVar5;
      param_2[2] = uVar5;
      param_2[3] = uVar2;
      fVar13 = fVar13 * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0);
      uVar1 = (ulong)(uVar3 >> 0x18);
      fVar14 = (float)(uVar5 & 0xffffff) * 5.9604645e-08;
      fVar15 = ((float)(&DAT_04199798)[uVar1 * 4] + fVar14 * (float)(&DAT_0419979c)[uVar1 * 4]) *
               fVar13;
      fVar13 = ((float)(&DAT_041997a0)[uVar1 * 4] + fVar14 * (float)(&DAT_041997a4)[uVar1 * 4]) *
               fVar13;
    }
    goto LAB_01a1f9c0;
  }
  iVar7 = (**(code **)(*param_3 + 0x158))(param_3);
  if (1 < iVar7 - 5U) {
    return 0;
  }
  iVar7 = (**(code **)(*param_3 + 0x158))(param_3);
  if (iVar7 == 6) {
    lVar11 = *(long *)(param_3[7] + 0x20);
    if (*(int *)(lVar11 + 0x58) != 0) goto LAB_01a1f7b0;
LAB_01a1f8a4:
    lVar11 = 0;
LAB_01a1f8a8:
    pfVar10 = (float *)(**(code **)(*(long *)(lVar11 + 0x38) + 0xf0))();
    fVar15 = *pfVar10 * 0.5;
  }
  else {
    fVar15 = 0.0;
    if (iVar7 == 5) {
      lVar11 = *(long *)(param_3[7] + 0x18);
      if (*(int *)(lVar11 + 0x58) == 0) goto LAB_01a1f8a4;
LAB_01a1f7b0:
      lVar11 = **(long **)(lVar11 + 0x60);
      goto LAB_01a1f8a8;
    }
  }
  iVar7 = (**(code **)(*param_3 + 0x158))(param_3);
  if (iVar7 == 6) {
    if (*(int *)(*(long *)(param_3[7] + 0x20) + 0x58) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = **(long **)(*(long *)(param_3[7] + 0x20) + 0x60);
    }
    plVar12 = (long *)(lVar11 + 0x98);
LAB_01a1f934:
    pfVar10 = (float *)(**(code **)(*plVar12 + 0xf0))();
    fVar13 = *pfVar10 * 0.5;
  }
  else {
    fVar13 = 0.0;
    if (iVar7 == 5) {
      if (*(int *)(*(long *)(param_3[7] + 0x18) + 0x58) == 0) {
        plVar12 = (long *)&DAT_00000068;
      }
      else {
        plVar12 = (long *)(**(long **)(*(long *)(param_3[7] + 0x18) + 0x60) + 0x68);
      }
      goto LAB_01a1f934;
    }
  }
  if (param_2 == (uint *)0x0) {
    return 1;
  }
  uVar3 = param_2[3];
  uVar5 = *param_2 ^ *param_2 << 0xb;
  uVar2 = param_2[1] ^ param_2[1] << 0xb;
  *param_2 = param_2[2];
  param_2[1] = uVar3;
  uVar5 = uVar5 >> 8 ^ uVar3 >> 0x13 ^ uVar5 ^ uVar3;
  uVar2 = uVar2 >> 8 ^ uVar5 >> 0x13 ^ uVar2 ^ uVar5;
  param_2[2] = uVar5;
  param_2[3] = uVar2;
  fVar15 = (fVar15 + fVar15) * ((float)(uVar5 >> 9 | 0x3f800000) + -1.0) - fVar15;
  fVar13 = (fVar13 + fVar13) * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0) - fVar13;
LAB_01a1f9c0:
  *param_1 = fVar17 + fVar15;
  param_1[2] = fVar16 + fVar13;
  return 1;
}

