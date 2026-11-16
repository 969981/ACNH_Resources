
uint FUN_02776bdc(byte *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar4 = FUN_025830c0(DAT_055021a0,local_24,1);
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    lVar6 = lVar4 + 0x194b0;
    if (*(long *)(lVar4 + 0x194b8) == 0) {
      lVar6 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar6 + 0x2d128) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar6 + 0x2d128), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    uVar7 = 0;
    puVar1 = (uint *)(*(long *)(lVar6 + 0x2d110) + *(long *)(lVar6 + 0x2d108));
    uVar2 = *puVar1;
    if ((*(byte *)((long)puVar1 + 7) != 0 ||
         (((ulong)uVar2 != 0 || (ushort)puVar1[1] != 0) || *(byte *)((long)puVar1 + 6) != 0)) &&
       ((uint)*(byte *)((long)puVar1 + 7) ==
        ((uVar2 + (uVar2 >> 0x10) + (uVar2 >> 0x18) + (uVar2 >> 8)) - 0x2d & 0xff))) {
      lVar4 = (ulong)uVar2 << ((ulong)(0x1d - *(byte *)((long)puVar1 + 6)) & 0x3f);
      uVar7 = ((int)lVar4 - (uint)(ushort)puVar1[1]) + (int)((ulong)lVar4 >> 0x20) + 0x80e32b11;
    }
    if (0xf423e < uVar7) {
      uVar7 = 999999;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0x2d128) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x2d128) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return uVar7;
}

