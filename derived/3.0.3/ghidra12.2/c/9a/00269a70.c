
bool FUN_00269a70(long param_1,ushort param_2)

{
  uint uVar1;
  ushort uVar2;
  
  if (0x1f < (param_2 & 0xff)) {
    return false;
  }
  if ((param_2 & 0xff) == 0) {
    return (*(uint *)(param_1 + 0xb8) & 1) != 0;
  }
  if ((param_2 & 0xff) < 4) {
    uVar1 = 1;
  }
  else {
    uVar2 = 0;
    uVar1 = 1;
    do {
      uVar2 = uVar2 + 4;
      uVar1 = uVar1 << 4;
    } while ((param_2 & 0xfc) != uVar2);
  }
  if ((param_2 & 3) != 0) {
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      uVar1 = uVar1 << 1;
    } while ((param_2 & 3) != uVar2);
  }
  return (*(uint *)(param_1 + 0xb8) & uVar1) != 0;
}

