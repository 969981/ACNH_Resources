
undefined8 FUN_02a1f3c0(long param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  bVar4 = *(byte *)(param_1 + 8);
  if ((bVar4 & 1) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar6 = 1;
    bVar5 = 2;
  }
  else {
    puVar9 = *(undefined8 **)(param_1 + 0x18);
    bVar1 = false;
    lVar8 = (long)*(int *)(param_1 + 0x10) << 3;
    uVar7 = 1;
    uVar6 = 1;
    do {
      uVar3 = FUN_03f2e940(*puVar9);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_03f2e0c0(*puVar9);
        if ((uVar3 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          FUN_03f2dedc(*puVar9,0);
          uVar2 = FUN_03f2d924(*puVar9);
          uVar7 = uVar2 & uVar7;
          uVar3 = FUN_03f2eb0c(*puVar9);
          if ((uVar3 & 1) != 0) {
            bVar1 = true;
          }
        }
      }
      puVar9 = puVar9 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
    if (uVar7 == 0) {
      if (!bVar1) {
        return uVar6;
      }
      bVar4 = *(byte *)(param_1 + 8);
    }
    else {
      bVar4 = *(byte *)(param_1 + 8) | 2;
      *(byte *)(param_1 + 8) = bVar4;
      if (!bVar1) {
        return uVar6;
      }
    }
    bVar5 = 4;
  }
  *(byte *)(param_1 + 8) = bVar4 | bVar5;
  return uVar6;
}

