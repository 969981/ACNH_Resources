
/* WARNING: Removing unreachable block (ram,0x02124f34) */
/* WARNING: Removing unreachable block (ram,0x02124f44) */

void FUN_02124e34(ushort *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  float *pfVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  long lVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  puVar2 = PTR_DAT_04bb5ce0;
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (DAT_05aed670 != 0)) &&
     (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar3 = FUN_006bd550(*puVar4,0);
    if (((iVar3 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
       ((*(long *)(DAT_05aed670 + 0x330) != 0 &&
        (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)))) {
      lVar11 = *(long *)puVar2;
      if (lVar11 == 0) {
        uVar10 = 0x11;
        uVar6 = 0;
        uVar8 = 0;
        uVar12 = 0x11;
      }
      else {
        uVar8 = *(ushort *)(lVar11 + 0xd88);
        uVar6 = *(ushort *)(lVar11 + 0xd8c);
        uVar10 = *(short *)(lVar11 + 0xd98) + 1;
        uVar12 = *(short *)(lVar11 + 0xd9c) + 1;
      }
      param_1[4] = uVar10;
      param_1[2] = uVar8;
      if (uVar10 <= uVar8) {
        uVar8 = uVar10;
      }
      param_1[3] = uVar6;
      if (uVar12 <= uVar6) {
        uVar6 = uVar12;
      }
      param_1[5] = uVar12;
      *param_1 = uVar8;
      goto LAB_02125060;
    }
  }
  pfVar5 = (float *)FUN_0252d9bc(0);
  lVar11 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar11 == 0) {
    uVar9 = (uint)param_1[6];
    uVar14 = 0;
    uVar7 = 0;
    uVar13 = (uint)param_1[8];
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x20);
    iVar3 = *(int *)(param_1 + 6);
    uVar13 = (uint)((float)((int)((float)(int)(*pfVar5 + 2.5) / 5.0) - (uint)(*pfVar5 + 2.5 < 0.0) &
                           0xffff) + -12.5);
    uVar15 = (uint)((float)((int)((float)(int)(pfVar5[2] + 2.5) / 5.0) -
                            (uint)(pfVar5[2] + 2.5 < 0.0) & 0xffff) + -10.5);
    if ((int)uVar13 < (int)uVar7) {
      uVar9 = iVar3 + uVar7;
    }
    else {
      uVar14 = iVar3 + uVar13;
      iVar1 = *(int *)(lVar11 + 0x30) + 1;
      uVar9 = uVar14;
      if (iVar1 <= (int)uVar14) {
        uVar9 = *(int *)(lVar11 + 0x30) + 1;
      }
      uVar7 = iVar1 - iVar3;
      if ((int)uVar14 <= iVar1) {
        uVar7 = uVar13;
      }
    }
    uVar14 = *(uint *)(lVar11 + 0x24);
    iVar3 = *(int *)(param_1 + 8);
    if ((int)uVar15 < (int)uVar14) {
      uVar13 = iVar3 + uVar14;
    }
    else {
      uVar13 = iVar3 + uVar15;
      iVar1 = *(int *)(lVar11 + 0x34) + 1;
      uVar14 = iVar1 - iVar3;
      if ((int)uVar13 <= iVar1) {
        uVar14 = uVar15;
      }
      if (iVar1 <= (int)uVar13) {
        uVar13 = *(int *)(lVar11 + 0x34) + 1;
      }
    }
  }
  param_1[2] = (ushort)uVar7;
  param_1[3] = (ushort)uVar14;
  param_1[4] = (ushort)uVar9;
  param_1[5] = (ushort)uVar13;
  uVar10 = (ushort)uVar7;
  if ((uVar9 & 0xffff) <= (uVar7 & 0xffff)) {
    uVar10 = (ushort)uVar9;
  }
  uVar6 = (ushort)uVar14;
  if ((uVar13 & 0xffff) <= (uVar14 & 0xffff)) {
    uVar6 = (ushort)uVar13;
  }
  *param_1 = uVar10;
LAB_02125060:
  param_1[1] = uVar6;
  memset(param_1 + 0x2974,2,0x20d);
  memset(*(void **)(param_1 + 0x2a84),0,(long)*(int *)(param_1 + 0x2a82) << 2);
  param_1[0x2a88] = 0;
  param_1[0x2a89] = 0;
  FUN_035a4230(param_1);
  return;
}

