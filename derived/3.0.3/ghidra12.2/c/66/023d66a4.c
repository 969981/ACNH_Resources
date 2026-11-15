
undefined8 FUN_023d66a4(long param_1)

{
  float *pfVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *local_88;
  undefined8 *puStack_80;
  int local_78;
  int iStack_74;
  undefined8 *local_70;
  int local_68;
  int iStack_64;
  float local_5c [3];
  
  if ((*(int *)(param_1 + 0x178) != 0) || (DAT_04c487d4 == -1)) {
    return 0;
  }
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((((*puVar2 >> 1 & 1) == 0) || ((*puVar2 >> 0x17 & 1) != 0)) ||
     (((*puVar2 >> 0x19 & 1) != 0 && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b)))) {
    uVar3 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x229c) != '\0') {
      *(undefined1 *)(param_1 + 0x229c) = 0;
    }
    lVar5 = *(long *)(param_1 + 0x68);
    local_88 = PTR_DAT_04bbc1a0 + 0x10;
    fVar7 = (float)(int)((int)((float)(int)*(float *)(lVar5 + 0x278) / 10.0) -
                        (uint)(*(float *)(lVar5 + 0x278) < 0.0)) * 10.0;
    fVar9 = (float)(int)((int)((float)(int)*(float *)(lVar5 + 0x280) / 10.0) -
                        (uint)(*(float *)(lVar5 + 0x280) < 0.0)) * 10.0;
    fVar8 = fVar7 + 2.5;
    fVar10 = fVar9 + 2.5;
    fVar7 = fVar7 + 10.0 + -2.5;
    fVar9 = fVar9 + 10.0 + -2.5;
    local_70 = &DAT_048f9750;
    puStack_80 = &DAT_048f9750;
    local_68 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iStack_64 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
    iVar6 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
    local_78 = local_68;
    if (iVar6 <= local_68) {
      local_78 = iVar6;
    }
    if (local_68 <= iVar6) {
      local_68 = iVar6;
    }
    iVar6 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    iStack_74 = iStack_64;
    if (iVar6 <= iStack_64) {
      iStack_74 = iVar6;
    }
    if (iStack_64 <= iVar6) {
      iStack_64 = iVar6;
    }
    uVar4 = FUN_023d5f80(*(undefined4 *)(lVar5 + 0x27c),&local_88,param_1 + 0x1ee8,
                         *(undefined4 *)(param_1 + 0x230));
    if ((uVar4 & 1) == 0) {
      local_5c[0] = 4.44212e-43;
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
      *(undefined8 *)(param_1 + 0x18c0) = 0;
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
      *(undefined8 *)(param_1 + 0x18c8) = 0;
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
      *(undefined8 *)(param_1 + 0x18d0) = 0;
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
      *(undefined8 *)(param_1 + 0x18a0) = 0;
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
      *(undefined8 *)(param_1 + 0x18a8) = 0;
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
      *(undefined8 *)(param_1 + 0x18b0) = 0;
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
      *(undefined8 *)(param_1 + 0x18b8) = 0;
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
      *(undefined8 *)(param_1 + 0x1880) = 0;
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1888) = 0;
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
      *(undefined8 *)(param_1 + 0x1890) = 0;
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
      *(undefined8 *)(param_1 + 0x1898) = 0;
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
      lVar5 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar5 = *(long *)(param_1 + 0x70) + 0x278;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      lVar5 = *(long *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      local_5c[1] = 0.0;
      *(int *)(param_1 + 0x1980) = (int)(*(float *)(lVar5 + 0x278) * 999.99994);
      iVar6 = (int)(*(float *)(lVar5 + 0x27c) * 4.0);
      if (0x7ffe < iVar6) {
        iVar6 = 0x7fff;
      }
      if (iVar6 < -0x7fff) {
        iVar6 = -0x8000;
      }
      *(short *)(param_1 + 0x1984) = (short)iVar6;
      *(int *)(param_1 + 0x1986) = (int)(*(float *)(lVar5 + 0x280) * 999.99994);
      *(undefined2 *)(param_1 + 0x198a) = *(undefined2 *)(lVar5 + 0x2b6);
      iVar6 = *(int *)(lVar5 + 0x2b4);
      local_5c[0] = ((float)local_78 * 5.0 + (float)local_68 * 5.0 + 5.0) * 0.5;
      local_5c[2] = ((float)iStack_74 * 5.0 + (float)iStack_64 * 5.0 + 5.0) * 0.5;
      fVar7 = (float)FUN_016e026c(0,local_5c,0,0);
      uVar4 = (ulong)((float)(iVar6 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
      fVar8 = (float)((uint)uVar4 & 0xffffff);
      pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar4 >> 0x18 & 0xff) * 0x10);
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      *(int *)(param_1 + 0x198c) =
           (int)((local_5c[0] - (*pfVar1 + pfVar1[1] * fVar8 * 5.9604645e-08) * 0.01) * 999.99994);
      iVar6 = (int)((fVar7 + 0.0) * 4.0);
      if (0x7ffe < iVar6) {
        iVar6 = 0x7fff;
      }
      if (iVar6 < -0x7fff) {
        iVar6 = -0x8000;
      }
      *(short *)(param_1 + 0x1990) = (short)iVar6;
      *(int *)(param_1 + 0x1992) =
           (int)((local_5c[2] - (fVar9 + fVar10 * fVar8 * 5.9604645e-08) * 0.01) * 999.99994);
      *(short *)(param_1 + 0x1996) =
           (short)((ulong)(long)((float)(*(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U
                                        >> 0x1e) * 90.0 * 11930465.0) >> 0x10);
      local_5c[0] = 4.4281e-43;
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
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      lVar5 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar5 = *(long *)(param_1 + 0x70) + 0x278;
      }
    }
    FUN_03ebb160(lVar5,local_5c[0]);
    uVar3 = 1;
  }
  return uVar3;
}

