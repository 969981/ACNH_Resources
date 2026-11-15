
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_024c01e8(long param_1,float *param_2)

{
  long lVar1;
  int iVar2;
  float fVar3;
  undefined8 local_40;
  float local_38;
  
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
  local_40 = *(undefined8 *)(param_2 + 3);
  local_38 = param_2[5];
  fVar3 = (float)FUN_016e026c(0,&local_40,0,0);
  *(int *)(param_1 + 0x1980) = (int)(*param_2 * 999.99994);
  iVar2 = (int)(param_2[1] * 4.0);
  if (0x7ffe < iVar2) {
    iVar2 = 0x7fff;
  }
  if (iVar2 < -0x7fff) {
    iVar2 = -0x8000;
  }
  *(short *)(param_1 + 0x1984) = (short)iVar2;
  *(int *)(param_1 + 0x1986) = (int)(param_2[2] * 999.99994);
  *(int *)(param_1 + 0x198a) = (int)((float)local_40 * 999.99994);
  iVar2 = (int)(fVar3 * 4.0);
  if (0x7ffe < iVar2) {
    iVar2 = 0x7fff;
  }
  if (iVar2 < -0x7fff) {
    iVar2 = -0x8000;
  }
  *(short *)(param_1 + 0x198e) = (short)iVar2;
  *(int *)(param_1 + 0x1990) = (int)(local_38 * 999.99994);
  *(undefined2 *)(param_1 + 0x1994) = *(undefined2 *)((long)param_2 + 0x1a);
  *(undefined2 *)(param_1 + 0x1996) = *(undefined2 *)((long)param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1998) = _DAT_05586008;
  *(undefined1 *)(param_1 + 0x19a0) = *(undefined1 *)(param_2 + 7);
  local_40 = CONCAT44(fVar3,0x32);
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
  FUN_03ebb160(lVar1,0x32);
  return;
}

