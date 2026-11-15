
void FUN_0242b130(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  local_18 = *(undefined4 *)(param_1 + 0x230);
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  if (DAT_04c487d4 != -1) {
    local_14 = 1;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) != 0) {
      bVar3 = 0;
      local_14._2_2_ = 0;
      goto LAB_0242b220;
    }
  }
  FUN_016f742c(&local_14,&local_18,0);
  bVar3 = *(byte *)(param_1 + 0x1997) & 0xf9;
LAB_0242b220:
  *(undefined2 *)(param_1 + 0x19a0) = local_14._2_2_;
  *(int *)(param_1 + 0x1989) = (int)(*(float *)(param_2 + 1) * 999.99994);
  iVar4 = (int)(*(float *)((long)param_2 + 0xc) * 4.0);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)(param_1 + 0x198d) = (short)iVar4;
  *(int *)(param_1 + 0x198f) = (int)(*(float *)(param_2 + 2) * 999.99994);
  iVar4 = (int)(*(float *)((long)param_2 + 0x14) * 999.99994);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)(param_1 + 0x1993) = (short)iVar4;
  uVar5 = *param_2;
  *(byte *)(param_1 + 0x1997) = bVar3;
  *(undefined8 *)(param_1 + 0x1980) = uVar5;
  *(char *)(param_1 + 0x1988) = (char)*(undefined4 *)(param_2 + 3);
  *(char *)(param_1 + 0x1996) = (char)*(undefined4 *)((long)param_2 + 0x1c);
  local_14 = 0x24;
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
  lVar2 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar2 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar2,0x24);
  return;
}

