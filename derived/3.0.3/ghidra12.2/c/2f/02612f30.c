
ulong FUN_02612f30(byte *param_1,undefined8 param_2,ulong param_3)

{
  ushort *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if (local_24[0] < 8) {
    uVar9 = 1;
    lVar3 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
    if (lVar3 == 0) {
      uVar7 = 0;
      uVar6 = 0x4c7b;
      uVar8 = 1;
    }
    else {
      lVar5 = lVar3 + 0x194b0;
      if (*(long *)(lVar3 + 0x194b8) == 0) {
        lVar5 = *(long *)(DAT_05574040 + 0x20);
      }
      lVar3 = lVar5 + 0x2d1a8 + (param_3 & 0xff) * 0x38;
      if ((param_3 & 0xfc) != 0) {
        lVar3 = lVar5 + 0x2d1a8;
      }
      if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar4 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
      puVar1 = (ushort *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8));
      uVar6 = (ulong)*puVar1;
      uVar9 = (ulong)(byte)puVar1[1];
      uVar8 = (ulong)*(byte *)((long)puVar1 + 3);
      uVar7 = (ulong)*(byte *)((long)puVar1 + 5);
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
  }
  else {
    uVar8 = 1;
    uVar7 = 0;
    uVar6 = 0x4c7b;
    uVar9 = 1;
  }
  return uVar8 << 0x18 | uVar7 << 0x28 | uVar9 << 0x10 | uVar6;
}

