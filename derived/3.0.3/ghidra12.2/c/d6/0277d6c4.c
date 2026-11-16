
uint FUN_0277d6c4(ushort *param_1)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte bVar6;
  
  uVar2 = *param_1;
  if (uVar2 == 0x16a1) {
    return 0x16a1;
  }
  if (uVar2 == 0x3100) {
    return 0x3100;
  }
  bVar1 = *(byte *)((long)param_1 + 3);
  bVar6 = bVar1 & 3;
  if ((bVar1 & 3) == 0) {
    return (uint)uVar2;
  }
  if (bVar6 == 3) {
    bVar6 = bVar1 >> 2 & 0xf;
    if (bVar6 != 0xf) {
      uVar4 = FUN_01b03610(bVar6);
      if (uVar4 == 0) {
        if (bVar6 == 0xb) {
          return 0x3a19;
        }
        uVar4 = 0x306;
        if (bVar6 != 10) {
          uVar4 = 0x1225;
        }
        return uVar4;
      }
      puVar5 = &DAT_04101d00;
      bVar3 = 3 < uVar4;
      goto LAB_0277d748;
    }
    uVar4 = 0x10;
  }
  else {
    if (bVar6 == 2) {
      return 0x1180;
    }
    if (bVar6 != 1) {
      return (uint)uVar2;
    }
    uVar4 = bVar1 >> 2 & 0xf;
  }
  puVar5 = &DAT_04177938;
  bVar3 = 0x10 < uVar4;
LAB_0277d748:
  if (bVar3) {
    uVar4 = 0;
  }
  return puVar5[(int)uVar4];
}

