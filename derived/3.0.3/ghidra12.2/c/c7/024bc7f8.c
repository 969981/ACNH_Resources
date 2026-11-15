
/* WARNING: Removing unreachable block (ram,0x024bc9e4) */

void FUN_024bc7f8(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined2 extraout_var;
  int iVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x19a1) = 0;
  *(undefined1 *)(param_1 + 0x1998) = uVar1;
  *(undefined8 *)(param_1 + 0x1999) = *(undefined8 *)(param_2 + 4);
  if (*(short *)(param_2 + 4) != -2) {
    *(undefined1 *)(param_1 + 0x19a1) = 1;
    *(int *)(param_1 + 0x1980) = (int)(*(float *)(param_2 + 0xc) * 999.99994);
    iVar2 = (int)(*(float *)(param_2 + 0x10) * 4.0);
    if (0x7ffe < iVar2) {
      iVar2 = 0x7fff;
    }
    if (iVar2 < -0x7fff) {
      iVar2 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar2;
    *(int *)(param_1 + 0x1986) = (int)(*(float *)(param_2 + 0x14) * 999.99994);
    lVar3 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x198a) = (int)(*(float *)(lVar3 + 0x278) * 999.99994);
    iVar2 = (int)(*(float *)(lVar3 + 0x27c) * 4.0);
    if (0x7ffe < iVar2) {
      iVar2 = 0x7fff;
    }
    if (iVar2 < -0x7fff) {
      iVar2 = -0x8000;
    }
    *(short *)(param_1 + 0x198e) = (short)iVar2;
    *(int *)(param_1 + 0x1990) = (int)(*(float *)(lVar3 + 0x280) * 999.99994);
    FUN_006f0400(*(float *)(param_2 + 0xc) - *(float *)(lVar3 + 0x278),
                 *(float *)(param_2 + 0x14) - *(float *)(lVar3 + 0x280));
    *(undefined2 *)(param_1 + 0x1994) = extraout_var;
  }
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xbfffffff;
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
  lVar3 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar3 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar3,0x30);
  return;
}

