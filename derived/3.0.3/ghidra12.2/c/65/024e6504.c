
/* WARNING: Removing unreachable block (ram,0x024e6708) */

void FUN_024e6504(long param_1)

{
  long lVar1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0x1916) = 0;
  *(ushort *)(param_1 + 0x1922) = *(ushort *)(param_1 + 0xd5a) ^ 0x8000;
  iVar2 = (int)((float)(int)*(short *)(param_1 + 0x1910) * 0.25 * 4.0);
  *(int *)(param_1 + 0x1924) = (int)((float)*(int *)(param_1 + 0x190c) * 0.001 * 999.99994);
  *(int *)(param_1 + 0x1918) =
       (int)(((float)*(int *)(param_1 + 0xd40) * 5.0 + (float)*(int *)(param_1 + 0xd50) * 5.0 + 5.0)
             * 0.5 * 999.99994);
  *(int *)(param_1 + 0x191e) =
       (int)(((float)*(int *)(param_1 + 0xd44) * 5.0 + (float)*(int *)(param_1 + 0xd54) * 5.0 + 5.0)
             * 0.5 * 999.99994);
  if (0x7ffe < iVar2) {
    iVar2 = 0x7fff;
  }
  if (iVar2 < -0x7fff) {
    iVar2 = -0x8000;
  }
  *(short *)(param_1 + 0x1928) = (short)iVar2;
  *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x1918);
  *(int *)(param_1 + 0x192a) = (int)((float)*(int *)(param_1 + 0x1912) * 0.001 * 999.99994);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19a6) = *(undefined8 *)(param_1 + 0x1926);
  *(undefined4 *)(param_1 + 0x19d6) = 0;
  *(undefined8 *)(param_1 + 0x19ce) = 0;
  *(undefined8 *)(param_1 + 0x19c6) = 0;
  *(undefined8 *)(param_1 + 0x19be) = 0;
  *(undefined8 *)(param_1 + 0x19b6) = 0;
  *(undefined8 *)(param_1 + 0x19ae) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x1920);
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
  FUN_03ebb160(lVar1,0x129);
  return;
}

