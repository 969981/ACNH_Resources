
/* WARNING: Removing unreachable block (ram,0x023bab54) */

void FUN_023ba8fc(long param_1,float *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(int *)(param_1 + 0x1980) = (int)(*param_2 * 999.99994);
  iVar5 = (int)(param_2[1] * 4.0);
  if (0x7ffe < iVar5) {
    iVar5 = 0x7fff;
  }
  if (iVar5 < -0x7fff) {
    iVar5 = -0x8000;
  }
  *(short *)(param_1 + 0x1984) = (short)iVar5;
  *(int *)(param_1 + 0x1986) = (int)(param_2[2] * 999.99994);
  if (*(char *)(param_2 + 3) == '\0') {
    if (*(int *)(param_1 + 0x178) == 1) {
      cVar4 = '\0';
    }
    else {
      uVar3 = FUN_00a738a0(param_1 + 0x1ee8,0);
      cVar4 = '\0';
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_00a74b78(param_1 + 0x1ee8);
        cVar4 = '\x01';
        if (uVar2 < 0xf) {
          if ((1 << (ulong)(uVar2 & 0x1f) & 0x600dU) == 0) {
            if ((uVar2 == 7) || (uVar2 == 9)) {
              cVar4 = ((*(byte *)(param_1 + 0x17d0) & 6) != 0) << 1;
            }
          }
          else {
            cVar4 = '\x02';
          }
        }
      }
    }
  }
  else {
    cVar4 = SUB41(param_2[4],0);
  }
  *(char *)(param_1 + 0x1994) = cVar4;
  *(int *)(param_1 + 0x198a) = (int)(param_2[5] * 999.99994);
  iVar5 = (int)(param_2[6] * 4.0);
  if (0x7ffe < iVar5) {
    iVar5 = 0x7fff;
  }
  if (iVar5 < -0x7fff) {
    iVar5 = -0x8000;
  }
  *(short *)(param_1 + 0x198e) = (short)iVar5;
  *(int *)(param_1 + 0x1990) = (int)(param_2[7] * 999.99994);
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
  FUN_03ebb160(lVar1,0x16);
  return;
}

