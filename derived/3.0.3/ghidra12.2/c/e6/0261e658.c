
bool FUN_0261e658(long param_1,ulong param_2,byte *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  byte local_14 [4];
  
  if (((uint)param_2 & 0xffff) < 0x800) {
    uVar7 = param_2 >> 3 & 0x1fff;
    uVar1 = 1 << (ulong)((uint)param_2 & 7);
    if ((uVar1 & *(byte *)(param_1 + uVar7 + 0xe98e0)) != 0) {
      local_14[0] = *param_3;
      if (7 < local_14[0]) {
        local_14[0] = 0xff;
      }
      lVar4 = FUN_025830c0(DAT_055021a0,local_14,1);
      if (lVar4 != 0) {
        lVar6 = lVar4 + 0x194b0;
        if (*(long *)(lVar4 + 0x194b8) == 0) {
          lVar6 = *(long *)(DAT_05574040 + 0x20);
        }
        if ((*(long **)(lVar6 + 0x86b0) == (long *)0x0) ||
           (puVar5 = (undefined8 *)**(long **)(lVar6 + 0x86b0), puVar5 == (undefined8 *)0x0)) {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)*puVar5)();
          uVar3 = uVar3 ^ 1;
        }
        bVar2 = (uVar1 & *(byte *)(*(long *)(lVar6 + 0x8698) + *(long *)(lVar6 + 0x8690) + uVar7))
                != 0;
        if ((uVar3 & 1) != 0) {
          return bVar2;
        }
        if (*(long *)(lVar6 + 0x86b0) == 0) {
          return bVar2;
        }
        puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x86b0) + 8);
        if (puVar5 == (undefined8 *)0x0) {
          return bVar2;
        }
        (**(code **)*puVar5)();
        return bVar2;
      }
    }
  }
  return false;
}

