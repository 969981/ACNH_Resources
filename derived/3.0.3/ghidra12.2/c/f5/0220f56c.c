
void FUN_0220f56c(long param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  byte bVar11;
  int iVar12;
  undefined4 *puVar13;
  
  if ((*(short *)(param_1 + 0x1c) != 0) &&
     (*(char *)(param_1 + 0x20) != *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064))) {
    *(undefined2 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x22) = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0x101;
  }
  puVar7 = PTR_DAT_04bb30a0;
  if (((*(byte *)(param_1 + 0x24) >> 4 & 1) != 0) &&
     (uVar8 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0), uVar8 < 4)) {
    *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xef;
  }
  iVar12 = *(int *)(param_1 + 0x10);
  if (((iVar12 < 1) && (bVar11 = *(byte *)(param_1 + 0x24), (bVar11 >> 1 & 1) == 0)) ||
     ((*(short *)(param_1 + 0x1c) != 0 &&
      (bVar11 = *(byte *)(param_1 + 0x24), (bVar11 >> 5 & 1) == 0)))) {
LAB_0220f664:
    if (-1 < iVar12) goto LAB_0220f67c;
  }
  else {
    uVar8 = FUN_00a86724(*(undefined8 *)puVar7);
    bVar11 = *(byte *)(param_1 + 0x24);
    if ((3 < uVar8 == 0 < *(int *)(param_1 + 0x14)) &&
       ((((uVar8 & 0xfffffffd) != 5 || (*(int *)(param_1 + 0x14) != 1)) || ((bVar11 & 1) == 0)))) {
      iVar12 = *(int *)(param_1 + 0x10);
      goto LAB_0220f664;
    }
    bVar11 = bVar11 & 0xfd;
    *(byte *)(param_1 + 0x24) = bVar11;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if ((bVar11 & 0x12) == 0) {
    uVar8 = FUN_00a86724(*(undefined8 *)puVar7);
    uVar9 = FUN_00a867c8(*(undefined8 *)puVar7);
    bVar11 = *(byte *)(param_1 + 0x24);
    if ((bVar11 & 1) == 0) {
LAB_0220f814:
      if ((bVar11 >> 2 & 1) != 0) goto LAB_0220f864;
LAB_0220f818:
      if (uVar8 < 4) goto LAB_0220f674;
      uVar5 = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = 1;
      *(undefined4 *)(param_1 + 0x18) = uVar5;
      puVar13 = &DAT_05459850;
      piVar1 = &DAT_05459850 + (ulong)*(uint *)(param_1 + 8) * 2;
      if (3 < *(uint *)(param_1 + 8)) {
        piVar1 = &DAT_05459850;
      }
      iVar12 = *piVar1;
      uVar8 = *(uint *)(param_1 + 8);
    }
    else {
      if ((bVar11 >> 3 & 1) != 0) {
        if ((uVar8 < 8) && ((1 << (ulong)(uVar8 & 0x1f) & 0xafU) != 0)) goto LAB_0220f814;
        *(char *)(param_1 + 0x24) = (char)(bVar11 & 0xfffffff7);
        *(undefined8 *)(param_1 + 0x14) = 0x100000001;
        if (((bVar11 & 0xfffffff7) >> 2 & 1) != 0) goto LAB_0220f864;
        goto LAB_0220f818;
      }
      if ((uVar8 & 0xfffffffd) != 5) goto LAB_0220f814;
      uVar5 = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = 2;
      *(undefined4 *)(param_1 + 0x18) = uVar5;
      piVar1 = &DAT_05459870 + (ulong)*(uint *)(param_1 + 8) * 2;
      if (3 < *(uint *)(param_1 + 8)) {
        piVar1 = &DAT_05459870;
      }
      iVar12 = *piVar1;
      puVar13 = &DAT_05459870 + (ulong)*(uint *)(param_1 + 8) * 2;
      if (3 < *(uint *)(param_1 + 8)) {
        puVar13 = &DAT_05459870;
      }
      iVar6 = puVar13[1];
      puVar10 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar4 = puVar10[3];
      uVar3 = *puVar10 ^ *puVar10 << 0xb;
      *puVar10 = puVar10[1];
      puVar10[1] = puVar10[2];
      uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
      puVar10[2] = uVar4;
      puVar10[3] = uVar3;
      *(int *)(param_1 + 0x10) =
           iVar12 + (int)((ulong)uVar3 * (ulong)((iVar6 - iVar12) + 1) >> 0x20);
      *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(DAT_04da6480 + 0x4060);
      if ((*(byte *)(param_1 + 0x24) >> 2 & 1) == 0) goto LAB_0220f674;
LAB_0220f864:
      if ((3 < uVar9) && (3 < uVar8)) goto LAB_0220f674;
      uVar5 = *(undefined4 *)(param_1 + 0x14);
      puVar13 = &DAT_05459890;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = uVar5;
      piVar1 = &DAT_05459890 + (ulong)*(uint *)(param_1 + 0xc) * 2;
      if (3 < *(uint *)(param_1 + 0xc)) {
        piVar1 = &DAT_05459890;
      }
      iVar12 = *piVar1;
      uVar8 = *(uint *)(param_1 + 0xc);
    }
    puVar2 = puVar13 + (ulong)uVar8 * 2;
    if (3 < uVar8) {
      puVar2 = puVar13;
    }
    iVar6 = puVar2[1];
    puVar10 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar9 = puVar10[3];
    uVar8 = *puVar10 ^ *puVar10 << 0xb;
    *puVar10 = puVar10[1];
    puVar10[1] = puVar10[2];
    uVar8 = uVar8 >> 8 ^ uVar9 >> 0x13 ^ uVar8 ^ uVar9;
    puVar10[2] = uVar9;
    puVar10[3] = uVar8;
    iVar12 = iVar12 + (int)((ulong)uVar8 * (ulong)((iVar6 - iVar12) + 1) >> 0x20);
    *(int *)(param_1 + 0x10) = iVar12;
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  }
  else {
LAB_0220f674:
    iVar12 = *(int *)(param_1 + 0x10);
  }
  if (iVar12 < 0) {
    return;
  }
LAB_0220f67c:
  FUN_00a86724(*(undefined8 *)puVar7);
  uVar8 = FUN_00a86724(*(undefined8 *)puVar7);
  if ((uVar8 & 0xfffffffe) == 4) {
    iVar12 = *(int *)(*(long *)puVar7 + 0x6533c);
  }
  else {
    uVar8 = FUN_00a86724();
    if ((uVar8 & 0xfffffffe) == 6) {
      iVar12 = *(int *)(*(long *)puVar7 + 0x65340);
    }
    else {
      iVar12 = 0;
    }
  }
  if (*(int *)(param_1 + 0x14) < 1) {
    if (*(int *)(param_1 + 0x10) < iVar12) {
      return;
    }
  }
  else if (iVar12 < *(int *)(param_1 + 0x10)) {
    return;
  }
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 2;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}

