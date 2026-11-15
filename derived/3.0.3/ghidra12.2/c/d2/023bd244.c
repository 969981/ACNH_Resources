
undefined8 FUN_023bd244(long param_1,undefined4 *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  if ((DAT_054f5738 != 0) && ((ulong)*(byte *)(param_1 + 0x1ee8) < 8)) {
    *(undefined2 *)(DAT_054f5738 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2 + 0xe50) =
         *(undefined2 *)(param_2 + 5);
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    if (*(short *)(param_2 + 10) != -1) {
      FUN_02544c78();
    }
  }
  cVar2 = *(char *)((long)param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0x1980) = (char)*param_2;
    *(int *)(param_1 + 0x1981) = (int)((float)param_2[1] * 999.99994);
    iVar3 = (int)((float)param_2[2] * 4.0);
    if (0x7ffe < iVar3) {
      iVar3 = 0x7fff;
    }
    if (iVar3 < -0x7fff) {
      iVar3 = -0x8000;
    }
    *(short *)(param_1 + 0x1985) = (short)iVar3;
    *(int *)(param_1 + 0x1987) = (int)((float)param_2[3] * 999.99994);
    *(undefined2 *)(param_1 + 0x198b) = *(undefined2 *)((long)param_2 + 0x12);
    *(ulong *)(param_1 + 0x198d) = (ulong)*(ushort *)(param_2 + 5);
    *(char *)(param_1 + 0x1995) = (char)param_2[9];
    uVar4 = 0x7a;
    *(undefined4 *)(param_1 + 0xc0c) = param_2[6];
    *(undefined4 *)(param_1 + 0xc10) = param_2[7];
    *(undefined4 *)(param_1 + 0xc14) = param_2[8];
  }
  else {
    *(char *)(param_1 + 0x198c) = (char)*param_2;
    *(int *)(param_1 + 0x1980) = (int)((float)param_2[1] * 999.99994);
    iVar3 = (int)((float)param_2[2] * 4.0);
    if (0x7ffe < iVar3) {
      iVar3 = 0x7fff;
    }
    if (iVar3 < -0x7fff) {
      iVar3 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar3;
    *(int *)(param_1 + 0x1986) = (int)((float)param_2[3] * 999.99994);
    *(undefined2 *)(param_1 + 0x198a) = *(undefined2 *)((long)param_2 + 0x12);
    *(undefined1 *)(param_1 + 0x198d) = 1;
    *(ulong *)(param_1 + 0x198e) = (ulong)*(ushort *)(param_2 + 5);
    *(char *)(param_1 + 0x1996) = (char)param_2[9];
    uVar4 = 0x7b;
  }
  if (uVar4 < 0x149) {
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
    FUN_03ebb160(lVar1,uVar4);
  }
  return 1;
}

