
uint FUN_00485550(ushort *param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *param_1;
  uVar4 = uVar2 & 0x3ff;
  if ((uVar2 & 0x7c00) == 0) {
    if ((uVar2 & 0x3ff) == 0) {
      uVar5 = 0xffffff90;
    }
    else {
      uVar5 = 1;
      do {
        uVar5 = uVar5 - 1;
        uVar3 = uVar4 << 1;
        uVar1 = uVar4 >> 9;
        uVar4 = uVar3;
      } while ((uVar1 & 1) == 0);
      uVar4 = uVar3 & 0x3fe;
    }
  }
  else {
    uVar5 = 0x8f;
    if ((uVar2 & 0x7c00) != 0x7c00) {
      uVar5 = uVar2 >> 10 & 0x1f;
    }
  }
  return uVar5 * 0x800000 + 0x38000000 | (uVar2 & 0x8000) << 0x10 | uVar4 << 0xd;
}

