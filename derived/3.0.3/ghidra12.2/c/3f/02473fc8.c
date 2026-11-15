
void FUN_02473fc8(long param_1,long param_2)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_28;
  undefined4 uStack_24;
  
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  FUN_0252d8f0(&local_28,param_1 + 0x1ee8);
  if (*(int *)(param_2 + 0x10) != 0) {
    FUN_0252d8f0(&local_48,param_1 + 0x1ee8);
    local_28 = local_48;
    uStack_24 = uStack_44;
  }
  local_48 = 0;
  *(undefined4 *)(param_1 + 0x1981) = 0;
  *(undefined1 *)(param_1 + 0x1980) = 0;
  lVar3 = *(long *)(param_1 + 0x68);
  iVar4 = (int)(*(float *)(lVar3 + 0x278) * 4.0);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)(param_1 + 0x1985) = (short)iVar4;
  iVar4 = (int)(*(float *)(lVar3 + 0x27c) * 4.0);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)(param_1 + 0x1987) = (short)iVar4;
  iVar4 = (int)(*(float *)(lVar3 + 0x280) * 4.0);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)(param_1 + 0x1989) = (short)iVar4;
  lVar3 = FUN_0251e98c(1);
  pfVar1 = (float *)(**(code **)(*(long *)(lVar3 + 0x2290) + 0xf0))(lVar3 + 0x2290);
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 == 0) {
    iVar4 = 0;
    iVar5 = 0;
    iVar2 = 0;
  }
  else {
    fVar6 = *pfVar1;
    fVar7 = (float)(*(uint *)(lVar3 + 0x2b4) & 0xffffff) * 5.9604645e-08;
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar3 + 0x2b4) >> 0x14) & 0xff0));
    fVar8 = *pfVar1 + fVar7 * pfVar1[1];
    fVar7 = pfVar1[2] + fVar7 * pfVar1[3];
    fVar9 = fVar8 * 0.0;
    iVar4 = (int)((*(float *)(lVar3 + 0x278) + ((fVar9 * 0.0 + fVar7 * 0.0) - fVar6 * (fVar8 + 0.0))
                  ) * 4.0);
    iVar5 = (int)((*(float *)(lVar3 + 0x27c) +
                  (((fVar9 * 0.0 + 1.0) * 0.0 + fVar7 * 0.0 * 0.0) - fVar6 * fVar9)) * 4.0);
    iVar2 = (int)((*(float *)(lVar3 + 0x280) + ((fVar7 * 0.0 * 0.0 - fVar8 * 0.0) - fVar6 * fVar7))
                 * 4.0);
  }
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  if (0x7ffe < iVar5) {
    iVar5 = 0x7fff;
  }
  *(short *)(param_1 + 0x198b) = (short)iVar4;
  if (iVar5 < -0x7fff) {
    iVar5 = -0x8000;
  }
  if (0x7ffe < iVar2) {
    iVar2 = 0x7fff;
  }
  *(short *)(param_1 + 0x198d) = (short)iVar5;
  if (iVar2 < -0x7fff) {
    iVar2 = -0x8000;
  }
  *(short *)(param_1 + 0x198f) = (short)iVar2;
  iVar4 = (int)(*(float *)(param_1 + 0x2b0) * 4.0);
  iVar5 = (int)(*(float *)(param_1 + 0x2b4) * 4.0);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)(param_1 + 0x1991) = (short)iVar4;
  if (0x7ffe < iVar5) {
    iVar5 = 0x7fff;
  }
  if (iVar5 < -0x7fff) {
    iVar5 = -0x8000;
  }
  *(short *)(param_1 + 0x1993) = (short)iVar5;
  iVar4 = (int)(*(float *)(param_1 + 0x2b8) * 4.0);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)(param_1 + 0x1995) = (short)iVar4;
  *(ulong *)(param_1 + 0x1997) = CONCAT44(uStack_24,local_28);
  local_48 = *(undefined4 *)(param_2 + 0x10);
  *(char *)(param_1 + 0x199f) = (char)local_48;
  local_28 = 0x2d;
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
  lVar3 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar3 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar3,0x2d);
  return;
}

