
void FUN_0212eca8(long param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  
  if ((param_3 & 1) == 0) {
    if ((param_2 & 1) == 0) {
      uVar1 = *(ushort *)(param_1 + 0x2d8) & 0xc000;
    }
    else {
      uVar1 = *(ushort *)(param_1 + 0x2d8) | 0x3fff;
    }
    *(ushort *)(param_1 + 0x2d8) = uVar1;
    return;
  }
  if ((param_2 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x2da) & 0xc000;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x2da) | 0x3fff;
  }
  *(ushort *)(param_1 + 0x2da) = uVar1;
  return;
}

