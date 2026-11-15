
/* WARNING: Removing unreachable block (ram,0x0242936c) */

void FUN_024291c0(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  
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
  *(int *)(param_1 + 0x1989) = (int)(*(float *)((long)param_2 + 0xc) * 999.99994);
  iVar2 = (int)(*(float *)(param_2 + 2) * 4.0);
  if (0x7ffe < iVar2) {
    iVar2 = 0x7fff;
  }
  if (iVar2 < -0x7fff) {
    iVar2 = -0x8000;
  }
  *(short *)(param_1 + 0x198d) = (short)iVar2;
  *(int *)(param_1 + 0x198f) = (int)(*(float *)((long)param_2 + 0x14) * 999.99994);
  iVar2 = (int)(*(float *)(param_2 + 3) * 999.99994);
  if (0x7ffe < iVar2) {
    iVar2 = 0x7fff;
  }
  if (iVar2 < -0x7fff) {
    iVar2 = -0x8000;
  }
  *(short *)(param_1 + 0x1993) = (short)iVar2;
  *(char *)(param_1 + 0x1988) = (char)*(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x1980) = *param_2;
  *(char *)(param_1 + 0x1996) = (char)*(undefined4 *)((long)param_2 + 0x1c);
  *(char *)(param_1 + 0x1995) = (char)*(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x1997) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x1998) = param_2[5];
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
  FUN_03ebb160(lVar1,0x22);
  return;
}

