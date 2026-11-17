
bool FUN_02e1d8ec(long param_1,uint param_2,byte *param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x21c);
  if (((((param_2 & 0xfffffffc) == 0xc) || (iVar2 != -1)) ||
      ((param_2 < 0x2f && ((1L << ((ulong)param_2 & 0x3f) & 0x600000030c00U) != 0)))) ||
     ((param_2 - 0x54 < 0x14 && ((1 << (ulong)(param_2 - 0x54 & 0x1f) & 0x81001U) != 0))))
  goto LAB_02e1d950;
  if (*(int *)(param_1 + 0x210) != -1) {
    if (param_2 == 0xffffffff) {
LAB_02e1d9b0:
      iVar4 = -1;
    }
    else {
      uVar1 = param_2;
      if (0x81 < param_2) {
        uVar1 = 0;
      }
      if ((&DAT_05693d00)[(int)uVar1] == -1) goto LAB_02e1d9b0;
      uVar1 = param_2;
      if (0x81 < param_2) {
        uVar1 = 0;
      }
      iVar4 = (&DAT_05693d00)[(int)uVar1];
    }
    if (*(int *)(param_1 + 0x210) == iVar4) goto LAB_02e1d950;
  }
  *(uint *)(param_1 + 0x21c) = param_2;
  bVar3 = *param_3;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *(byte *)(param_1 + 0x220) = bVar3;
  *(undefined4 *)(param_1 + 0x224) = 1;
LAB_02e1d950:
  return iVar2 == -1;
}

