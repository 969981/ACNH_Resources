
/* WARNING: Removing unreachable block (ram,0x0236ce24) */

void FUN_0236cba0(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  
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
  *(undefined8 *)(param_1 + 0x1980) = *param_2;
  *(char *)(param_1 + 0x1988) = (char)*(undefined4 *)(param_2 + 1);
  *(char *)(param_1 + 0x1989) = (char)*(undefined4 *)((long)param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x198a) = *(undefined1 *)(param_2 + 2);
  *(char *)(param_1 + 0x198b) = (char)*(undefined4 *)((long)param_2 + 0x14);
  *(int *)(param_1 + 0x198c) = (int)(*(float *)(param_2 + 3) * 999.99994);
  iVar4 = (int)(*(float *)((long)param_2 + 0x1c) * 4.0);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)(param_1 + 0x1990) = (short)iVar4;
  *(int *)(param_1 + 0x1992) = (int)(*(float *)(param_2 + 4) * 999.99994);
  iVar4 = (int)(*(float *)((long)param_2 + 0x24) * 4.0);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)(param_1 + 0x1996) = (short)iVar4;
  iVar4 = (int)(*(float *)(param_2 + 5) * 4.0);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)(param_1 + 0x1998) = (short)iVar4;
  iVar4 = (int)(*(float *)((long)param_2 + 0x2c) * 4.0);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)(param_1 + 0x199a) = (short)iVar4;
  iVar4 = (int)(*(float *)(param_2 + 6) * 999.99994);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)(param_1 + 0x199c) = (short)iVar4;
  *(undefined1 *)(param_1 + 0x199f) = *(undefined1 *)((long)param_2 + 0x35);
  if (*(char *)((long)param_2 + 0x36) == '\0') {
    if (((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) &&
       (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
      pbVar1 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      bVar6 = *(byte *)(param_1 + 0x1ee8);
      bVar5 = *pbVar1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (bVar5 != bVar6) goto LAB_0236cd0c;
    }
    uVar3 = 0;
  }
  else {
LAB_0236cd0c:
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x19a0) = uVar3;
  *(undefined1 *)(param_1 + 0x19a1) = *(undefined1 *)((long)param_2 + 0x37);
  *(undefined1 *)(param_1 + 0x19a3) = *(undefined1 *)((long)param_2 + 0x39);
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
  FUN_03ebb160(lVar2,0x5d);
  return;
}

