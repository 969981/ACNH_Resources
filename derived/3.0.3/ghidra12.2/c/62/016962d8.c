
uint FUN_016962d8(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 8);
  if ((DAT_05233970 <= (int)uVar1 && (int)uVar1 <= DAT_05233980) &&
     (uVar2 = *(uint *)(param_2 + 0xc), DAT_05233974 <= (int)uVar2 && (int)uVar2 <= DAT_05233984)) {
    uVar2 = (uVar2 & 0x1fffffe) * 0x80 + ((int)uVar1 >> 1);
    if (uVar2 >> 0xf != 0) {
      return 0;
    }
    param_3 = *(uint *)(param_1 + (ulong)(uVar2 >> 5) * 4 + 8) >> (ulong)(uVar1 >> 1 & 0x1f) & 1;
  }
  return param_3 & 1;
}

