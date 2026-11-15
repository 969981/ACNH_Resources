
undefined8 FUN_0249aff4(long param_1,float *param_2,ulong param_3)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 local_cc [2];
  undefined1 local_c2;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  int local_a8;
  int iStack_a4;
  undefined8 *local_a0;
  int local_98;
  int iStack_94;
  undefined2 local_90;
  undefined4 local_8e;
  undefined1 local_8a;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined2 local_74;
  
  if ((param_3 & 1) != 0) {
    return 1;
  }
  lVar8 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x2a0) + 0xf0))(lVar8 + 0x2a0);
  bVar1 = *(byte *)(param_1 + 0x1ee8);
  fVar16 = *pfVar9 * 0.99 * 0.97;
  fVar18 = *param_2 - fVar16;
  fVar17 = *param_2 + fVar16;
  fVar19 = param_2[2] - fVar16;
  fVar16 = fVar16 + param_2[2];
  iVar3 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar4 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  iVar5 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar12 = iVar3;
  if (iVar5 <= iVar3) {
    iVar12 = iVar5;
  }
  if (iVar3 <= iVar5) {
    iVar3 = iVar5;
  }
  iVar6 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar5 = iVar4;
  if (iVar6 <= iVar4) {
    iVar5 = iVar6;
  }
  if (iVar4 <= iVar6) {
    iVar4 = iVar6;
  }
  lVar15 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)bVar1 * 0x740;
  uVar14 = (uint)bVar1;
  lVar8 = lVar15;
  uVar13 = uVar14;
  if (7 < bVar1) {
    uVar13 = 0xff;
    lVar8 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  uVar10 = FUN_016ec964(0x3f000000,param_2,0);
  if ((uVar10 & 1) == 0) {
    lVar11 = FUN_0251e98c(1);
    pfVar9 = (float *)(**(code **)(*(long *)(lVar11 + 0x2a0) + 0xf0))(lVar11 + 0x2a0);
    uVar10 = FUN_016ecd00(*pfVar9 * 0.98,param_2,0);
    if ((uVar10 & 1) != 0) {
      return 0;
    }
    *(undefined4 *)(lVar8 + 0x4c0) = 0;
    *(undefined8 *)(lVar8 + 0x420) = 0x100000000;
    puVar7 = PTR_DAT_04bb6298;
    if (7 < uVar14) {
      uVar13 = 0xffffffff;
    }
    *(uint *)(lVar8 + 0x4d4) = uVar13;
    uVar2 = *(undefined2 *)puVar7;
    if (uVar14 < 8) {
      *(byte *)(lVar15 + 0x4d8) = bVar1;
    }
    *(undefined1 *)(lVar8 + 0x4d9) = 1;
    local_88 = 0xffffffffffffffff;
    local_c0 = (undefined8 *)CONCAT62(local_c0._2_6_,uVar2);
    local_8a = 0;
    local_80 = 0;
    local_8e = 0x100;
    local_a0 = &DAT_048f9750;
    local_b8 = &PTR_FUN_0498d548;
    puStack_b0 = &DAT_048f9750;
    local_7c = 0x41200000;
    local_74 = 0xff00;
    local_90 = 0xff00;
    if (*(int *)(lVar8 + 0x4d0) == 0x15) {
      local_90 = 0x1400;
    }
    local_c2 = 0;
    local_a8 = iVar12;
    iStack_a4 = iVar5;
    local_98 = iVar3;
    iStack_94 = iVar4;
    uVar10 = FUN_023016c0(lVar8 + 0x4c8,&local_c0,local_cc);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    lVar8 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x1980) = (int)(*(float *)(lVar8 + 0x278) * 999.99994);
    iVar12 = (int)(*(float *)(lVar8 + 0x27c) * 4.0);
    if (0x7ffe < iVar12) {
      iVar12 = 0x7fff;
    }
    if (iVar12 < -0x7fff) {
      iVar12 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar12;
    *(int *)(param_1 + 0x1986) = (int)(*(float *)(lVar8 + 0x280) * 999.99994);
    *(int *)(param_1 + 0x198a) = (int)(*param_2 * 999.99994);
    iVar12 = (int)(param_2[1] * 4.0);
    if (0x7ffe < iVar12) {
      iVar12 = 0x7fff;
    }
    if (iVar12 < -0x7fff) {
      iVar12 = -0x8000;
    }
    *(short *)(param_1 + 0x198e) = (short)iVar12;
    fVar16 = param_2[2];
    *(undefined2 *)(param_1 + 0x1994) = 0;
    *(undefined1 *)(param_1 + 0x1996) = 0;
    *(int *)(param_1 + 0x1990) = (int)(fVar16 * 999.99994);
    local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,0xb4);
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
    lVar8 = *(long *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  }
  else {
    uVar13 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
    uVar14 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
    local_c0 = &DAT_048f9750;
    if ((uVar13 & 1) != 0) {
      uVar13 = uVar13 - 1;
    }
    if ((uVar14 & 1) != 0) {
      uVar14 = uVar14 - 1;
    }
    local_b8 = (undefined **)CONCAT44(uVar14,uVar13);
    *(undefined4 *)(lVar8 + 0xa8) = 0;
    *(undefined8 *)(lVar8 + 8) = 0x100000000;
    uVar10 = FUN_022bf264(lVar8 + 0xb0,&local_c0);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    lVar8 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x1980) = (int)(*(float *)(lVar8 + 0x278) * 999.99994);
    iVar12 = (int)(*(float *)(lVar8 + 0x27c) * 4.0);
    if (0x7ffe < iVar12) {
      iVar12 = 0x7fff;
    }
    if (iVar12 < -0x7fff) {
      iVar12 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar12;
    *(int *)(param_1 + 0x1986) = (int)(*(float *)(lVar8 + 0x280) * 999.99994);
    *(int *)(param_1 + 0x198a) = (int)(*param_2 * 999.99994);
    iVar12 = (int)(param_2[1] * 4.0);
    if (0x7ffe < iVar12) {
      iVar12 = 0x7fff;
    }
    if (iVar12 < -0x7fff) {
      iVar12 = -0x8000;
    }
    *(short *)(param_1 + 0x198e) = (short)iVar12;
    *(int *)(param_1 + 0x1990) = (int)(param_2[2] * 999.99994);
    *(undefined1 *)(param_1 + 0x1994) = 1;
    fVar16 = param_2[2];
    *(byte *)(param_1 + 0x1995) = (char)(int)((float)(int)*param_2 / 5.0) - (*param_2 < 0.0) & 0xfe;
    local_cc[0] = 0xb4;
    *(byte *)(param_1 + 0x1996) = (char)(int)((float)(int)fVar16 / 5.0) - (fVar16 < 0.0) & 0xfe;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
    lVar8 = *(long *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  }
  lVar15 = 0;
  if (lVar8 != 0) {
    lVar15 = lVar8 + 0x278;
  }
  FUN_03ebb160(lVar15,0xb4);
  return 1;
}

