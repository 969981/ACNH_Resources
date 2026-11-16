
bool FUN_0261eeb8(long param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  byte local_34 [4];
  
  if (*param_3 < 8) {
    uVar4 = FUN_0261eff4(param_2);
    if (((uint)uVar4 & 0xffff) < 0x800) {
      uVar8 = uVar4 >> 3 & 0x1fff;
      uVar1 = 1 << (ulong)((uint)uVar4 & 7);
      if ((uVar1 & *(byte *)(param_1 + uVar8 + 0xe98e0)) != 0) {
        local_34[0] = *param_3;
        if (7 < local_34[0]) {
          local_34[0] = 0xff;
        }
        lVar5 = FUN_025830c0(DAT_055021a0,local_34,1);
        if (lVar5 != 0) {
          lVar7 = lVar5 + 0x194b0;
          if (*(long *)(lVar5 + 0x194b8) == 0) {
            lVar7 = *(long *)(DAT_05574040 + 0x20);
          }
          if ((*(long **)(lVar7 + 0x86b0) == (long *)0x0) ||
             (puVar6 = (undefined8 *)**(long **)(lVar7 + 0x86b0), puVar6 == (undefined8 *)0x0)) {
            uVar3 = 1;
          }
          else {
            uVar3 = (**(code **)*puVar6)();
            uVar3 = uVar3 ^ 1;
          }
          bVar2 = (uVar1 & *(byte *)(*(long *)(lVar7 + 0x8698) + *(long *)(lVar7 + 0x8690) + uVar8 +
                                    0x100)) != 0;
          if ((uVar3 & 1) != 0) {
            return bVar2;
          }
          if (*(long *)(lVar7 + 0x86b0) == 0) {
            return bVar2;
          }
          puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x86b0) + 8);
          if (puVar6 == (undefined8 *)0x0) {
            return bVar2;
          }
          (**(code **)*puVar6)();
          return bVar2;
        }
      }
    }
  }
  return false;
}

