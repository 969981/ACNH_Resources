
uint FUN_0243380c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined2 extraout_var;
  undefined2 uVar5;
  ulong uVar4;
  uint uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  float local_48;
  
  puVar2 = PTR_DAT_04bb4f78;
  lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  uVar3 = FUN_022aae84(lVar7 + 0xb0);
  if ((uVar3 & 1) == 0) goto LAB_02433b24;
  *(undefined8 *)(param_1 + 0x1980) = 0;
  lVar9 = *(long *)puVar2;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  local_48 = 0.0;
  local_50 = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  lVar7 = lVar9 + 0x20 + (ulong)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar7 = lVar9 + 0x20;
  }
  local_60 = &DAT_048f9750;
  local_58 = 0;
  uVar4 = FUN_022ab398(0x40a00000,lVar7 + 0xb0,&local_60);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_022ab398(0x40d00000,lVar7 + 0xb0,&local_60);
    fVar10 = 0.0;
    fVar11 = 0.0;
    if ((uVar4 & 1) != 0) goto LAB_02433920;
  }
  else {
LAB_02433920:
    fVar10 = (float)(int)local_58 * 0.5;
    uVar6 = 0;
    if (fVar10 != (float)(int)fVar10) {
      uVar6 = (uint)(fVar10 < 0.0);
    }
    fVar11 = (float)local_58._4_4_ * 0.5;
    fVar10 = (float)(int)((int)fVar10 - uVar6);
    uVar6 = 0;
    if (fVar11 != (float)(int)fVar11) {
      uVar6 = (uint)(fVar11 < 0.0);
    }
    fVar11 = (float)(int)((int)fVar11 - uVar6);
  }
  local_48 = fVar11 * 10.0 + 5.0;
  local_50 = CONCAT44(local_50._4_4_,fVar10 * 10.0 + 5.0);
  fVar10 = (float)FUN_016e026c(0,&local_50,0,0);
  puVar1 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x4c8);
  }
  fVar12 = *(float *)(puVar1 + 0x4f);
  fVar11 = *(float *)((long)puVar1 + 0x27c);
  fVar13 = *(float *)(puVar1 + 0x50);
  *(int *)(param_1 + 0x1980) = (int)(fVar12 * 999.99994);
  iVar8 = (int)(fVar11 * 4.0);
  if (0x7ffe < iVar8) {
    iVar8 = 0x7fff;
  }
  if (iVar8 < -0x7fff) {
    iVar8 = -0x8000;
  }
  *(short *)(param_1 + 0x1984) = (short)iVar8;
  *(int *)(param_1 + 0x1986) = (int)(fVar13 * 999.99994);
  fVar11 = fVar10 - *(float *)((long)puVar1 + 0x27c);
  local_50._4_4_ = fVar10;
  if (1.0 <= SQRT(fVar11 * fVar11 +
                  ((float)local_50 - *(float *)(puVar1 + 0x4f)) *
                  ((float)local_50 - *(float *)(puVar1 + 0x4f)) +
                  (local_48 - *(float *)(puVar1 + 0x50)) * (local_48 - *(float *)(puVar1 + 0x50))))
  {
    FUN_006f0400((float)local_50 - fVar12,local_48 - fVar13);
    uVar5 = extraout_var;
  }
  else {
    uVar5 = (undefined2)((uint)*(undefined4 *)((long)puVar1 + 0x2b4) >> 0x10);
  }
  *(undefined2 *)(param_1 + 0x198a) = uVar5;
  lVar7 = *(long *)(param_1 + 0x80);
  if (lVar7 != 0) {
    *(float *)(lVar7 + 0x330) = (float)local_50;
    *(float *)(lVar7 + 0x334) = local_50._4_4_;
    *(float *)(lVar7 + 0x338) = local_48;
  }
  *(float *)(param_1 + 0x2b0) = (float)local_50;
  *(float *)(param_1 + 0x2b4) = local_50._4_4_;
  *(float *)(param_1 + 0x2b8) = local_48;
  local_60 = (undefined8 *)CONCAT44(local_60._4_4_,0x101);
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
  lVar7 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar7 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar7,0x101);
LAB_02433b24:
  return uVar3 & 1;
}

