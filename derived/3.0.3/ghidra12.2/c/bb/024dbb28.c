
undefined8 FUN_024dbb28(long param_1,ulong param_2)

{
  long lVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_2c;
  float fStack_28;
  float local_24;
  
  if ((param_2 & 1) == 0) {
    lVar1 = FUN_0251e98c(1);
    pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x10e0) + 0xf0))(lVar1 + 0x10e0);
    lVar1 = *(long *)(param_1 + 0x68);
    if (lVar1 == 0) {
      local_2c = 0.0;
      fStack_28 = 0.0;
      local_24 = 0.0;
    }
    else {
      fVar5 = *pfVar2;
      fVar4 = (float)(*(uint *)(lVar1 + 0x2b4) & 0xffffff) * 5.9604645e-08;
      pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar1 + 0x2b4) >> 0x14) & 0xff0));
      fVar6 = *pfVar2 + fVar4 * pfVar2[1];
      fVar4 = pfVar2[2] + fVar4 * pfVar2[3];
      fVar7 = fVar6 * 0.0;
      local_2c = *(float *)(lVar1 + 0x278) + fVar7 * 0.0 + fVar4 * 0.0 + fVar5 * (fVar6 + 0.0);
      fStack_28 = *(float *)(lVar1 + 0x27c) +
                  (fVar7 * 0.0 + 1.0) * 0.0 + fVar4 * 0.0 * 0.0 + fVar5 * fVar7;
      local_24 = *(float *)(lVar1 + 0x280) + (fVar4 * 0.0 * 0.0 - fVar6 * 0.0) + fVar5 * fVar4;
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
    fVar4 = (float)FUN_016e026c(0,&local_2c,0,0);
    *(undefined1 *)(param_1 + 0x19a8) = 0;
    iVar3 = (int)(fVar4 * 4.0);
    if (0x7ffe < iVar3) {
      iVar3 = 0x7fff;
    }
    if (iVar3 < -0x7fff) {
      iVar3 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar3;
    *(short *)(param_1 + 0x198e) = (short)iVar3;
    *(int *)(param_1 + 0x1980) = (int)(local_2c * 999.99994);
    *(int *)(param_1 + 0x1986) = (int)(local_24 * 999.99994);
    *(int *)(param_1 + 0x198a) = (int)(local_2c * 999.99994);
    lVar1 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x1990) = (int)(local_24 * 999.99994);
    *(int *)(param_1 + 0x1994) = (int)(*(float *)(lVar1 + 0x278) * 999.99994);
    iVar3 = (int)(*(float *)(lVar1 + 0x27c) * 4.0);
    if (0x7ffe < iVar3) {
      iVar3 = 0x7fff;
    }
    if (iVar3 < -0x7fff) {
      iVar3 = -0x8000;
    }
    *(short *)(param_1 + 0x1998) = (short)iVar3;
    *(int *)(param_1 + 0x199a) = (int)(*(float *)(lVar1 + 0x280) * 999.99994);
    *(undefined2 *)(param_1 + 0x199e) = *(undefined2 *)(lVar1 + 0x2b6);
    local_2c = 1.90577e-43;
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
    lVar1 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar1 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar1,0x88);
  }
  return 1;
}

