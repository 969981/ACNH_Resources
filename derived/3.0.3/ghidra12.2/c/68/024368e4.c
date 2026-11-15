
void FUN_024368e4(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  float fVar13;
  float local_6c [3];
  ulong local_60;
  undefined4 local_58;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar6 + 0x278) * 999.99994);
    iVar12 = (int)(*(float *)(lVar6 + 0x27c) * 4.0);
    if (0x7ffe < iVar12) {
      iVar12 = 0x7fff;
    }
    if (iVar12 < -0x7fff) {
      iVar12 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar12;
    fVar13 = *(float *)(lVar6 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar13 * 999.99994);
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar9;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar11 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar3 + 0x2ec) = uVar11;
    *(undefined1 *)((long)puVar3 + 0x2e5) = 1;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((*(char *)(param_1 + 0x17ac) == '\0') && ((*(uint *)(param_1 + 0xec8) & 1) != 0)) {
      return;
    }
    local_60 = 0xfffe;
    FUN_0277d4ac(&local_60);
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    local_60 = CONCAT44(local_60._4_4_,0xb1);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
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
    lVar6 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar6 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar6,0xb1);
    return;
  }
  uVar4 = *(ushort *)(param_1 + 0x18ef);
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
  fVar13 = *pfVar7;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_6c[0] = 1.4013e-44;
    local_60 = CONCAT44(local_60._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02436aec;
  }
  iVar12 = (uint)uVar4 * 0x10000;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar6 = (**(code **)(*plVar2 + 0x148))();
  iVar10 = iVar12 - *(int *)(lVar6 + 4);
  if (0xb60b5e < iVar10 + 0x5b05afU) {
    iVar5 = 0x15555560;
    iVar12 = -0x15555560;
    iVar10 = (int)(fVar13 * (float)iVar10);
    if (iVar10 < 1) {
      iVar5 = -0x5b05b0;
    }
    else {
      iVar12 = 0x5b05b0;
    }
    iVar1 = iVar10;
    if (iVar5 <= iVar10) {
      iVar1 = iVar5;
    }
    if (iVar12 <= iVar10) {
      iVar12 = iVar1;
    }
    iVar12 = iVar12 + *(int *)(lVar6 + 4);
  }
  *(int *)(lVar6 + 4) = iVar12;
LAB_02436aec:
  iVar12 = *(int *)(param_1 + 0x18e5);
  iVar10 = *(int *)(param_1 + 0x18eb);
  lVar6 = FUN_0251e98c(1);
  puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
  local_6c[1] = 0.0;
  puVar3 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_58 = *(undefined4 *)(puVar3 + 0x50);
  local_60 = puVar3[0x4f] & 0xffffffff;
  local_6c[0] = (float)iVar12 * 0.001;
  local_6c[2] = (float)iVar10 * 0.001;
  FUN_03eb4b60(*puVar8,0x41200000,0x3e4ccccc,&local_60,local_6c);
  *(undefined4 *)(puVar3 + 0x4f) = (undefined4)local_60;
  *(undefined4 *)(puVar3 + 0x50) = local_58;
  return;
}

