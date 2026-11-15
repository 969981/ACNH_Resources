
/* WARNING: Removing unreachable block (ram,0x0237c19c) */

void FUN_0237bfc8(long param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  
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
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined1 *)(param_1 + 0x1981) = *(undefined1 *)(param_2 + 1);
  *(char *)(param_1 + 0x1980) = (char)*param_2;
  if (((float)param_2[2] == 0.0) && ((float)param_2[4] == 0.0)) {
    lVar2 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x1982) = (int)(*(float *)(lVar2 + 0x278) * 999.99994);
    iVar1 = (int)(*(float *)(lVar2 + 0x27c) * 4.0);
    if (0x7ffe < iVar1) {
      iVar1 = 0x7fff;
    }
    if (iVar1 < -0x7fff) {
      iVar1 = -0x8000;
    }
    *(short *)(param_1 + 0x1986) = (short)iVar1;
    *(int *)(param_1 + 0x1988) = (int)(*(float *)(lVar2 + 0x280) * 999.99994);
    param_2 = (undefined4 *)(lVar2 + 0x2b4);
  }
  else {
    *(int *)(param_1 + 0x1982) = (int)((float)param_2[2] * 999.99994);
    iVar1 = (int)((float)param_2[3] * 4.0);
    if (0x7ffe < iVar1) {
      iVar1 = 0x7fff;
    }
    if (iVar1 < -0x7fff) {
      iVar1 = -0x8000;
    }
    *(short *)(param_1 + 0x1986) = (short)iVar1;
    *(int *)(param_1 + 0x1988) = (int)((float)param_2[4] * 999.99994);
    param_2 = param_2 + 5;
  }
  *(undefined2 *)(param_1 + 0x198c) = *(undefined2 *)((long)param_2 + 2);
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
  FUN_03ebb160(lVar2,0x8e);
  return;
}

