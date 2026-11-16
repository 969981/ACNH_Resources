
bool FUN_0261288c(ushort *param_1,byte *param_2)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  byte local_14 [4];
  
  uVar1 = *param_1;
  if (uVar1 < 0x800) {
    uVar2 = 1 << (ulong)(uVar1 & 7);
    if ((uVar2 & *(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)(uVar1 >> 3) + 0xe99e0)) != 0) {
      local_14[0] = *param_2;
      if (7 < local_14[0]) {
        local_14[0] = 0xff;
      }
      lVar5 = FUN_025830c0(DAT_055021a0,local_14,1);
      if (lVar5 != 0) {
        lVar7 = lVar5 + 0x194b0;
        if (*(long *)(lVar5 + 0x194b8) == 0) {
          lVar7 = *(long *)(DAT_05574040 + 0x20);
        }
        if ((*(long **)(lVar7 + 0x86b0) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar7 + 0x86b0), puVar6 == (undefined8 *)0x0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = (**(code **)*puVar6)();
          uVar4 = uVar4 ^ 1;
        }
        bVar3 = (uVar2 & *(byte *)(*(long *)(lVar7 + 0x8698) + *(long *)(lVar7 + 0x8690) +
                                  (ulong)(uVar1 >> 3))) != 0;
        if ((uVar4 & 1) != 0) {
          return bVar3;
        }
        if (*(long *)(lVar7 + 0x86b0) == 0) {
          return bVar3;
        }
        puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x86b0) + 8);
        if (puVar6 == (undefined8 *)0x0) {
          return bVar3;
        }
        (**(code **)*puVar6)();
        return bVar3;
      }
    }
  }
  return false;
}

