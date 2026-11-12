
undefined8 FUN_0097e270(long param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if ((((DAT_04cfae30 != 0) && (lVar3 = *(long *)(DAT_04cfae30 + 0x90), lVar3 != 0)) &&
      (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
     ((uVar2 = *(uint *)(param_1 + 0xc), -1 < (int)uVar2 &&
      (uVar1 < *(uint *)(lVar3 + 0x38) && uVar2 < *(uint *)(lVar3 + 0x3c))))) {
    uVar1 = uVar1 + *(uint *)(lVar3 + 0x38) * uVar2;
    if (uVar1 < *(uint *)(lVar3 + 0x48) && *(long *)(lVar3 + 0x50) != 0) {
      lVar3 = *(long *)(lVar3 + 0x50) + (long)(int)uVar1 * 0x34;
      *param_2 = (uint)*(byte *)(lVar3 + 0x30);
      *param_3 = (uint)*(byte *)(lVar3 + 0x31);
      *param_4 = (uint)*(byte *)(lVar3 + 0x32);
      *param_5 = (uint)*(byte *)(lVar3 + 0x33);
      return 1;
    }
  }
  return 0;
}

