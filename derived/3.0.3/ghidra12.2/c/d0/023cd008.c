
undefined8 FUN_023cd008(long param_1,undefined2 *param_2)

{
  uint *puVar1;
  short sVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  lVar4 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(int *)(param_1 + 0x1982) = (int)(*(float *)(lVar4 + 0x278) * 999.99994);
  iVar5 = (int)(*(float *)(lVar4 + 0x27c) * 4.0);
  if (0x7ffe < iVar5) {
    iVar5 = 0x7fff;
  }
  if (iVar5 < -0x7fff) {
    iVar5 = -0x8000;
  }
  *(short *)(param_1 + 0x1986) = (short)iVar5;
  sVar2 = DAT_04c487d4;
  local_18 = *(undefined4 *)(param_1 + 0x230);
  bVar3 = DAT_04c487d4 != -1;
  *(int *)(param_1 + 0x1988) = (int)(*(float *)(lVar4 + 0x280) * 999.99994);
  if (bVar3) {
    local_14 = 1;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) != 0) {
      local_14._2_2_ = 0;
      goto LAB_023cd14c;
    }
  }
  FUN_016f742c(&local_14,&local_18,0);
LAB_023cd14c:
  *(undefined2 *)(param_1 + 0x1980) = local_14._2_2_;
  *(undefined2 *)(param_1 + 0x198c) = *param_2;
  local_14 = 0xe9;
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
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  lVar4 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar4 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar4,0xe9);
  return 1;
}

