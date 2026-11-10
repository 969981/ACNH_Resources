
void FUN_0026be80(long param_1,ushort param_2)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  
  if ((param_2 & 0xff) < 0x20) {
    if ((param_2 & 0xff) == 0) {
      uVar1 = 1;
    }
    else {
      if ((param_2 & 0xff) < 4) {
        uVar1 = 1;
      }
      else {
        uVar3 = 0;
        uVar1 = 1;
        do {
          uVar3 = uVar3 + 4;
          uVar1 = uVar1 << 4;
        } while ((param_2 & 0xfc) != uVar3);
      }
      if ((param_2 & 3) != 0) {
        uVar3 = 0;
        do {
          uVar3 = uVar3 + 1;
          uVar1 = uVar1 << 1;
        } while ((param_2 & 3) != uVar3);
      }
    }
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | uVar1;
    lVar2 = *(long *)(param_1 + 0x48);
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x78) = *(uint *)(lVar2 + 0x78) | uVar1;
    }
  }
  return;
}

